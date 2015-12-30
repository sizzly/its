<?php
/**
 * @file
 * views_view.listcrit_meta_page_layout.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'listcrit_meta_page_layout';
$view->description = 'Generates panels for the list crit landing pages.';
$view->tag = 'ListCrit 2.0';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'ListCrit: Meta: Page Layout';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Chronicle Icon */
$handler->display->display_options['fields']['field_chronicle_icon_1']['id'] = 'field_chronicle_icon_1';
$handler->display->display_options['fields']['field_chronicle_icon_1']['table'] = 'field_data_field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon_1']['field'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon_1']['label'] = '';
$handler->display->display_options['fields']['field_chronicle_icon_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_chronicle_icon_1']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Chronicle Icon */
$handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['relationship'] = 'parent';
$handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
$handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_chronicle_icon']['empty'] = '[field_chronicle_icon_1]';
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

/* Display: Page Header */
$handler = $view->new_display('panel_pane', 'Page Header', 'panel_pane_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'row';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h2';
$handler->display->display_options['fields']['name']['element_class'] = 'm-top-none';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['exclude'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['text'] = '<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">Details</h3>
  </div>
  <div class="panel-body">
    [description]
  </div>
</div>';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_type'] = 'h5';
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['empty'] = 'Primary';
$handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Chronicle Icon */
$handler->display->display_options['fields']['field_chronicle_icon_1']['id'] = 'field_chronicle_icon_1';
$handler->display->display_options['fields']['field_chronicle_icon_1']['table'] = 'field_data_field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon_1']['field'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon_1']['label'] = '';
$handler->display->display_options['fields']['field_chronicle_icon_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_chronicle_icon_1']['alter']['text'] = '  <div class="stat-icon">
    <span class="glyphicon glyphicon-[field_chronicle_icon_1-value]" aria-hidden="true"></span>
  </div>';
$handler->display->display_options['fields']['field_chronicle_icon_1']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Chronicle Icon */
$handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['relationship'] = 'parent';
$handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
$handler->display->display_options['fields']['field_chronicle_icon']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_chronicle_icon']['alter']['text'] = '  <div class="stat-icon">
    <span class="glyphicon glyphicon-[field_chronicle_icon-value]" aria-hidden="true"></span>
  </div>';
$handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_chronicle_icon']['empty'] = '[field_chronicle_icon_1]';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '  <div class="panel-stat3 bg-primary">
    <h2 class="m-top-none">[name_1]</h2>
    <h5>Classification</h5>
    <div class="stat-icon">
      <i class="fa fa-[field_chronicle_icon] fa-3x"></i>
    </div>
  </div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'ListCrit';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Children */
$handler = $view->new_display('panel_pane', 'Children', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Classifications';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
$handler->display->display_options['style_options']['image_field'] = 'field_chronicle_icon';
$handler->display->display_options['style_options']['heading_field'] = 'name';
$handler->display->display_options['style_options']['body_field'] = 'description';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Chronicle Icon */
$handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['relationship'] = 'parent';
$handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
$handler->display->display_options['fields']['field_chronicle_icon']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_chronicle_icon']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_chronicle_icon']['alter']['text'] = '<i class="fa fa-[field_chronicle_icon]"></i>';
$handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_chronicle_icon']['empty'] = '[field_chronicle_icon_1]';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-[field_chronicle_icon]"></span> [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'span';
$handler->display->display_options['fields']['name']['element_class'] = 'lead';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'parent';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'Listcrit';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Categories */
$handler = $view->new_display('panel_pane', 'Categories', 'panel_pane_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'ListCrit Categorization';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
$handler->display->display_options['style_options']['image_field'] = 'field_chronicle_icon';
$handler->display->display_options['style_options']['heading_field'] = 'name';
$handler->display->display_options['style_options']['body_field'] = 'description';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Chronicle Icon */
$handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
$handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
$handler->display->display_options['fields']['field_chronicle_icon']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_chronicle_icon']['alter']['text'] = '        <div class="activity-icon small">
        <i class="fa fa-[field_chronicle_icon]"></i>
        </div>';
$handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_chronicle_icon']['empty'] = '[field_chronicle_icon_1]';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-[field_chronicle_icon]"></span> [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';
$handler->display->display_options['filters']['parent']['relationship'] = 'parent';
$handler->display->display_options['filters']['parent']['operator'] = 'empty';
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  22 => '22',
);
$handler->display->display_options['pane_category']['name'] = 'Listcrit';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'text',
  3 => 'views_content',
);
