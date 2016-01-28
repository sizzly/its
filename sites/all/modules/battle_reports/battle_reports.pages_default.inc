<?php
/**
 * @file
 * battle_reports.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function battle_reports_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Battles',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Game Reference [field_game_reference])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_game_reference-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'game_results' => 'game_results',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Battles',
    'panels_breadcrumbs_paths' => 'battle-reports',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '217586d2-a5bd-48ae-a3be-7dfa95e8dfeb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4ff7101e-a0ad-4ca3-a5d3-73ba72109d3f';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ff7101e-a0ad-4ca3-a5d3-73ba72109d3f';
    $display->content['new-4ff7101e-a0ad-4ca3-a5d3-73ba72109d3f'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-4ff7101e-a0ad-4ca3-a5d3-73ba72109d3f';
    $pane = new stdClass();
    $pane->pid = 'new-cb8674ff-a3d5-4600-aca6-16a044111c22';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Belligerents',
      'body' => '<div class="row">
<div class="col-sm-6">
<?php print views_embed_view("battles_all_page_layout" , "panel_pane_2"); ?>
<?php print views_embed_view("battles_all_page_layout" , "panel_pane_15"); ?>
</div>
<div class="col-sm-6">
<?php print views_embed_view("battles_all_page_layout" , "panel_pane_2", "%node_2:nid"); ?>
<?php print views_embed_view("battles_all_page_layout" , "panel_pane_15", "%node_2:nid"); ?>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cb8674ff-a3d5-4600-aca6-16a044111c22';
    $display->content['new-cb8674ff-a3d5-4600-aca6-16a044111c22'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-cb8674ff-a3d5-4600-aca6-16a044111c22';
    $pane = new stdClass();
    $pane->pid = 'new-af97c993-441a-487c-965e-ee1957f6afcb';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grey-container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'af97c993-441a-487c-965e-ee1957f6afcb';
    $display->content['new-af97c993-441a-487c-965e-ee1957f6afcb'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-af97c993-441a-487c-965e-ee1957f6afcb';
    $pane = new stdClass();
    $pane->pid = 'new-a60629d9-248b-487d-9316-1fce41c2cef1';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%node:author Commentary',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a60629d9-248b-487d-9316-1fce41c2cef1';
    $display->content['new-a60629d9-248b-487d-9316-1fce41c2cef1'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-a60629d9-248b-487d-9316-1fce41c2cef1';
    $pane = new stdClass();
    $pane->pid = 'new-2aaa0565-fe46-4a54-b1fa-a516a194f6f3';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_entity_from_field:field_game_reference-node-node_1',
      'override_title' => 1,
      'override_title_text' => '%node_2:author\'s Commentary',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2aaa0565-fe46-4a54-b1fa-a516a194f6f3';
    $display->content['new-2aaa0565-fe46-4a54-b1fa-a516a194f6f3'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-2aaa0565-fe46-4a54-b1fa-a516a194f6f3';
    $pane = new stdClass();
    $pane->pid = 'new-8153254c-2d8f-4fb9-91f9-12b1a54f90f4';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8153254c-2d8f-4fb9-91f9-12b1a54f90f4';
    $display->content['new-8153254c-2d8f-4fb9-91f9-12b1a54f90f4'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-8153254c-2d8f-4fb9-91f9-12b1a54f90f4';
    $pane = new stdClass();
    $pane->pid = 'new-cb260ef5-06d1-42d1-aef7-f51ad8ab2fd9';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cb260ef5-06d1-42d1-aef7-f51ad8ab2fd9';
    $display->content['new-cb260ef5-06d1-42d1-aef7-f51ad8ab2fd9'] = $pane;
    $display->panels['contentmainright'][0] = 'new-cb260ef5-06d1-42d1-aef7-f51ad8ab2fd9';
    $pane = new stdClass();
    $pane->pid = 'new-cf2f2a3c-5fd6-453b-b9e3-3573b9c966b6';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf2f2a3c-5fd6-453b-b9e3-3573b9c966b6';
    $display->content['new-cf2f2a3c-5fd6-453b-b9e3-3573b9c966b6'] = $pane;
    $display->panels['footer'][0] = 'new-cf2f2a3c-5fd6-453b-b9e3-3573b9c966b6';
    $pane = new stdClass();
    $pane->pid = 'new-77e2f05e-1e37-470f-9d47-28ad192e8ca3';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Comment and Image Post',
      'title' => 'Posts',
      'body' => '<div class="panel panel-default">
    <div class="panel-tab clearfix">
        <ul class="tab-bar">
            <li class="active"><a href="#home1" data-toggle="tab"><i class="fa fa-home"></i>Status</a></li>
            <li><a href="#message1" data-toggle="tab"><i class="fa fa-envelope"></i>Image</a></li>
        </ul>
    </div>
    <div class="panel-body">
        <div class="tab-content">
            <div class="tab-pane fade in active" id="home1">
                <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'status_node_add_comment\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
            </div>
            <div class="tab-pane fade" id="message1">
<div class="well well-sm">
               <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'status_all_upload_image\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
</div>
            </div>
        </div>
    </div>
</div>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77e2f05e-1e37-470f-9d47-28ad192e8ca3';
    $display->content['new-77e2f05e-1e37-470f-9d47-28ad192e8ca3'] = $pane;
    $display->panels['footer'][1] = 'new-77e2f05e-1e37-470f-9d47-28ad192e8ca3';
    $pane = new stdClass();
    $pane->pid = 'new-e7d9e631-971b-4e61-bbb4-cf02ceb12e11';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e7d9e631-971b-4e61-bbb4-cf02ceb12e11';
    $display->content['new-e7d9e631-971b-4e61-bbb4-cf02ceb12e11'] = $pane;
    $display->panels['footer'][2] = 'new-e7d9e631-971b-4e61-bbb4-cf02ceb12e11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Game System Results',
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
              'game_result_system_' => 'game_result_system_',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'afa4d42b-a674-4a74-ac4d-4bef79baba78';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_game_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_redirection',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'code' => '301',
        '404_if_empty' => 0,
        'page_restrictions' => '0',
        'pages' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
    $display->content['new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0'] = $pane;
    $display->panels['contentmain'][0] = 'new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b5d5bf97-9dfc-46c5-91fb-90f2a99ab3f0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function battle_reports_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'battle_meta';
  $page->task = 'page';
  $page->admin_title = 'Battle Meta';
  $page->admin_description = '';
  $page->path = 'battle-reports/battle-meta';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Meta',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_battle_meta__panel_context_f6b30bd8-ed57-4c83-8522-f4f21f06b062';
  $handler->task = 'page';
  $handler->subtask = 'battle_meta';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Battle Meta Data',
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
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'half' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Battle Meta';
  $display->uuid = '1cddb8cc-1776-4640-975f-c91abf9bfa07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-004b8221-fa84-48a2-afd8-5b131caaa87c';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_meta_pages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '004b8221-fa84-48a2-afd8-5b131caaa87c';
    $display->content['new-004b8221-fa84-48a2-afd8-5b131caaa87c'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-004b8221-fa84-48a2-afd8-5b131caaa87c';
    $pane = new stdClass();
    $pane->pid = 'new-17212233-28e5-456d-aff7-ebb23ece0512';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_meta_pages-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '17212233-28e5-456d-aff7-ebb23ece0512';
    $display->content['new-17212233-28e5-456d-aff7-ebb23ece0512'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-17212233-28e5-456d-aff7-ebb23ece0512';
    $pane = new stdClass();
    $pane->pid = 'new-fd5d52d3-8eac-4863-8e4b-96dd080e53ef';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_meta_pages-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fd5d52d3-8eac-4863-8e4b-96dd080e53ef';
    $display->content['new-fd5d52d3-8eac-4863-8e4b-96dd080e53ef'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-fd5d52d3-8eac-4863-8e4b-96dd080e53ef';
    $pane = new stdClass();
    $pane->pid = 'new-4f538ef2-fae9-4a6c-a5fe-6b6e0b6c72f1';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_meta_pages-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4f538ef2-fae9-4a6c-a5fe-6b6e0b6c72f1';
    $display->content['new-4f538ef2-fae9-4a6c-a5fe-6b6e0b6c72f1'] = $pane;
    $display->panels['contentmainright'][0] = 'new-4f538ef2-fae9-4a6c-a5fe-6b6e0b6c72f1';
    $pane = new stdClass();
    $pane->pid = 'new-b1fa2411-b2f2-4ed5-a44f-83b03f51b2e0';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_meta_pages-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b1fa2411-b2f2-4ed5-a44f-83b03f51b2e0';
    $display->content['new-b1fa2411-b2f2-4ed5-a44f-83b03f51b2e0'] = $pane;
    $display->panels['contentmainright'][1] = 'new-b1fa2411-b2f2-4ed5-a44f-83b03f51b2e0';
    $pane = new stdClass();
    $pane->pid = 'new-f2675078-824f-45a8-8573-5e180128f9af';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<h2>Classification and codification of your miniature wargaming battles</h2>',
      'format' => 'pure_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'jumbotron',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f2675078-824f-45a8-8573-5e180128f9af';
    $display->content['new-f2675078-824f-45a8-8573-5e180128f9af'] = $pane;
    $display->panels['header'][0] = 'new-f2675078-824f-45a8-8573-5e180128f9af';
    $pane = new stdClass();
    $pane->pid = 'new-a272c169-c7be-4dc7-a7a7-0335bd359e6d';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Battle Meta</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/battle-reports/battle-meta/missions">Missions</a></li>
        <li><a href="/battle-reports/battle-meta/deployment">Deployment</a></li>
        <li><a href="/battle-reports/battle-meta/units-and-commanders">Units/Commanders</a></li>
        <li><a href="/battle-reports/battle-meta/scenario-rules-effect">Special Rules</a></li>
        <li><a href="/battle-reports/battle-meta/victory-conditions">Victory Conditions</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
      'format' => 'pure_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a272c169-c7be-4dc7-a7a7-0335bd359e6d';
    $display->content['new-a272c169-c7be-4dc7-a7a7-0335bd359e6d'] = $pane;
    $display->panels['header'][1] = 'new-a272c169-c7be-4dc7-a7a7-0335bd359e6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['battle_meta'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'battles_main_page';
  $page->task = 'page';
  $page->admin_title = 'Battles Main Page';
  $page->admin_description = '';
  $page->path = 'battle-reports/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Battles',
    'name' => 'main-menu',
    'weight' => '15',
    'parent' => array(
      'type' => 'normal',
      'title' => '',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_battles_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'battles_main_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Battle Reports on iToysoldiers',
        ),
        'description' => array(
          'value' => 'All the table top miniature war game battle reports on iToysoldiers. We\'ve got reports for all of your favorite games including Warmachine, Hordes, Warhammer 40K, WFB, Infinity the game, Helldorado and more.',
        ),
        'abstract' => array(
          'value' => 'A list and relevant stats for battle reports on iToysoldiers',
        ),
        'keywords' => array(
          'value' => 'battle reports, table top war gaming, miniature war gaming battle reports',
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
        ),
        'og:type' => array(
          'value' => 'website',
        ),
        'og:determiner' => array(
          'value' => 'auto',
        ),
        'og:description' => array(
          'value' => 'Stats and lists of table top miniature war game battle results',
        ),
        'og:image' => array(
          'value' => 'http://itoysoldiers.com/sites/default/files/default_images/itslogo.jpg',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Battles';
  $display->uuid = '4e887355-8530-4653-bca8-e3e6217c3bf5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-844ca8ef-45eb-47d7-aad3-76f101e0de62';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '844ca8ef-45eb-47d7-aad3-76f101e0de62';
    $display->content['new-844ca8ef-45eb-47d7-aad3-76f101e0de62'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-844ca8ef-45eb-47d7-aad3-76f101e0de62';
    $pane = new stdClass();
    $pane->pid = 'new-50ae70be-b4a9-4ddd-af8d-7643c3361878';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_stats_and_charts-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50ae70be-b4a9-4ddd-af8d-7643c3361878';
    $display->content['new-50ae70be-b4a9-4ddd-af8d-7643c3361878'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-50ae70be-b4a9-4ddd-af8d-7643c3361878';
    $pane = new stdClass();
    $pane->pid = 'new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_stats_and_charts-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
    $display->content['new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f'] = $pane;
    $display->panels['contentmainright'][0] = 'new-cf7a14ff-37db-43fb-9cdd-b8bde18cf18f';
    $pane = new stdClass();
    $pane->pid = 'new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_all_stats_and_charts-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
    $display->content['new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077'] = $pane;
    $display->panels['contentmainright'][1] = 'new-cf7f1a57-430f-4d7e-ae2d-bfcd9881c077';
    $pane = new stdClass();
    $pane->pid = 'new-a653366a-97d7-444c-be86-e2bb79546f71';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="jumbotron clearfix">
  <h1>Battle Reports</h1>
  <h2>Wars and rumors of wars</h2>
</div>

',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a653366a-97d7-444c-be86-e2bb79546f71';
    $display->content['new-a653366a-97d7-444c-be86-e2bb79546f71'] = $pane;
    $display->panels['header'][0] = 'new-a653366a-97d7-444c-be86-e2bb79546f71';
    $pane = new stdClass();
    $pane->pid = 'new-f17ed422-b0b3-4bfe-b737-46a3637da36e';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav Bar',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Battles</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/battle-reports/all-battles">All Battles</a></li>
        <li><a href="/battle-reports/stats">Stats</a></li>
        <li><a href="/battle-reports/battle-meta">Meta</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
      'format' => 'pure_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f17ed422-b0b3-4bfe-b737-46a3637da36e';
    $display->content['new-f17ed422-b0b3-4bfe-b737-46a3637da36e'] = $pane;
    $display->panels['header'][1] = 'new-f17ed422-b0b3-4bfe-b737-46a3637da36e';
    $pane = new stdClass();
    $pane->pid = 'new-e60b2437-9b81-48bb-8036-63761cecf86a';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Write Up',
      'title' => 'Battles',
      'body' => 'Battle reports on iToysoldiers drive the stats and rankings of players and armies across all sorts of your favorite table top miniature war games. Record your battles, gather intelligence on your opponents, scope out the battlefields, and claim glory and renown through the exploits of your armies.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e60b2437-9b81-48bb-8036-63761cecf86a';
    $display->content['new-e60b2437-9b81-48bb-8036-63761cecf86a'] = $pane;
    $display->panels['header'][2] = 'new-e60b2437-9b81-48bb-8036-63761cecf86a';
    $pane = new stdClass();
    $pane->pid = 'new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Battle Reports',
      'body' => '<p>Battle reports on iToysoldiers drive the stats and rankings of players and armies across all sorts of your favorite table top miniature war games. Record your battles, gather intelligence on your opponents, scope out the battlefields, and claim glory and renown through the exploits of your armies.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
    $display->content['new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7'] = $pane;
    $display->panels['sidebar'][0] = 'new-5d1d0ed3-f78c-4c90-be82-83c05307d8e7';
    $pane = new stdClass();
    $pane->pid = 'new-0443c10f-d952-49a8-9380-1c12c1ebd151';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'login_and_new_user_block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0443c10f-d952-49a8-9380-1c12c1ebd151';
    $display->content['new-0443c10f-d952-49a8-9380-1c12c1ebd151'] = $pane;
    $display->panels['sidebar'][1] = 'new-0443c10f-d952-49a8-9380-1c12c1ebd151';
    $pane = new stdClass();
    $pane->pid = 'new-22fc9460-9056-494a-9b17-569d196f23ca';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Report Battle Button',
      'title' => '',
      'body' => '<div class="grey-container">
<a href="/node/add/game-results" class="btn btn-primary btn-lg btn-block">Report a Battle</a>
</div>',
      'format' => 'pure_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '22fc9460-9056-494a-9b17-569d196f23ca';
    $display->content['new-22fc9460-9056-494a-9b17-569d196f23ca'] = $pane;
    $display->panels['sidebar'][2] = 'new-22fc9460-9056-494a-9b17-569d196f23ca';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['battles_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'stats';
  $page->task = 'page';
  $page->admin_title = 'Stats';
  $page->admin_description = 'The main stats page for the whole site.';
  $page->path = 'battle-reports/stats/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'main-menu',
    'weight' => '-50',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Stats',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_stats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'stats';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
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
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'one_main' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Battle Stats';
  $display->uuid = 'b202a638-6244-4f2a-9fb2-9502b3f4ff7f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-071aaa48-b84d-4d5d-926b-bba7de3aacc8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_stats_main_battle_stats-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel bg-info',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '071aaa48-b84d-4d5d-926b-bba7de3aacc8';
    $display->content['new-071aaa48-b84d-4d5d-926b-bba7de3aacc8'] = $pane;
    $display->panels['contentmain'][0] = 'new-071aaa48-b84d-4d5d-926b-bba7de3aacc8';
    $pane = new stdClass();
    $pane->pid = 'new-57242e70-7890-4b11-8e42-d74f0d6f80c8';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Count Block',
      'title' => '',
      'body' => '<div class="row">
<div class="padding-md">
    <div class="row">
        <div class="col-sm-6 col-md-3">
            <div class="panel-stat3 bg-danger">
                <h2 class="m-top-none" id="userCount"><?php print views_embed_view("battles_stats_main_battle_stats" , "panel_pane_1"); ?></h2>
                <h5>Battles</h5>
                <div class="stat-icon">
                    <i class="fa fa-fire fa-3x"></i>
                </div>
            </div>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
            <div class="panel-stat3 bg-info">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_main_battle_stats" , "panel_pane_2"); ?></h2>
                <h5>Players</h5>
                <div class="stat-icon">
                    <i class="fa fa-user fa-3x"></i>
                </div>
            </div>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
            <div class="panel-stat3 bg-warning">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_main_battle_stats" , "panel_pane_3"); ?></h2>
                <h5>Battlefields</h5>
                <div class="stat-icon">
                    <i class="fa fa-map-marker fa-3x"></i>
                </div>
            </div>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
            <div class="panel-stat3 bg-success">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_main_battle_stats" , "panel_pane_4"); ?></h2>
                <h5>Factions</h5>
                <div class="stat-icon">
                    <i class="fa fa-bookmark fa-3x"></i>
                </div>
            </div>
        </div><!-- /.col -->
        
        
    </div>
</div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57242e70-7890-4b11-8e42-d74f0d6f80c8';
    $display->content['new-57242e70-7890-4b11-8e42-d74f0d6f80c8'] = $pane;
    $display->panels['header'][0] = 'new-57242e70-7890-4b11-8e42-d74f0d6f80c8';
    $pane = new stdClass();
    $pane->pid = 'new-9ebcdf2e-0641-40f0-91ae-24b5a5fb1c20';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_stats_main_battle_stats-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ebcdf2e-0641-40f0-91ae-24b5a5fb1c20';
    $display->content['new-9ebcdf2e-0641-40f0-91ae-24b5a5fb1c20'] = $pane;
    $display->panels['sidebar'][0] = 'new-9ebcdf2e-0641-40f0-91ae-24b5a5fb1c20';
    $pane = new stdClass();
    $pane->pid = 'new-668c49dc-97a6-40f6-8e8b-8d87ea28263c';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'battles_stats_main_battle_stats-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '668c49dc-97a6-40f6-8e8b-8d87ea28263c';
    $display->content['new-668c49dc-97a6-40f6-8e8b-8d87ea28263c'] = $pane;
    $display->panels['sidebar'][1] = 'new-668c49dc-97a6-40f6-8e8b-8d87ea28263c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['stats'] = $page;

  return $pages;

}
