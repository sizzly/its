<?php
/**
 * @file
 * views_view.ironmonger_co_branding.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'ironmonger_co_branding';
$view->description = 'Generates the co-branding block for Ironmonger content.';
$view->tag = 'Ironmonger 0.1';
$view->base_table = 'profile';
$view->human_name = 'Ironmonger: Co Branding';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['label'] = '';
$handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="panel panel-primary">
  <div class="panel-heading">
    <h3 class="panel-title">Presented by</h3>
  </div>
  <div class="panel-body">
    <a href="[field_website]" target="_new">[field_image]</a>
  </div>
</div>';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Contextual filter: Profile: User uid */
$handler->display->display_options['arguments']['user']['id'] = 'user';
$handler->display->display_options['arguments']['user']['table'] = 'profile';
$handler->display->display_options['arguments']['user']['field'] = 'user';
$handler->display->display_options['arguments']['user']['default_action'] = 'default';
$handler->display->display_options['arguments']['user']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['user']['default_argument_options']['user'] = TRUE;
$handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'ironmonger' => 'ironmonger',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'profile2',
  2 => 'link',
  3 => 'image',
);
