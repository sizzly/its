<?php
/**
 * @file
 * views_view.home_page_second_block.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'home_page_second_block';
$view->description = 'Generates the panel of active factions/games for the anonymous home page.';
$view->tag = 'Home Page 2.0';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Home Page: Second Block';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = ' ';
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'col-md-4 pull-left col-xs-12 col-sm-6';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Taxonomy term: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '70x70-square',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_army_game']['id'] = 'field_army_game';
$handler->display->display_options['fields']['field_army_game']['table'] = 'field_data_field_army_game';
$handler->display->display_options['fields']['field_army_game']['field'] = 'field_army_game';
$handler->display->display_options['fields']['field_army_game']['label'] = '';
$handler->display->display_options['fields']['field_army_game']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_army_game']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="mycarousel" class="carousel slide" data-ride="carousel">
   <div class="carousel-inner">
      <div class="item active">
         [field_image]
         <div class="carousel-caption well well-sm shade">
            <h3>[name]</h3>
            [field_army_game]
         </div>
      </div>
   </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: SUM(Content statistics: Views today) */
$handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
$handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
$handler->display->display_options['sorts']['daycount']['relationship'] = 'nid';
$handler->display->display_options['sorts']['daycount']['group_type'] = 'sum';
$handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'armies' => 'armies',
);

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '70x70-square',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="mycarousel" class="carousel slide" data-ride="carousel">
   <div class="carousel-inner">
      <div class="item active">
         [field_image]
         <div class="carousel-caption well well-sm shade">
            <h3>[name]</h3>
         </div>
      </div>
   </div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'thumbnail';
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Home';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'image',
  3 => 'views_content',
);
