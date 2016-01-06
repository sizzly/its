<?php
/**
 * @file
 * views_view.war_zone_all_registrations.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_all_registrations';
$view->description = 'Various Filters to apply to entity reference fields for war zones.';
$view->tag = 'War Zones 4.1, Rules';
$view->base_table = 'node_registration';
$view->human_name = 'War Zone: All: Registration Reference';
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
  'field_register_real_name' => 'field_register_real_name',
);
/* Relationship: Node registration: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['label'] = '';
$handler->display->display_options['fields']['field_register_real_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_register_real_name']['alter']['text'] = '([field_register_real_name])';
$handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
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

/* Display: Entity Reference */
$handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'name' => 'name',
  'field_register_real_name' => 'field_register_real_name',
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Field: Real Name */
$handler->display->display_options['fields']['field_register_real_name']['id'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['table'] = 'field_data_field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['field'] = 'field_register_real_name';
$handler->display->display_options['fields']['field_register_real_name']['label'] = '';
$handler->display->display_options['fields']['field_register_real_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_register_real_name']['alter']['text'] = '([field_register_real_name])';
$handler->display->display_options['fields']['field_register_real_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_register_real_name']['empty'] = 'real name not provided';
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
/* Filter criterion: User: The user ID */
$handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
$handler->display->display_options['filters']['uid_raw']['table'] = 'users';
$handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
$handler->display->display_options['filters']['uid_raw']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
$handler->display->display_options['filters']['uid_raw']['value']['value'] = '0';

/* Display: Page Visibility */
$handler = $view->new_display('panel_pane', 'Page Visibility', 'panel_pane_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['label'] = '';
$handler->display->display_options['fields']['registration_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['registration_id']['alter']['text'] = '1';
$handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['registration_id']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['registration_id']['empty'] = '0';
$handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
/* Contextual filter: Node registration: User uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node_registration',
  2 => 'text',
  3 => 'views_content',
);
