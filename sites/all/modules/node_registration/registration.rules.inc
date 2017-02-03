<?php



function registration_rules_action_info() {
  return array(
    'registration_setting_start_date' => array(
      'label' => t('Set entity registration start date'), 
      'parameter' => array(
        'startdate' => array(
          'type' => 'date',
          'label' => t('Start Date'),
        ),
        'target' => array(
        	'type' => 'node',
        	'label' => t('Target Node'),
        )
      ), 
      'group' => t('Entity Registration'),
    ),
    'registration_setting_end_date' => array(
      'label' => t('Set entity registration end date'), 
      'parameter' => array(
        'enddate' => array(
          'type' => 'date',
          'label' => t('End Date'),
        ),
        'target' => array(
        	'type' => 'node',
        	'label' => t('Target Node'),
        ),
      ), 
      'group' => t('Entity Registration'), 
    ),
    'registration_setting_spaces' => array(
      'label' => t('Set entity registration maximum spaces per registrant (usually 1)'), 
      'parameter' => array(
        'spaces' => array(
          'type' => 'integer',
          'label' => t('Spaces'),
          'description' => t('Number to set this value to, 0 for unlimited'),
        ),
        'target' => array(
        	'type' => 'node',
        	'label' => t('Target Node'),
        ),
      ), 
      'group' => t('Entity Registration'), 
    ),
    'registration_setting_capacity' => array(
      'label' => t('Set capacity of the event'), 
      'parameter' => array(
        'capacity' => array(
          'type' => 'integer',
          'label' => t('Capacity'),
          'description' => t('Number to set this value to, 0 for unlimited'),
        ),
        'target' => array(
        	'type' => 'node',
        	'label' => t('Target Node'),
        ),
      ), 
      'group' => t('Entity Registration'), 
    ),
  );
}

function registration_settings_help(){
	return 'Select a date or relative date to set in the registration settings';
}

function registration_setting_start_date($date, $target){
	$settings = array();
	$settings['open'] = format_date($date, 'custom', 'Y-m-d H:i:s');
	registration_update_entity_settings('node', $target->nid, _settings_convert($settings));
}

function registration_setting_end_date($date, $target){
	$settings = array();
	$settings['close'] = format_date($date, 'custom', 'Y-m-d H:i:s');
	registration_update_entity_settings('node', $target->nid, _settings_convert($settings));
}

function registration_setting_capacity($capacity, $target){
	$settings = array();
	$settings['capacity'] = $capacity;
	registration_update_entity_settings('node', $target->nid, _settings_convert($settings));
}

function registration_setting_spaces($spaces, $target){
	$settings = array();
	$oldsetting =  registration_entity_settings('node', $target->nid);
	$settings['settings'] = $oldsetting['settings'];
	$settings['settings']['maximum_spaces'] = $spaces;	
	registration_update_entity_settings('node', $target->nid, _settings_convert($settings));
}

function _settings_convert($settings){
	//converts to array structure for registration_update_entity_settings
	//return array('settings' => serialize($settings));
	if(isset($settings['settings']) && is_array($settings['settings'])) $settings['settings'] = serialize($settings['settings']);
	return $settings;
}