<?php
/**
 * @file
 * views_view.group_all_distinction.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'group_all_distinction';
$view->description = 'Various panels to display the distinction of clubs.';
$view->tag = 'Clubs 1.0';
$view->base_table = 'userpoints_txn';
$view->human_name = 'Groups: All: Distinction';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: SUM(Userpoints Transactions: Points) */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['group_type'] = 'sum';
/* Contextual filter: Userpoints Transactions: Entity ID */
$handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['arguments']['entity_id']['table'] = 'userpoints_txn';
$handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
$handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'og_context';
$handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['entity_id']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['entity_id']['validate']['type'] = 'og';

/* Display: Distinction */
$handler = $view->new_display('panel_pane', 'Distinction', 'panel_pane_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: SUM(Userpoints Transactions: Points) */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['points']['field'] = 'points';
$handler->display->display_options['fields']['points']['group_type'] = 'sum';
$handler->display->display_options['fields']['points']['label'] = '';
$handler->display->display_options['fields']['points']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['points']['alter']['text'] = '<div class="panel-stat3 bg-primary">
  <h2 class="m-top-none">[points]</h2>
  <h5>distinction</h5>
  <div class="stat-icon">
    <span class="glyphicon glyphicon-flash fa-3" aria-hidden="true"></span>
  </div>
</div>';
$handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['name'] = 'Organic groups';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'userpoints',
  2 => 'views_content',
);
