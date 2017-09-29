<?php

/**
 * @file
 * Vtiger API php class.
 */

/**
 * Class VtigerCrmApi. Sends HTTP-requests to Vtiger.
 */
class VtigerCrmApi {

  public $baseUrl;
  public $sessionName;
  public $username;

  /**
   * Initialisation.
   */
  public function __construct() {
    // Get settings variables.
    $this->username = variable_get('vtiger_crm_username');
    $this->baseUrl = variable_get('vtiger_crm_url') . '/webservice.php?';
    $this->webservice_access_key = variable_get('vtiger_crm_webservice_access_key');
    if (empty($this->username) || empty($this->baseUrl) || empty($this->webservice_access_key)) {
      watchdog('vtiger_api', 'Could not instantiate Vtiger API class - all necessary fields are not filled in settings.');
      return FALSE;
    }
    // Set last session if it is not expired (not older than 30 minutes).
    // Otherwise create a new one.
    $session = variable_get('vtiger_crm_session');
    if ($session && $session['expire'] > REQUEST_TIME) {
      $this->sessionName = $session['sessionName'];
    }
    else {
      $this->sessionName = $this->completeLogin();
    }
  }

  /**
   * Get a challenge token from the server.
   *
   * @return array|bool
   *   A GetChallengeResult object containing the server's challenge token.
   */
  public function getchallenge($username) {
    $verb = 'GET';
    $params = array(
      'operation' => __FUNCTION__,
      'username' => $username,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Login to the server using the challenge token from the challenge operation.
   *
   * @param string $username
   *   A Vtiger username.
   * @param string $access_key
   *   An md5 of the concatenation of the challenge token and the user's
   *   webservice access key.
   *
   * @return array|bool
   *   A LoginResult object containing the session id, the api version id
   *   and the user id.
   */
  public function login($username, $access_key) {
    $verb = 'POST';
    $params = array(
      'operation' => __FUNCTION__,
      'accessKey' => $access_key,
      'username' => $username,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Create a new entry on the server.
   *
   * @param array $element
   *   Fields of the object to fill. Values for mandatory fields to be provided.
   * @param string $element_type
   *   The class name of the object.
   *
   * @return array|bool
   *   A VtigerObject instance representing the new object.
   */
  public function create($element, $element_type) {
    // Check required fields - if they are not empty, filled with defaults.
    $verb = 'POST';
    $element = drupal_json_encode($element);
    $params = array(
      'element' => $element,
      'elementType' => $element_type,
      'operation' => __FUNCTION__,
    );
    $created = $this->sendRequest($verb, $params);
    if ($created) {
      watchdog('vtiger_api', 'An element of !type has been successfully created.', array('!type' => $element_type));
      return $created;
    }
    return FALSE;
  }

  /**
   * Retrieve an existing entry from the server.
   *
   * @param string $id
   *   ID of the object.
   *
   * @return array|bool
   *   A VtigerObject instance representing the retrieved object.
   */
  public function retrieve($id) {
    $verb = 'GET';
    $params = array(
      'id' => $id,
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Update an existing entry on the vtiger crm object.
   *
   * @param array $object
   *   object: The VtigerObject to update.
   *
   * @return array|bool
   *   A VtigerObject representing the object after the update.
   */
  public function update($object) {
    $verb = 'POST';
    $params = array(
      'object' => $object,
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Delete an entry from the server.
   *
   * @param string $id
   *   The ID of the object to be deleted.
   *
   * @return array|bool
   *   A map with one key status with value 'successful'
   */
  public function delete($id) {
    $verb = 'POST';
    $params = array(
      'id' => $id,
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Returns a SyncResult object with details or changes after modifiedTime.
   *
   * @param string $modifiedTime
   *   The time of the last synced modification.
   * @param string $element_type
   *   This is an optional parameter, if specified the changes for that module
   *   after the given time otherwise changes to all user accessible
   *   module are returned.
   *
   * @return array|bool
   *   Object containing details of changes after modifiedTime.
   */
  public function sync($modifiedTime, $element_type) {
    $verb = 'GET';
    $params = array(
      'modifiedTime' => $modifiedTime,
      'elementType' => $element_type,
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * The query operation provides a way to query vtiger for data.
   *
   * Queries are currently limited to a single object. Joins are not supported.
   * Query always limits its output to 100 records, Client application can use
   * limit operator to get different records.
   * The query format
   * select * | <column_list> | <count(*)>
   * from <object> [where <conditionals>]
   * [order by <column_list>] [limit [<m>, ]<n>];
   * The column list in the order by clause can have at most two column names.
   * column_list: comma separated list of field names.
   * object: type name of the object.
   * conditionals: condition operations or in clauses or like clauses separated
   * by 'and' or 'or' operators these are processed from left to right.
   * The are no grouping that is bracket operators.
   * conditional operators: <, >, <=, >=, =, !=.
   * in clauses: in ().
   * like clauses: like 'sqlregex'.
   * value list: a comma separated list of values.
   * m, n: integer values to specify the offset and limit respectively.
   *
   * @param string $query_string
   *   The query to process.
   *
   * @return array|bool
   *   A list of Map containing the fields selected.   *
   */
  public function query($query_string) {
    $verb = 'GET';
    $query_string = str_replace(' ', '%20', $query_string);
    $params = array(
      'operation' => __FUNCTION__,
      'query' => $query_string,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * List the names of all the Vtiger objects available through the api.
   *
   * @return array|bool
   *   A map containing the key 'types' with the value being a list of
   *   names of Vtiger objects.
   */
  public function listtypes() {
    $verb = 'GET';
    $params = array(
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Get the type information about a given Vtiger object.
   *
   * @param string $element_type
   *   The type name of the Vtiger object to describe.
   *
   * @return array|bool
   *   Returns a DescribeResult instance.
   */
  public function describe($element_type) {
    $verb = 'GET';
    $params = array(
      'elementType' => $element_type,
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Logs out from the webservices session.
   *
   * @return array|bool
   *   A map containing the key 'message' with the value 'successful'.
   */
  public function logout() {
    $verb = 'GET';
    $params = array(
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Extends a Vtiger session to webservices and returns a webservices sid.
   *
   * @return array|bool
   *   Session ID or FALSE if request was unsuccessful.
   */
  public function extendsession() {
    $verb = 'POST';
    $params = array(
      'operation' => __FUNCTION__,
    );
    return $this->sendRequest($verb, $params);
  }

  /**
   * Sends HTTP request to Vtiger. Used by the other methods of Vtiger API.
   *
   * @param string $verb
   *   HTTP verb.
   * @param array $data
   *   Request data (if any).
   *
   * @return array|bool
   *   Returned result array or FALSE if request was unsuccessful.
   */
  protected function sendRequest($verb = 'GET', $data = array()) {
    if (!empty($this->sessionName)) {
      $session_id = array('sessionName' => $this->sessionName);
      $data = $session_id + $data;
    }

    // Concatenating that way since drupal_build_http_query() breaks 'queries'.
    $params = '';
    foreach ($data as $key => $param) {
      $params .= $key . '=' . $param . '&';
    }

    $url = $this->baseUrl;
    if ($verb === 'GET' && !empty($params)) {
      $url .= $params;
    }

    $request_params = array();
    if ($verb !== 'GET') {
      $request_params['method'] = $verb;
      $request_params['data'] = $params;
    }

    $curl = curl_init();
    curl_setopt($curl, CURLOPT_URL, $url);
    curl_setopt($curl, CURLOPT_CUSTOMREQUEST, $verb);
    curl_setopt($curl, CURLOPT_RETURNTRANSFER, TRUE);
    curl_setopt($curl, CURLOPT_HTTPHEADER, array(
      'Content-Type' => 'application/json',
      'Accept' => 'application/json',
    ));
    if (!empty($request_params)) {
      curl_setopt($curl, CURLOPT_POSTFIELDS, $data);
    }
    $result = curl_exec($curl);
    if (!$result) {
      $error = curl_error($curl);
      watchdog('vtiger_api', 'Unsuccessful Vtiger request. Error text: @error',
        array('@error' => $error));
      return FALSE;
    }
    curl_close($curl);
    $result = drupal_json_decode($result);
    if ($result['success']) {
      return $result['result'];
    }
    elseif ($result['error']) {
      watchdog('vtiger_api', 'Vtiger API request returned error. Error text: @error.',
        array('@error' => $result['error']['message']) );
      return FALSE;
    }
    else {
      return FALSE;
    }
  }

  /**
   * Makes log in and gets session id for further requests.
   *
   * @return array|bool
   *   Session name or FALSE if login failed.
   */
  public function completeLogin() {
    $username = $this->username;
    $challenge_token = $this->getchallenge($username);
    $challenge_token = $challenge_token['token'];
    $webservice_access_key = $this->webservice_access_key;
    $access_key = md5($challenge_token . $webservice_access_key);
    $session = $this->login($username, $access_key);
    if ($session) {
      $this->sessionName = $session['sessionName'];
      $session['expire'] = REQUEST_TIME + 1800;
      variable_set('vtiger_crm_session', $session);
      return $session['sessionName'];
    } else {
      return FALSE;
    }
  }

  /**
   * Tests credentials without saving the session.
   *
   * @param string $username
   *   The username on Vtiger.
   * @param string $webservice_access_key
   *   String to be found on your Vtiger profile page.
   * @param string $url
   *   The URL of your Vtiger installation.
   *
   * @return bool
   *   Whether a test login was successful.
   */
  public function testLogin($username, $webservice_access_key, $url) {
    $this->baseUrl = $url . '/webservice.php?';
    $this->sessionName = FALSE;
    $challenge_token = $this->getchallenge($username);
    $challenge_token = $challenge_token['token'];
    $access_key = md5($challenge_token . $webservice_access_key);
    $session = $this->login($username, $access_key);
    if ($session) {
      $this->sessionName = $session['sessionName'];
      return TRUE;
    } else {
      return FALSE;
    }
  }

}
