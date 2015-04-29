<?php
/**
 * @file
 * listcrit.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function listcrit_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'listcrit_all_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ListCrit: All: Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List Crit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'term_node_tid_depth' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'term_node_tid_depth_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'term_node_tid_depth_2' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_points_per_army' => 'field_points_per_army',
    'value' => 'title',
    'expression' => 'title',
    'field_image' => 'field_image',
    'title' => 'title',
    'name' => 'name',
    'value_1' => 'title',
    'comment_count' => 'name',
    'field_game_system_armies' => 'field_game_system_armies',
    'field_your_army' => 'field_game_system_armies',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_points_per_army' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_game_system_armies' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_your_army' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Matching Lists';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>No Lists Found</h3>
<p>There are no lists found for the filters you have specified.</p>

<p><a href="/node/add/listcrit">Submit your list</a></p>';
  $handler->display->display_options['empty']['area']['format'] = 'pure_html';
  $handler->display->display_options['empty']['area']['roles_fieldset'] = array(
    'roles' => array(
      'anonymous user' => 0,
      'authenticated user' => 0,
      'administrator' => 0,
      'verified' => 0,
      'Ironmonger' => 0,
      'System' => 0,
    ),
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Positive';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => '',
    'tag' => '',
    'function' => 'positives',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_1']['label'] = 'Negative';
  $handler->display->display_options['relationships']['votingapi_cache_1']['votingapi'] = array(
    'value_type' => '',
    'tag' => '',
    'function' => 'negatives',
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_2']['id'] = 'votingapi_cache_2';
  $handler->display->display_options['relationships']['votingapi_cache_2']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_2']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_2']['label'] = 'Total';
  $handler->display->display_options['relationships']['votingapi_cache_2']['votingapi'] = array(
    'value_type' => '',
    'tag' => '',
    'function' => 'sum',
  );
  /* Field: Field: Points per army */
  $handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['label'] = '';
  $handler->display->display_options['fields']['field_points_per_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache_1';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['text'] = '<span class="glyphicon glyphicon-thumbs-down"></span> [value]
';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['value']['empty'] = '0';
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['separator'] = '';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['text'] = '<span class="glyphicon glyphicon-minus"></span> 
';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['empty'] = '0';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([value]  * (-1))';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'uc_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title (Points) / Ranking';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_points_per_army])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player / Replies';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['text'] = '<span class="label label-primary"><span class="glyphicon glyphicon-plus"></span> [value_1]</span>
<span class="label label-danger"><span class="glyphicon glyphicon-minus"></span> [expression]</span>
';
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span class="glyphicon glyphicon-comment"></span> [comment_count]';
  $handler->display->display_options['fields']['comment_count']['element_type'] = 'div';
  $handler->display->display_options['fields']['comment_count']['element_class'] = 'badge';
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['empty'] = '0';
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Game System */
  $handler->display->display_options['fields']['field_game_system_armies']['id'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['field'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_game_system_armies']['label'] = 'Game System / Army';
  $handler->display->display_options['fields']['field_game_system_armies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_system_armies']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Vote results: Value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_cache_2';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['value']['coalesce'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listcrit' => 'listcrit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Army';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'army';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'armies';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';

  /* Display: All Lists */
  $handler = $view->new_display('page', 'All Lists', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Lists';
  $handler->display->display_options['metatags'] = array(
    'description' => array(
      'value' => 'The best peer reviewed army lists for your favorite miniature war games.',
    ),
    'abstract' => array(
      'value' => 'Peer reviewed army lists',
    ),
    'keywords' => array(
      'value' => 'netlist, army list, best list, war games, miniature war game list',
    ),
    'robots' => array(
      'value' => array(
        'index' => 0,
        'follow' => 0,
        'noindex' => 0,
        'nofollow' => 0,
        'noarchive' => 0,
        'nosnippet' => 0,
        'noodp' => 0,
        'noydir' => 0,
        'noimageindex' => 0,
        'notranslate' => 0,
      ),
    ),
  );
  $handler->display->display_options['path'] = 'community/listcrit/all-army-lists';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Lists';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'List Crit';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Term Page Panel */
  $handler = $view->new_display('panel_pane', 'Term Page Panel', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listcrit' => 'listcrit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Army';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'army';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'armies';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Main Page Panel */
  $handler = $view->new_display('panel_pane', 'Main Page Panel', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listcrit' => 'listcrit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Army';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'army';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'armies';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Recent Lists */
  $handler = $view->new_display('panel_pane', 'Recent Lists', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent ListCrit Activity';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['class'] = 'media-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_your_army' => 'field_your_army',
    'timestamp' => 'timestamp',
    'new_comments' => 'new_comments',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_points_per_army])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_type'] = 'span';
  $handler->display->display_options['fields']['timestamp']['element_class'] = 'label label-default';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = TRUE;
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['label'] = '';
  $handler->display->display_options['fields']['new_comments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['alter']['text'] = 'new comments';
  $handler->display->display_options['fields']['new_comments']['element_type'] = 'span';
  $handler->display->display_options['fields']['new_comments']['element_class'] = 'label label-default';
  $handler->display->display_options['fields']['new_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['new_comments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listcrit' => 'listcrit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['listcrit_all_lists'] = $view;

  $view = new view();
  $view->name = 'listcrit_all_page_layout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ListCrit: All: Page Layout';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listcrit' => 'listcrit',
  );

  /* Display: Primary Meta */
  $handler = $view->new_display('panel_pane', 'Primary Meta', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Points per army */
  $handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['label'] = '';
  $handler->display->display_options['fields']['field_points_per_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['alter']['text'] = '<div class="panel-stat3 bg-warning">
  <h2 class="m-top-none">[field_points_per_army]</h2>
  <h5>Points per Army</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-list fa-3" aria-hidden="true"></span>
  </div>
</div>
';
  $handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_points_per_army']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_points_per_army']['element_wrapper_class'] = 'col-sm-6 col-md-6';
  $handler->display->display_options['fields']['field_points_per_army']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_points_per_army']['empty'] = '<div class="hidden-xs hidden-sm col-md-6">
<div class="panel-stat3 bg-grey">
  <h2 class="m-top-none">[Redacted]</h2>
  <h5>Points per Army</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-list fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>
';
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Commander */
  $handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['text'] = '<div class="panel-stat3 bg-success">
  <h2 class="m-top-none">[field_batteresult_commander]</h2>
  <h5>Commander</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-star fa-3" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['path'] = 'taxonomy/term/[field_batteresult_commander-tid]';
  $handler->display->display_options['fields']['field_batteresult_commander']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Doctrine */
  $handler->display->display_options['fields']['field_doctrine']['id'] = 'field_doctrine';
  $handler->display->display_options['fields']['field_doctrine']['table'] = 'field_data_field_doctrine';
  $handler->display->display_options['fields']['field_doctrine']['field'] = 'field_doctrine';
  $handler->display->display_options['fields']['field_doctrine']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doctrine']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doctrine']['alter']['text'] = '<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[field_doctrine]</h2>
  <h5>Doctrine</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-fullscreen fa-3" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_doctrine']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Tactical Focus */
  $handler->display->display_options['fields']['field_tactical_focus']['id'] = 'field_tactical_focus';
  $handler->display->display_options['fields']['field_tactical_focus']['table'] = 'field_data_field_tactical_focus';
  $handler->display->display_options['fields']['field_tactical_focus']['field'] = 'field_tactical_focus';
  $handler->display->display_options['fields']['field_tactical_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tactical_focus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tactical_focus']['alter']['text'] = '<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[field_tactical_focus]</h2>
  <h5>Tactical Focus</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-eye-open fa-3" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_tactical_focus']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tactical_focus']['alter']['path'] = 'taxonomy/term/[field_tactical_focus-tid] ';
  $handler->display->display_options['fields']['field_tactical_focus']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[field_your_army]</h2>
  <h5>Army</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-bookmark fa-3" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_your_army']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['alter']['path'] = 'taxonomy/term/[field_your_army-tid]';
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_your_army]
[field_points_per_army]
[field_batteresult_commander]
[field_tactical_focus]
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Shortcuts */
  $handler = $view->new_display('panel_pane', 'Shortcuts', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => '',
    'tag' => '',
    'function' => 'sum',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '  <a href="#comments" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
      <span class="shortcut-alert">[comment_count]</span>
    </span>
    <span class="text">Comments</span>
  </a>';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['empty'] = '  <a href="#add-comment" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
    </span>
    <span class="text">Add Comment</span>
  </a>';
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Field: Salutes */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['ui_name'] = 'Salutes';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-flag" aria-hidden="true"></span>
      <span class="shortcut-alert">[count]</span>
    </span>
    <span class="text">Salutes</span>
  </a>';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['hide_alter_empty'] = FALSE;
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['text'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-asterisk" aria-hidden="true"></span>
      <span class="shortcut-alert">[value]</span>
    </span>
    <span class="text">Rating</span>
  </a>';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
[comment_count]
[count]
[value]
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Sharethis and Tools */
  $handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_9');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'ops' => 'ops',
    'ops_1' => 'ops_1',
    'edit_node' => 'edit_node',
    'edit_node_1' => 'edit_node_1',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="tools"></a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: glory */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['sharethis']['element_wrapper_class'] = 'pull-right';
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['hide_empty'] = TRUE;
  /* Field: Content: Rate List */
  $handler->display->display_options['fields']['field_rate_content']['id'] = 'field_rate_content';
  $handler->display->display_options['fields']['field_rate_content']['table'] = 'field_data_field_rate_content';
  $handler->display->display_options['fields']['field_rate_content']['field'] = 'field_rate_content';
  $handler->display->display_options['fields']['field_rate_content']['label'] = '';
  $handler->display->display_options['fields']['field_rate_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rate_content']['click_sort_column'] = 'vud_widget';
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Secondary Meta */
  $handler = $view->new_display('panel_pane', 'Secondary Meta', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Auxillary */
  $handler->display->display_options['fields']['field_aux']['id'] = 'field_aux';
  $handler->display->display_options['fields']['field_aux']['table'] = 'field_data_field_aux';
  $handler->display->display_options['fields']['field_aux']['field'] = 'field_aux';
  $handler->display->display_options['fields']['field_aux']['label'] = '';
  $handler->display->display_options['fields']['field_aux']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aux']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aux']['delta_offset'] = '0';
  /* Field: Content: Camp */
  $handler->display->display_options['fields']['field_camp']['id'] = 'field_camp';
  $handler->display->display_options['fields']['field_camp']['table'] = 'field_data_field_camp';
  $handler->display->display_options['fields']['field_camp']['field'] = 'field_camp';
  $handler->display->display_options['fields']['field_camp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_camp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_camp']['alter']['text'] = '<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-warning">
  <h2 class="m-top-none">[field_camp]</h2>
  <h5>Camp</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-tower fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_camp']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_camp']['alter']['path'] = 'taxonomy/term/[field_camp-tid]';
  $handler->display->display_options['fields']['field_camp']['empty'] = '<div class="hidden-xs col-sm-6">
<div class="panel-stat3 bg-grey">
  <h2 class="m-top-none">[ Redacted ]</h2>
  <h5>Camp</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-tower fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_camp']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Doctrine */
  $handler->display->display_options['fields']['field_doctrine']['id'] = 'field_doctrine';
  $handler->display->display_options['fields']['field_doctrine']['table'] = 'field_data_field_doctrine';
  $handler->display->display_options['fields']['field_doctrine']['field'] = 'field_doctrine';
  $handler->display->display_options['fields']['field_doctrine']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doctrine']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doctrine']['alter']['text'] = '<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-danger">
  <h2 class="m-top-none">[field_doctrine]</h2>
  <h5>Doctrine</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-fullscreen fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_doctrine']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_doctrine']['alter']['path'] = 'taxonomy/term/[field_doctrine-tid]';
  $handler->display->display_options['fields']['field_doctrine']['empty'] = '<div class="hidden-xs col-sm-6">
<div class="panel-stat3 bg-grey">
  <h2 class="m-top-none">[ Redacted ]</h2>
  <h5>Camp</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-fullscreen fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_doctrine']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Primary Role */
  $handler->display->display_options['fields']['field_primary_role']['id'] = 'field_primary_role';
  $handler->display->display_options['fields']['field_primary_role']['table'] = 'field_data_field_primary_role';
  $handler->display->display_options['fields']['field_primary_role']['field'] = 'field_primary_role';
  $handler->display->display_options['fields']['field_primary_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_role']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_primary_role']['alter']['text'] = '<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-success">
  <h2 class="m-top-none">[field_primary_role]</h2>
  <h5>Primary Role</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-record fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_primary_role']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_primary_role']['alter']['path'] = 'taxonomy/term/[field_primary_role-tid]';
  $handler->display->display_options['fields']['field_primary_role']['empty'] = '<div class="hidden-xs col-sm-6">
<div class="panel-stat3 bg-grey">
  <h2 class="m-top-none">[ Redacted ]</h2>
  <h5>Primary Role</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-record fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_primary_role']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['alter']['text'] = '<div class="col-xs-12 col-sm-6">
<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[field_opponent_s_army]</h2>
  <h5>Designed to Defeat</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-ban-circle fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_opponent_s_army']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['alter']['path'] = 'taxonomy/term/[field_opponent_s_army-tid]';
  $handler->display->display_options['fields']['field_opponent_s_army']['empty'] = '<div class="hidden-xs col-sm-6">
<div class="panel-stat3 bg-grey">
  <h2 class="m-top-none">Redacted</h2>
  <h5>Designed to Defeat</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-ban-circle fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Aux Wrapper */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Aux Wrapper';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="col-xs-12">
<div class="panel-stat3 bg-primary">
  <h4 class="m-top-none">[field_aux]</h2>
  <h5>Auxillary</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-tags fa-3" aria-hidden="true"></span>
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_doctrine]
[field_primary_role]
<div class="clearfix"></div>
[field_camp]
[field_opponent_s_army]
<div class="clearfix"></div>
[nothing_1]
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['listcrit_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'listcrit_meta_page_layout';
  $view->description = '';
  $view->tag = 'default';
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
  /* Field: Field: Chronicle Icon */
  $handler->display->display_options['fields']['field_chronicle_icon_1']['id'] = 'field_chronicle_icon_1';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['table'] = 'field_data_field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['field'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chronicle_icon_1']['element_label_colon'] = FALSE;
  /* Field: Field: Chronicle Icon */
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
  /* Field: Field: Chronicle Icon */
  $handler->display->display_options['fields']['field_chronicle_icon_1']['id'] = 'field_chronicle_icon_1';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['table'] = 'field_data_field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['field'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chronicle_icon_1']['alter']['text'] = '  <div class="stat-icon">
    <span class="glyphicon glyphicon-[field_chronicle_icon_1-value]" aria-hidden="true"></span>
  </div>';
  $handler->display->display_options['fields']['field_chronicle_icon_1']['element_label_colon'] = FALSE;
  /* Field: Field: Chronicle Icon */
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-12 col-sm-6">
  <div class="panel-stat3 bg-primary">
    <h2 class="m-top-none">[name_1]</h2>
    <h5>Classification</h5>
    <div class="stat-icon">
      <span class="glyphicon glyphicon-[field_chronicle_icon]" aria-hidden="true"></span>
    </div>
  </div>
</div>
<div class="col-xs-12 col-sm-6">
[description]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'ListCrit';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Children */
  $handler = $view->new_display('panel_pane', 'Children', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-sm-4 pull-left clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Chronicle Icon */
  $handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
  $handler->display->display_options['fields']['field_chronicle_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chronicle_icon']['empty'] = '[field_chronicle_icon_1]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-[field_chronicle_icon]"></span> [name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'lead';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Chronicle Icon */
  $handler->display->display_options['fields']['field_chronicle_icon']['id'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['table'] = 'field_data_field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['field'] = 'field_chronicle_icon';
  $handler->display->display_options['fields']['field_chronicle_icon']['label'] = '';
  $handler->display->display_options['fields']['field_chronicle_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chronicle_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chronicle_icon']['empty'] = '[field_chronicle_icon_1]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
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
  $export['listcrit_meta_page_layout'] = $view;

  return $export;
}
