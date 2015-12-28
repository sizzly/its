<?php
/**
 * @file
 * views_view.battles_all_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
  3 => 'views_content',
);
