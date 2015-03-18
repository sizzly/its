<?php
/**
 * @file
 * events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_calendar';
  $view->description = 'A multi-dimensional calendar view with back/next navigation.';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Event calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'achievement' => '#ffffff',
    'army_profile' => '#ffffff',
    'article' => '#ffffff',
    'game_results' => '#ffffff',
    'location' => '#ffffff',
    'blog' => '#ffffff',
    'event' => '#ffffff',
    'gallery' => '#ffffff',
    'game_result_system_' => '#ffffff',
    'war_zone_league' => '#ffffff',
    'league' => '#ffffff',
    'listcrit' => '#ffffff',
    'narrative_campaign' => '#ffffff',
    'narrative_campaign_instance' => '#ffffff',
    'product' => '#ffffff',
    'question' => '#ffffff',
    'remote_blog' => '#ffffff',
    'special_event' => '#ffffff',
    'war_zone_tournament' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_event_type' => '9',
    'field_supported_games' => '2',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    1144 => '#424f63',
    153 => '#fb5a43',
    212 => '#eebb57',
    163 => '#f3ce85',
    1029 => '#f3ce85',
    1145 => '#f3ce85',
    1028 => '#f3ce85',
    154 => '#fb5a43',
    158 => '#0000FF',
    1034 => '#1649d2',
    1032 => '#f3ce85',
    1031 => '#3ec291',
    1033 => '#6bafbd',
    152 => '#6bafbd',
    1030 => '#6bafbd',
    611 => '#ffffff',
    615 => '#ffffff',
    612 => '#ffffff',
    616 => '#ffffff',
    613 => '#ffffff',
    618 => '#ffffff',
    617 => '#ffffff',
    614 => '#ffffff',
    620 => '#ffffff',
    619 => '#ffffff',
    1087 => '#ffffff',
    1049 => '#ffffff',
    1056 => '#ffffff',
    1057 => '#ffffff',
    1052 => '#ffffff',
    1055 => '#ffffff',
    1051 => '#ffffff',
    1053 => '#ffffff',
    1054 => '#ffffff',
    364 => '#ffffff',
    372 => '#ffffff',
    367 => '#ffffff',
    388 => '#ffffff',
    366 => '#ffffff',
    370 => '#ffffff',
    365 => '#ffffff',
    374 => '#ffffff',
    368 => '#ffffff',
    375 => '#ffffff',
    371 => '#ffffff',
    369 => '#ffffff',
    373 => '#ffffff',
    1219 => '#ffffff',
    1224 => '#ffffff',
    1223 => '#ffffff',
    1222 => '#ffffff',
    1227 => '#ffffff',
    1233 => '#ffffff',
    1234 => '#ffffff',
    1232 => '#ffffff',
    1228 => '#ffffff',
    1235 => '#ffffff',
    1238 => '#ffffff',
    1236 => '#ffffff',
    1237 => '#ffffff',
    1220 => '#ffffff',
    1221 => '#ffffff',
    1225 => '#ffffff',
    1226 => '#ffffff',
    776 => '#ffffff',
    777 => '#ffffff',
    778 => '#ffffff',
    783 => '#ffffff',
    785 => '#ffffff',
    779 => '#ffffff',
    780 => '#ffffff',
    781 => '#ffffff',
    782 => '#ffffff',
    784 => '#ffffff',
    923 => '#ffffff',
    929 => '#ffffff',
    930 => '#ffffff',
    924 => '#ffffff',
    931 => '#ffffff',
    925 => '#ffffff',
    932 => '#ffffff',
    933 => '#ffffff',
    934 => '#ffffff',
    926 => '#ffffff',
    928 => '#ffffff',
    927 => '#ffffff',
    718 => '#ffffff',
    719 => '#ffffff',
    722 => '#ffffff',
    720 => '#ffffff',
    721 => '#ffffff',
    723 => '#ffffff',
    724 => '#ffffff',
    433 => '#ffffff',
    440 => '#ffffff',
    436 => '#ffffff',
    439 => '#ffffff',
    437 => '#ffffff',
    442 => '#ffffff',
    438 => '#ffffff',
    434 => '#ffffff',
    441 => '#ffffff',
    435 => '#ffffff',
    55 => '#ffffff',
    58 => '#ffffff',
    59 => '#ffffff',
    57 => '#ffffff',
    56 => '#ffffff',
    60 => '#ffffff',
    61 => '#ffffff',
    66 => '#ffffff',
    67 => '#ffffff',
    65 => '#ffffff',
    64 => '#ffffff',
    62 => '#ffffff',
    63 => '#ffffff',
    68 => '#ffffff',
    960 => '#ffffff',
    961 => '#ffffff',
    70 => '#ffffff',
    69 => '#ffffff',
    42 => '#ffffff',
    47 => '#ffffff',
    52 => '#ffffff',
    54 => '#ffffff',
    48 => '#ffffff',
    45 => '#ffffff',
    53 => '#ffffff',
    44 => '#ffffff',
    50 => '#ffffff',
    43 => '#ffffff',
    46 => '#ffffff',
    51 => '#ffffff',
    175 => '#ffffff',
    2 => '#ffffff',
    28 => '#ffffff',
    826 => '#ffffff',
    827 => '#ffffff',
    841 => '#ffffff',
    840 => '#ffffff',
    843 => '#ffffff',
    838 => '#ffffff',
    839 => '#ffffff',
    842 => '#ffffff',
    844 => '#ffffff',
    845 => '#ffffff',
    837 => '#ffffff',
    836 => '#ffffff',
    830 => '#ffffff',
    828 => '#ffffff',
    833 => '#ffffff',
    834 => '#ffffff',
    832 => '#ffffff',
    831 => '#ffffff',
    829 => '#ffffff',
    835 => '#ffffff',
    27 => '#ffffff',
    25 => '#ffffff',
    23 => '#ffffff',
    24 => '#ffffff',
    258 => '#ffffff',
    671 => '#ffffff',
    4 => '#ffffff',
    672 => '#ffffff',
    197 => '#ffffff',
    19 => '#ffffff',
    1258 => '#ffffff',
    5 => '#ffffff',
    21 => '#ffffff',
    1239 => '#ffffff',
    198 => '#ffffff',
    196 => '#ffffff',
    562 => '#ffffff',
    3 => '#ffffff',
    480 => '#ffffff',
    479 => '#ffffff',
    472 => '#ffffff',
    477 => '#ffffff',
    465 => '#ffffff',
    464 => '#ffffff',
    476 => '#ffffff',
    561 => '#ffffff',
    466 => '#ffffff',
    467 => '#ffffff',
    468 => '#ffffff',
    473 => '#ffffff',
    26 => '#ffffff',
    17 => '#ffffff',
    478 => '#ffffff',
    260 => '#ffffff',
    475 => '#ffffff',
    462 => '#ffffff',
    474 => '#ffffff',
    469 => '#ffffff',
    18 => '#ffffff',
    470 => '#ffffff',
    463 => '#ffffff',
    22 => '#ffffff',
    471 => '#ffffff',
    20 => '#ffffff',
    259 => '#ffffff',
    560 => '#ffffff',
    735 => '#ffffff',
    737 => '#ffffff',
    742 => '#ffffff',
    740 => '#ffffff',
    739 => '#ffffff',
    741 => '#ffffff',
    736 => '#ffffff',
    738 => '#ffffff',
    395 => '#ffffff',
    404 => '#ffffff',
    401 => '#ffffff',
    400 => '#ffffff',
    399 => '#ffffff',
    406 => '#ffffff',
    407 => '#ffffff',
    405 => '#ffffff',
    402 => '#ffffff',
    403 => '#ffffff',
    397 => '#ffffff',
    396 => '#ffffff',
    398 => '#ffffff',
    914 => '#ffffff',
    915 => '#ffffff',
    916 => '#ffffff',
    920 => '#ffffff',
    921 => '#ffffff',
    917 => '#ffffff',
    918 => '#ffffff',
    919 => '#ffffff',
    223 => '#ffffff',
    224 => '#ffffff',
    225 => '#ffffff',
  );
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'cal-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
  /* Field: Content: Supported Games */
  $handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['label'] = '';
  $handler->display->display_options['fields']['field_supported_games']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_supported_games']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supported_games']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'achievement' => 'achievement',
    'event' => 'event',
    'war_zone_league' => 'war_zone_league',
    'special_event' => 'special_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Supported Games (field_supported_games) (selective) */
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['id'] = 'field_supported_games_tid_selective';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['table'] = 'field_data_field_supported_games';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['field'] = 'field_supported_games_tid_selective';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['ui_name'] = 'Supported Games (field_supported_games) (selective)';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['label'] = 'Game System';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['identifier'] = 'field_supported_games_tid_selective';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_field'] = 'field_supported_games';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_sort'] = 'ASC';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'event_type';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '10';
  /* Filter criterion: Battlefield (field_location) (selective) */
  $handler->display->display_options['filters']['field_location_nid_selective']['id'] = 'field_location_nid_selective';
  $handler->display->display_options['filters']['field_location_nid_selective']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_nid_selective']['field'] = 'field_location_nid_selective';
  $handler->display->display_options['filters']['field_location_nid_selective']['ui_name'] = 'Battlefield (field_location) (selective)';
  $handler->display->display_options['filters']['field_location_nid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_location_nid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['label'] = 'Battlefield';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['description'] = 'filter by battlefield (store or location)';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['identifier'] = 'field_location_nid_selective';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_location_nid_selective']['selective_display_field'] = 'field_location';
  $handler->display->display_options['filters']['field_location_nid_selective']['selective_display_sort'] = 'ASC';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Wargaming Calendar | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'A calendar view of tabletop miniature wargaming events.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
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
  $handler->display->display_options['path'] = 'warzone/events/wargaming-events/calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['description'] = 'View a calendar of events.';
  $handler->display->display_options['tab_options']['weight'] = '10';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'achievement' => '#ffffff',
    'army_profile' => '#ffffff',
    'article' => '#ffffff',
    'game_results' => '#ffffff',
    'location' => '#ffffff',
    'blog' => '#ffffff',
    'event' => '#ffffff',
    'gallery' => '#ffffff',
    'game_result_system_' => '#ffffff',
    'war_zone_league' => '#ffffff',
    'league' => '#ffffff',
    'listcrit' => '#ffffff',
    'narrative_campaign' => '#ffffff',
    'narrative_campaign_instance' => '#ffffff',
    'product' => '#ffffff',
    'question' => '#ffffff',
    'remote_blog' => '#ffffff',
    'special_event' => '#ffffff',
    'war_zone_tournament' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_event_type' => '9',
    'field_supported_games' => '2',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    1144 => '#424f63',
    153 => '#fb5a43',
    212 => '#eebb57',
    163 => '#f3ce85',
    1029 => '#f3ce85',
    1145 => '#f3ce85',
    1028 => '#f3ce85',
    154 => '#fb5a43',
    158 => '#0000FF',
    1034 => '#1649d2',
    1032 => '#f3ce85',
    1031 => '#3ec291',
    1033 => '#6bafbd',
    152 => '#6bafbd',
    1030 => '#6bafbd',
    611 => '#ffffff',
    615 => '#ffffff',
    612 => '#ffffff',
    616 => '#ffffff',
    613 => '#ffffff',
    618 => '#ffffff',
    617 => '#ffffff',
    614 => '#ffffff',
    620 => '#ffffff',
    619 => '#ffffff',
    1087 => '#ffffff',
    1049 => '#ffffff',
    1056 => '#ffffff',
    1057 => '#ffffff',
    1052 => '#ffffff',
    1055 => '#ffffff',
    1051 => '#ffffff',
    1053 => '#ffffff',
    1054 => '#ffffff',
    364 => '#ffffff',
    372 => '#ffffff',
    367 => '#ffffff',
    388 => '#ffffff',
    366 => '#ffffff',
    370 => '#ffffff',
    365 => '#ffffff',
    374 => '#ffffff',
    368 => '#ffffff',
    375 => '#ffffff',
    371 => '#ffffff',
    369 => '#ffffff',
    373 => '#ffffff',
    1219 => '#ffffff',
    1224 => '#ffffff',
    1223 => '#ffffff',
    1222 => '#ffffff',
    1227 => '#ffffff',
    1233 => '#ffffff',
    1234 => '#ffffff',
    1232 => '#ffffff',
    1228 => '#ffffff',
    1235 => '#ffffff',
    1238 => '#ffffff',
    1236 => '#ffffff',
    1237 => '#ffffff',
    1220 => '#ffffff',
    1221 => '#ffffff',
    1225 => '#ffffff',
    1226 => '#ffffff',
    776 => '#ffffff',
    777 => '#ffffff',
    778 => '#ffffff',
    783 => '#ffffff',
    785 => '#ffffff',
    779 => '#ffffff',
    780 => '#ffffff',
    781 => '#ffffff',
    782 => '#ffffff',
    784 => '#ffffff',
    923 => '#ffffff',
    929 => '#ffffff',
    930 => '#ffffff',
    924 => '#ffffff',
    931 => '#ffffff',
    925 => '#ffffff',
    932 => '#ffffff',
    933 => '#ffffff',
    934 => '#ffffff',
    926 => '#ffffff',
    928 => '#ffffff',
    927 => '#ffffff',
    718 => '#ffffff',
    719 => '#ffffff',
    722 => '#ffffff',
    720 => '#ffffff',
    721 => '#ffffff',
    723 => '#ffffff',
    724 => '#ffffff',
    433 => '#ffffff',
    440 => '#ffffff',
    436 => '#ffffff',
    439 => '#ffffff',
    437 => '#ffffff',
    442 => '#ffffff',
    438 => '#ffffff',
    434 => '#ffffff',
    441 => '#ffffff',
    435 => '#ffffff',
    55 => '#ffffff',
    58 => '#ffffff',
    59 => '#ffffff',
    57 => '#ffffff',
    56 => '#ffffff',
    60 => '#ffffff',
    61 => '#ffffff',
    66 => '#ffffff',
    67 => '#ffffff',
    65 => '#ffffff',
    64 => '#ffffff',
    62 => '#ffffff',
    63 => '#ffffff',
    68 => '#ffffff',
    960 => '#ffffff',
    961 => '#ffffff',
    70 => '#ffffff',
    69 => '#ffffff',
    42 => '#ffffff',
    47 => '#ffffff',
    52 => '#ffffff',
    54 => '#ffffff',
    48 => '#ffffff',
    45 => '#ffffff',
    53 => '#ffffff',
    44 => '#ffffff',
    50 => '#ffffff',
    43 => '#ffffff',
    46 => '#ffffff',
    51 => '#ffffff',
    175 => '#ffffff',
    2 => '#ffffff',
    28 => '#ffffff',
    826 => '#ffffff',
    827 => '#ffffff',
    841 => '#ffffff',
    840 => '#ffffff',
    843 => '#ffffff',
    838 => '#ffffff',
    839 => '#ffffff',
    842 => '#ffffff',
    844 => '#ffffff',
    845 => '#ffffff',
    837 => '#ffffff',
    836 => '#ffffff',
    830 => '#ffffff',
    828 => '#ffffff',
    833 => '#ffffff',
    834 => '#ffffff',
    832 => '#ffffff',
    831 => '#ffffff',
    829 => '#ffffff',
    835 => '#ffffff',
    27 => '#ffffff',
    25 => '#ffffff',
    23 => '#ffffff',
    24 => '#ffffff',
    258 => '#ffffff',
    671 => '#ffffff',
    4 => '#ffffff',
    672 => '#ffffff',
    197 => '#ffffff',
    19 => '#ffffff',
    1258 => '#ffffff',
    5 => '#ffffff',
    21 => '#ffffff',
    1239 => '#ffffff',
    198 => '#ffffff',
    196 => '#ffffff',
    562 => '#ffffff',
    3 => '#ffffff',
    480 => '#ffffff',
    479 => '#ffffff',
    472 => '#ffffff',
    477 => '#ffffff',
    465 => '#ffffff',
    464 => '#ffffff',
    476 => '#ffffff',
    561 => '#ffffff',
    466 => '#ffffff',
    467 => '#ffffff',
    468 => '#ffffff',
    473 => '#ffffff',
    26 => '#ffffff',
    17 => '#ffffff',
    478 => '#ffffff',
    260 => '#ffffff',
    475 => '#ffffff',
    462 => '#ffffff',
    474 => '#ffffff',
    469 => '#ffffff',
    18 => '#ffffff',
    470 => '#ffffff',
    463 => '#ffffff',
    22 => '#ffffff',
    471 => '#ffffff',
    20 => '#ffffff',
    259 => '#ffffff',
    560 => '#ffffff',
    735 => '#ffffff',
    737 => '#ffffff',
    742 => '#ffffff',
    740 => '#ffffff',
    739 => '#ffffff',
    741 => '#ffffff',
    736 => '#ffffff',
    738 => '#ffffff',
    395 => '#ffffff',
    404 => '#ffffff',
    401 => '#ffffff',
    400 => '#ffffff',
    399 => '#ffffff',
    406 => '#ffffff',
    407 => '#ffffff',
    405 => '#ffffff',
    402 => '#ffffff',
    403 => '#ffffff',
    397 => '#ffffff',
    396 => '#ffffff',
    398 => '#ffffff',
    914 => '#ffffff',
    915 => '#ffffff',
    916 => '#ffffff',
    920 => '#ffffff',
    921 => '#ffffff',
    917 => '#ffffff',
    918 => '#ffffff',
    919 => '#ffffff',
    223 => '#ffffff',
    224 => '#ffffff',
    225 => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Wargaming Event Calendar by Week',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'A table top miniature wargaming event calendar displayed by week.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
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
  $handler->display->display_options['path'] = 'warzone/events/wargaming-events/calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['groupby_times'] = 'half';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'achievement' => '#ffffff',
    'army_profile' => '#ffffff',
    'article' => '#ffffff',
    'game_results' => '#ffffff',
    'location' => '#ffffff',
    'blog' => '#ffffff',
    'event' => '#ffffff',
    'gallery' => '#ffffff',
    'game_result_system_' => '#ffffff',
    'war_zone_league' => '#ffffff',
    'league' => '#ffffff',
    'listcrit' => '#ffffff',
    'narrative_campaign' => '#ffffff',
    'narrative_campaign_instance' => '#ffffff',
    'product' => '#ffffff',
    'question' => '#ffffff',
    'remote_blog' => '#ffffff',
    'special_event' => '#ffffff',
    'war_zone_tournament' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_event_type' => '9',
    'field_supported_games' => '2',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    1144 => '#424f63',
    153 => '#fb5a43',
    212 => '#eebb57',
    163 => '#f3ce85',
    1029 => '#f3ce85',
    1145 => '#f3ce85',
    1028 => '#f3ce85',
    154 => '#fb5a43',
    158 => '#0000FF',
    1034 => '#1649d2',
    1032 => '#f3ce85',
    1031 => '#3ec291',
    1033 => '#6bafbd',
    152 => '#6bafbd',
    1030 => '#6bafbd',
    611 => '#ffffff',
    615 => '#ffffff',
    612 => '#ffffff',
    616 => '#ffffff',
    613 => '#ffffff',
    618 => '#ffffff',
    617 => '#ffffff',
    614 => '#ffffff',
    620 => '#ffffff',
    619 => '#ffffff',
    1087 => '#ffffff',
    1049 => '#ffffff',
    1056 => '#ffffff',
    1057 => '#ffffff',
    1052 => '#ffffff',
    1055 => '#ffffff',
    1051 => '#ffffff',
    1053 => '#ffffff',
    1054 => '#ffffff',
    364 => '#ffffff',
    372 => '#ffffff',
    367 => '#ffffff',
    388 => '#ffffff',
    366 => '#ffffff',
    370 => '#ffffff',
    365 => '#ffffff',
    374 => '#ffffff',
    368 => '#ffffff',
    375 => '#ffffff',
    371 => '#ffffff',
    369 => '#ffffff',
    373 => '#ffffff',
    1219 => '#ffffff',
    1224 => '#ffffff',
    1223 => '#ffffff',
    1222 => '#ffffff',
    1227 => '#ffffff',
    1233 => '#ffffff',
    1234 => '#ffffff',
    1232 => '#ffffff',
    1228 => '#ffffff',
    1235 => '#ffffff',
    1238 => '#ffffff',
    1236 => '#ffffff',
    1237 => '#ffffff',
    1220 => '#ffffff',
    1221 => '#ffffff',
    1225 => '#ffffff',
    1226 => '#ffffff',
    776 => '#ffffff',
    777 => '#ffffff',
    778 => '#ffffff',
    783 => '#ffffff',
    785 => '#ffffff',
    779 => '#ffffff',
    780 => '#ffffff',
    781 => '#ffffff',
    782 => '#ffffff',
    784 => '#ffffff',
    923 => '#ffffff',
    929 => '#ffffff',
    930 => '#ffffff',
    924 => '#ffffff',
    931 => '#ffffff',
    925 => '#ffffff',
    932 => '#ffffff',
    933 => '#ffffff',
    934 => '#ffffff',
    926 => '#ffffff',
    928 => '#ffffff',
    927 => '#ffffff',
    718 => '#ffffff',
    719 => '#ffffff',
    722 => '#ffffff',
    720 => '#ffffff',
    721 => '#ffffff',
    723 => '#ffffff',
    724 => '#ffffff',
    433 => '#ffffff',
    440 => '#ffffff',
    436 => '#ffffff',
    439 => '#ffffff',
    437 => '#ffffff',
    442 => '#ffffff',
    438 => '#ffffff',
    434 => '#ffffff',
    441 => '#ffffff',
    435 => '#ffffff',
    55 => '#ffffff',
    58 => '#ffffff',
    59 => '#ffffff',
    57 => '#ffffff',
    56 => '#ffffff',
    60 => '#ffffff',
    61 => '#ffffff',
    66 => '#ffffff',
    67 => '#ffffff',
    65 => '#ffffff',
    64 => '#ffffff',
    62 => '#ffffff',
    63 => '#ffffff',
    68 => '#ffffff',
    960 => '#ffffff',
    961 => '#ffffff',
    70 => '#ffffff',
    69 => '#ffffff',
    42 => '#ffffff',
    47 => '#ffffff',
    52 => '#ffffff',
    54 => '#ffffff',
    48 => '#ffffff',
    45 => '#ffffff',
    53 => '#ffffff',
    44 => '#ffffff',
    50 => '#ffffff',
    43 => '#ffffff',
    46 => '#ffffff',
    51 => '#ffffff',
    175 => '#ffffff',
    2 => '#ffffff',
    28 => '#ffffff',
    826 => '#ffffff',
    827 => '#ffffff',
    841 => '#ffffff',
    840 => '#ffffff',
    843 => '#ffffff',
    838 => '#ffffff',
    839 => '#ffffff',
    842 => '#ffffff',
    844 => '#ffffff',
    845 => '#ffffff',
    837 => '#ffffff',
    836 => '#ffffff',
    830 => '#ffffff',
    828 => '#ffffff',
    833 => '#ffffff',
    834 => '#ffffff',
    832 => '#ffffff',
    831 => '#ffffff',
    829 => '#ffffff',
    835 => '#ffffff',
    27 => '#ffffff',
    25 => '#ffffff',
    23 => '#ffffff',
    24 => '#ffffff',
    258 => '#ffffff',
    671 => '#ffffff',
    4 => '#ffffff',
    672 => '#ffffff',
    197 => '#ffffff',
    19 => '#ffffff',
    1258 => '#ffffff',
    5 => '#ffffff',
    21 => '#ffffff',
    1239 => '#ffffff',
    198 => '#ffffff',
    196 => '#ffffff',
    562 => '#ffffff',
    3 => '#ffffff',
    480 => '#ffffff',
    479 => '#ffffff',
    472 => '#ffffff',
    477 => '#ffffff',
    465 => '#ffffff',
    464 => '#ffffff',
    476 => '#ffffff',
    561 => '#ffffff',
    466 => '#ffffff',
    467 => '#ffffff',
    468 => '#ffffff',
    473 => '#ffffff',
    26 => '#ffffff',
    17 => '#ffffff',
    478 => '#ffffff',
    260 => '#ffffff',
    475 => '#ffffff',
    462 => '#ffffff',
    474 => '#ffffff',
    469 => '#ffffff',
    18 => '#ffffff',
    470 => '#ffffff',
    463 => '#ffffff',
    22 => '#ffffff',
    471 => '#ffffff',
    20 => '#ffffff',
    259 => '#ffffff',
    560 => '#ffffff',
    735 => '#ffffff',
    737 => '#ffffff',
    742 => '#ffffff',
    740 => '#ffffff',
    739 => '#ffffff',
    741 => '#ffffff',
    736 => '#ffffff',
    738 => '#ffffff',
    395 => '#ffffff',
    404 => '#ffffff',
    401 => '#ffffff',
    400 => '#ffffff',
    399 => '#ffffff',
    406 => '#ffffff',
    407 => '#ffffff',
    405 => '#ffffff',
    402 => '#ffffff',
    403 => '#ffffff',
    397 => '#ffffff',
    396 => '#ffffff',
    398 => '#ffffff',
    914 => '#ffffff',
    915 => '#ffffff',
    916 => '#ffffff',
    920 => '#ffffff',
    921 => '#ffffff',
    917 => '#ffffff',
    918 => '#ffffff',
    919 => '#ffffff',
    223 => '#ffffff',
    224 => '#ffffff',
    225 => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Wargaming Event Calendar by Day',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'A daily view of table top miniature wargaming events.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
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
  $handler->display->display_options['path'] = 'warzone/events/wargaming-events/calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '-50';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_event_type' => '9',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    153 => '#FF0000',
    163 => '#00FF00',
    154 => '#FF00FF',
    158 => '#0000FF',
    152 => '#A52A2A',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Miniature War Gaming Calendar by Year',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'A table top miniature wargaming calendar of events displayed by year.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
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
  $handler->display->display_options['path'] = 'warzone/events/wargaming-events/calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['max_items_behavior'] = 'hide';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_event_type' => '9',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    153 => '#FF0000',
    163 => '#00FF00',
    154 => '#FF00FF',
    158 => '#0000FF',
    152 => '#A52A2A',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
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
    'achievement' => 'achievement',
    'event' => 'event',
    'war_zone_league' => 'war_zone_league',
    'league' => 'league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'panel';
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-group-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-group';
  $handler->display->display_options['style_options']['wrapper_class'] = 'list-group';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_event_type' => 'field_event_type',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'war_zone_league' => 'war_zone_league',
    'league' => 'league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_event_date.field_event_date_value';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_date_value']['add_delta'] = 'yes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'calendar/ical/%/calendar.ics';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 1;

  /* Display: Battlefield: Upcoming Events */
  $handler = $view->new_display('panel_pane', 'Battlefield: Upcoming Events', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See more';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'node/!1/calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No scheduled events found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_campaign_badge]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_games_played']['id'] = 'field_games_played';
  $handler->display->display_options['fields']['field_games_played']['table'] = 'field_data_field_games_played';
  $handler->display->display_options['fields']['field_games_played']['field'] = 'field_games_played';
  $handler->display->display_options['fields']['field_games_played']['label'] = '';
  $handler->display->display_options['fields']['field_games_played']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_games_played']['element_label_colon'] = FALSE;
  /* Field: Content: Game */
  $handler->display->display_options['fields']['field_game_warzone']['id'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['table'] = 'field_data_field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['field'] = 'field_game_warzone';
  $handler->display->display_options['fields']['field_game_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_game_warzone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_game_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_game_warzone']['empty'] = '[field_games_played]';
  $handler->display->display_options['fields']['field_game_warzone']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Register link */
  $handler->display->display_options['fields']['register_link']['id'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['register_link']['field'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['label'] = '';
  $handler->display->display_options['fields']['register_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Details';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
  <div class="pull-right"><strong>[field_event_date]</strong></div>
  <div><h4>[title]</h4></div>
</div>

<div>
  <div class="pull-right">
    <ul class="nav nav-pills">
      <li role="presentation">[register_link]</li>
      <li role="presentation">[view_node]</li>
    </ul>
  </div>
  <div>
    <strong>[field_event_type]</strong><br>
    [field_game_warzone]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Battlefield (field_location) */
  $handler->display->display_options['arguments']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['arguments']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['arguments']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['arguments']['field_location_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_location_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_location_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'war_zone_league' => 'war_zone_league',
    'league' => 'league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-0:+3';
  $handler->display->display_options['pane_category']['name'] = 'Battlefields';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_location_nid' => array(
      'type' => 'panel',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Location (field_location)',
    ),
  );

  /* Display: Battlefield Calendar */
  $handler = $view->new_display('panel_pane', 'Battlefield Calendar', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Battlefield (field_location) */
  $handler->display->display_options['arguments']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['arguments']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['arguments']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['arguments']['field_location_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_location_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_location_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['pane_category']['name'] = 'Battlefield';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['event_calendar'] = $view;

  $view = new view();
  $view->name = 'event_type_all_page_layout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Event Type: All: Page Layout';
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
  $handler->display->display_options['pager']['type'] = 'none';
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
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'event_type' => 'event_type',
  );
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid_raw']['operator'] = 'empty';

  /* Display: Event Type List */
  $handler = $view->new_display('panel_pane', 'Event Type List', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Types';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['class'] = 'media-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
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
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['event_type_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'events_all_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events: All: Lists';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix list-group';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<h3>No Events Found</h3>
<p>There are no events found that match the criteria provided.</p>';
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
  /* Relationship: Content: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'pull-left iconbuffer';
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_campaign_badge]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Details';
  /* Field: Content: Register link */
  $handler->display->display_options['fields']['register_link']['id'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['register_link']['field'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['label'] = '';
  $handler->display->display_options['fields']['register_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['register_link']['text'] = 'Register';
  /* Field: Content: Supported Games */
  $handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['label'] = '';
  $handler->display->display_options['fields']['field_supported_games']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_supported_games']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supported_games']['empty'] = 'Other';
  $handler->display->display_options['fields']['field_supported_games']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="comments"><i class="icon glyphicon glyphicon-comment" aria-hidden="true" aria-hidden="true" ></i> <span class="badge iconbuffer">[comment_count]</span></span>';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Field: Field: Event */
  $handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<i class="icon glyphicon glyphicon-screenshot iconbuffer" aria-hidden="true" data-toggle="tooltip" data-placement="bottom" title="War Zone Battle"></i>';
  $handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="Salutes"><i class="icon glyphicon glyphicon-thumbs-up" aria-hidden="true" aria-hidden="true" ></i> <span class="badge iconbuffer">[count]</span></span>';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<span data-toggle="tooltip" data-placement="bottom" title="more info"><i class="icon glyphicon glyphicon-link" aria-hidden="true" aria-hidden="true" ></i></span>';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['path'] = '[field_website-url]';
  $handler->display->display_options['fields']['field_website']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
  <div class="pull-left">
    <span class="thumbnail">[field_image]</span>
  </div>
  <div class="media-body">
<div>
  <div class="pull-right"><strong>[field_supported_games]</strong></div>
  <div><h4 class="media-heading">[title]</h4></div>
</div>

<div>
<div class="clearfix">
  <div class="pull-right">
    <ul class="nav nav-pills">
      <li role="presentation">[register_link]</li>
      <li role="presentation">[view_node]</li>
    </ul>
  </div>
  <div>
    <strong>[field_event_type]: [field_event_date] @ [field_location]</strong>
  </div>
</div>
  <div class="well well-sm">
     [count] [comment_count] [field_event_link] [field_website]
  </div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'achievement' => 'achievement',
    'event' => 'event',
    'war_zone_league' => 'war_zone_league',
    'league' => 'league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'special_event' => 'special_event',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Supported Games (field_supported_games) (selective) */
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['id'] = 'field_supported_games_tid_selective';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['table'] = 'field_data_field_supported_games';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['field'] = 'field_supported_games_tid_selective';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['ui_name'] = 'Supported Games (field_supported_games) (selective)';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['label'] = 'Game System';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['identifier'] = 'field_supported_games_tid_selective';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_field'] = 'field_supported_games';
  $handler->display->display_options['filters']['field_supported_games_tid_selective']['selective_display_sort'] = 'ASC';
  /* Filter criterion: Event type (field_event_type) (selective) */
  $handler->display->display_options['filters']['field_event_type_tid_selective']['id'] = 'field_event_type_tid_selective';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['field'] = 'field_event_type_tid_selective';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['ui_name'] = 'Event type (field_event_type) (selective)';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['identifier'] = 'field_event_type_tid_selective';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid_selective']['selective_display_field'] = 'field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid_selective']['selective_display_sort'] = 'ASC';
  /* Filter criterion: Battlefield (field_location) (selective) */
  $handler->display->display_options['filters']['field_location_nid_selective']['id'] = 'field_location_nid_selective';
  $handler->display->display_options['filters']['field_location_nid_selective']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_nid_selective']['field'] = 'field_location_nid_selective';
  $handler->display->display_options['filters']['field_location_nid_selective']['ui_name'] = 'Battlefield (field_location) (selective)';
  $handler->display->display_options['filters']['field_location_nid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_location_nid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['label'] = 'Battlefield';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['description'] = 'Filter by Battlefield (store or location)';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['identifier'] = 'field_location_nid_selective';
  $handler->display->display_options['filters']['field_location_nid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_location_nid_selective']['selective_display_field'] = 'field_location';
  $handler->display->display_options['filters']['field_location_nid_selective']['selective_display_sort'] = 'ASC';
  /* Filter criterion: Field: Geolocation (field_geolocation) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['relationship'] = 'field_location_nid';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '100',
    'distance2' => 200,
    'unit' => '6371',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Near to';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['description'] = 'search via city, address, or postal code';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geolocation';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geolocation';

  /* Display: All Events */
  $handler = $view->new_display('page', 'All Events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Events';
  $handler->display->display_options['path'] = 'warzone/events/wargaming-events/main';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['description'] = 'A list of all upcoming events';
  $handler->display->display_options['menu']['weight'] = '-50';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'All Events';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Event Type Panel */
  $handler = $view->new_display('panel_pane', 'Event Type Panel', 'panel_pane_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'user',
      'context' => 'entity:uc_cart_item.cart-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['events_all_lists'] = $view;

  $view = new view();
  $view->name = 'events_all_page_layout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events: All: Page Layout';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Image and Date */
  $handler = $view->new_display('panel_pane', 'Image and Date', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Meta */
  $handler = $view->new_display('panel_pane', 'Meta', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Supported Games */
  $handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['label'] = '';
  $handler->display->display_options['fields']['field_supported_games']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_supported_games']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supported_games']['empty'] = 'Other';
  $handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[field_supported_games]</h2>
  <h5>Game System</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-book fa-3" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '<div class="panel-stat3 bg-info">
  <h2 class="m-top-none">[field_event_type]</h2>
  <h5>Category</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-tag" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_event_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['path'] = 'taxonomy/term/[field_event_type-tid]';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '<div class="panel-stat3 bg-success">
  <h2 class="m-top-none">[field_location]</h2>
  <h5>Battlefield</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-globe fa-3" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'node/[field_location-nid]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
  /* Field: Field: Event */
  $handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[field_event_link]</h2>
  <h5>War Zone</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-screenshot fa-3" aria-hidden="true"></span>
  </div>
</div>';
  $handler->display->display_options['fields']['field_event_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
  $handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_link']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Share This and Tools */
  $handler = $view->new_display('panel_pane', 'Share This and Tools', 'panel_pane_3');
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
  $handler->display->display_options['fields']['sharethis']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['sharethis']['element_wrapper_class'] = 'pull-right';
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['empty'] = '<ul class="links list-inline"><li class="comment-add first last">Comments Locked</li>
</ul>';
  $handler->display->display_options['fields']['comments_link']['teaser'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: About the Organizer */
  $handler = $view->new_display('panel_pane', 'About the Organizer', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About the Organizer';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'list-group clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
    'ops' => 'ops',
    'privatemsg_link' => 'privatemsg_link',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: follow */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow';
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
  /* Field: User Badges: Badge Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'user_badges_badges';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Privatemsg: Send Privatemsg link */
  $handler->display->display_options['fields']['privatemsg_link']['id'] = 'privatemsg_link';
  $handler->display->display_options['fields']['privatemsg_link']['table'] = 'users';
  $handler->display->display_options['fields']['privatemsg_link']['field'] = 'privatemsg_link';
  $handler->display->display_options['fields']['privatemsg_link']['relationship'] = 'uid';
  $handler->display->display_options['fields']['privatemsg_link']['label'] = '';
  $handler->display->display_options['fields']['privatemsg_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['privatemsg_link']['text'] = 'Message';
  $handler->display->display_options['fields']['privatemsg_link']['return'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: User Badges: Badge Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'user_badges_badges';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['value'] = 'Level';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Shortcuts */
  $handler = $view->new_display('panel_pane', 'Shortcuts', 'panel_pane_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: glory counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'glory';
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
  $handler->display->display_options['fields']['comment_count']['empty'] = '  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
    </span>
    <span class="text">Comments</span>
  </a>';
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
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
  /* Field: Field: Event */
  $handler->display->display_options['fields']['field_event_link']['id'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['table'] = 'field_data_field_event_link';
  $handler->display->display_options['fields']['field_event_link']['field'] = 'field_event_link';
  $handler->display->display_options['fields']['field_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['text'] = '    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span>
    </span>
    <span class="text">War Zone</span>';
  $handler->display->display_options['fields']['field_event_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['alter']['path'] = 'node/[field_event_link-target_id]';
  $handler->display->display_options['fields']['field_event_link']['alter']['link_class'] = 'shortcut-link';
  $handler->display->display_options['fields']['field_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
[comment_count]
[count]
[field_event_link]
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Details */
  $handler = $view->new_display('panel_pane', 'Details', 'panel_pane_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'panel panel-default';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'panel-body';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="grey-container shortcut-wrapper">
<div class="lead">[field_event_date]</div>
</div>';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '2',
    'multiple_from' => 'now',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['separator'] = '<br>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<span class="glyphicon glyphicon-earphone iconbuffer" aria-hidden="true"></span>[field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<span class="glyphicon glyphicon-link iconbuffer" aria-hidden="true"></span>[field_website]';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['events_all_page_layout'] = $view;

  return $export;
}
