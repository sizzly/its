<?php
/**
 * @file
 * views_view.uc_customers.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'uc_customers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'uc_customers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Customers';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view customers';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'uid' => 'uid',
  'name' => 'name',
  'billing_full_name' => 'billing_full_name',
  'primary_email' => 'primary_email',
  'billing_city' => 'billing_city',
  'zone_code' => 'billing_city',
  'country_name' => 'billing_city',
  'order_id' => 'order_id',
  'order_total' => 'order_total',
);
$handler->display->display_options['style_options']['default'] = 'order_id';
$handler->display->display_options['style_options']['info'] = array(
  'uid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'billing_full_name' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'primary_email' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'billing_city' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ', ',
    'empty_column' => 0,
  ),
  'zone_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'country_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'order_id' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'order_total' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: User: Orders */
$handler->display->display_options['relationships']['uc_orders']['id'] = 'uc_orders';
$handler->display->display_options['relationships']['uc_orders']['table'] = 'users';
$handler->display->display_options['relationships']['uc_orders']['field'] = 'uc_orders';
$handler->display->display_options['relationships']['uc_orders']['required'] = TRUE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'User';
/* Field: Order: Billing address: Full name */
$handler->display->display_options['fields']['billing_full_name']['id'] = 'billing_full_name';
$handler->display->display_options['fields']['billing_full_name']['table'] = 'uc_orders';
$handler->display->display_options['fields']['billing_full_name']['field'] = 'billing_full_name';
$handler->display->display_options['fields']['billing_full_name']['relationship'] = 'uc_orders';
$handler->display->display_options['fields']['billing_full_name']['label'] = 'Name';
/* Field: Order: Email address */
$handler->display->display_options['fields']['primary_email']['id'] = 'primary_email';
$handler->display->display_options['fields']['primary_email']['table'] = 'uc_orders';
$handler->display->display_options['fields']['primary_email']['field'] = 'primary_email';
$handler->display->display_options['fields']['primary_email']['relationship'] = 'uc_orders';
/* Field: Order: Billing address: City */
$handler->display->display_options['fields']['billing_city']['id'] = 'billing_city';
$handler->display->display_options['fields']['billing_city']['table'] = 'uc_orders';
$handler->display->display_options['fields']['billing_city']['field'] = 'billing_city';
$handler->display->display_options['fields']['billing_city']['relationship'] = 'uc_orders';
$handler->display->display_options['fields']['billing_city']['label'] = 'Location';
/* Field: Order: Billing address: State/Province code */
$handler->display->display_options['fields']['zone_code']['id'] = 'zone_code';
$handler->display->display_options['fields']['zone_code']['table'] = 'billing_zones';
$handler->display->display_options['fields']['zone_code']['field'] = 'zone_code';
$handler->display->display_options['fields']['zone_code']['relationship'] = 'uc_orders';
$handler->display->display_options['fields']['zone_code']['label'] = '';
$handler->display->display_options['fields']['zone_code']['element_label_colon'] = FALSE;
/* Field: Order: Billing address: Country */
$handler->display->display_options['fields']['country_name']['id'] = 'country_name';
$handler->display->display_options['fields']['country_name']['table'] = 'billing_countries';
$handler->display->display_options['fields']['country_name']['field'] = 'country_name';
$handler->display->display_options['fields']['country_name']['relationship'] = 'uc_orders';
$handler->display->display_options['fields']['country_name']['label'] = '';
$handler->display->display_options['fields']['country_name']['element_label_colon'] = FALSE;
/* Field: COUNT(Order: Order ID) */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['relationship'] = 'uc_orders';
$handler->display->display_options['fields']['order_id']['group_type'] = 'count';
$handler->display->display_options['fields']['order_id']['label'] = 'Orders';
$handler->display->display_options['fields']['order_id']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['order_id']['alter']['path'] = 'admin/store/customers/orders/[uid]';
/* Field: SUM(Order: Order total) */
$handler->display->display_options['fields']['order_total']['id'] = 'order_total';
$handler->display->display_options['fields']['order_total']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_total']['field'] = 'order_total';
$handler->display->display_options['fields']['order_total']['relationship'] = 'uc_orders';
$handler->display->display_options['fields']['order_total']['group_type'] = 'sum';
$handler->display->display_options['fields']['order_total']['label'] = 'Total';
$handler->display->display_options['fields']['order_total']['precision'] = '0';
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 0;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
/* Filter criterion: Order: Order status */
$handler->display->display_options['filters']['order_status']['id'] = 'order_status';
$handler->display->display_options['filters']['order_status']['table'] = 'uc_orders';
$handler->display->display_options['filters']['order_status']['field'] = 'order_status';
$handler->display->display_options['filters']['order_status']['relationship'] = 'uc_orders';
$handler->display->display_options['filters']['order_status']['value'] = array(
  '_active' => '_active',
);
$handler->display->display_options['filters']['order_status']['group'] = 0;
/* Filter criterion: Order: Billing address: First name */
$handler->display->display_options['filters']['billing_first_name']['id'] = 'billing_first_name';
$handler->display->display_options['filters']['billing_first_name']['table'] = 'uc_orders';
$handler->display->display_options['filters']['billing_first_name']['field'] = 'billing_first_name';
$handler->display->display_options['filters']['billing_first_name']['relationship'] = 'uc_orders';
$handler->display->display_options['filters']['billing_first_name']['operator'] = 'allwords';
$handler->display->display_options['filters']['billing_first_name']['group'] = 0;
$handler->display->display_options['filters']['billing_first_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['billing_first_name']['expose']['operator_id'] = 'billing_first_name_op';
$handler->display->display_options['filters']['billing_first_name']['expose']['label'] = 'First name';
$handler->display->display_options['filters']['billing_first_name']['expose']['operator'] = 'billing_first_name_op';
$handler->display->display_options['filters']['billing_first_name']['expose']['identifier'] = 'billing_first_name';
/* Filter criterion: Order: Billing address: Last name */
$handler->display->display_options['filters']['billing_last_name']['id'] = 'billing_last_name';
$handler->display->display_options['filters']['billing_last_name']['table'] = 'uc_orders';
$handler->display->display_options['filters']['billing_last_name']['field'] = 'billing_last_name';
$handler->display->display_options['filters']['billing_last_name']['relationship'] = 'uc_orders';
$handler->display->display_options['filters']['billing_last_name']['operator'] = 'allwords';
$handler->display->display_options['filters']['billing_last_name']['group'] = 0;
$handler->display->display_options['filters']['billing_last_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['billing_last_name']['expose']['operator_id'] = 'billing_last_name_op';
$handler->display->display_options['filters']['billing_last_name']['expose']['label'] = 'Last name';
$handler->display->display_options['filters']['billing_last_name']['expose']['operator'] = 'billing_last_name_op';
$handler->display->display_options['filters']['billing_last_name']['expose']['identifier'] = 'billing_last_name';
/* Filter criterion: Order: Email address */
$handler->display->display_options['filters']['primary_email']['id'] = 'primary_email';
$handler->display->display_options['filters']['primary_email']['table'] = 'uc_orders';
$handler->display->display_options['filters']['primary_email']['field'] = 'primary_email';
$handler->display->display_options['filters']['primary_email']['relationship'] = 'uc_orders';
$handler->display->display_options['filters']['primary_email']['operator'] = 'allwords';
$handler->display->display_options['filters']['primary_email']['group'] = 0;
$handler->display->display_options['filters']['primary_email']['exposed'] = TRUE;
$handler->display->display_options['filters']['primary_email']['expose']['operator_id'] = 'primary_email_op';
$handler->display->display_options['filters']['primary_email']['expose']['label'] = 'Email address';
$handler->display->display_options['filters']['primary_email']['expose']['operator'] = 'primary_email_op';
$handler->display->display_options['filters']['primary_email']['expose']['identifier'] = 'primary_email';

/* Display: Admin page */
$handler = $view->new_display('page', 'Admin page', 'admin_page');
$handler->display->display_options['path'] = 'admin/store/customers/view';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'View customers';
$handler->display->display_options['menu']['description'] = 'View and search customer information.';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['menu']['name'] = 'management';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
);
