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
  $view->description = 'Generates the calendar pages amongst other things.';
  $view->tag = 'Events 2.0';
  $view->base_table = 'node';
  $view->human_name = 'Events: All: Calendar';
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
  $handler->display->display_options['style_options']['max_items'] = '3';
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
    'special_event' => '#ffffff',
    'forum' => '#ffffff',
    'gallery' => '#ffffff',
    'game_result_system_' => '#ffffff',
    'gaming_club' => '#ffffff',
    'war_zone_league' => '#ffffff',
    'league' => '#ffffff',
    'listcrit' => '#ffffff',
    'models' => '#ffffff',
    'narrative_campaign' => '#ffffff',
    'narrative_campaign_instance' => '#ffffff',
    'news_source' => '#ffffff',
    'remote_blog' => '#ffffff',
    'war_zone_tournament' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_event_type' => '9',
    'field_supported_games' => '2',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    154 => '#fb5a43',
    153 => '#fb5a43',
    1031 => '#3ec291',
    1917 => '#ffffff',
    152 => '#6bafbd',
    1030 => '#6bafbd',
    1916 => '#ffffff',
    163 => '#f3ce85',
    1145 => '#f3ce85',
    1029 => '#f3ce85',
    1028 => '#f3ce85',
    1144 => '#424f63',
    1034 => '#1649d2',
    212 => '#eebb57',
    158 => '#0000FF',
    1918 => '#ffffff',
    1544 => '#ffffff',
    1545 => '#ffffff',
    1546 => '#ffffff',
    1547 => '#ffffff',
    1548 => '#ffffff',
    1549 => '#ffffff',
    1551 => '#ffffff',
    1552 => '#ffffff',
    1553 => '#ffffff',
    1554 => '#ffffff',
    1555 => '#ffffff',
    1550 => '#ffffff',
    1556 => '#ffffff',
    1557 => '#ffffff',
    1558 => '#ffffff',
    1559 => '#ffffff',
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
    1597 => '#ffffff',
    1598 => '#ffffff',
    1600 => '#ffffff',
    1599 => '#ffffff',
    1601 => '#ffffff',
    1602 => '#ffffff',
    1603 => '#ffffff',
    1604 => '#ffffff',
    1605 => '#ffffff',
    1606 => '#ffffff',
    1607 => '#ffffff',
    1608 => '#ffffff',
    1609 => '#ffffff',
    1610 => '#ffffff',
    1611 => '#ffffff',
    1612 => '#ffffff',
    1613 => '#ffffff',
    1614 => '#ffffff',
    1615 => '#ffffff',
    1616 => '#ffffff',
    1617 => '#ffffff',
    1618 => '#ffffff',
    1468 => '#ffffff',
    1469 => '#ffffff',
    1479 => '#ffffff',
    1482 => '#ffffff',
    1472 => '#ffffff',
    1475 => '#ffffff',
    1470 => '#ffffff',
    1473 => '#ffffff',
    1480 => '#ffffff',
    1476 => '#ffffff',
    1477 => '#ffffff',
    1478 => '#ffffff',
    1481 => '#ffffff',
    1471 => '#ffffff',
    1474 => '#ffffff',
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
    395 => '#ffffff',
    396 => '#ffffff',
    397 => '#ffffff',
    398 => '#ffffff',
    406 => '#ffffff',
    407 => '#ffffff',
    399 => '#ffffff',
    400 => '#ffffff',
    404 => '#ffffff',
    401 => '#ffffff',
    405 => '#ffffff',
    402 => '#ffffff',
    403 => '#ffffff',
    735 => '#ffffff',
    738 => '#ffffff',
    741 => '#ffffff',
    736 => '#ffffff',
    739 => '#ffffff',
    740 => '#ffffff',
    737 => '#ffffff',
    742 => '#ffffff',
    1570 => '#ffffff',
    1572 => '#ffffff',
    1573 => '#ffffff',
    1577 => '#ffffff',
    1574 => '#ffffff',
    1575 => '#ffffff',
    1571 => '#ffffff',
    1579 => '#ffffff',
    1580 => '#ffffff',
    1578 => '#ffffff',
    1581 => '#ffffff',
    1582 => '#ffffff',
    1576 => '#ffffff',
    1826 => '#ffffff',
    1830 => '#ffffff',
    1828 => '#ffffff',
    1827 => '#ffffff',
    1831 => '#ffffff',
    1829 => '#ffffff',
    1832 => '#ffffff',
    1283 => '#ffffff',
    1284 => '#ffffff',
    1285 => '#ffffff',
    1286 => '#ffffff',
    1287 => '#ffffff',
    1288 => '#ffffff',
    1289 => '#ffffff',
    1290 => '#ffffff',
    1291 => '#ffffff',
    1292 => '#ffffff',
    1293 => '#ffffff',
    1294 => '#ffffff',
    1295 => '#ffffff',
    1296 => '#ffffff',
    1297 => '#ffffff',
    1298 => '#ffffff',
    1299 => '#ffffff',
    1376 => '#ffffff',
    1743 => '#ffffff',
    1378 => '#ffffff',
    1377 => '#ffffff',
    1742 => '#ffffff',
    2 => '#ffffff',
    1651 => '#ffffff',
    1652 => '#ffffff',
    1653 => '#ffffff',
    671 => '#ffffff',
    1733 => '#ffffff',
    4 => '#ffffff',
    672 => '#ffffff',
    196 => '#ffffff',
    1306 => '#ffffff',
    197 => '#ffffff',
    19 => '#ffffff',
    3 => '#ffffff',
    562 => '#ffffff',
    1307 => '#ffffff',
    1258 => '#ffffff',
    1381 => '#ffffff',
    5 => '#ffffff',
    21 => '#ffffff',
    1308 => '#ffffff',
    1239 => '#ffffff',
    198 => '#ffffff',
    560 => '#ffffff',
    480 => '#ffffff',
    469 => '#ffffff',
    462 => '#ffffff',
    474 => '#ffffff',
    18 => '#ffffff',
    470 => '#ffffff',
    259 => '#ffffff',
    20 => '#ffffff',
    471 => '#ffffff',
    463 => '#ffffff',
    1732 => '#ffffff',
    22 => '#ffffff',
    475 => '#ffffff',
    260 => '#ffffff',
    476 => '#ffffff',
    561 => '#ffffff',
    464 => '#ffffff',
    465 => '#ffffff',
    472 => '#ffffff',
    477 => '#ffffff',
    466 => '#ffffff',
    467 => '#ffffff',
    478 => '#ffffff',
    17 => '#ffffff',
    26 => '#ffffff',
    468 => '#ffffff',
    473 => '#ffffff',
    479 => '#ffffff',
    258 => '#ffffff',
    23 => '#ffffff',
    24 => '#ffffff',
    25 => '#ffffff',
    27 => '#ffffff',
    28 => '#ffffff',
    826 => '#ffffff',
    828 => '#ffffff',
    829 => '#ffffff',
    830 => '#ffffff',
    835 => '#ffffff',
    831 => '#ffffff',
    832 => '#ffffff',
    833 => '#ffffff',
    834 => '#ffffff',
    836 => '#ffffff',
    837 => '#ffffff',
    838 => '#ffffff',
    839 => '#ffffff',
    843 => '#ffffff',
    840 => '#ffffff',
    827 => '#ffffff',
    841 => '#ffffff',
    842 => '#ffffff',
    844 => '#ffffff',
    845 => '#ffffff',
    55 => '#ffffff',
    56 => '#ffffff',
    57 => '#ffffff',
    58 => '#ffffff',
    59 => '#ffffff',
    60 => '#ffffff',
    61 => '#ffffff',
    62 => '#ffffff',
    63 => '#ffffff',
    64 => '#ffffff',
    65 => '#ffffff',
    66 => '#ffffff',
    67 => '#ffffff',
    68 => '#ffffff',
    960 => '#ffffff',
    961 => '#ffffff',
    69 => '#ffffff',
    70 => '#ffffff',
    42 => '#ffffff',
    51 => '#ffffff',
    175 => '#ffffff',
    46 => '#ffffff',
    43 => '#ffffff',
    45 => '#ffffff',
    53 => '#ffffff',
    48 => '#ffffff',
    54 => '#ffffff',
    47 => '#ffffff',
    52 => '#ffffff',
    44 => '#ffffff',
    50 => '#ffffff',
    914 => '#ffffff',
    915 => '#ffffff',
    916 => '#ffffff',
    920 => '#ffffff',
    921 => '#ffffff',
    917 => '#ffffff',
    918 => '#ffffff',
    919 => '#ffffff',
    223 => '#ffffff',
    1744 => '#ffffff',
    1741 => '#ffffff',
    224 => '#ffffff',
    225 => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_group'] = array(
    6176 => '#ffffff',
    7446 => '#ffffff',
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
  /* Field: Field: Battlefield */
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
  /* Sort criterion: Content: Event Date -  start date (field_event_date_warzone) */
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['id'] = 'field_event_date_warzone_value';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['field'] = 'field_event_date_warzone_value';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['order'] = 'DESC';
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
    'event' => 'event',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'war_zone_tournament' => 'war_zone_tournament',
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
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    154 => '154',
    153 => '153',
    1031 => '1031',
    1917 => '1917',
    152 => '152',
    163 => '163',
    1144 => '1144',
    1034 => '1034',
    212 => '212',
    158 => '158',
    1918 => '1918',
  );
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
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date_warzone.field_event_date_warzone_value' => 'field_data_field_event_date_warzone.field_event_date_warzone_value',
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
  $handler->display->display_options['path'] = 'theater/events/month';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['description'] = 'View a calendar of events.';
  $handler->display->display_options['tab_options']['weight'] = '10';

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
  $handler->display->display_options['style_options']['theme_style'] = '0';
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
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
    'field_data_field_event_date_warzone.field_event_date_warzone_value' => 'field_data_field_event_date_warzone.field_event_date_warzone_value',
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
  $handler->display->display_options['path'] = 'theater/events//week';
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
  $handler->display->display_options['style_options']['theme_style'] = '2';
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
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
    'field_data_field_event_date_warzone.field_event_date_warzone_value' => 'field_data_field_event_date_warzone.field_event_date_warzone_value',
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
  $handler->display->display_options['path'] = 'theater/events/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '-10';
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
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date_warzone.field_event_date_warzone_value' => 'field_data_field_event_date_warzone.field_event_date_warzone_value',
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
  $handler->display->display_options['path'] = 'theater/events//year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wargaming Events This Month';
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
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '3';
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="seperator"></div>
<div class="seperator"></div>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date_warzone.field_event_date_warzone_value' => 'field_data_field_event_date_warzone.field_event_date_warzone_value',
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
    'event' => 'event',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Events';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'theater/events/list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_campaign_badge';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'field_event_date_warzone';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'button',
    'image_link' => 'content',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_warzone']['id'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['field'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_warzone']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date_warzone) */
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['id'] = 'field_event_date_warzone_value';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['field'] = 'field_event_date_warzone_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'field_data_field_event_date_warzone.field_event_date_warzone_value' => 'field_data_field_event_date_warzone.field_event_date_warzone_value',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
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
  $export['event_calendar'] = $view;

  $view = new view();
  $view->name = 'event_type_all_page_layout';
  $view->description = 'Page Elements for the Event Type Term page. May be deprecated because this one might be able to use the standard layout.';
  $view->tag = 'Events 2.0';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Term: Event Type: Page Layout';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'name';
  $handler->display->display_options['style_options']['body_field'] = 'description';
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
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['event_type_all_page_layout'] = $view;

  $view = new view();
  $view->name = 'events_all_lists';
  $view->description = 'Lists of Events.  Primarily for the Calendar Event List pages. Includes War Zones.';
  $view->tag = 'Events 2.0';
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
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
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
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
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
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Event Date -  start date (field_event_date_warzone) */
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['id'] = 'field_event_date_warzone_value';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['field'] = 'field_event_date_warzone_value';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['order'] = 'DESC';
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
    'event' => 'event',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
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
  $handler->display->display_options['path'] = 'theater/events/list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['description'] = 'A list of all upcoming events';
  $handler->display->display_options['menu']['weight'] = '-30';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'All Events';
  $handler->display->display_options['tab_options']['description'] = 'A list of all miniature wargaming events on iToysoldiers';
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
    'event' => 'event',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
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

  /* Display: Theater Page Panel */
  $handler = $view->new_display('panel_pane', 'Theater Page Panel', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Imminent Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'field_event_date_warzone';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Field: Battlefield */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'node_reference_plain';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_warzone']['id'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['field'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_warzone']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date_warzone) */
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['id'] = 'field_event_date_warzone_value';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['sorts']['field_event_date_warzone_value']['field'] = 'field_event_date_warzone_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'event' => 'event',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
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
  /* Filter criterion: Content: Event Date -  start date (field_event_date_warzone) */
  $handler->display->display_options['filters']['field_event_date_warzone_value']['id'] = 'field_event_date_warzone_value';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['field'] = 'field_event_date_warzone_value';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['default_date'] = 'now';
  $handler->display->display_options['pane_category']['name'] = 'Theater';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['events_all_lists'] = $view;

  $view = new view();
  $view->name = 'events_all_page_layout';
  $view->description = 'Page Elements for the Event pages.';
  $view->tag = 'Events 2.0';
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
    'war_zone_league' => 'war_zone_league',
    'war_zone_tournament' => 'war_zone_tournament',
  );

  /* Display: Tools */
  $handler = $view->new_display('panel_pane', 'Tools', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'btn-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="tools"></a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: glory */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
  /* Relationship: Flags: event_all_interested */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'interested';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'event_all_interested';
  /* Relationship: Flags: event_all_going */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'going';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'event_all_going';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comments_link']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['comments_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['comments_link']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['empty'] = '<ul class="links list-inline"><li class="comment-add first last">Comments Locked</li>
</ul>';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'normal';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops_1']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops_1']['element_default_classes'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['ops_2']['label'] = '';
  $handler->display->display_options['fields']['ops_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops_2']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops_2']['element_default_classes'] = FALSE;
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
  /* Filter criterion: Content: I am the organizer (field_event_organizer) */
  $handler->display->display_options['filters']['field_event_organizer_value']['id'] = 'field_event_organizer_value';
  $handler->display->display_options['filters']['field_event_organizer_value']['table'] = 'field_data_field_event_organizer';
  $handler->display->display_options['filters']['field_event_organizer_value']['field'] = 'field_event_organizer_value';
  $handler->display->display_options['filters']['field_event_organizer_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Meta */
  $handler = $view->new_display('panel_pane', 'Meta', 'panel_pane_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'events_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_2';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'events_all_page_layout';
  $handler->display->display_options['fields']['view_1']['display'] = 'panel_pane_3';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container">
<div class="row">
<div class="col-sm-6">
<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-tag fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[field_event_type]</strong>
    </div>
</div>
<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-book fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[view]</strong>
    </div>
</div>
</div>
<div class="col-sm-6">
<div class="seperator"></div>
[view_1]
</div>
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Location */
  $handler = $view->new_display('panel_pane', 'Location', 'panel_pane_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Battlefield (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  /* Relationship: Content: Address (field_address_battlefield) */
  $handler->display->display_options['relationships']['field_address_battlefield_lid']['id'] = 'field_address_battlefield_lid';
  $handler->display->display_options['relationships']['field_address_battlefield_lid']['table'] = 'field_data_field_address_battlefield';
  $handler->display->display_options['relationships']['field_address_battlefield_lid']['field'] = 'field_address_battlefield_lid';
  $handler->display->display_options['relationships']['field_address_battlefield_lid']['relationship'] = 'field_location_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'lead';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_address_battlefield_lid';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'field_address_battlefield_lid';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['relationship'] = 'field_address_battlefield_lid';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_address_battlefield_lid';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-map-marker fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[title]</strong>
        <div class="muted">[street], [city], [province], [postal_code]</div>
    </div>
</div>
<div class="seperator"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Date */
  $handler = $view->new_display('panel_pane', 'Date', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_warzone_1']['id'] = 'field_event_date_warzone_1';
  $handler->display->display_options['fields']['field_event_date_warzone_1']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone_1']['field'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_warzone_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_warzone_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_warzone_1']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_event_date_warzone_1']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time span',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_warzone']['id'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['field'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_warzone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_warzone']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-clock-o fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        [field_event_date_warzone]
        [field_event_date_warzone_1]
    </div>
</div>
<div class="seperator"></div>';
  $handler->display->display_options['fields']['field_event_date_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_warzone']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: More Info */
  $handler = $view->new_display('panel_pane', 'More Info', 'panel_pane_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-globe fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[field_website]</strong><br>
        <span class="muted">more info</span>
    </div>
</div>
<div class="seperator"></div>';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Suggested Events */
  $handler = $view->new_display('panel_pane', 'Suggested Events', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Suggested Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_image';
  $handler->display->display_options['style_options']['heading_field'] = '';
  $handler->display->display_options['style_options']['body_field'] = 'nothing';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Similar By Terms: Similarity */
  $handler->display->display_options['fields']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['fields']['similarterms']['table'] = 'node';
  $handler->display->display_options['fields']['similarterms']['field'] = 'similarterms';
  $handler->display->display_options['fields']['similarterms']['label'] = '';
  $handler->display->display_options['fields']['similarterms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['similarterms']['count_type'] = '0';
  /* Field: Content: Campaign Badge */
  $handler->display->display_options['fields']['field_campaign_badge']['id'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['table'] = 'field_data_field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['field'] = 'field_campaign_badge';
  $handler->display->display_options['fields']['field_campaign_badge']['label'] = '';
  $handler->display->display_options['fields']['field_campaign_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_campaign_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campaign_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_badge']['settings'] = array(
    'image_style' => 'avatar_small',
    'image_link' => 'content',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '[field_campaign_badge]';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'avatar_small',
    'image_link' => 'content',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_warzone']['id'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['field'] = 'field_event_date_warzone';
  $handler->display->display_options['fields']['field_event_date_warzone']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_warzone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_warzone']['settings'] = array(
    'format_type' => 'privatemsg_current_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<small>[title]<br>
[field_event_date_warzone]<br>
[field_event_type]<br>
</small>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'special_event' => 'special_event',
    'war_zone_league' => 'war_zone_league',
    'narrative_campaign_instance' => 'narrative_campaign_instance',
    'war_zone_tournament' => 'war_zone_tournament',
  );
  /* Filter criterion: Content: Event Date -  start date (field_event_date_warzone) */
  $handler->display->display_options['filters']['field_event_date_warzone_value']['id'] = 'field_event_date_warzone_value';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['table'] = 'field_data_field_event_date_warzone';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['field'] = 'field_event_date_warzone_value';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['default_date'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_event_date_warzone_value']['year_range'] = '-0:+3';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Supported Games */
  $handler = $view->new_display('panel_pane', 'Supported Games', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Supported Games */
  $handler->display->display_options['fields']['field_supported_games']['id'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['table'] = 'field_data_field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['field'] = 'field_supported_games';
  $handler->display->display_options['fields']['field_supported_games']['label'] = '';
  $handler->display->display_options['fields']['field_supported_games']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supported_games']['empty'] = 'Other';
  $handler->display->display_options['fields']['field_supported_games']['delta_offset'] = '0';

  /* Display: Order of Battle */
  $handler = $view->new_display('panel_pane', 'Order of Battle', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Order of Battle';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: event_all_interested counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'interested';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'event_all_interested';
  /* Relationship: Flags: event_all_going counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'going';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'event_all_going';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Interested';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = 'Going';
  $handler->display->display_options['fields']['count_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
<div class="col-xs-6">
<span class="lead">[count]</span><br>
interested
</div>
<div class="col-xs-6">
<span class="lead">[count_1]</span><br>
going
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Entry Fee */
  $handler = $view->new_display('panel_pane', 'Entry Fee', 'panel_pane_9');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Entry Fee */
  $handler->display->display_options['fields']['field_entry_fee']['id'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['table'] = 'field_data_field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['field'] = 'field_entry_fee';
  $handler->display->display_options['fields']['field_entry_fee']['label'] = '';
  $handler->display->display_options['fields']['field_entry_fee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_entry_fee']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-money fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[field_entry_fee]</strong><br>
        <small>Entry Fee</small>
    </div>
</div>
<div class="seperator"></div>';
  $handler->display->display_options['fields']['field_entry_fee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_fee']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: War Zone Meta */
  $handler = $view->new_display('panel_pane', 'War Zone Meta', 'panel_pane_11');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'events_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_2';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'events_all_page_layout';
  $handler->display->display_options['fields']['view_1']['display'] = 'panel_pane_12';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey-container">
<div class="row">
<div class="col-sm-6">
<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-tag fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[field_event_type]</strong>
    </div>
</div>
<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-book fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[view]</strong>
    </div>
</div>
</div>
<div class="col-sm-6">
<div class="seperator"></div>
[view_1]
</div>
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: War Zone Tools */
  $handler = $view->new_display('panel_pane', 'War Zone Tools', 'panel_pane_12');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'btn-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a name="tools"></a>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: glory */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'glory';
  /* Relationship: Flags: event_all_interested */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'interested';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'event_all_interested';
  /* Relationship: Flags: event_all_going */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'going';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'event_all_going';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['label'] = '';
  $handler->display->display_options['fields']['comments_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comments_link']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['comments_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['comments_link']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['comments_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comments_link']['empty'] = '<ul class="links list-inline"><li class="comment-add first last">Comments Locked</li>
</ul>';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'normal';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops_1']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops_1']['element_default_classes'] = FALSE;
  /* Field: Content: Register link */
  $handler->display->display_options['fields']['register_link']['id'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['register_link']['field'] = 'register_link';
  $handler->display->display_options['fields']['register_link']['label'] = '';
  $handler->display->display_options['fields']['register_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['register_link']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['register_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['register_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['register_link']['text'] = 'Register';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Order of Battle: Registration */
  $handler = $view->new_display('panel_pane', 'Order of Battle: Registration', 'panel_pane_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Order of Battle';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: event_all_interested counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'interested';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'event_all_interested';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Interested';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['empty'] = '0';
  $handler->display->display_options['fields']['view']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'events_all_page_layout';
  $handler->display->display_options['fields']['view']['display'] = 'panel_pane_14';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
<div class="col-xs-6">
<span class="lead">[count]</span><br>
interested
</div>
<div class="col-xs-6">
[view]
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Player Count : Registration */
  $handler = $view->new_display('panel_pane', 'Player Count : Registration', 'panel_pane_14');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<span class="lead">0</span>
<br>
going';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node registration: Registrations */
  $handler->display->display_options['relationships']['node_registration_rel']['id'] = 'node_registration_rel';
  $handler->display->display_options['relationships']['node_registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['node_registration_rel']['field'] = 'node_registration_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['fields']['registration_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['text'] = '<span class="lead"><a href="/node/!1/player-list">[registration_id]</a></span>
<br>
going';
  $handler->display->display_options['fields']['registration_id']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id']['empty'] = '<span class="lead">0</span>
<br>
going';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node registration: Cancelled */
  $handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
  $handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
  $handler->display->display_options['filters']['cancelled']['relationship'] = 'node_registration_rel';
  $handler->display->display_options['filters']['cancelled']['value'] = '0';

  /* Display: News Panel */
  $handler = $view->new_display('panel_pane', 'News Panel', 'panel_pane_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event News';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'node/!1/warzone-updates';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'nothing';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['id'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['field'] = 'reverse_field_event_link_node';
  $handler->display->display_options['relationships']['reverse_field_event_link_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="fa fa-newspaper-o fa-lg fa-fw"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_event_link_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'gallery' => 'gallery',
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Points per Army */
  $handler = $view->new_display('panel_pane', 'Points per Army', 'panel_pane_16');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Points per army */
  $handler->display->display_options['fields']['field_points_per_army']['id'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['table'] = 'field_data_field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['field'] = 'field_points_per_army';
  $handler->display->display_options['fields']['field_points_per_army']['label'] = '';
  $handler->display->display_options['fields']['field_points_per_army']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_points_per_army']['alter']['text'] = '<div class="media">
    <div class="media-left pull-left">
        <span class="fa fa-dot-circle-o fa-lg grey fa-fw"></span>
    </div>
    <div class="media-body">
        <strong>[field_points_per_army]</strong><br>
        <small>Points per Army</small>
    </div>
</div>
<div class="seperator"></div>';
  $handler->display->display_options['fields']['field_points_per_army']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_points_per_army']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['events_all_page_layout'] = $view;

  return $export;
}
