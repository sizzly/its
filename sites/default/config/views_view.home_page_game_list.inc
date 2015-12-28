<?php
/**
 * @file
 * views_view.home_page_game_list.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'home_page_game_list';
$view->description = 'The list of supported games - also has the meta page list.  Should be separate.';
$view->tag = 'Home Page 2.0';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Home Page: Game List';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = ' ';
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-sm-4 pull-left clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-book"></span> [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h4';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'armies' => 'armies',
);
/* Filter criterion: Taxonomy term: Term ID */
$handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
$handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
$handler->display->display_options['filters']['tid_raw']['relationship'] = 'parent';
$handler->display->display_options['filters']['tid_raw']['operator'] = 'empty';

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'Home';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Meta Page */
$handler = $view->new_display('panel_pane', 'Meta Page', 'panel_pane_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'views_content',
);
