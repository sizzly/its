<?php
/**
 * @file
 * battle_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function battle_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'battles_all_lists';
  $view->description = 'Various Lists of Battles.';
  $view->tag = 'Battles 2.0';
  $view->base_table = 'node';
  $view->human_name = 'Battles: All: Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Battles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="grey-container">
Displaying @start - @end of @total
</div>';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
  /* Relationship: Flags: acknowledge_battle counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'acknowledged';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'acknowledge_battle';
  /* Field: Taxonomy term: Game System */
  $handler->display->display_options['fields']['field_game_system_armies']['id'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['field'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_game_system_armies']['label'] = '';
  $handler->display->display_options['fields']['field_game_system_armies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_game_system_armies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_system_armies']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'game_results' => 'game_results',
  );
  /* Filter criterion: Game System (field_game_system_armies) (selective) */
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['id'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['field'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['ui_name'] = 'Game System (field_game_system_armies) (selective)';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['label'] = 'Filter by Game System';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['description'] = 'Show only battles played for a particular game system.';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['identifier'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['selective_display_field'] = 'field_game_system_armies';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['selective_display_sort'] = 'ASC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'All Battles on [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'A complete list of table top war gaming battle reports on iToysoldiers. Filter by your favorite miniature war game.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => 'All battle reports on iToysoldiers',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'list, battle reports, table top war gaming, miniature war gaming battle reports',
        'default' => '',
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
        'default' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => '',
        'default' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'author' => array(
        'value' => '',
        'default' => '',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:app_id' => array(
        'value' => '198705713593582',
        'default' => '198705713593582',
      ),
      'og:type' => array(
        'value' => 'article',
        'default' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
        'default' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:longitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:street-address' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locality' => array(
        'value' => '',
        'default' => '',
      ),
      'og:region' => array(
        'value' => '',
        'default' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country-name' => array(
        'value' => '',
        'default' => '',
      ),
      'og:email' => array(
        'value' => '',
        'default' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:type' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'battle-reports/all-battles';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Battles';
  $handler->display->display_options['menu']['description'] = 'A list of all battle reports on iToysoldiers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Battle Reports Page Recent Battles */
  $handler = $view->new_display('panel_pane', 'Battle Reports Page Recent Battles', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Battles';
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
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['battles_all_lists'] = $view;

  $view = new view();
  $view->name = 'battles_all_page_layout';
  $view->description = 'Page Elements for the Battle node pages.';
  $view->tag = '4.2-rc9, Battles';
  $view->base_table = 'node';
  $view->human_name = 'Battles: All: Page Layout';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );

  /* Display: Battle Meta */
  $handler = $view->new_display('panel_pane', 'Battle Meta', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Game System */
  $handler->display->display_options['fields']['field_game_system_armies']['id'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['field'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_game_system_armies']['label'] = '';
  $handler->display->display_options['fields']['field_game_system_armies']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_game_system_armies']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-book"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_game_system_armies]</strong>
        <div class="text-muted">Game System</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_game_system_armies']['alter']['path'] = 'taxonomy/term/[field_game_system_armies-tid]';
  $handler->display->display_options['fields']['field_game_system_armies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_system_armies']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_game_system_armies']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_game_system_armies']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['label'] = '';
  $handler->display->display_options['fields']['field_game_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_game_date']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-calendar-o"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_game_date]</strong>
        <div class="text-muted">Date</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_game_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_game_date']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_game_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'uc_store',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Points per army */
  $handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['label'] = '';
  $handler->display->display_options['fields']['field_points_per_army']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-list"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_points_per_army]</strong>
        <div class="text-muted">Points per Army</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_points_per_army']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_points_per_army']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_points_per_army']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_points_per_army']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Deployment */
  $handler->display->display_options['fields']['field_battle_deployment']['id'] = 'field_battle_deployment';
  $handler->display->display_options['fields']['field_battle_deployment']['table'] = 'field_data_field_battle_deployment';
  $handler->display->display_options['fields']['field_battle_deployment']['field'] = 'field_battle_deployment';
  $handler->display->display_options['fields']['field_battle_deployment']['label'] = '';
  $handler->display->display_options['fields']['field_battle_deployment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_battle_deployment']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-compress"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_deployment]</strong>
        <div class="text-muted">Deployment</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_battle_deployment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_battle_deployment']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_battle_deployment']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_battle_deployment']['hide_empty'] = TRUE;
  /* Field: Field: Mission */
  $handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
  $handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['label'] = '';
  $handler->display->display_options['fields']['field_mission']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mission']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-folder-open"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_mission]</strong>
        <div class="text-muted">Mission</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mission']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_mission']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_mission']['hide_empty'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'battles_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_14';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Player 1 */
  $handler = $view->new_display('panel_pane', 'Player 1', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'battles_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_10';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['link_class'] = 'pull-left avatar';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_small';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel panel-default bg-primary">
    <div class="panel-body">
        <span class="pull-left iconbuffer">[picture]</span>
        <div class="pull-left">
            <strong class="font-18">[name]</strong>
            <br>
            <span class="font-16">[field_your_army]</span>
        </div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Shortcuts */
  $handler = $view->new_display('panel_pane', 'Shortcuts', 'panel_pane_3');
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Relationship: Flags: acknowledge_battle counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'acknowledged';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'acknowledge_battle';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['text'] = '  <a href="#commentary" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-folder-open" aria-hidden="true"></span>
    </span>
    <span class="text">Commentary</span>
  </a>';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_1']['empty_zero'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '  <a href="#commentary" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-folder-open" aria-hidden="true"></span>
    </span>
    <span class="text">Commentary</span>
  </a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[body_1]';
  $handler->display->display_options['fields']['body']['empty_zero'] = TRUE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count_1']['alter']['text'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-check" aria-hidden="true"></span>
    </span>
    <span class="text">Acknowledged</span>
  </a>';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['empty'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-unchecked" aria-hidden="true"></span>
    </span>
    <span class="text">Acknowledge</span>
  </a>';
  $handler->display->display_options['fields']['count_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['count_1']['separator'] = '';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images_1']['id'] = 'field_images_1';
  $handler->display->display_options['fields']['field_images_1']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images_1']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images_1']['relationship'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['fields']['field_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_images_1']['alter']['text'] = '  <a href="#recon" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-picture" aria-hidden="true"></span>
    </span>
    <span class="text">Images</span>
  </a>';
  $handler->display->display_options['fields']['field_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_images_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images_1']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images_1']['settings'] = array(
    'image_style' => 'avatar_small',
    'image_link' => '',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_images_1']['delta_offset'] = '0';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_images']['alter']['text'] = '  <a href="#recon" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-picture" aria-hidden="true"></span>
    </span>
    <span class="text">Images</span>
  </a>';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['empty'] = '[field_images_1]';
  $handler->display->display_options['fields']['field_images']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'avatar_small',
    'image_link' => '',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
[comment_count]
[count]
[body]
[field_images]
[count_1]
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Player 1 Commentary */
  $handler = $view->new_display('panel_pane', 'Player 1 Commentary', 'panel_pane_5');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="commentary"></a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]\'s Commentary';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">[name]</h3>
  </div>
  <div class="panel-body">
    [body]
  </div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
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
    'game_results' => 'game_results',
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Images */
  $handler = $view->new_display('panel_pane', 'Images', 'panel_pane_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'photo-stream';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="recon"></a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'lightbox2__lightbox__button__original';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'button',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: Content: Images (field_images:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_images';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Completeness */
  $handler = $view->new_display('panel_pane', 'Completeness', 'panel_pane_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'ops' => 'ops',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: meta_complete */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'meta_complete';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content Complete: Completeness */
  $handler->display->display_options['fields']['completeness']['id'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['table'] = 'content_complete';
  $handler->display->display_options['fields']['completeness']['field'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['label'] = '';
  $handler->display->display_options['fields']['completeness']['exclude'] = TRUE;
  $handler->display->display_options['fields']['completeness']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['completeness']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['completeness']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['completeness']['next'] = 1;
  $handler->display->display_options['fields']['completeness']['display_as'] = 'bar';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['ops']['alter']['text'] = '<h2 class="pane-title">Report Status</h2>
[completeness]
<p>
<span class="pull-right">
  <span class="badge" data-container="body" data-toggle="popover" data-placement="top" data-content="Click Mark Complete when you are satisfied with the meta values for this battle. You will no longer be prompted to complete the battle meta."><span class="glyphicon glyphicon-question-sign" aria-hidden="true"></span></span>
</span>
[ops]
</p>';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['hide_empty'] = TRUE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Player 2 Commentary */
  $handler = $view->new_display('panel_pane', 'Player 2 Commentary', 'panel_pane_8');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="commentary"></a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]\'s Commentary';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="panel panel-default">
  <div class="panel-heading">
    <h3 class="panel-title">[name]</h3>
  </div>
  <div class="panel-body">
    [body]
  </div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
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
    'game_results' => 'game_results',
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Sharethis and Tools */
  $handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_9');
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
  /* Relationship: Flags: acknowledge_battle */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'acknowledge';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'acknowledge_battle';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['id'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_game_reference_node']['field'] = 'reverse_field_game_reference_node';
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
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops_1']['hide_empty'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Battle';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit Battle';
  /* Field: Content: Radioactivity */
  $handler->display->display_options['fields']['field_radioactivity']['id'] = 'field_radioactivity';
  $handler->display->display_options['fields']['field_radioactivity']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['fields']['field_radioactivity']['field'] = 'field_radioactivity';
  $handler->display->display_options['fields']['field_radioactivity']['label'] = '';
  $handler->display->display_options['fields']['field_radioactivity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_radioactivity']['click_sort_column'] = 'radioactivity_energy';
  $handler->display->display_options['fields']['field_radioactivity']['settings'] = array(
    'energy' => '15',
    'type' => 'none',
    'accuracy' => '100',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Commander Survival */
  $handler = $view->new_display('panel_pane', 'Commander Survival', 'panel_pane_10');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Your Commander Survival */
  $handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['label'] = '';
  $handler->display->display_options['fields']['field_your_commander_survival']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_your_commander_survival']['alter']['text'] = '<span class="glyphicon glyphicon-remove" aria-hidden="true"></span> Slain';
  $handler->display->display_options['fields']['field_your_commander_survival']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_commander_survival']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_your_commander_survival']['empty'] = '<span class="glyphicon glyphicon-heart-empty" aria-hidden="true"></span> Survived';
  $handler->display->display_options['fields']['field_your_commander_survival']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_your_commander_survival']['type'] = 'list_key';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
  $handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['operator'] = 'not empty';

  /* Display: Player Battle Score */
  $handler = $view->new_display('panel_pane', 'Player Battle Score', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Player Battle Score';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'users';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'lead';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_your_results]/5) * 100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression]" role="progressbar" aria-valuenow="[expression]" aria-valuemin="0" aria-valuemax="100">
    [field_your_results]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
  $handler->display->display_options['filters']['type']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['type']['value'] = array(
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Army Battle Scores */
  $handler = $view->new_display('panel_pane', 'Army Battle Scores', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Army Battle Score';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_class'] = 'lead';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_your_results]/5) * 100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="progress">
  <div class="progress-bar ranking[expression]" role="progressbar" aria-valuenow="[expression]" aria-valuemin="0" aria-valuemax="100">
    [field_your_results]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Your Results (field_your_results) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Your Army (field_your_army) */
  $handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_your_army_tid']['break_phrase'] = TRUE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_your_army_tid' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Your Army (field_your_army)',
    ),
  );

  /* Display: Mission Rules in Effect */
  $handler = $view->new_display('panel_pane', 'Mission Rules in Effect', 'panel_pane_14');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Mission Rules in Effect */
  $handler->display->display_options['fields']['field_battle_mission_rules']['id'] = 'field_battle_mission_rules';
  $handler->display->display_options['fields']['field_battle_mission_rules']['table'] = 'field_data_field_battle_mission_rules';
  $handler->display->display_options['fields']['field_battle_mission_rules']['field'] = 'field_battle_mission_rules';
  $handler->display->display_options['fields']['field_battle_mission_rules']['label'] = '';
  $handler->display->display_options['fields']['field_battle_mission_rules']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_battle_mission_rules']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_battle_mission_rules']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-asterisk"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_mission_rules]</strong>
        <div class="text-muted">Mission Rules in Effect</div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'game_results' => 'game_results',
  );
  /* Filter criterion: Content: Mission Rules in Effect (field_battle_mission_rules) */
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['id'] = 'field_battle_mission_rules_tid';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['table'] = 'field_data_field_battle_mission_rules';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['field'] = 'field_battle_mission_rules_tid';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['value'] = '';
  $handler->display->display_options['filters']['field_battle_mission_rules_tid']['vocabulary'] = 'scenario_special_rules';

  /* Display: Player 1 Meta */
  $handler = $view->new_display('panel_pane', 'Player 1 Meta', 'panel_pane_15');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'battles_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_10';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_your_results']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-balance-scale"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_your_results]</strong>
        <div class="text-muted">Results</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_your_results']['element_wrapper_class'] = 'list-group-item';
  /* Field: Content: Commander */
  $handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['label'] = '';
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-flag"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_batteresult_commander]</strong>
        <div class="text-muted">Commander <span class="badge">[view]</span></div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_batteresult_commander']['empty'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-flag"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">Classified</strong>
        <div class="text-muted">Commander <span class="badge">[view]</span></div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_batteresult_commander']['hide_alter_empty'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_2']['view'] = 'battles_all_page_layout';
  $handler->display->display_options['fields']['view_2']['display'] = 'panel_pane_16';
  $handler->display->display_options['fields']['view_2']['arguments'] = '!1';
  /* Field: Content: Most Valuable Unit */
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['id'] = 'field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['table'] = 'field_data_field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['field'] = 'field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['label'] = '';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-trophy"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_most_valuable_unit]</strong>
        <div class="text-muted">Most Valuable Unit</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['path'] = 'taxonomy/term/[field_battle_most_valuable_unit-tid]';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['link_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['hide_empty'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'battles_all_page_layout';
  $handler->display->display_options['fields']['view_1']['display'] = 'panel_pane_13';
  $handler->display->display_options['fields']['view_1']['arguments'] = '!1';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Theater */
  $handler = $view->new_display('panel_pane', 'Theater', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Theater';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-map-marker"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_location]</strong>
        <div class="text-muted">Battlefield</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'node/[field_location-nid]';
  $handler->display->display_options['fields']['field_location']['alter']['max_length'] = '17';
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Field: Event */
  $handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-crosshairs"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_event_link]</strong>
        <div class="text-muted">War Zone</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
  $handler->display->display_options['fields']['field_event_link']['alter']['alt'] = '[field_event_link]';
  $handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_link']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['field_event_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'game_results' => 'game_results',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Battlefield (field_location) */
  $handler->display->display_options['filters']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_nid']['group'] = 2;
  /* Filter criterion: Field: Event (field_event_link) */
  $handler->display->display_options['filters']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['filters']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['filters']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['filters']['field_event_link_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_link_target_id']['group'] = 2;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Victory Conditions */
  $handler = $view->new_display('panel_pane', 'Victory Conditions', 'panel_pane_13');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: My Victory Conditions met */
  $handler->display->display_options['fields']['field_battle_my_vc']['id'] = 'field_battle_my_vc';
  $handler->display->display_options['fields']['field_battle_my_vc']['table'] = 'field_data_field_battle_my_vc';
  $handler->display->display_options['fields']['field_battle_my_vc']['field'] = 'field_battle_my_vc';
  $handler->display->display_options['fields']['field_battle_my_vc']['label'] = '';
  $handler->display->display_options['fields']['field_battle_my_vc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_battle_my_vc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_battle_my_vc']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-check-circle-o"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_my_vc]</strong>
        <div class="text-muted">Victory Conditions Met</div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: Content: My Victory Conditions met (field_battle_my_vc) */
  $handler->display->display_options['filters']['field_battle_my_vc_tid']['id'] = 'field_battle_my_vc_tid';
  $handler->display->display_options['filters']['field_battle_my_vc_tid']['table'] = 'field_data_field_battle_my_vc';
  $handler->display->display_options['filters']['field_battle_my_vc_tid']['field'] = 'field_battle_my_vc_tid';
  $handler->display->display_options['filters']['field_battle_my_vc_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_battle_my_vc_tid']['value'] = '';
  $handler->display->display_options['filters']['field_battle_my_vc_tid']['vocabulary'] = 'victory_conditions';

  /* Display: Allies */
  $handler = $view->new_display('panel_pane', 'Allies', 'panel_pane_16');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Your Allied Detatchment */
  $handler->display->display_options['fields']['field_allied_detatchment']['id'] = 'field_allied_detatchment';
  $handler->display->display_options['fields']['field_allied_detatchment']['table'] = 'field_data_field_allied_detatchment';
  $handler->display->display_options['fields']['field_allied_detatchment']['field'] = 'field_allied_detatchment';
  $handler->display->display_options['fields']['field_allied_detatchment']['label'] = '';
  $handler->display->display_options['fields']['field_allied_detatchment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_allied_detatchment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allied_detatchment']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-hand-rock-o"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_allied_detatchment]</strong>
        <div class="text-muted">Allied Forces</div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'list-group-item';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Your Allied Detatchment (field_allied_detatchment) */
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['id'] = 'field_allied_detatchment_tid';
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['table'] = 'field_data_field_allied_detatchment';
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['field'] = 'field_allied_detatchment_tid';
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['value'] = '';
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['vocabulary'] = 'armies';
  $export['battles_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'battles_stats_army_battle_stats';
  $view->description = 'Version 4.2-rc10 Generates the views for Faction and Army Battle Stats.';
  $view->tag = '4.2, Battles';
  $view->base_table = 'node';
  $view->human_name = 'Battles: Stats: Army Battle Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  /* Contextual filter: Field: Your Army (field_your_army) */
  $handler->display->display_options['arguments']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['arguments']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_your_army_tid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_your_army_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_your_army_tid']['summary_options']['items_per_page'] = '25';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );

  /* Display: Battle Count */
  $handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Player Count */
  $handler = $view->new_display('panel_pane', 'Player Count', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Author uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battlefield Count */
  $handler = $view->new_display('panel_pane', 'Battlefield Count', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Battlefield) */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Faction Count */
  $handler = $view->new_display('panel_pane', 'Faction Count', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Opponent's Army) */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battles by Faction */
  $handler = $view->new_display('panel_pane', 'Battles by Faction', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_army' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Battles by Faction';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Factions (10 or more battles)';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '45';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Game System (field_game_system_armies) */
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['id'] = 'field_game_system_armies_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['field'] = 'field_game_system_armies_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '10';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Player with the most battles */
  $handler = $view->new_display('panel_pane', 'Player with the most battles', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Battles Leaderboard';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'name';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'name' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'name' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Most Battles';
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Commander Survival ROC */
  $handler = $view->new_display('panel_pane', 'Commander Survival ROC', 'panel_pane_6');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Your Commander Survival */
  $handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['label'] = 'Commander Survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
  /* Field: Not Victory */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['label'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_defeat] + [field_draw]';
  /* Field: Truth */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['ui_name'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '2';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_victory] / [nid] * 100';
  /* Field: False */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['ui_name'] = 'False';
  $handler->display->display_options['fields']['expression_2']['label'] = 'False';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[expression] / [nid] *100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '{
            name: \'[field_your_commander_survival]\',
            color: \'rgba(223, 83, 83, .5)\',
            data: [[[expression_2],[expression_1]]]

        },';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
  $handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['value'] = array(
    0 => '0',
  );

  /* Display: Ideal Battle: Opponent */
  $handler = $view->new_display('panel_pane', 'Ideal Battle: Opponent', 'panel_pane_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '5';

  /* Display: Ideal Battle: Mission */
  $handler = $view->new_display('panel_pane', 'Ideal Battle: Mission', 'panel_pane_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Mission */
  $handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
  $handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: AVG(Field: Your Results (field_your_results)) */
  $handler->display->display_options['sorts']['field_your_results_value']['id'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['sorts']['field_your_results_value']['field'] = 'field_your_results_value';
  $handler->display->display_options['sorts']['field_your_results_value']['group_type'] = 'avg';
  $handler->display->display_options['sorts']['field_your_results_value']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '5';

  /* Display: Battle Results */
  $handler = $view->new_display('panel_pane', 'Battle Results', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battle Results';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_results';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_results' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_results' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Battle Results';
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#910000',
    1 => '#f2a32f',
    2 => '#8bbc21',
    3 => '#910000',
    4 => '#1aadce',
    5 => '#492970',
    6 => '#f28f43',
    7 => '#77a1e5',
    8 => '#c42525',
    9 => '#a6c96a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'Results';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Battles over Time */
  $handler = $view->new_display('panel_pane', 'Battles over Time', 'panel_pane_11');
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'json';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['timezone'] = 'UTC';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[Date.parse("[created]"),[nid]],';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';

  /* Display: Opponent ROC */
  $handler = $view->new_display('panel_pane', 'Opponent ROC', 'panel_pane_12');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Opponent&#039;s Army (field_opponent_s_army) */
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['id'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['relationships']['field_opponent_s_army_tid']['field'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
  /* Field: Not Victory */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['label'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_defeat] + [field_draw]';
  /* Field: Truth */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['ui_name'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '2';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_victory] / [nid] * 100';
  /* Field: False */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['ui_name'] = 'False';
  $handler->display->display_options['fields']['expression_2']['label'] = 'False';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[expression] / [nid] *100';
  /* Field: Taxonomy term: Chart Color */
  $handler->display->display_options['fields']['field_chart_color']['id'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['table'] = 'field_data_field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['field'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['relationship'] = 'field_opponent_s_army_tid';
  $handler->display->display_options['fields']['field_chart_color']['label'] = '';
  $handler->display->display_options['fields']['field_chart_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chart_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chart_color']['empty'] = '33,33,33';
  $handler->display->display_options['fields']['field_chart_color']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '{
            name: \'[field_opponent_s_army]\',
            color: \'rgba([field_chart_color], .5)\',
            data: [[[expression_2],[expression_1]]]

        },';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '5';

  /* Display: Most Battles Against */
  $handler = $view->new_display('panel_pane', 'Most Battles Against', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Battles Against';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_opponent_s_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_opponent_s_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_opponent_s_army' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Most Battles Against';
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Average Battle Score */
  $handler = $view->new_display('panel_pane', 'Average Battle Score', 'panel_pane_14');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';

  /* Display: Allies ROC */
  $handler = $view->new_display('panel_pane', 'Allies ROC', 'panel_pane_15');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Field: Content: Your Allied Detatchment */
  $handler->display->display_options['fields']['field_allied_detatchment']['id'] = 'field_allied_detatchment';
  $handler->display->display_options['fields']['field_allied_detatchment']['table'] = 'field_data_field_allied_detatchment';
  $handler->display->display_options['fields']['field_allied_detatchment']['field'] = 'field_allied_detatchment';
  $handler->display->display_options['fields']['field_allied_detatchment']['label'] = '';
  $handler->display->display_options['fields']['field_allied_detatchment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_allied_detatchment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allied_detatchment']['empty'] = 'None';
  $handler->display->display_options['fields']['field_allied_detatchment']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_allied_detatchment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_allied_detatchment']['separator'] = '|';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
  /* Field: Not Victory */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['label'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_defeat] + [field_draw]';
  /* Field: Truth */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['ui_name'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '2';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_victory] / [nid] * 100';
  /* Field: False */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['ui_name'] = 'False';
  $handler->display->display_options['fields']['expression_2']['label'] = 'False';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[expression] / [nid] *100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '{
            name: \'[field_allied_detatchment]\',
            color: \'rgba(223, 83, 83, .5)\',
            data: [[[expression_2],[expression_1]]]

        },';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );

  /* Display: Opponent Faction Page Panel */
  $handler = $view->new_display('panel_pane', 'Opponent Faction Page Panel', 'panel_pane_16');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_opponent_s_army' => 'field_opponent_s_army',
    'nid' => 'nid',
    'field_your_results' => 'field_your_results',
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_opponent_s_army' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = 'Opponent\'s Faction';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['label'] = 'W';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['label'] = 'L';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['label'] = 'D';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battlefield Page Panel */
  $handler = $view->new_display('panel_pane', 'Battlefield Page Panel', 'panel_pane_17');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_opponent_s_army' => 'field_opponent_s_army',
    'nid' => 'nid',
    'field_your_results' => 'field_your_results',
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_opponent_s_army' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['label'] = 'W';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['label'] = 'L';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['label'] = 'D';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: Field: Battlefield (field_location) */
  $handler->display->display_options['filters']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Player Page Panel */
  $handler = $view->new_display('panel_pane', 'Player Page Panel', 'panel_pane_18');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_opponent_s_army' => 'field_opponent_s_army',
    'nid' => 'nid',
    'field_your_results' => 'field_your_results',
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_opponent_s_army' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['label'] = 'W';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['label'] = 'L';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['label'] = 'D';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['battles_stats_army_battle_stats'] = $view;

  $view = new view();
  $view->name = 'battles_stats_game_battle_stats';
  $view->description = 'Version 4.2-rc10 Generates the views for Faction and Army Battle Stats.';
  $view->tag = '4.2, Battles';
  $view->base_table = 'node';
  $view->human_name = 'Battles: Stats: Game Battle Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  /* Contextual filter: Taxonomy term: Game System (field_game_system_armies) */
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['id'] = 'field_game_system_armies_tid';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['field'] = 'field_game_system_armies_tid';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_system_armies_tid']['summary_options']['items_per_page'] = '25';
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
    'game_results' => 'game_results',
  );

  /* Display: Battle Count */
  $handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Player Count */
  $handler = $view->new_display('panel_pane', 'Player Count', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Author uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battlefield Count */
  $handler = $view->new_display('panel_pane', 'Battlefield Count', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Battlefield) */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Faction Count */
  $handler = $view->new_display('panel_pane', 'Faction Count', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Opponent's Army) */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_opponent_s_army']['label'] = '';
  $handler->display->display_options['fields']['field_opponent_s_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battles by Faction */
  $handler = $view->new_display('panel_pane', 'Battles by Faction', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_army' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Battles by Faction';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Factions (10 or more battles)';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '45';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Game System (field_game_system_armies) */
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['id'] = 'field_game_system_armies_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['field'] = 'field_game_system_armies_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '10';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Player with the most battles */
  $handler = $view->new_display('panel_pane', 'Player with the most battles', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battle Count Leaderboard';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'name';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'name' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'name' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Most Battles';
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Commander Survival ROC */
  $handler = $view->new_display('panel_pane', 'Commander Survival ROC', 'panel_pane_6');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Your Commander Survival */
  $handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['label'] = 'Commander Survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
  /* Field: Not Victory */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['label'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_defeat] + [field_draw]';
  /* Field: Truth */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['ui_name'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '2';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_victory] / [nid] * 100';
  /* Field: False */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['ui_name'] = 'False';
  $handler->display->display_options['fields']['expression_2']['label'] = 'False';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[expression] / [nid] *100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '{
            name: \'[field_your_commander_survival]\',
            color: \'rgba(49, 79, 79, .5)\',
            data: [[[expression_2],[expression_1]]]

        },';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: Content: Your Commander Survival (field_your_commander_survival) */
  $handler->display->display_options['filters']['field_your_commander_survival_value']['id'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['field'] = 'field_your_commander_survival_value';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_your_commander_survival_value']['value'] = array(
    0 => '0',
  );

  /* Display: Battle Results */
  $handler = $view->new_display('panel_pane', 'Battle Results', 'panel_pane_10');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_results';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_results' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_results' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Battle Results';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#910000',
    1 => '#f2a32f',
    2 => '#8bbc21',
    3 => '#910000',
    4 => '#1aadce',
    5 => '#492970',
    6 => '#f28f43',
    7 => '#77a1e5',
    8 => '#c42525',
    9 => '#a6c96a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'Results';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Battles over Time */
  $handler = $view->new_display('panel_pane', 'Battles over Time', 'panel_pane_11');
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'json';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['fields']['created']['timezone'] = 'UTC';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[Date.parse("[created]"),[nid]],';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';

  /* Display: Faction ROC */
  $handler = $view->new_display('panel_pane', 'Faction ROC', 'panel_pane_12');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
  $handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['exclude'] = TRUE;
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['exclude'] = TRUE;
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['exclude'] = TRUE;
  /* Field: Not Victory */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['label'] = 'Not Victory';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_defeat] + [field_draw]';
  /* Field: Truth */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['ui_name'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Truth';
  $handler->display->display_options['fields']['expression_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '2';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_victory] / [nid] * 100';
  /* Field: False */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['ui_name'] = 'False';
  $handler->display->display_options['fields']['expression_2']['label'] = 'False';
  $handler->display->display_options['fields']['expression_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[expression] / [nid] *100';
  /* Field: Taxonomy term: Chart Color */
  $handler->display->display_options['fields']['field_chart_color']['id'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['table'] = 'field_data_field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['field'] = 'field_chart_color';
  $handler->display->display_options['fields']['field_chart_color']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_chart_color']['label'] = '';
  $handler->display->display_options['fields']['field_chart_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chart_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chart_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_chart_color']['empty'] = '13,35,58';
  $handler->display->display_options['fields']['field_chart_color']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '{
            name: \'[field_your_army]\',
            color: \'rgba([field_chart_color], .5)\',
            data: [[[expression_2],[expression_1]]]

        },';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '10';

  /* Display: Most Battles Against */
  $handler = $view->new_display('panel_pane', 'Most Battles Against', 'panel_pane_13');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_opponent_s_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_opponent_s_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_opponent_s_army' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Most Battles Against';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Opponent's Army */
  $handler->display->display_options['fields']['field_opponent_s_army']['id'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['table'] = 'field_data_field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['field'] = 'field_opponent_s_army';
  $handler->display->display_options['fields']['field_opponent_s_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Average Battle Score */
  $handler = $view->new_display('panel_pane', 'Average Battle Score', 'panel_pane_14');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';

  /* Display: Player Page Panel */
  $handler = $view->new_display('panel_pane', 'Player Page Panel', 'panel_pane_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'nid' => 'nid',
    'field_your_results' => 'field_your_results',
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['label'] = 'W';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['label'] = 'L';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['label'] = 'D';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battlefield Page Panel */
  $handler = $view->new_display('panel_pane', 'Battlefield Page Panel', 'panel_pane_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_location' => 'field_location',
    'nid' => 'nid',
    'field_your_results' => 'field_your_results',
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
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
    'game_results' => 'game_results',
  );
  /* Filter criterion: Field: Battlefield (field_location) */
  $handler->display->display_options['filters']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_location_nid']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Faction Page Panel */
  $handler = $view->new_display('panel_pane', 'Faction Page Panel', 'panel_pane_15');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'nid' => 'nid',
    'field_your_results' => 'field_your_results',
    'field_victory' => 'field_victory',
    'field_defeat' => 'field_defeat',
    'field_draw' => 'field_draw',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_your_results' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_victory' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_defeat' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_draw' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = 'Faction';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  /* Field: AVG(Field: Your Results) */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_your_results']['label'] = 'AVG Battle Score';
  $handler->display->display_options['fields']['field_your_results']['type'] = 'list_key';
  /* Field: SUM(Field: Victory) */
  $handler->display->display_options['fields']['field_victory']['id'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['table'] = 'field_data_field_victory';
  $handler->display->display_options['fields']['field_victory']['field'] = 'field_victory';
  $handler->display->display_options['fields']['field_victory']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_victory']['label'] = 'W';
  /* Field: SUM(Field: Defeat) */
  $handler->display->display_options['fields']['field_defeat']['id'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['table'] = 'field_data_field_defeat';
  $handler->display->display_options['fields']['field_defeat']['field'] = 'field_defeat';
  $handler->display->display_options['fields']['field_defeat']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_defeat']['label'] = 'L';
  /* Field: SUM(Field: Draw) */
  $handler->display->display_options['fields']['field_draw']['id'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['table'] = 'field_data_field_draw';
  $handler->display->display_options['fields']['field_draw']['field'] = 'field_draw';
  $handler->display->display_options['fields']['field_draw']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_draw']['label'] = 'D';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['battles_stats_game_battle_stats'] = $view;

  $view = new view();
  $view->name = 'battles_stats_main_battle_stats';
  $view->description = 'Version 4.2 Battle Stats Page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Battles: Stats: Main Battle Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );

  /* Display: Battle Count */
  $handler = $view->new_display('panel_pane', 'Battle Count', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Player Count */
  $handler = $view->new_display('panel_pane', 'Player Count', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Author uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battlefield Count */
  $handler = $view->new_display('panel_pane', 'Battlefield Count', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Battlefield) */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Faction Count */
  $handler = $view->new_display('panel_pane', 'Faction Count', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Field: Your Army) */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battles by Faction */
  $handler = $view->new_display('panel_pane', 'Battles by Faction', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_your_army';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_your_army' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_your_army' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Battles by Faction';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Factions (10 or more battles)';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '45';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = 'Army';
  $handler->display->display_options['fields']['field_your_army']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Game System (field_game_system_armies) */
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['id'] = 'field_game_system_armies_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['field'] = 'field_game_system_armies_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['sorts']['field_game_system_armies_tid']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '10';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Battles by Game System */
  $handler = $view->new_display('panel_pane', 'Battles by Game System', 'panel_pane_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_game_system_armies';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'field_game_system_armies' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_game_system_armies' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Game System';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Game System */
  $handler->display->display_options['fields']['field_game_system_armies']['id'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['field'] = 'field_game_system_armies';
  $handler->display->display_options['fields']['field_game_system_armies']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['fields']['field_game_system_armies']['type'] = 'taxonomy_term_reference_plain';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'game_results' => 'game_results',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Player with the most battles */
  $handler = $view->new_display('panel_pane', 'Player with the most battles', 'panel_pane_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'name';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'name' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'name' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Most Battles';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Battles';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'game_results' => 'game_results',
    'game_result_system_' => 'game_result_system_',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['battles_stats_main_battle_stats'] = $view;

  return $export;
}
