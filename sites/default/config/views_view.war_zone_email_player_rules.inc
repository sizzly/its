<?php
/**
 * @file
 * views_view.war_zone_email_player_rules.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_email_player_rules';
$view->description = 'Player lists for various war zone related rules.';
$view->tag = 'War Zones 4.1, Rules';
$view->base_table = 'node_registration';
$view->human_name = 'War Zone: All: Registration Rules';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node registration: E-mail */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'node_registration';
$handler->display->display_options['fields']['email']['field'] = 'email';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';

/* Display: Email on Article */
$handler = $view->new_display('views_rules', 'Email on Article', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: Node nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'email' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'E-mail',
    'name' => 'email',
  ),
  'field_register_real_name' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'Real Name',
    'name' => 'field_register_real_name',
  ),
);

/* Display: Find Registration */
$handler = $view->new_display('views_rules', 'Find Registration', 'views_rules_2');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: E-mail */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'node_registration';
$handler->display->display_options['fields']['email']['field'] = 'email';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Node registration: User uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
/* Filter criterion: Node registration: Waitinglist */
$handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
$handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['value'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: Node nid',
    'name' => 'nid',
  ),
  'uid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: User uid',
    'name' => 'uid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'email' => array(
    'enabled' => 0,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'E-mail',
    'name' => 'email',
  ),
  'field_register_real_name' => array(
    'enabled' => 0,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'Real Name',
    'name' => 'field_register_real_name',
  ),
  'registration_id' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Registration ID',
    'name' => 'registration_id',
  ),
);

/* Display: Campaign: Final award achievement */
$handler = $view->new_display('views_rules', 'Campaign: Final award achievement', 'views_rules_3');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'email' => 'email',
  'field_register_real_name' => 'field_register_real_name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'email' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_register_real_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_register_faction_target_id']['id'] = 'field_register_faction_target_id';
$handler->display->display_options['relationships']['field_register_faction_target_id']['table'] = 'field_data_field_register_faction';
$handler->display->display_options['relationships']['field_register_faction_target_id']['field'] = 'field_register_faction_target_id';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: E-mail */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'node_registration';
$handler->display->display_options['fields']['email']['field'] = 'email';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
/* Field: Node registration: User uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node_registration';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Entityform Submission: Entityform submission ID */
$handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
$handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
$handler->display->display_options['fields']['entityform_id']['relationship'] = 'field_register_faction_target_id';
$handler->display->display_options['fields']['entityform_id']['separator'] = '';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
/* Filter criterion: Node registration: Waitinglist */
$handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
$handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['value'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: Node nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'email' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'text',
    'label' => 'E-mail',
    'name' => 'email',
  ),
  'field_register_real_name' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => '',
    'label' => 'Real Name',
    'name' => 'field_register_real_name',
  ),
  'uid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'User uid',
    'name' => 'uid',
  ),
  'entityform_id' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => '(Entityform Submission entity referenced from field_register_faction) Entityform submission ID',
    'name' => 'entityform_id',
  ),
);

/* Display: Generate Paining Scorecards */
$handler = $view->new_display('views_rules', 'Generate Paining Scorecards', 'views_rules_4');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: E-mail */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'node_registration';
$handler->display->display_options['fields']['email']['field'] = 'email';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
/* Filter criterion: Node registration: Attended */
$handler->display->display_options['filters']['attended']['id'] = 'attended';
$handler->display->display_options['filters']['attended']['table'] = 'node_registration';
$handler->display->display_options['filters']['attended']['field'] = 'attended';
$handler->display->display_options['filters']['attended']['value'] = '1';
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: Node nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'email' => array(
    'enabled' => 0,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'E-mail',
    'name' => 'email',
  ),
  'field_register_real_name' => array(
    'enabled' => 0,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'Real Name',
    'name' => 'field_register_real_name',
  ),
  'registration_id' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => 'Registration ID',
    'name' => 'registration_id',
  ),
);

/* Display: Strength of Schedule Loop */
$handler = $view->new_display('views_rules', 'Strength of Schedule Loop', 'views_rules_5');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: E-mail */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'node_registration';
$handler->display->display_options['fields']['email']['field'] = 'email';
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
/* Filter criterion: Node registration: Attended */
$handler->display->display_options['filters']['attended']['id'] = 'attended';
$handler->display->display_options['filters']['attended']['table'] = 'node_registration';
$handler->display->display_options['filters']['attended']['field'] = 'attended';
$handler->display->display_options['filters']['attended']['value'] = '1';
$handler->display->display_options['rules_parameter'] = array(
  'nid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Node registration: Node nid',
    'name' => 'nid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'email' => array(
    'enabled' => 0,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'E-mail',
    'name' => 'email',
  ),
  'field_register_real_name' => array(
    'enabled' => 0,
    'rendered' => 1,
    'type' => 'text',
    'label' => 'Real Name',
    'name' => 'field_register_real_name',
  ),
  'registration_id' => array(
    'enabled' => 1,
    'rendered' => 1,
    'type' => 'integer',
    'label' => 'Registration ID',
    'name' => 'registration_id',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node_registration',
  2 => 'text',
);
