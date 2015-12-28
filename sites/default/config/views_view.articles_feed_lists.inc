<?php
/**
 * @file
 * views_view.articles_feed_lists.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'articles_feed_lists';
$view->description = 'Lists of Articles associated with their source feeds.';
$view->tag = 'Articles and Feeds 2.0';
$view->base_table = 'node';
$view->human_name = 'Articles: Feed: Lists';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'War Gaming News';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '15';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title_1' => 'title_1',
  'created' => 'created',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['row_options']['separator'] = ' | ';
/* Relationship: Feeds item: Owner feed */
$handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
$handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
$handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
$handler->display->display_options['relationships']['feed_nid']['required'] = TRUE;
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website']['id'] = 'field_website';
$handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website']['label'] = '';
$handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
/* Field: Field: Website */
$handler->display->display_options['fields']['field_website_1']['id'] = 'field_website_1';
$handler->display->display_options['fields']['field_website_1']['table'] = 'field_data_field_website';
$handler->display->display_options['fields']['field_website_1']['field'] = 'field_website';
$handler->display->display_options['fields']['field_website_1']['relationship'] = 'feed_nid';
$handler->display->display_options['fields']['field_website_1']['label'] = '';
$handler->display->display_options['fields']['field_website_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_website_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_website_1']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_website_1']['type'] = 'link_plain';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = '[field_website]';
$handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'feed_nid';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_website_1] ';
$handler->display->display_options['fields']['title_1']['alter']['rel'] = 'nofollow';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
$handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['created']['format_date_sql'] = 0;
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_type'] = 'span';
$handler->display->display_options['fields']['timestamp']['element_class'] = 'label label-default';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['timestamp']['link_to_node'] = TRUE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '300',
  'trim_type' => 'chars',
  'trim_suffix' => '...',
  'more_link' => '0',
  'more_text' => 'Read more',
  'summary_handler' => 'full',
  'trim_options' => array(
    'text' => 'text',
  ),
);
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
  'article' => 'article',
);

/* Display: Wargame News Feed Page */
$handler = $view->new_display('page', 'Wargame News Feed Page', 'page');
$handler->display->display_options['metatags'] = array(
  'und' => array(
    'title' => array(
      'value' => 'Wargaming News | [site:name]',
      'default' => '[view:title] | [site:name]',
    ),
    'description' => array(
      'value' => 'iToysoldiers collects table top miniature wargaming news from a host of sources and provides them here for your convenience.',
      'default' => '[view:description]',
    ),
    'abstract' => array(
      'value' => '',
      'default' => '',
    ),
    'keywords' => array(
      'value' => 'table top wargaming news',
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
$handler->display->display_options['path'] = 'tabletop-wargaming-news';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'link',
  3 => 'text',
);
