<?php
/**
 * @file
 * narrative_campaign.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function narrative_campaign_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Narrative Campaigns',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'narrative_campaign' => 'narrative_campaign',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e89ec8f4-b412-4db3-8f4e-5c9bb5ba2cda';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Campaign Results',
      'title' => '',
      'body' => '<div id="campaign-results" class="collapse row">
<div class="col-md-12">
<div class=" thumbnail text-center">
<h3><span class="glyphicon glyphicon-star" aria-hidden="true"></span></h3>
<span class="lead"><?php print views_embed_view("war_zone_campaign_summary" , "panel_pane_4"); ?></span>
<p>Victor</p>
</div>
</div>

<div class="col-md-4">
<div class=" thumbnail text-center">
<h3><span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span></h3>
<span class="lead"><?php print views_embed_view("war_zone_campaign_summary" , "panel_pane_1"); ?></span>
<p>Instances</p>
</div>
</div>
<div class="col-md-4">
<div class=" thumbnail text-center">
<h3><span class="glyphicon glyphicon-fire" aria-hidden="true"></span></h3>
<span class="lead"><?php print views_embed_view("war_zone_campaign_summary" , "panel_pane_3"); ?></span>
<p>Battles</p>
</div>
</div>
<div class="col-md-4">
<div class=" thumbnail text-center">
<h3><span class="glyphicon glyphicon-user" aria-hidden="true"></span></h3>
<span class="lead"><?php print views_embed_view("war_zone_campaign_summary" , "panel_pane_2"); ?></span>
<p>Players</p>
</div>
</div>


</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $display->content['new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5'] = $pane;
    $display->panels['contentmain'][0] = 'new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $pane = new stdClass();
    $pane->pid = 'new-644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Designer Notes',
      'title' => '',
      'body' => '<div id="designer-notes" class="collapse row">
<div class="col-md-8">
<div class="panel panel-default">
  <div class="panel-heading">Designer Notes</div>
  <div class="panel-body">
    %node:field_designers_notes_narrative
  </div>
</div>
</div>
<div class="col-md-4">
<?php print views_embed_view("player_profile_v2_0" , "panel_pane_8"); ?>
</div>
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $display->content['new-644bf573-39c4-4cfb-890b-4b942b5e9ee8'] = $pane;
    $display->panels['contentmain'][1] = 'new-644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $pane = new stdClass();
    $pane->pid = 'new-8c0b1573-4321-4f86-874e-947d49662239';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8c0b1573-4321-4f86-874e-947d49662239';
    $display->content['new-8c0b1573-4321-4f86-874e-947d49662239'] = $pane;
    $display->panels['contentmain'][2] = 'new-8c0b1573-4321-4f86-874e-947d49662239';
    $pane = new stdClass();
    $pane->pid = 'new-8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_components-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $display->content['new-8f3a210b-8a49-430c-9b2d-c8b10221ec88'] = $pane;
    $display->panels['contentmain'][3] = 'new-8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $pane = new stdClass();
    $pane->pid = 'new-9551c216-4787-47a9-b3e5-82151805aeb7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_components-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9551c216-4787-47a9-b3e5-82151805aeb7';
    $display->content['new-9551c216-4787-47a9-b3e5-82151805aeb7'] = $pane;
    $display->panels['contentmain'][4] = 'new-9551c216-4787-47a9-b3e5-82151805aeb7';
    $pane = new stdClass();
    $pane->pid = 'new-7e6d4180-f105-4210-8b81-475b913996a4';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_campaign_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e6d4180-f105-4210-8b81-475b913996a4';
    $display->content['new-7e6d4180-f105-4210-8b81-475b913996a4'] = $pane;
    $display->panels['sidebar'][0] = 'new-7e6d4180-f105-4210-8b81-475b913996a4';
    $pane = new stdClass();
    $pane->pid = 'new-53a39c5f-37ed-4f6a-9227-a9070a4a9f52';
    $pane->panel = 'sidebar';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'current',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53a39c5f-37ed-4f6a-9227-a9070a4a9f52';
    $display->content['new-53a39c5f-37ed-4f6a-9227-a9070a4a9f52'] = $pane;
    $display->panels['sidebar'][1] = 'new-53a39c5f-37ed-4f6a-9227-a9070a4a9f52';
    $pane = new stdClass();
    $pane->pid = 'new-ec4df102-20a8-4672-b9cc-41c3518035d9';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Static Player Actions',
      'title' => '',
      'body' => '<ul class="nav nav-pills nav-stacked">
  <li role="presentation"><a href="#" data-toggle="collapse" data-target="#campaign-results">Campaign Results</a></li>
  <li role="presentation"><a href="#" data-toggle="collapse" data-target="#designer-notes">Designer Notes</a></li>
</ul>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ec4df102-20a8-4672-b9cc-41c3518035d9';
    $display->content['new-ec4df102-20a8-4672-b9cc-41c3518035d9'] = $pane;
    $display->panels['sidebar'][2] = 'new-ec4df102-20a8-4672-b9cc-41c3518035d9';
    $pane = new stdClass();
    $pane->pid = 'new-aae5743a-d4e6-45de-8e23-ff4fd8dfa4fa';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Enabled',
            'php' => '$flag = flag_get_flag(\'enable_campaign\');
if ($flag && $flag->is_flagged($contexts[\'argument_entity_id:node_1\']->data->nid)) {
   return TRUE;
}',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if ($contexts[\'argument_entity_id:node_1\']->data->uid == $contexts[\'logged-in-user\']->data->uid || $contexts[\'logged-in-user\']->data->uid == 1) {
   return TRUE;
} else {
   return FALSE;
}',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'admin_title' => 'Dependent Player Actions',
      'title' => '',
      'body' => '<ul class="nav nav-pills nav-stacked">
  <li role="presentation">
<?php
   $destination = drupal_get_destination();
   $parameters = array();
   $str = render(rules_link_render(\'warzone_campaign_launch_instance\', %node:nid, $destination, $parameters));
    print strip_tags($str, \'<a>\');
?>
</li>
</ul>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'aae5743a-d4e6-45de-8e23-ff4fd8dfa4fa';
    $display->content['new-aae5743a-d4e6-45de-8e23-ff4fd8dfa4fa'] = $pane;
    $display->panels['sidebar'][3] = 'new-aae5743a-d4e6-45de-8e23-ff4fd8dfa4fa';
    $pane = new stdClass();
    $pane->pid = 'new-9bf465d3-ba6f-4c67-93bb-85ecd8594d7f';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Author Check',
            'php' => 'if ($contexts[\'argument_entity_id:node_1\']->data->uid == $contexts[\'logged-in-user\']->data->uid || $contexts[\'logged-in-user\']->data->uid == 1) {
   return TRUE;
} else {
   return FALSE;
}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Author Actions',
      'title' => '',
      'body' => '<ul class="nav nav-pills nav-stacked">
  <li role="presentation"><a href="#" data-toggle="modal" data-target="#add-faction">Add Faction</a></li>
  <li role="presentation"><a  data-toggle="modal" data-target="#add-phase">Add Phase</a></li>
  <li role="presentation">
<?php 
$enable_link= flag_create_link(\'enable_campaign\', %node:nid);
print strip_tags($enable_link,\'<a>\');
 ?>
</li>
</ul>

<!-- Modal --><div class="modal fade" id="add-faction" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
        <h4 class="modal-title" id="myModalLabel">Add a Faction</h4>
      </div>
      <div class="modal-body">

      <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'warzone_campaign_factions\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
</div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
      </div>
    </div>
  </div></div>

<!-- Modal --><div class="modal fade" id="add-phase" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
        <h4 class="modal-title" id="myModalLabel">Add a Phase</h4>
      </div>
      <div class="modal-body">

      <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'warzone_campaign_phase\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
</div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
      </div>
    </div>
  </div></div>

',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9bf465d3-ba6f-4c67-93bb-85ecd8594d7f';
    $display->content['new-9bf465d3-ba6f-4c67-93bb-85ecd8594d7f'] = $pane;
    $display->panels['sidebar'][4] = 'new-9bf465d3-ba6f-4c67-93bb-85ecd8594d7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
