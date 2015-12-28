<?php
/**
 * @file
 * views_view.uc_coupon.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'uc_coupon';
$view->description = 'Ubercart discount coupons.';
$view->tag = 'Ubercart';
$view->base_table = 'uc_coupons';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Coupons';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view store coupons';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 20;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = '';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'code' => 'code',
  'value' => 'value',
  'created' => 'created',
  'valid_from' => 'valid_from',
  'valid_until' => 'valid_until',
);
$handler->display->display_options['style_options']['default'] = 'code';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 0,
    'separator' => '',
  ),
  'code' => array(
    'sortable' => 0,
    'separator' => '',
  ),
  'value' => array(
    'sortable' => 0,
    'separator' => '',
  ),
  'created' => array(
    'sortable' => 0,
    'separator' => '',
  ),
  'valid_from' => array(
    'sortable' => 0,
    'separator' => '',
  ),
  'valid_until' => array(
    'sortable' => 0,
    'separator' => '',
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'area';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['content'] = 'No matching coupons found.';
$handler->display->display_options['empty']['text']['format'] = '1';
/* Field: Coupon: Actions */
$handler->display->display_options['fields']['actions']['id'] = 'actions';
$handler->display->display_options['fields']['actions']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['actions']['field'] = 'actions';
/* Field: Coupon: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: Coupon: Code */
$handler->display->display_options['fields']['code']['id'] = 'code';
$handler->display->display_options['fields']['code']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['code']['field'] = 'code';
/* Field: Coupon: Bulk */
$handler->display->display_options['fields']['bulk']['id'] = 'bulk';
$handler->display->display_options['fields']['bulk']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['bulk']['field'] = 'bulk';
$handler->display->display_options['fields']['bulk']['not'] = 0;
/* Field: Coupon: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['value']['field'] = 'value';
/* Field: Coupon: Creation date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['created']['field'] = 'created';
/* Field: Coupon: Valid from */
$handler->display->display_options['fields']['valid_from']['id'] = 'valid_from';
$handler->display->display_options['fields']['valid_from']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['valid_from']['field'] = 'valid_from';
/* Field: Coupon: Valid until */
$handler->display->display_options['fields']['valid_until']['id'] = 'valid_until';
$handler->display->display_options['fields']['valid_until']['table'] = 'uc_coupons';
$handler->display->display_options['fields']['valid_until']['field'] = 'valid_until';
/* Filter criterion: Coupon: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'uc_coupons';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = '0';
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Coupon: Bulk */
$handler->display->display_options['filters']['bulk']['id'] = 'bulk';
$handler->display->display_options['filters']['bulk']['table'] = 'uc_coupons';
$handler->display->display_options['filters']['bulk']['field'] = 'bulk';
$handler->display->display_options['filters']['bulk']['value'] = 'All';
$handler->display->display_options['filters']['bulk']['group'] = '0';
$handler->display->display_options['filters']['bulk']['exposed'] = TRUE;
$handler->display->display_options['filters']['bulk']['expose']['label'] = 'Bulk';
$handler->display->display_options['filters']['bulk']['expose']['identifier'] = 'bulk';
/* Filter criterion: Coupon: Code */
$handler->display->display_options['filters']['code']['id'] = 'code';
$handler->display->display_options['filters']['code']['table'] = 'uc_coupons';
$handler->display->display_options['filters']['code']['field'] = 'code';
$handler->display->display_options['filters']['code']['group'] = '0';
$handler->display->display_options['filters']['code']['exposed'] = TRUE;
$handler->display->display_options['filters']['code']['expose']['operator_id'] = 'code_op';
$handler->display->display_options['filters']['code']['expose']['label'] = 'Code';
$handler->display->display_options['filters']['code']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['code']['expose']['operator'] = 'code_op';
$handler->display->display_options['filters']['code']['expose']['identifier'] = 'code';
/* Filter criterion: Coupon: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'uc_coupons';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['group'] = '0';
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
/* Filter criterion: Coupon: Value */
$handler->display->display_options['filters']['value']['id'] = 'value';
$handler->display->display_options['filters']['value']['table'] = 'uc_coupons';
$handler->display->display_options['filters']['value']['field'] = 'value';
$handler->display->display_options['filters']['value']['operator'] = 'between';
$handler->display->display_options['filters']['value']['group'] = '0';
$handler->display->display_options['filters']['value']['exposed'] = TRUE;
$handler->display->display_options['filters']['value']['expose']['operator_id'] = 'coupon_value_op';
$handler->display->display_options['filters']['value']['expose']['label'] = 'Value';
$handler->display->display_options['filters']['value']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['value']['expose']['operator'] = 'coupon_value_op';
$handler->display->display_options['filters']['value']['expose']['identifier'] = 'coupon_value';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'coupons';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'uc_coupon',
);
