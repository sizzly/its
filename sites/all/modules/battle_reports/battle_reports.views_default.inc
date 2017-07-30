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
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
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
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['description'] = 'Filter by Game System';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['identifier'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['remember'] = TRUE;
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
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['selective_items_limit'] = '100';

  /* Display: All Battle Page */
  $handler = $view->new_display('page', 'All Battle Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Battle Reports';
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
  $handler->display->display_options['path'] = 'gaming/battle-reports/all-battles';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['description'] = 'A list of all battle reports on iToysoldiers';
  $handler->display->display_options['menu']['weight'] = '10';
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

  /* Display: Trending */
  $handler = $view->new_display('page', 'Trending', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trending Battle Reports';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Radioactivity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Trending Battle Reports on [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'The most popular table top war gaming battle reports on iToysoldiers. Filter by your favorite miniature war game.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => 'Popular battle reports on iToysoldiers',
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
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
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
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
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
      'og:image:url' => array(
        'value' => '',
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
      'og:street_address' => array(
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
      'og:postal_code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country_name' => array(
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
  $handler->display->display_options['path'] = 'gaming/battle-reports/trending-battle-reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Trending';
  $handler->display->display_options['menu']['description'] = 'The most popular battle reports on iToysoldiers';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Battles */
  $handler = $view->new_display('page', 'My Battles', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Battles';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>You have not reported any battles</h3>
<p><a href="/node/add/game-results">Submit your battle results now</a>.</p>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Game System (field_game_system_armies) (selective) */
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['id'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['field'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['ui_name'] = 'Game System (field_game_system_armies) (selective)';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['description'] = 'Filter by Game System';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['identifier'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['remember'] = TRUE;
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
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'My Battles on [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'A complete list of your table top war gaming battle reports on iToysoldiers. Filter by your favorite miniature war game.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => 'My battle reports on iToysoldiers',
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
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
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
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
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
      'og:image:url' => array(
        'value' => '',
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
      'og:street_address' => array(
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
      'og:postal_code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country_name' => array(
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
  $handler->display->display_options['path'] = 'gaming/battle-reports/my-battle-reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Battles';
  $handler->display->display_options['menu']['description'] = 'A list of your battle reports on iToysoldiers';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Following */
  $handler = $view->new_display('page', 'Following', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Following';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Your Army (field_your_army) */
  $handler->display->display_options['relationships']['field_your_army_tid']['id'] = 'field_your_army_tid';
  $handler->display->display_options['relationships']['field_your_army_tid']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['relationships']['field_your_army_tid']['field'] = 'field_your_army_tid';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: follow */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
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
  /* Filter criterion: Game System (field_game_system_armies) (selective) */
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['id'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['table'] = 'field_data_field_game_system_armies';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['field'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['relationship'] = 'field_your_army_tid';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['ui_name'] = 'Game System (field_game_system_armies) (selective)';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['description'] = 'Filter by Game System';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['identifier'] = 'field_game_system_armies_tid_selective';
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['expose']['remember'] = TRUE;
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
  $handler->display->display_options['filters']['field_game_system_armies_tid_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Followed Player Battles on [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'A list of table top war gaming battle reports by people you follow on iToysoldiers. Filter by your favorite miniature war game.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => 'Battle reports on iToysoldiers',
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
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
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
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
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
      'og:image:url' => array(
        'value' => '',
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
      'og:street_address' => array(
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
      'og:postal_code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country_name' => array(
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
  $handler->display->display_options['path'] = 'gaming/battle-reports/following';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Following';
  $handler->display->display_options['menu']['description'] = 'A list of all battle reports by players you follow on iToysoldiers';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Gaming Page Panel */
  $handler = $view->new_display('panel_pane', 'Gaming Page Panel', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Battles';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'field_verbose_teaser';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Verbose Teaser */
  $handler->display->display_options['fields']['field_verbose_teaser']['id'] = 'field_verbose_teaser';
  $handler->display->display_options['fields']['field_verbose_teaser']['table'] = 'field_data_field_verbose_teaser';
  $handler->display->display_options['fields']['field_verbose_teaser']['field'] = 'field_verbose_teaser';
  $handler->display->display_options['fields']['field_verbose_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_verbose_teaser']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['pane_category']['name'] = 'Gaming';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battle Meta';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['label'] = '';
  $handler->display->display_options['fields']['field_game_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_game_date']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-calendar-o fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_game_date]</strong>
        <div class="text-muted">Date</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_game_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_game_date']['element_wrapper_class'] = 'meta-item';
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
  /* Field: Field: Your Results */
  $handler->display->display_options['fields']['field_your_results']['id'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['table'] = 'field_data_field_your_results';
  $handler->display->display_options['fields']['field_your_results']['field'] = 'field_your_results';
  $handler->display->display_options['fields']['field_your_results']['label'] = '';
  $handler->display->display_options['fields']['field_your_results']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_your_results']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-balance-scale fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_your_army] [field_your_results]</strong>
        <div class="text-muted">Results</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_your_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_results']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_your_results']['element_wrapper_class'] = 'meta-item';
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-map-marker fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_location]</strong>
        <div class="text-muted">Battlefield</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'meta-item';
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
  $handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_link']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_event_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['settings'] = array(
    'link' => 1,
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
            <i class="fa fa-hashtag fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_points_per_army]</strong>
        <div class="text-muted">Points per Army</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_points_per_army']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_points_per_army']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_points_per_army']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Mission */
  $handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
  $handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['label'] = '';
  $handler->display->display_options['fields']['field_mission']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mission']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-folder-open fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_mission]</strong>
        <div class="text-muted">Mission/Scenario</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mission']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_mission']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_mission']['hide_empty'] = TRUE;
  /* Field: Content: Deployment */
  $handler->display->display_options['fields']['field_battle_deployment']['id'] = 'field_battle_deployment';
  $handler->display->display_options['fields']['field_battle_deployment']['table'] = 'field_data_field_battle_deployment';
  $handler->display->display_options['fields']['field_battle_deployment']['field'] = 'field_battle_deployment';
  $handler->display->display_options['fields']['field_battle_deployment']['label'] = '';
  $handler->display->display_options['fields']['field_battle_deployment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_battle_deployment']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-compress fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_deployment]</strong>
        <div class="text-muted">Deployment</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_battle_deployment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_battle_deployment']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_battle_deployment']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_battle_deployment']['hide_empty'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Sharethis and Tools */
  $handler = $view->new_display('panel_pane', 'Sharethis and Tools', 'panel_pane_9');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'btn-group';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comments_link']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['comments_link']['element_wrapper_class'] = 'btn btn-default';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['ops']['element_wrapper_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops']['hide_empty'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['ops_1']['element_wrapper_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops_1']['hide_empty'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Battle';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'reverse_field_game_reference_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['edit_node_1']['element_wrapper_class'] = 'btn btn-default';
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
  $handler->display->display_options['fields']['field_allied_detatchment']['delta_limit'] = '2';
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
  $handler->display->display_options['filters']['field_allied_detatchment_tid']['vocabulary'] = 'armies';

  /* Display: Belligerents Content Pane */
  $handler = $view->new_display('panel_pane', 'Belligerents Content Pane', 'panel_pane_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Belligerents';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'button';
  /* Field: Field: Your Army */
  $handler->display->display_options['fields']['field_your_army']['id'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['table'] = 'field_data_field_your_army';
  $handler->display->display_options['fields']['field_your_army']['field'] = 'field_your_army';
  $handler->display->display_options['fields']['field_your_army']['label'] = '';
  $handler->display->display_options['fields']['field_your_army']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_army']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        [picture]
    </div>
    <div class="media-body">
        <span class="lead">[name]</span>
        <div>[field_your_army]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Your Commander Survival */
  $handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['label'] = '';
  $handler->display->display_options['fields']['field_your_commander_survival']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_your_commander_survival']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_your_commander_survival']['alter']['text'] = 'Commander [field_your_commander_survival]';
  $handler->display->display_options['fields']['field_your_commander_survival']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_commander_survival']['empty'] = 'Commander';
  /* Field: Content: Commander */
  $handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['label'] = 'Commanders and Leaders';
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_batteresult_commander']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-star fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        [field_batteresult_commander]
       <div class="small">[field_your_commander_survival]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_label_class'] = 'lead';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_batteresult_commander']['empty'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-star fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        Classified
       <div class="small">[field_your_commander_survival]</div>
    </div>
</div>';
  /* Field: Content: Most Valuable Unit */
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['id'] = 'field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['table'] = 'field_data_field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['field'] = 'field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['label'] = '';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-certificate fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        [field_battle_most_valuable_unit]
       <div class="small">Most Valuable Unit</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['empty'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-certificate fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        Classified
       <div class="small">Most Valuable Unit</div>
    </div>
</div>';
  /* Field: Content: Army Composition */
  $handler->display->display_options['fields']['field_army_composition']['id'] = 'field_army_composition';
  $handler->display->display_options['fields']['field_army_composition']['table'] = 'field_data_field_army_composition';
  $handler->display->display_options['fields']['field_army_composition']['field'] = 'field_army_composition';
  $handler->display->display_options['fields']['field_army_composition']['label'] = 'Strength';
  $handler->display->display_options['fields']['field_army_composition']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_army_composition']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-th-list fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        [field_army_composition]
       <div class="small">Army List</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_army_composition']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_army_composition']['element_label_class'] = 'lead';
  $handler->display->display_options['fields']['field_army_composition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_army_composition']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_army_composition']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_army_composition']['empty'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-th-list fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        Classified
       <div class="small">Army List</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_army_composition']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Commanders and Leaders Pane */
  $handler = $view->new_display('panel_pane', 'Commanders and Leaders Pane', 'panel_pane_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Commanders and Leaders';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Commander */
  $handler->display->display_options['fields']['field_batteresult_commander']['id'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['table'] = 'field_data_field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['field'] = 'field_batteresult_commander';
  $handler->display->display_options['fields']['field_batteresult_commander']['label'] = 'Commanders and Leaders';
  $handler->display->display_options['fields']['field_batteresult_commander']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_batteresult_commander']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_batteresult_commander']['element_wrapper_class'] = 'caption';
  $handler->display->display_options['fields']['field_batteresult_commander']['empty'] = 'Classified';
  $handler->display->display_options['fields']['field_batteresult_commander']['hide_alter_empty'] = FALSE;
  /* Field: Content: Your Commander Survival */
  $handler->display->display_options['fields']['field_your_commander_survival']['id'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['table'] = 'field_data_field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['field'] = 'field_your_commander_survival';
  $handler->display->display_options['fields']['field_your_commander_survival']['label'] = '';
  $handler->display->display_options['fields']['field_your_commander_survival']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_your_commander_survival']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-flag fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_batteresult_commander]</strong>
        <div class="text-muted">Commander [field_your_commander_survival]</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_your_commander_survival']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_your_commander_survival']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_your_commander_survival']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_your_commander_survival']['empty'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-flag fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_batteresult_commander]</strong>
        <div class="text-muted">Commander</div>
    </div>
</div>';
  /* Field: Content: Most Valuable Unit */
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['id'] = 'field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['table'] = 'field_data_field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['field'] = 'field_battle_most_valuable_unit';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['label'] = '';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <div class="activity-icon small">
            <i class="fa fa-trophy fw"></i>
        </div>
    </div>
    <div class="media-body">
        <strong class="font-14">[field_battle_most_valuable_unit]</strong>
        <div class="text-muted">Most Valuable Unit</div>
    </div>
</div>';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['element_wrapper_class'] = 'meta-item';
  $handler->display->display_options['fields']['field_battle_most_valuable_unit']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Campaign Badge */
  $handler = $view->new_display('panel_pane', 'Campaign Badge', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Campaign Badge';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_event_link_target_id']['id'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['relationships']['field_event_link_target_id']['field'] = 'field_event_link_target_id';
  $handler->display->display_options['relationships']['field_event_link_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['relationship'] = 'field_event_link_target_id';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'newsletter_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Completeness */
  $handler = $view->new_display('panel_pane', 'Completeness', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Report Status';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content Complete: Completeness */
  $handler->display->display_options['fields']['completeness']['id'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['table'] = 'content_complete';
  $handler->display->display_options['fields']['completeness']['field'] = 'completeness';
  $handler->display->display_options['fields']['completeness']['label'] = '';
  $handler->display->display_options['fields']['completeness']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['completeness']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['completeness']['next'] = 1;
  $handler->display->display_options['fields']['completeness']['display_as'] = 'bar';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Player Details */
  $handler = $view->new_display('panel_pane', 'Player Details', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Belligerents';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_reference_target_id']['id'] = 'field_game_reference_target_id';
  $handler->display->display_options['relationships']['field_game_reference_target_id']['table'] = 'field_data_field_game_reference';
  $handler->display->display_options['relationships']['field_game_reference_target_id']['field'] = 'field_game_reference_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_wrapper_class'] = 'col-sm-6';
  $handler->display->display_options['fields']['view']['view'] = 'battles_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_17';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_game_reference_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_1']['element_wrapper_class'] = 'col-sm-6';
  $handler->display->display_options['fields']['view_1']['view'] = 'battles_all_page_layout';
  $handler->display->display_options['fields']['view_1']['display'] = 'panel_pane_17';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[%nid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Battlefield Location */
  $handler = $view->new_display('panel_pane', 'Battlefield Location', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battlefield';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geolocation']['type'] = 'geofield_leaflet';
  $handler->display->display_options['fields']['field_geolocation']['settings'] = array(
    'leaflet_map' => 'leaflet-mapbox',
    'height' => '250',
    'popup' => array(
      'show' => 0,
      'text' => '',
    ),
    'zoom' => array(
      'initialZoom' => '12',
      'minZoom' => '1',
      'maxZoom' => '-1',
      'scrollWheelZoom' => 1,
    ),
    'icon' => array(
      'iconType' => 'marker',
      'iconUrl' => '/sites/default/files/battlefield.png',
      'shadowUrl' => '',
      'html' => '',
      'iconImageStyle' => '',
      'htmlClass' => '',
      'iconSize' => array(
        'x' => '',
        'y' => '',
      ),
      'iconAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'shadowAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'popupAnchor' => array(
        'x' => '',
        'y' => '',
      ),
    ),
    'vector_display' => array(
      'stroke_override' => 0,
      'stroke' => 1,
      'color' => '',
      'weight' => '',
      'opacity' => '',
      'dashArray' => '',
      'fill' => 1,
      'fillColor' => '',
      'fillOpacity' => '',
      'clickable' => 1,
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Battles';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
    10 => '#aaeeee',
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
  $handler->display->display_options['fields']['field_allied_detatchment']['delta_limit'] = '2';
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
    10 => '#aaeeee',
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Battles by Faction';
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
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#2b908f',
    1 => '#90ee7e',
    2 => '#f45b5b',
    3 => '#7798bf',
    4 => '#aaeeee',
    5 => '#ff0066',
    6 => '#eeaaee',
    7 => '#55bf3b',
    8 => '#df5353',
    9 => '#7798bf',
    10 => '#aaeeee',
  );
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Game System';
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
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#2b908f',
    1 => '#90ee7e',
    2 => '#f45b5b',
    3 => '#7798bf',
    4 => '#aaeeee',
    5 => '#ff0066',
    6 => '#eeaaee',
    7 => '#55bf3b',
    8 => '#df5353',
    9 => '#7798bf',
    10 => '#aaeeee',
  );
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Players: Battle Count';
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
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#2b908f',
    1 => '#90ee7e',
    2 => '#f45b5b',
    3 => '#7798bf',
    4 => '#aaeeee',
    5 => '#ff0066',
    6 => '#eeaaee',
    7 => '#55bf3b',
    8 => '#df5353',
    9 => '#7798bf',
    10 => '#aaeeee',
  );
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
