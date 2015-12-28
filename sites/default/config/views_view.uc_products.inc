<?php
/**
 * @file
 * views_view.uc_products.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'uc_products';
$view->description = '';
$view->tag = 'Ubercart';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Products';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer products';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'uc_product_image' => 'uc_product_image',
  'title' => 'title',
  'display_price' => 'display_price',
  'changed' => 'changed',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'uc_product_image' => array(
    'align' => 'views-align-center',
    'separator' => '',
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'display_price' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['order'] = 'desc';
/* Field: Content: Image */
$handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
$handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
$handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
$handler->display->display_options['fields']['uc_product_image']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['uc_product_image']['settings'] = array(
  'image_style' => 'uc_product_list',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
$handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Product: Display price */
$handler->display->display_options['fields']['display_price']['id'] = 'display_price';
$handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
$handler->display->display_options['fields']['display_price']['field'] = 'display_price';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'uc_store';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Node: Is a product */
$handler->display->display_options['filters']['is_product']['id'] = 'is_product';
$handler->display->display_options['filters']['is_product']['table'] = 'uc_products';
$handler->display->display_options['filters']['is_product']['field'] = 'is_product';
$handler->display->display_options['filters']['is_product']['value'] = 1;
$handler->display->display_options['filters']['is_product']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';

/* Display: Admin page */
$handler = $view->new_display('page', 'Admin page', 'admin_page');
$handler->display->display_options['path'] = 'admin/store/products/view';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'View products';
$handler->display->display_options['menu']['description'] = 'View and search products available through your website.';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['menu']['name'] = 'management';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
);
