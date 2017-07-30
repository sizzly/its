<?php
/**
 * @file
 * narrative_campaigns.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function narrative_campaigns_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'narrative_campaign_main_page';
  $page->task = 'page';
  $page->admin_title = 'Narrative Campaign Main Page';
  $page->admin_description = '';
  $page->path = 'theater/narrative-campaigns';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Narrative Campaigns',
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
  $handler->name = 'page_narrative_campaign_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'narrative_campaign_main_page';
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
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
  $display->title = 'Narrative Campaigns';
  $display->uuid = '1360df3d-f125-4d87-9915-504d7d31962b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_narrative_campaign_main_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c06b20ab-0d14-4d91-9672-7f3602cd9c00';
  $pane->panel = 'contentmainleft';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_list2-panel_pane_2';
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
  $pane->uuid = 'c06b20ab-0d14-4d91-9672-7f3602cd9c00';
  $display->content['new-c06b20ab-0d14-4d91-9672-7f3602cd9c00'] = $pane;
  $display->panels['contentmainleft'][0] = 'new-c06b20ab-0d14-4d91-9672-7f3602cd9c00';
  $pane = new stdClass();
  $pane->pid = 'new-44f28af0-4d0c-44e8-9244-dcb0096726e7';
  $pane->panel = 'contentmainright';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_list2-panel_pane_1';
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
  $pane->uuid = '44f28af0-4d0c-44e8-9244-dcb0096726e7';
  $display->content['new-44f28af0-4d0c-44e8-9244-dcb0096726e7'] = $pane;
  $display->panels['contentmainright'][0] = 'new-44f28af0-4d0c-44e8-9244-dcb0096726e7';
  $pane = new stdClass();
  $pane->pid = 'new-bec1fb77-e767-424f-9a84-932f3fa2e24d';
  $pane->panel = 'contentmaintop';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><strong>Narrative Campaigns</strong> on iToysoldiers bring your tabletop war gaming to a whole new level. Tie your battles together in an epic story of victory and glory and let the story unfold for the world to see. The campaign system has been designed to allow for a really flexible frame work for creating all sorts of different kinds of campaigns. You can have as many players involved as you’d like and the system is easily adaptable to location, tree, or linear campaigns.</p><p><strong>Available Campaigns</strong> are created by iToysoldiers players. They provide the frame work for a particular campaign within a game’s environment. They can be historical battles, minor skirmishes within the context of a larger conflict or anything else you can imagine. You can re-enact other player’s campaigns to see how your results differ from the historical outcome or the outcome of a rival gaming group.</p><p><strong>Operational Campaigns</strong> are the campaigns that are in progress or have already been resolved. Search for a campaign near you and hit the campaign road.</p>',
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
  $pane->uuid = 'bec1fb77-e767-424f-9a84-932f3fa2e24d';
  $display->content['new-bec1fb77-e767-424f-9a84-932f3fa2e24d'] = $pane;
  $display->panels['contentmaintop'][0] = 'new-bec1fb77-e767-424f-9a84-932f3fa2e24d';
  $pane = new stdClass();
  $pane->pid = 'new-bd6dd996-ed47-4275-b85a-dcd4e5e82093';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Header',
    'title' => '',
    'body' => '<p><strong>Narrative</strong></p>
<p><em>the art, technique, or process of telling a story</em></p>
<p><strong>Campaign</strong></p>
<p><em>A campaign is a phase of a war involving a series of operations related in time and space and aimed towards a single, specific, strategic objective or result in the war.</em></p>',
    'format' => 'php_code',
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
  $pane->uuid = 'bd6dd996-ed47-4275-b85a-dcd4e5e82093';
  $display->content['new-bd6dd996-ed47-4275-b85a-dcd4e5e82093'] = $pane;
  $display->panels['header'][0] = 'new-bd6dd996-ed47-4275-b85a-dcd4e5e82093';
  $pane = new stdClass();
  $pane->pid = 'new-a1f0f000-9e56-4ed1-b1f2-f755d620f453';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Go On Campaign',
    'body' => '<p>Narrative Campaigns on iToysoldiers bring your tabletop war gaming to a whole new level.&nbsp; Tie your battles together in an epic story of victory and glory and let the story unfold for the world to see.&nbsp; The campaign system has been designed to allow for a really flexible frame work for creating all sorts of different kinds of campaigns.&nbsp; You can have as many players involved as you’d like and the system is easily adaptable to location, tree, or linear campaigns.</p>

<p><strong>Available Campaigns</strong> are created by iToysoldiers players.&nbsp; They provide the frame work for a particular campaign within a game’s environment.&nbsp; They can be historical battles, minor skirmishes within the context of a larger conflict or anything else you can imagine.&nbsp; You can re-enact other player’s campaigns to see how your results differ from the historical outcome or the outcome of a rival gaming group.</p>

<p><strong>Operational Campaigns</strong> are the campaigns that are in progress or have already been resolved.&nbsp; Search for a campaign near you and hit the campaign road.</p>
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
  $pane->uuid = 'a1f0f000-9e56-4ed1-b1f2-f755d620f453';
  $display->content['new-a1f0f000-9e56-4ed1-b1f2-f755d620f453'] = $pane;
  $display->panels['sidebar'][0] = 'new-a1f0f000-9e56-4ed1-b1f2-f755d620f453';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['narrative_campaign_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_campaign_instance_chronicle';
  $page->task = 'page';
  $page->admin_title = 'War Zone: Campaign Instance: Chronicle';
  $page->admin_description = '';
  $page->path = 'node/%node/chronicle';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'narrative_campaign_instance' => 'narrative_campaign_instance',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Chronicle',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_war_zone_campaign_instance_chronicle_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_campaign_instance_chronicle';
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
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Chronicle';
  $display->uuid = '19053029-4f5d-4983-b999-47b63b406b34';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_war_zone_campaign_instance_chronicle_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b20e9714-7340-4a1d-b801-22ce950d0969';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'warzone_campaign_timeline-panel_pane_1';
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
  $pane->uuid = 'b20e9714-7340-4a1d-b801-22ce950d0969';
  $display->content['new-b20e9714-7340-4a1d-b801-22ce950d0969'] = $pane;
  $display->panels['contentmain'][0] = 'new-b20e9714-7340-4a1d-b801-22ce950d0969';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_campaign_instance_chronicle'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_campaign_instance_operations';
  $page->task = 'page';
  $page->admin_title = 'War Zone: Campaign Instance: Operations';
  $page->admin_description = '';
  $page->path = 'node/%node/operations';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'narrative_campaign_instance' => 'narrative_campaign_instance',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Operations',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_war_zone_campaign_instance_operations_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_campaign_instance_operations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Narrative Campaign',
    'no_blocks' => 0,
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
              'narrative_campaign_instance' => 'narrative_campaign_instance',
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
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Operations';
  $display->uuid = '19053029-4f5d-4983-b999-47b63b406b34';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_war_zone_campaign_instance_operations_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6fcb51f1-2763-4a0e-aea8-70fe03e104f5';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_campaign_instance_active_phases-panel_pane_1';
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
  $pane->uuid = '6fcb51f1-2763-4a0e-aea8-70fe03e104f5';
  $display->content['new-6fcb51f1-2763-4a0e-aea8-70fe03e104f5'] = $pane;
  $display->panels['contentmain'][0] = 'new-6fcb51f1-2763-4a0e-aea8-70fe03e104f5';
  $pane = new stdClass();
  $pane->pid = 'new-ef67429a-e5ed-40fd-a7b6-680185207c97';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_campaign_instance_active_phases-panel_pane_2';
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
  $pane->uuid = 'ef67429a-e5ed-40fd-a7b6-680185207c97';
  $display->content['new-ef67429a-e5ed-40fd-a7b6-680185207c97'] = $pane;
  $display->panels['contentmain'][1] = 'new-ef67429a-e5ed-40fd-a7b6-680185207c97';
  $pane = new stdClass();
  $pane->pid = 'new-d46933c3-ed50-4ace-b751-59a64f7b4ec3';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:narrative_campaign_instance:field_status',
        'settings' => array(
          'field_status' => array(
            'und' => array(
              0 => array(
                'value' => '5',
              ),
            ),
          ),
          'field_status_value' => array(
            0 => '5',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Submit Battle Form',
    'title' => 'Submit Battle',
    'body' => '<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'warzone_campaign_report_battle_p\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>',
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
  $pane->uuid = 'd46933c3-ed50-4ace-b751-59a64f7b4ec3';
  $display->content['new-d46933c3-ed50-4ace-b751-59a64f7b4ec3'] = $pane;
  $display->panels['contentmain'][2] = 'new-d46933c3-ed50-4ace-b751-59a64f7b4ec3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_war_zone_campaign_instance_operations__panel_context_a57424f1-55f3-429e-a52a-8417bf8381f5';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_campaign_instance_operations';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'League',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'war_zone_league' => 'war_zone_league',
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
  $display->title = '%node:title Operations';
  $display->uuid = '13b5d7fb-0918-41e3-88f5-ffe16e5c5b43';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_war_zone_campaign_instance_operations__panel_context_a57424f1-55f3-429e-a52a-8417bf8381f5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b2a5458a-0671-4821-b79e-18c0e77f04c4';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_all_operations-panel_pane_1';
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
  $pane->uuid = 'b2a5458a-0671-4821-b79e-18c0e77f04c4';
  $display->content['new-b2a5458a-0671-4821-b79e-18c0e77f04c4'] = $pane;
  $display->panels['contentmain'][0] = 'new-b2a5458a-0671-4821-b79e-18c0e77f04c4';
  $pane = new stdClass();
  $pane->pid = 'new-e8a8c614-7e9c-4509-913a-82e84ee90d1c';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Report a League Battle',
    'title' => 'Report a Battle',
    'body' => '<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'war_zone_league_report_battle\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e8a8c614-7e9c-4509-913a-82e84ee90d1c';
  $display->content['new-e8a8c614-7e9c-4509-913a-82e84ee90d1c'] = $pane;
  $display->panels['contentmain'][1] = 'new-e8a8c614-7e9c-4509-913a-82e84ee90d1c';
  $pane = new stdClass();
  $pane->pid = 'new-388d1d1c-286e-49b0-ac5a-503e3bfa0164';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'war_zone_league_operations_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_round_sc_value' => '%node:field_warzone_round',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '388d1d1c-286e-49b0-ac5a-503e3bfa0164';
  $display->content['new-388d1d1c-286e-49b0-ac5a-503e3bfa0164'] = $pane;
  $display->panels['contentmain'][2] = 'new-388d1d1c-286e-49b0-ac5a-503e3bfa0164';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-388d1d1c-286e-49b0-ac5a-503e3bfa0164';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_campaign_instance_operations'] = $page;

  return $pages;

}
