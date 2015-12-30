<?php
/**
 * @file
 * views_view.war_zone_campaign_instance_report_battle.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'war_zone_campaign_instance_report_battle';
$view->description = 'Generates the report battle panel for a campaign instance. Should be part of War Zones and not Narrative Campaign';
$view->tag = 'War Zones 4.1, Narrative Campaigns 1.0';
$view->base_table = 'node_registration';
$view->human_name = 'War Zone: Campaign Instance: Report Battle';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Node registration: E-mail */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'node_registration';
$handler->display->display_options['fields']['email']['field'] = 'email';
$handler->display->display_options['fields']['email']['exclude'] = TRUE;
$handler->display->display_options['fields']['email']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['email']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['email']['link_to_node_registration_email'] = 0;
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<p class="text-center"><button type="button" class="btn btn-default" data-toggle="collapse" data-target="#battle">
  Report Battle
</button>
</p>

<div id="battle" class="collapse">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" title="Chronicle" data-content="Chronicle your army\'s deeds. This will also generate an item on your feed."></span>
          </span>
        <h3 class="panel-title">Report Battle</h3>
      </div>
      <div class="panel-body">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'warzone_campaign_report_battle_p\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
      </div>
    </div>
</div>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Node registration: User uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = '0';
/* Filter criterion: Node registration: Waitinglist */
$handler->display->display_options['filters']['waitinglist']['id'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['table'] = 'node_registration';
$handler->display->display_options['filters']['waitinglist']['field'] = 'waitinglist';
$handler->display->display_options['filters']['waitinglist']['value'] = '0';

/* Display: Registration Required Form */
$handler = $view->new_display('panel_pane', 'Registration Required Form', 'panel_pane_1');
$handler->display->display_options['pane_category']['name'] = 'War Zone';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node_registration',
  2 => 'views_content',
);
