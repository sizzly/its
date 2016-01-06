<?php
/**
 * @file
 * views_view.taxonomy_views.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'taxonomy_views';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Taxonomy Views';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';

/* Display: Taxonomy Children */
$handler = $view->new_display('panel_pane', 'Taxonomy Children', 'panel_pane_1');
$handler->display->display_options['argument_input'] = array(
  'parent' => array(
    'type' => 'context',
    'context' => 'entity:taxonomy_term.tid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Taxonomy term: Parent term',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'image',
  3 => 'views_content',
);
