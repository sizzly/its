<?php
/**
 * @file
 * views_view.uc_orders.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'uc_orders';
$view->description = '';
$view->tag = 'Ubercart';
$view->base_table = 'uc_orders';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Orders';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view all orders';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'actions' => 'actions',
  'order_id' => 'order_id',
  'billing_full_name' => 'billing_full_name',
  'order_status' => 'order_status',
  'created' => 'created',
  'order_total' => 'order_total',
);
$handler->display->display_options['style_options']['default'] = 'order_id';
$handler->display->display_options['style_options']['info'] = array(
  'actions' => array(
    'align' => '',
    'separator' => '',
  ),
  'order_id' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'billing_full_name' => array(
    'align' => '',
    'separator' => '',
  ),
  'order_status' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'created' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
  'order_total' => array(
    'sortable' => 1,
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['order'] = 'desc';
/* Field: Order: Actions */
$handler->display->display_options['fields']['actions']['id'] = 'actions';
$handler->display->display_options['fields']['actions']['table'] = 'uc_orders';
$handler->display->display_options['fields']['actions']['field'] = 'actions';
/* Field: Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['link_to_order'] = 1;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = '[billing_full_name]';
$handler->display->display_options['fields']['uid']['alter']['path'] = '[uid]';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Order: Billing address: Full name */
$handler->display->display_options['fields']['billing_full_name']['id'] = 'billing_full_name';
$handler->display->display_options['fields']['billing_full_name']['table'] = 'uc_orders';
$handler->display->display_options['fields']['billing_full_name']['field'] = 'billing_full_name';
$handler->display->display_options['fields']['billing_full_name']['label'] = 'Customer';
$handler->display->display_options['fields']['billing_full_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['billing_full_name']['alter']['path'] = 'user/[uid]';
/* Field: Order: Order total */
$handler->display->display_options['fields']['order_total']['id'] = 'order_total';
$handler->display->display_options['fields']['order_total']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_total']['field'] = 'order_total';
$handler->display->display_options['fields']['order_total']['label'] = 'Total';
$handler->display->display_options['fields']['order_total']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['order_total']['precision'] = '0';
/* Field: Order: Creation date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'uc_orders';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Purchase date';
$handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'uc_store';
/* Field: Order: Order status */
$handler->display->display_options['fields']['order_status']['id'] = 'order_status';
$handler->display->display_options['fields']['order_status']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_status']['field'] = 'order_status';
$handler->display->display_options['fields']['order_status']['label'] = 'Status';
$handler->display->display_options['fields']['order_status']['hide_alter_empty'] = FALSE;
/* Filter criterion: Order: Order ID */
$handler->display->display_options['filters']['order_id']['id'] = 'order_id';
$handler->display->display_options['filters']['order_id']['table'] = 'uc_orders';
$handler->display->display_options['filters']['order_id']['field'] = 'order_id';
$handler->display->display_options['filters']['order_id']['group'] = 0;
$handler->display->display_options['filters']['order_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['order_id']['expose']['operator_id'] = 'order_id_op';
$handler->display->display_options['filters']['order_id']['expose']['label'] = 'View order number';
$handler->display->display_options['filters']['order_id']['expose']['operator'] = 'order_id_op';
$handler->display->display_options['filters']['order_id']['expose']['identifier'] = 'order_id';
/* Filter criterion: Order: Order status */
$handler->display->display_options['filters']['order_status']['id'] = 'order_status';
$handler->display->display_options['filters']['order_status']['table'] = 'uc_orders';
$handler->display->display_options['filters']['order_status']['field'] = 'order_status';
$handler->display->display_options['filters']['order_status']['value'] = array(
  '_active' => '_active',
);
$handler->display->display_options['filters']['order_status']['group'] = 0;
$handler->display->display_options['filters']['order_status']['exposed'] = TRUE;
$handler->display->display_options['filters']['order_status']['expose']['operator_id'] = 'order_status_op';
$handler->display->display_options['filters']['order_status']['expose']['label'] = 'View by status';
$handler->display->display_options['filters']['order_status']['expose']['operator'] = 'order_status_op';
$handler->display->display_options['filters']['order_status']['expose']['identifier'] = 'order_status';

/* Display: Admin page */
$handler = $view->new_display('page', 'Admin page', 'admin_page');
$handler->display->display_options['path'] = 'admin/store/orders/view';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'View orders';
$handler->display->display_options['menu']['description'] = 'View and process the orders received through your website.';
$handler->display->display_options['menu']['weight'] = '-10';
$handler->display->display_options['menu']['name'] = 'management';

/* Display: Search */
$handler = $view->new_display('page', 'Search', 'search');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Search orders';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Order: Billing address: First name */
$handler->display->display_options['filters']['billing_first_name']['id'] = 'billing_first_name';
$handler->display->display_options['filters']['billing_first_name']['table'] = 'uc_orders';
$handler->display->display_options['filters']['billing_first_name']['field'] = 'billing_first_name';
$handler->display->display_options['filters']['billing_first_name']['operator'] = 'allwords';
$handler->display->display_options['filters']['billing_first_name']['group'] = 0;
$handler->display->display_options['filters']['billing_first_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['billing_first_name']['expose']['operator_id'] = 'billing_first_name_op';
$handler->display->display_options['filters']['billing_first_name']['expose']['label'] = 'Billing first name';
$handler->display->display_options['filters']['billing_first_name']['expose']['operator'] = 'billing_first_name_op';
$handler->display->display_options['filters']['billing_first_name']['expose']['identifier'] = 'billing_first_name';
$handler->display->display_options['filters']['billing_first_name']['expose']['remember'] = TRUE;
/* Filter criterion: Order: Billing address: Last name */
$handler->display->display_options['filters']['billing_last_name']['id'] = 'billing_last_name';
$handler->display->display_options['filters']['billing_last_name']['table'] = 'uc_orders';
$handler->display->display_options['filters']['billing_last_name']['field'] = 'billing_last_name';
$handler->display->display_options['filters']['billing_last_name']['operator'] = 'allwords';
$handler->display->display_options['filters']['billing_last_name']['group'] = 0;
$handler->display->display_options['filters']['billing_last_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['billing_last_name']['expose']['operator_id'] = 'billing_last_name_op';
$handler->display->display_options['filters']['billing_last_name']['expose']['label'] = 'Billing last name';
$handler->display->display_options['filters']['billing_last_name']['expose']['operator'] = 'billing_last_name_op';
$handler->display->display_options['filters']['billing_last_name']['expose']['identifier'] = 'billing_last_name';
$handler->display->display_options['filters']['billing_last_name']['expose']['remember'] = TRUE;
/* Filter criterion: Order: Billing address: Company */
$handler->display->display_options['filters']['billing_company']['id'] = 'billing_company';
$handler->display->display_options['filters']['billing_company']['table'] = 'uc_orders';
$handler->display->display_options['filters']['billing_company']['field'] = 'billing_company';
$handler->display->display_options['filters']['billing_company']['operator'] = 'allwords';
$handler->display->display_options['filters']['billing_company']['group'] = 0;
$handler->display->display_options['filters']['billing_company']['exposed'] = TRUE;
$handler->display->display_options['filters']['billing_company']['expose']['operator_id'] = 'billing_company_op';
$handler->display->display_options['filters']['billing_company']['expose']['label'] = 'Billing company';
$handler->display->display_options['filters']['billing_company']['expose']['operator'] = 'billing_company_op';
$handler->display->display_options['filters']['billing_company']['expose']['identifier'] = 'billing_company';
$handler->display->display_options['filters']['billing_company']['expose']['remember'] = TRUE;
/* Filter criterion: Order: Delivery address: First name */
$handler->display->display_options['filters']['delivery_first_name']['id'] = 'delivery_first_name';
$handler->display->display_options['filters']['delivery_first_name']['table'] = 'uc_orders';
$handler->display->display_options['filters']['delivery_first_name']['field'] = 'delivery_first_name';
$handler->display->display_options['filters']['delivery_first_name']['operator'] = 'allwords';
$handler->display->display_options['filters']['delivery_first_name']['group'] = 0;
$handler->display->display_options['filters']['delivery_first_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['delivery_first_name']['expose']['operator_id'] = 'delivery_first_name_op';
$handler->display->display_options['filters']['delivery_first_name']['expose']['label'] = 'Delivery first name';
$handler->display->display_options['filters']['delivery_first_name']['expose']['operator'] = 'delivery_first_name_op';
$handler->display->display_options['filters']['delivery_first_name']['expose']['identifier'] = 'delivery_first_name';
$handler->display->display_options['filters']['delivery_first_name']['expose']['remember'] = TRUE;
/* Filter criterion: Order: Delivery address: Last name */
$handler->display->display_options['filters']['delivery_last_name']['id'] = 'delivery_last_name';
$handler->display->display_options['filters']['delivery_last_name']['table'] = 'uc_orders';
$handler->display->display_options['filters']['delivery_last_name']['field'] = 'delivery_last_name';
$handler->display->display_options['filters']['delivery_last_name']['operator'] = 'allwords';
$handler->display->display_options['filters']['delivery_last_name']['group'] = 0;
$handler->display->display_options['filters']['delivery_last_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['delivery_last_name']['expose']['operator_id'] = 'delivery_last_name_op';
$handler->display->display_options['filters']['delivery_last_name']['expose']['label'] = 'Delivery last name';
$handler->display->display_options['filters']['delivery_last_name']['expose']['operator'] = 'delivery_last_name_op';
$handler->display->display_options['filters']['delivery_last_name']['expose']['identifier'] = 'delivery_last_name';
$handler->display->display_options['filters']['delivery_last_name']['expose']['remember'] = TRUE;
/* Filter criterion: Order: Delivery address: Company */
$handler->display->display_options['filters']['delivery_company']['id'] = 'delivery_company';
$handler->display->display_options['filters']['delivery_company']['table'] = 'uc_orders';
$handler->display->display_options['filters']['delivery_company']['field'] = 'delivery_company';
$handler->display->display_options['filters']['delivery_company']['operator'] = 'allwords';
$handler->display->display_options['filters']['delivery_company']['group'] = 0;
$handler->display->display_options['filters']['delivery_company']['exposed'] = TRUE;
$handler->display->display_options['filters']['delivery_company']['expose']['operator_id'] = 'delivery_company_op';
$handler->display->display_options['filters']['delivery_company']['expose']['label'] = 'Delivery company';
$handler->display->display_options['filters']['delivery_company']['expose']['operator'] = 'delivery_company_op';
$handler->display->display_options['filters']['delivery_company']['expose']['identifier'] = 'delivery_company';
$handler->display->display_options['filters']['delivery_company']['expose']['remember'] = TRUE;
/* Filter criterion: Order: Creation date */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'uc_orders';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['operator'] = 'between';
$handler->display->display_options['filters']['created']['group'] = 0;
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
/* Filter criterion: Order: Order status */
$handler->display->display_options['filters']['order_status']['id'] = 'order_status';
$handler->display->display_options['filters']['order_status']['table'] = 'uc_orders';
$handler->display->display_options['filters']['order_status']['field'] = 'order_status';
$handler->display->display_options['filters']['order_status']['value'] = array(
  '_active' => '_active',
);
$handler->display->display_options['filters']['order_status']['group'] = 0;
$handler->display->display_options['filters']['order_status']['exposed'] = TRUE;
$handler->display->display_options['filters']['order_status']['expose']['operator_id'] = 'order_status_op';
$handler->display->display_options['filters']['order_status']['expose']['label'] = 'View by status';
$handler->display->display_options['filters']['order_status']['expose']['operator'] = 'order_status_op';
$handler->display->display_options['filters']['order_status']['expose']['identifier'] = 'order_status';
$handler->display->display_options['path'] = 'admin/store/orders/search';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Search orders';
$handler->display->display_options['menu']['description'] = 'Search existing orders.';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';

/* Display: By customer */
$handler = $view->new_display('page', 'By customer', 'by_customer');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['uid']['title'] = 'Customer orders: %1';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Order: Order status */
$handler->display->display_options['filters']['order_status']['id'] = 'order_status';
$handler->display->display_options['filters']['order_status']['table'] = 'uc_orders';
$handler->display->display_options['filters']['order_status']['field'] = 'order_status';
$handler->display->display_options['filters']['order_status']['value'] = array(
  '_active' => '_active',
);
$handler->display->display_options['filters']['order_status']['group'] = 0;
$handler->display->display_options['filters']['order_status']['exposed'] = TRUE;
$handler->display->display_options['filters']['order_status']['expose']['operator_id'] = 'order_status_op';
$handler->display->display_options['filters']['order_status']['expose']['label'] = 'View by status';
$handler->display->display_options['filters']['order_status']['expose']['operator'] = 'order_status_op';
$handler->display->display_options['filters']['order_status']['expose']['identifier'] = 'order_status';
$handler->display->display_options['path'] = 'admin/store/customers/orders';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'uc_order',
);
