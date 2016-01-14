<?php
/**
 * @file
 * home_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function home_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_default_mode';
  $strongarm->value = 'support';
  $export['uservoice_classic_widget_default_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_link_color';
  $strongarm->value = '#007cbf';
  $export['uservoice_classic_widget_link_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_mode';
  $strongarm->value = 'full';
  $export['uservoice_classic_widget_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_primary_color';
  $strongarm->value = '#cc6d00';
  $export['uservoice_classic_widget_primary_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_tab_color';
  $strongarm->value = '#cc6d00';
  $export['uservoice_classic_widget_tab_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_tab_inverted';
  $strongarm->value = 0;
  $export['uservoice_classic_widget_tab_inverted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_tab_label';
  $strongarm->value = 'Feedback & Support';
  $export['uservoice_classic_widget_tab_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_classic_widget_tab_position';
  $strongarm->value = 'middle-right';
  $export['uservoice_classic_widget_tab_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_contact_form';
  $strongarm->value = '0';
  $export['uservoice_contact_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_js_api_key';
  $strongarm->value = 'btzCsfQb3IDIw5ApZEIYw';
  $export['uservoice_js_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_new_widget_accent_color';
  $strongarm->value = '#808283';
  $export['uservoice_new_widget_accent_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_new_widget_autoprompt';
  $strongarm->value = 1;
  $export['uservoice_new_widget_autoprompt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_new_widget_custom_triggers';
  $strongarm->value = 0;
  $export['uservoice_new_widget_custom_triggers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_new_widget_starting_experience';
  $strongarm->value = 'contact';
  $export['uservoice_new_widget_starting_experience'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_new_widget_trigger_background_color';
  $strongarm->value = 'rgba(46, 49, 51, 0.6)';
  $export['uservoice_new_widget_trigger_background_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_new_widget_trigger_color';
  $strongarm->value = '#FFFFFF';
  $export['uservoice_new_widget_trigger_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_new_widget_trigger_position';
  $strongarm->value = 'bottom-right';
  $export['uservoice_new_widget_trigger_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_script_cache_time';
  $strongarm->value = '604800';
  $export['uservoice_script_cache_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_sso_key';
  $strongarm->value = 'a1d27cfca020bofbbd197a4d3b647931';
  $export['uservoice_sso_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_subdomain';
  $strongarm->value = 'itoysoldiers';
  $export['uservoice_subdomain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_webhooks';
  $strongarm->value = 0;
  $export['uservoice_webhooks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_widget_pages';
  $strongarm->value = 'admin
admin/*
batch';
  $export['uservoice_widget_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_widget_roles';
  $strongarm->value = array(
    2 => '2',
    3 => '3',
    7 => '7',
    9 => '9',
    8 => '8',
    1 => 0,
  );
  $export['uservoice_widget_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_widget_type';
  $strongarm->value = 'new';
  $export['uservoice_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_widget_visibility_pages';
  $strongarm->value = '0';
  $export['uservoice_widget_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uservoice_widget_visibility_roles';
  $strongarm->value = '0';
  $export['uservoice_widget_visibility_roles'] = $strongarm;

  return $export;
}
