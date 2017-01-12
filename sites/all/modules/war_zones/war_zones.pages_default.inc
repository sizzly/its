<?php
/**
 * @file
 * war_zones.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function war_zones_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__form_mutator_17e133c0-d01f-4426-b2f6-242f21e39a2d';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'League Edit Variant',
    'form_title' => '',
    'contexts' => array(),
    'relationships' => array(),
    'modification' => array(
      ':title' => array(
        'override' => 0,
        'label' => 'Title',
        'hidden_field' => 0,
      ),
      'body' => array(
        'override' => 0,
        'label' => 'Body',
        'hidden_field' => 0,
      ),
      'field_event_date' => array(
        'override' => 1,
        'label' => 'Date',
        'hidden_field' => '1',
      ),
      'field_campaign_badge' => array(
        'override' => 0,
        'label' => 'Campaign Badge',
        'hidden_field' => 0,
      ),
      'field_status' => array(
        'override' => 1,
        'label' => 'Status',
        'hidden_field' => '1',
      ),
      'field_location' => array(
        'override' => 0,
        'label' => 'Battlefield',
        'hidden_field' => 0,
      ),
      'field_event_type' => array(
        'override' => 1,
        'label' => 'Event type',
        'hidden_field' => '1',
      ),
      'field_round_duration' => array(
        'override' => 0,
        'label' => 'Round Duration',
        'hidden_field' => 0,
      ),
      'field_warzone_round' => array(
        'override' => 1,
        'label' => 'Round',
        'hidden_field' => '1',
      ),
      'field_points_per_army' => array(
        'override' => 0,
        'label' => 'Points per army',
        'hidden_field' => 0,
      ),
      'field_entry_fee' => array(
        'override' => 0,
        'label' => 'Entry Fee',
        'hidden_field' => 0,
      ),
      'field_game_warzone' => array(
        'override' => 0,
        'label' => 'Game',
        'hidden_field' => 0,
      ),
      'field_website' => array(
        'override' => 0,
        'label' => 'More Info',
        'hidden_field' => 0,
      ),
      'field_registration_deadline' => array(
        'override' => 0,
        'label' => 'Registration Deadline',
        'hidden_field' => 0,
      ),
      'field_slots_warzone' => array(
        'override' => 0,
        'label' => 'Slots',
        'hidden_field' => 0,
      ),
      'field_league_rule_set' => array(
        'override' => 1,
        'label' => 'League Rule Set',
        'hidden_field' => '1',
      ),
      'field_league_start_date' => array(
        'override' => 0,
        'label' => 'League Start Date',
        'hidden_field' => 0,
      ),
      'og_group_ref' => array(
        'override' => 0,
        'label' => 'Club Sponsor',
        'hidden_field' => 0,
      ),
      'field_warzone_scheduling' => array(
        'override' => 1,
        'label' => 'Scheduling',
        'hidden_field' => '1',
      ),
      'field_calculated_rounds' => array(
        'override' => 1,
        'label' => 'calculated rounds',
        'hidden_field' => '1',
      ),
      'field_registration_open' => array(
        'override' => 1,
        'label' => 'Registration Open',
        'hidden_field' => '1',
      ),
      ':author' => array(
        'override' => 0,
        'label' => 'Authoring information',
        'hidden_field' => 0,
      ),
      ':menu' => array(
        'override' => 0,
        'label' => 'Menu settings',
        'hidden_field' => 0,
      ),
      ':comment_settings' => array(
        'override' => 0,
        'label' => 'Comment settings',
        'hidden_field' => 0,
      ),
      ':path' => array(
        'override' => 0,
        'label' => 'URL path settings',
        'hidden_field' => 0,
      ),
      ':options' => array(
        'override' => 0,
        'label' => 'Publishing options',
        'hidden_field' => 0,
      ),
      ':revision_information' => array(
        'override' => 0,
        'label' => 'Revision information',
        'hidden_field' => 0,
      ),
      ':redirect' => array(
        'override' => 0,
        'label' => 'URL redirects',
        'hidden_field' => 0,
      ),
      ':flag' => array(
        'override' => 0,
        'label' => 'Flags',
        'hidden_field' => 0,
      ),
      ':actions:submit' => array(
        'override' => 0,
        'label' => 'Save',
        'hidden_field' => 0,
      ),
      ':actions:preview' => array(
        'override' => 0,
        'label' => 'Preview',
        'hidden_field' => 0,
      ),
      ':actions:delete' => array(
        'override' => 0,
        'label' => 'Delete',
        'hidden_field' => 0,
      ),
    ),
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
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit__form_mutator_17e133c0-d01f-4426-b2f6-242f21e39a2d'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_11';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Narrative Instance Setup',
    'form_title' => '',
    'contexts' => array(),
    'relationships' => array(),
    'modification' => array(
      ':title' => array(
        'override' => 0,
        'label' => 'Title',
        'hidden_field' => 0,
      ),
      'body' => array(
        'override' => 0,
        'label' => 'Logistics',
        'hidden_field' => 0,
      ),
      'field_website' => array(
        'override' => 0,
        'label' => 'More Info',
        'hidden_field' => 0,
      ),
      'field_event_date' => array(
        'override' => 0,
        'label' => 'Date',
        'hidden_field' => 0,
      ),
      'field_location' => array(
        'override' => 0,
        'label' => 'Battlefield',
        'hidden_field' => 0,
      ),
      'field_entry_fee' => array(
        'override' => 0,
        'label' => 'Entry Fee',
        'hidden_field' => 0,
      ),
      'field_eligible_battles_narrative' => array(
        'override' => 1,
        'label' => 'Eligible Battles',
        'hidden_field' => '1',
      ),
      'field_allow_sign_up_narrative' => array(
        'override' => 0,
        'label' => 'Allow sign up after campaign starts?',
        'hidden_field' => 0,
      ),
      'field_registration_deadline' => array(
        'override' => 0,
        'label' => 'Registration Deadline',
        'hidden_field' => 0,
      ),
      'field_status' => array(
        'override' => 1,
        'label' => 'Status',
        'hidden_field' => '1',
      ),
      'field_round_duration' => array(
        'override' => 1,
        'label' => 'Phase Duration',
        'hidden_field' => '1',
      ),
      'field_round_warzone' => array(
        'override' => 1,
        'label' => 'Round',
        'hidden_field' => '1',
      ),
      'field_event_type' => array(
        'override' => 1,
        'label' => 'Event type',
        'hidden_field' => '1',
      ),
      'field_event_link' => array(
        'override' => 1,
        'label' => 'Event',
        'hidden_field' => '1',
      ),
      'field_campaign_badge' => array(
        'override' => 1,
        'label' => 'Campaign Badge',
        'hidden_field' => '1',
      ),
      'field_victor_narrative' => array(
        'override' => 0,
        'label' => 'Victor',
        'hidden_field' => 0,
      ),
      ':author' => array(
        'override' => 0,
        'label' => 'Authoring information',
        'hidden_field' => 0,
      ),
      ':menu' => array(
        'override' => 0,
        'label' => 'Menu settings',
        'hidden_field' => 0,
      ),
      ':comment_settings' => array(
        'override' => 0,
        'label' => 'Comment settings',
        'hidden_field' => 0,
      ),
      ':path' => array(
        'override' => 0,
        'label' => 'URL path settings',
        'hidden_field' => 0,
      ),
      ':options' => array(
        'override' => 0,
        'label' => 'Publishing options',
        'hidden_field' => 0,
      ),
      ':revision_information' => array(
        'override' => 0,
        'label' => 'Revision information',
        'hidden_field' => 0,
      ),
      ':redirect' => array(
        'override' => 0,
        'label' => 'URL redirects',
        'hidden_field' => 0,
      ),
      ':flag' => array(
        'override' => 0,
        'label' => 'Flags',
        'hidden_field' => 0,
      ),
      ':actions:submit' => array(
        'override' => 0,
        'label' => 'Save',
        'hidden_field' => 0,
      ),
      ':actions:preview' => array(
        'override' => 0,
        'label' => 'Preview',
        'hidden_field' => 0,
      ),
      ':actions:delete' => array(
        'override' => 0,
        'label' => 'Delete',
        'hidden_field' => 0,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'narrative_campaign_instance' => 'narrative_campaign_instance',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:narrative_campaign_instance:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '0',
                ),
              ),
            ),
            'field_status_value' => '0',
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator_11'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_12';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Narrative Instance Live',
    'form_title' => '',
    'contexts' => array(),
    'relationships' => array(),
    'modification' => array(
      ':title' => array(
        'override' => 0,
        'label' => 'Title',
        'hidden_field' => 0,
      ),
      'body' => array(
        'override' => 0,
        'label' => 'Logistics',
        'hidden_field' => 0,
      ),
      'field_website' => array(
        'override' => 0,
        'label' => 'More Info',
        'hidden_field' => 0,
      ),
      'field_event_date' => array(
        'override' => 1,
        'label' => 'Date',
        'hidden_field' => '3',
      ),
      'field_location' => array(
        'override' => 1,
        'label' => 'Battlefield',
        'hidden_field' => '3',
      ),
      'field_entry_fee' => array(
        'override' => 0,
        'label' => 'Entry Fee',
        'hidden_field' => 0,
      ),
      'field_eligible_battles_narrative' => array(
        'override' => 1,
        'label' => 'Eligible Battles',
        'hidden_field' => '3',
      ),
      'field_allow_sign_up_narrative' => array(
        'override' => 1,
        'label' => 'Allow sign up after campaign starts?',
        'hidden_field' => '3',
      ),
      'field_registration_deadline' => array(
        'override' => 1,
        'label' => 'Registration Deadline',
        'hidden_field' => '3',
      ),
      'field_status' => array(
        'override' => 1,
        'label' => 'Status',
        'hidden_field' => '1',
      ),
      'field_event_type' => array(
        'override' => 1,
        'label' => 'Event type',
        'hidden_field' => '1',
      ),
      'field_event_link' => array(
        'override' => 1,
        'label' => 'Event',
        'hidden_field' => '1',
      ),
      'field_campaign_badge' => array(
        'override' => 1,
        'label' => 'Campaign Badge',
        'hidden_field' => '1',
      ),
      'field_victor_narrative' => array(
        'override' => 0,
        'label' => 'Victor',
        'hidden_field' => 0,
      ),
      'field_game_warzone' => array(
        'override' => 1,
        'label' => 'Game',
        'hidden_field' => '3',
      ),
      'field_slots_warzone' => array(
        'override' => 0,
        'label' => 'Slots',
        'hidden_field' => 0,
      ),
      ':author' => array(
        'override' => 0,
        'label' => 'Authoring information',
        'hidden_field' => 0,
      ),
      ':menu' => array(
        'override' => 0,
        'label' => 'Menu settings',
        'hidden_field' => 0,
      ),
      ':comment_settings' => array(
        'override' => 0,
        'label' => 'Comment settings',
        'hidden_field' => 0,
      ),
      ':path' => array(
        'override' => 0,
        'label' => 'URL path settings',
        'hidden_field' => 0,
      ),
      ':options' => array(
        'override' => 0,
        'label' => 'Publishing options',
        'hidden_field' => 0,
      ),
      ':revision_information' => array(
        'override' => 0,
        'label' => 'Revision information',
        'hidden_field' => 0,
      ),
      ':redirect' => array(
        'override' => 0,
        'label' => 'URL redirects',
        'hidden_field' => 0,
      ),
      ':flag' => array(
        'override' => 0,
        'label' => 'Flags',
        'hidden_field' => 0,
      ),
      ':actions:submit' => array(
        'override' => 0,
        'label' => 'Save',
        'hidden_field' => 0,
      ),
      ':actions:preview' => array(
        'override' => 0,
        'label' => 'Preview',
        'hidden_field' => 0,
      ),
      ':actions:delete' => array(
        'override' => 0,
        'label' => 'Delete',
        'hidden_field' => 0,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'narrative_campaign_instance' => 'narrative_campaign_instance',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'entity_field_value:node:narrative_campaign_instance:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '0',
                ),
              ),
            ),
            'field_status_value' => '0',
          ),
          'context' => 'argument_node_edit_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__league_1_0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'League 1.0',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'league_1_0',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'narrative_campaign_instance' => 'narrative_campaign_instance',
              'special_event' => 'special_event',
              'war_zone_league' => 'war_zone_league',
              'war_zone_tournament' => 'war_zone_tournament',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'War Zones',
    'panels_breadcrumbs_paths' => 'warzone',
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
  $display->title = '%node:title';
  $display->uuid = '4a6f86da-02a1-4e7f-956e-766160159ec8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d64cd383-a40a-40e7-ac53-78e6a69b7e56';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_achievements-panel_pane_1';
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
    $pane->uuid = 'd64cd383-a40a-40e7-ac53-78e6a69b7e56';
    $display->content['new-d64cd383-a40a-40e7-ac53-78e6a69b7e56'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-d64cd383-a40a-40e7-ac53-78e6a69b7e56';
    $pane = new stdClass();
    $pane->pid = 'new-d15eb854-a0ec-4202-b69f-d01dc41c9d93';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd15eb854-a0ec-4202-b69f-d01dc41c9d93';
    $display->content['new-d15eb854-a0ec-4202-b69f-d01dc41c9d93'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-d15eb854-a0ec-4202-b69f-d01dc41c9d93';
    $pane = new stdClass();
    $pane->pid = 'new-3f2d58fc-a008-42a1-9a8d-0e506dfcc723';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'master_v2_challenges-panel_pane_1';
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
    $pane->uuid = '3f2d58fc-a008-42a1-9a8d-0e506dfcc723';
    $display->content['new-3f2d58fc-a008-42a1-9a8d-0e506dfcc723'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-3f2d58fc-a008-42a1-9a8d-0e506dfcc723';
    $pane = new stdClass();
    $pane->pid = 'new-8ba12542-77a3-4999-8a72-1ba308c95140';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'league_standings-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8ba12542-77a3-4999-8a72-1ba308c95140';
    $display->content['new-8ba12542-77a3-4999-8a72-1ba308c95140'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-8ba12542-77a3-4999-8a72-1ba308c95140';
    $pane = new stdClass();
    $pane->pid = 'new-9eb650e4-aa7b-4475-ad0b-992873e2c5b1';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '9eb650e4-aa7b-4475-ad0b-992873e2c5b1';
    $display->content['new-9eb650e4-aa7b-4475-ad0b-992873e2c5b1'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-9eb650e4-aa7b-4475-ad0b-992873e2c5b1';
    $pane = new stdClass();
    $pane->pid = 'new-7cb45f62-d736-463b-84fc-b9897484e693';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = '7cb45f62-d736-463b-84fc-b9897484e693';
    $display->content['new-7cb45f62-d736-463b-84fc-b9897484e693'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-7cb45f62-d736-463b-84fc-b9897484e693';
    $pane = new stdClass();
    $pane->pid = 'new-0d121490-77db-4211-9d50-9ab249e10a19';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_news-panel_pane_1';
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
    $pane->uuid = '0d121490-77db-4211-9d50-9ab249e10a19';
    $display->content['new-0d121490-77db-4211-9d50-9ab249e10a19'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-0d121490-77db-4211-9d50-9ab249e10a19';
    $pane = new stdClass();
    $pane->pid = 'new-f0d1fc26-de37-4431-8fad-2fd171f0df3a';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_8';
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
    $pane->uuid = 'f0d1fc26-de37-4431-8fad-2fd171f0df3a';
    $display->content['new-f0d1fc26-de37-4431-8fad-2fd171f0df3a'] = $pane;
    $display->panels['contentmainright'][0] = 'new-f0d1fc26-de37-4431-8fad-2fd171f0df3a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7cb45f62-d736-463b-84fc-b9897484e693';
  $handler->conf['display'] = $display;
  $export['node_view__league_1_0'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_78730d90-a0ad-4a7b-b9f2-7780953b764f';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -9;
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
              'narrative_campaign_instance' => 'narrative_campaign_instance',
              'special_event' => 'special_event',
              'war_zone_league' => 'war_zone_league',
              'war_zone_tournament' => 'war_zone_tournament',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Theater
War Zone
%node:content-type',
    'panels_breadcrumbs_paths' => 'theater
theater/warzone
theater/warzone/%node:content-type',
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
  $display->title = '%node:title';
  $display->uuid = 'a2565dba-dfa9-42a7-b357-cabc039a1a18';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae361772-97c9-4c6c-bd39-138109fa4e2c';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'custom';
    $pane->subtype = 'war_zone_all_content_count';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = 'ae361772-97c9-4c6c-bd39-138109fa4e2c';
    $display->content['new-ae361772-97c9-4c6c-bd39-138109fa4e2c'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-ae361772-97c9-4c6c-bd39-138109fa4e2c';
    $pane = new stdClass();
    $pane->pid = 'new-e1590787-314b-4e61-b4aa-3a7f04ccceac';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_achievements-panel_pane_1';
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
    $pane->uuid = 'e1590787-314b-4e61-b4aa-3a7f04ccceac';
    $display->content['new-e1590787-314b-4e61-b4aa-3a7f04ccceac'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-e1590787-314b-4e61-b4aa-3a7f04ccceac';
    $pane = new stdClass();
    $pane->pid = 'new-699a80c9-ff92-45ff-8893-88251d95b727';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_player_final_scores-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_tournament_format',
          'settings' => array(
            'field_tournament_format' => array(
              'und' => array(
                0 => array(
                  'tid' => '1030',
                ),
              ),
            ),
            'field_tournament_format_tid' => array(
              0 => '1030',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '699a80c9-ff92-45ff-8893-88251d95b727';
    $display->content['new-699a80c9-ff92-45ff-8893-88251d95b727'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-699a80c9-ff92-45ff-8893-88251d95b727';
    $pane = new stdClass();
    $pane->pid = 'new-b109745a-b36a-4c80-8d4e-1620a6c4e4b0';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_player_final_scores-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_tournament_format',
          'settings' => array(
            'field_tournament_format' => array(
              'und' => array(
                0 => array(
                  'tid' => '1916',
                ),
              ),
            ),
            'field_tournament_format_tid' => array(
              0 => '1916',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b109745a-b36a-4c80-8d4e-1620a6c4e4b0';
    $display->content['new-b109745a-b36a-4c80-8d4e-1620a6c4e4b0'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-b109745a-b36a-4c80-8d4e-1620a6c4e4b0';
    $pane = new stdClass();
    $pane->pid = 'new-71e4c435-fad8-41e7-87c9-bc97f39af44a';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_13';
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
    $pane->uuid = '71e4c435-fad8-41e7-87c9-bc97f39af44a';
    $display->content['new-71e4c435-fad8-41e7-87c9-bc97f39af44a'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-71e4c435-fad8-41e7-87c9-bc97f39af44a';
    $pane = new stdClass();
    $pane->pid = 'new-57936230-e7de-4097-b43f-70478583950a';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '57936230-e7de-4097-b43f-70478583950a';
    $display->content['new-57936230-e7de-4097-b43f-70478583950a'] = $pane;
    $display->panels['contentmainbottom'][5] = 'new-57936230-e7de-4097-b43f-70478583950a';
    $pane = new stdClass();
    $pane->pid = 'new-48af2bd7-5160-4d4e-813f-5655670565fb';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '48af2bd7-5160-4d4e-813f-5655670565fb';
    $display->content['new-48af2bd7-5160-4d4e-813f-5655670565fb'] = $pane;
    $display->panels['contentmainbottom'][6] = 'new-48af2bd7-5160-4d4e-813f-5655670565fb';
    $pane = new stdClass();
    $pane->pid = 'new-12b2a8e6-92a2-4098-94c5-a5579627e08d';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '12b2a8e6-92a2-4098-94c5-a5579627e08d';
    $display->content['new-12b2a8e6-92a2-4098-94c5-a5579627e08d'] = $pane;
    $display->panels['contentmainbottom'][7] = 'new-12b2a8e6-92a2-4098-94c5-a5579627e08d';
    $pane = new stdClass();
    $pane->pid = 'new-47143b37-a2c6-4ead-ad63-ef50fe6e3200';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = '47143b37-a2c6-4ead-ad63-ef50fe6e3200';
    $display->content['new-47143b37-a2c6-4ead-ad63-ef50fe6e3200'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-47143b37-a2c6-4ead-ad63-ef50fe6e3200';
    $pane = new stdClass();
    $pane->pid = 'new-c8310d8d-3ede-4334-8f8d-f3299fb02620';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_10';
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
    $pane->uuid = 'c8310d8d-3ede-4334-8f8d-f3299fb02620';
    $display->content['new-c8310d8d-3ede-4334-8f8d-f3299fb02620'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-c8310d8d-3ede-4334-8f8d-f3299fb02620';
    $pane = new stdClass();
    $pane->pid = 'new-ca29bdd3-910f-4a98-9dad-2ee54fcf52fa';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_news-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = 'ca29bdd3-910f-4a98-9dad-2ee54fcf52fa';
    $display->content['new-ca29bdd3-910f-4a98-9dad-2ee54fcf52fa'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-ca29bdd3-910f-4a98-9dad-2ee54fcf52fa';
    $pane = new stdClass();
    $pane->pid = 'new-76214262-53e6-44ae-8497-a41e3551950f';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_8';
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
    $pane->uuid = '76214262-53e6-44ae-8497-a41e3551950f';
    $display->content['new-76214262-53e6-44ae-8497-a41e3551950f'] = $pane;
    $display->panels['contentmainright'][0] = 'new-76214262-53e6-44ae-8497-a41e3551950f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_78730d90-a0ad-4a7b-b9f2-7780953b764f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'Narrative Campaign Instance',
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Theater
Warzone
Campaign',
    'panels_breadcrumbs_paths' => 'theater
theater/warzone
theater/warzone/narrative-campaigns/operational',
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
  $display->title = '';
  $display->uuid = 'fefaebb8-6553-4faa-bb6e-e0a899d83e6b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2cb23f80-a48d-42ce-bb57-a9888ad6cb3e';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2cb23f80-a48d-42ce-bb57-a9888ad6cb3e';
    $display->content['new-2cb23f80-a48d-42ce-bb57-a9888ad6cb3e'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-2cb23f80-a48d-42ce-bb57-a9888ad6cb3e';
    $pane = new stdClass();
    $pane->pid = 'new-d4346dd9-3dad-4b5d-a989-dc7c14c593de';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_achievements-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4346dd9-3dad-4b5d-a989-dc7c14c593de';
    $display->content['new-d4346dd9-3dad-4b5d-a989-dc7c14c593de'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-d4346dd9-3dad-4b5d-a989-dc7c14c593de';
    $pane = new stdClass();
    $pane->pid = 'new-a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9';
    $display->content['new-a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9';
    $pane = new stdClass();
    $pane->pid = 'new-e5041e98-3c31-4910-9a6f-a14dd1d8869d';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_2';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e5041e98-3c31-4910-9a6f-a14dd1d8869d';
    $display->content['new-e5041e98-3c31-4910-9a6f-a14dd1d8869d'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-e5041e98-3c31-4910-9a6f-a14dd1d8869d';
    $pane = new stdClass();
    $pane->pid = 'new-43ede8af-4617-4a45-bfad-50e0e0cb5bf6';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_phase_scoring-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:narrative_campaign_instance:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '0',
                ),
              ),
            ),
            'field_status_value' => '0',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:narrative_campaign_instance:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '3',
                ),
              ),
            ),
            'field_status_value' => '3',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '43ede8af-4617-4a45-bfad-50e0e0cb5bf6';
    $display->content['new-43ede8af-4617-4a45-bfad-50e0e0cb5bf6'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-43ede8af-4617-4a45-bfad-50e0e0cb5bf6';
    $pane = new stdClass();
    $pane->pid = 'new-37fe5db8-4473-4f51-b59b-dca0ec697a26';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_in_progress_score-panel_pane_1';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '37fe5db8-4473-4f51-b59b-dca0ec697a26';
    $display->content['new-37fe5db8-4473-4f51-b59b-dca0ec697a26'] = $pane;
    $display->panels['contentmainbottom'][5] = 'new-37fe5db8-4473-4f51-b59b-dca0ec697a26';
    $pane = new stdClass();
    $pane->pid = 'new-a04e0b64-473e-46b5-9119-2213fe644a04';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_9';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a04e0b64-473e-46b5-9119-2213fe644a04';
    $display->content['new-a04e0b64-473e-46b5-9119-2213fe644a04'] = $pane;
    $display->panels['contentmainbottom'][6] = 'new-a04e0b64-473e-46b5-9119-2213fe644a04';
    $pane = new stdClass();
    $pane->pid = 'new-15df7161-3ef2-45cd-9a2a-7abdc014ce6e';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = '15df7161-3ef2-45cd-9a2a-7abdc014ce6e';
    $display->content['new-15df7161-3ef2-45cd-9a2a-7abdc014ce6e'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-15df7161-3ef2-45cd-9a2a-7abdc014ce6e';
    $pane = new stdClass();
    $pane->pid = 'new-ddaf1fa2-44b9-4d58-914e-a7e94ea91929';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_news-panel_pane_1';
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
    $pane->uuid = 'ddaf1fa2-44b9-4d58-914e-a7e94ea91929';
    $display->content['new-ddaf1fa2-44b9-4d58-914e-a7e94ea91929'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-ddaf1fa2-44b9-4d58-914e-a7e94ea91929';
    $pane = new stdClass();
    $pane->pid = 'new-05f9aa02-a3b6-453d-94d0-55a7ae44e870';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_8';
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
    $pane->uuid = '05f9aa02-a3b6-453d-94d0-55a7ae44e870';
    $display->content['new-05f9aa02-a3b6-453d-94d0-55a7ae44e870'] = $pane;
    $display->panels['contentmainright'][0] = 'new-05f9aa02-a3b6-453d-94d0-55a7ae44e870';
    $pane = new stdClass();
    $pane->pid = 'new-b4c8c31c-c825-4445-b2cc-b53172d4e3b1';
    $pane->panel = 'contentmaintop';
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
                  'value' => '0',
                ),
              ),
            ),
            'field_status_value' => '0',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Setup Status',
      'title' => '',
      'body' => '<h3>War Zone Setup</h3>

<p>Greetings! &nbsp;Your War Zone is currently in &lt;strong&gt;Setup&lt;/strong&gt; mode. &nbsp;This means that you may still modify the settings of the War Zone. &nbsp;It also means that players will not be able to see or register for the War Zone. &nbsp;Once you are happy with the War Zone settings you should visit the <a href="http://itoysoldiers.com/node/%node:nid/management">Management Panel</a> and click "Open War Zone".</p>

<p>Carpe Acies!</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alert alert-danger',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4c8c31c-c825-4445-b2cc-b53172d4e3b1';
    $display->content['new-b4c8c31c-c825-4445-b2cc-b53172d4e3b1'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-b4c8c31c-c825-4445-b2cc-b53172d4e3b1';
    $pane = new stdClass();
    $pane->pid = 'new-dd85b79b-04a4-4524-8952-44c8ca13e8c1';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_12';
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
    $pane->uuid = 'dd85b79b-04a4-4524-8952-44c8ca13e8c1';
    $display->content['new-dd85b79b-04a4-4524-8952-44c8ca13e8c1'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-dd85b79b-04a4-4524-8952-44c8ca13e8c1';
    $pane = new stdClass();
    $pane->pid = 'new-3f219be8-22c3-4c90-ae6b-6ac8c815c55b';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'posts_update_no_battle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = '3f219be8-22c3-4c90-ae6b-6ac8c815c55b';
    $display->content['new-3f219be8-22c3-4c90-ae6b-6ac8c815c55b'] = $pane;
    $display->panels['footer'][0] = 'new-3f219be8-22c3-4c90-ae6b-6ac8c815c55b';
    $pane = new stdClass();
    $pane->pid = 'new-bf2db2c4-6525-4196-88a9-8e95bdb49899';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bf2db2c4-6525-4196-88a9-8e95bdb49899';
    $display->content['new-bf2db2c4-6525-4196-88a9-8e95bdb49899'] = $pane;
    $display->panels['footer'][1] = 'new-bf2db2c4-6525-4196-88a9-8e95bdb49899';
    $pane = new stdClass();
    $pane->pid = 'new-8a84982f-6db0-46be-87bb-dca6aa6b9b39';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a84982f-6db0-46be-87bb-dca6aa6b9b39';
    $display->content['new-8a84982f-6db0-46be-87bb-dca6aa6b9b39'] = $pane;
    $display->panels['sidebar'][0] = 'new-8a84982f-6db0-46be-87bb-dca6aa6b9b39';
    $pane = new stdClass();
    $pane->pid = 'new-91ecde87-8dc1-45c4-9c68-d990825af183';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'hr_spacer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
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
    $pane->uuid = '91ecde87-8dc1-45c4-9c68-d990825af183';
    $display->content['new-91ecde87-8dc1-45c4-9c68-d990825af183'] = $pane;
    $display->panels['sidebar'][1] = 'new-91ecde87-8dc1-45c4-9c68-d990825af183';
    $pane = new stdClass();
    $pane->pid = 'new-0ecafba6-deeb-4b90-89b6-2c7a722b149c';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0ecafba6-deeb-4b90-89b6-2c7a722b149c';
    $display->content['new-0ecafba6-deeb-4b90-89b6-2c7a722b149c'] = $pane;
    $display->panels['sidebar'][2] = 'new-0ecafba6-deeb-4b90-89b6-2c7a722b149c';
    $pane = new stdClass();
    $pane->pid = 'new-d6dda4b1-69b6-4294-bbc7-aa646d78a343';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd6dda4b1-69b6-4294-bbc7-aa646d78a343';
    $display->content['new-d6dda4b1-69b6-4294-bbc7-aa646d78a343'] = $pane;
    $display->panels['sidebar'][3] = 'new-d6dda4b1-69b6-4294-bbc7-aa646d78a343';
    $pane = new stdClass();
    $pane->pid = 'new-6ca76a95-db18-424d-816a-78939d9c8f7e';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_report_battle-panel_pane_1';
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
            'field_status_value' => '5',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6ca76a95-db18-424d-816a-78939d9c8f7e';
    $display->content['new-6ca76a95-db18-424d-816a-78939d9c8f7e'] = $pane;
    $display->panels['sidebar'][4] = 'new-6ca76a95-db18-424d-816a-78939d9c8f7e';
    $pane = new stdClass();
    $pane->pid = 'new-93b0b4be-2cd0-420b-9a1e-c29c9c3f8da5';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '93b0b4be-2cd0-420b-9a1e-c29c9c3f8da5';
    $display->content['new-93b0b4be-2cd0-420b-9a1e-c29c9c3f8da5'] = $pane;
    $display->panels['sidebar'][5] = 'new-93b0b4be-2cd0-420b-9a1e-c29c9c3f8da5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8a84982f-6db0-46be-87bb-dca6aa6b9b39';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_12';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'title' => 'Tournament',
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
              'war_zone_tournament' => 'war_zone_tournament',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'War Zone
Tournament',
    'panels_breadcrumbs_paths' => '/warzone
/warzone/tournaments',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'sidebar' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
    'sidebar' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f44634fe-b7d7-4b1e-9400-625a71c82394';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-08d9fc4a-bdad-411c-b847-ae237f8d25a3';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08d9fc4a-bdad-411c-b847-ae237f8d25a3';
    $display->content['new-08d9fc4a-bdad-411c-b847-ae237f8d25a3'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-08d9fc4a-bdad-411c-b847-ae237f8d25a3';
    $pane = new stdClass();
    $pane->pid = 'new-a4cfc20b-945c-43df-9453-80c6cb15b733';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_achievements-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '10',
                ),
              ),
            ),
            'field_status_value' => array(
              0 => '10',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a4cfc20b-945c-43df-9453-80c6cb15b733';
    $display->content['new-a4cfc20b-945c-43df-9453-80c6cb15b733'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-a4cfc20b-945c-43df-9453-80c6cb15b733';
    $pane = new stdClass();
    $pane->pid = 'new-93d546e5-d751-4738-8374-c9092b46b983';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_player_final_scores-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '10',
                ),
              ),
            ),
            'field_status_value' => array(
              0 => '10',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '93d546e5-d751-4738-8374-c9092b46b983';
    $display->content['new-93d546e5-d751-4738-8374-c9092b46b983'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-93d546e5-d751-4738-8374-c9092b46b983';
    $pane = new stdClass();
    $pane->pid = 'new-cb6946d8-c3aa-4241-8491-29f76f7760d9';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_2';
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
    $pane->uuid = 'cb6946d8-c3aa-4241-8491-29f76f7760d9';
    $display->content['new-cb6946d8-c3aa-4241-8491-29f76f7760d9'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-cb6946d8-c3aa-4241-8491-29f76f7760d9';
    $pane = new stdClass();
    $pane->pid = 'new-8dada78f-5311-482c-9912-5a1d4197c0d9';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_9';
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
    $pane->uuid = '8dada78f-5311-482c-9912-5a1d4197c0d9';
    $display->content['new-8dada78f-5311-482c-9912-5a1d4197c0d9'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-8dada78f-5311-482c-9912-5a1d4197c0d9';
    $pane = new stdClass();
    $pane->pid = 'new-68487d9b-c777-4a4b-b905-428fa01634d4';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '68487d9b-c777-4a4b-b905-428fa01634d4';
    $display->content['new-68487d9b-c777-4a4b-b905-428fa01634d4'] = $pane;
    $display->panels['contentmainbottom'][5] = 'new-68487d9b-c777-4a4b-b905-428fa01634d4';
    $pane = new stdClass();
    $pane->pid = 'new-be2b0be6-4e48-41fc-87d2-46823b8c69df';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'be2b0be6-4e48-41fc-87d2-46823b8c69df';
    $display->content['new-be2b0be6-4e48-41fc-87d2-46823b8c69df'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-be2b0be6-4e48-41fc-87d2-46823b8c69df';
    $pane = new stdClass();
    $pane->pid = 'new-59aeb9a2-7923-4711-be4d-1b925926396f';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_news-panel_pane_1';
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
    $pane->uuid = '59aeb9a2-7923-4711-be4d-1b925926396f';
    $display->content['new-59aeb9a2-7923-4711-be4d-1b925926396f'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-59aeb9a2-7923-4711-be4d-1b925926396f';
    $pane = new stdClass();
    $pane->pid = 'new-4381b7b9-85cc-4f02-bbc0-a18b03850cff';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_8';
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
    $pane->uuid = '4381b7b9-85cc-4f02-bbc0-a18b03850cff';
    $display->content['new-4381b7b9-85cc-4f02-bbc0-a18b03850cff'] = $pane;
    $display->panels['contentmainright'][0] = 'new-4381b7b9-85cc-4f02-bbc0-a18b03850cff';
    $pane = new stdClass();
    $pane->pid = 'new-d122de7e-9331-4260-a810-09b44f32a2bc';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_tourney_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd122de7e-9331-4260-a810-09b44f32a2bc';
    $display->content['new-d122de7e-9331-4260-a810-09b44f32a2bc'] = $pane;
    $display->panels['sidebar'][0] = 'new-d122de7e-9331-4260-a810-09b44f32a2bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'title' => 'Special Events',
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
              'event' => 'event',
              'special_event' => 'special_event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Theater
War Zone
',
    'panels_breadcrumbs_paths' => 'theater
theater/warzone',
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
  $display->title = '';
  $display->uuid = 'eccc737c-3ded-4ade-9017-cc7d07d15e51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e75cd691-1381-4005-beba-aecbbabf1c67';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_achievements-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:special_event:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '10',
                ),
              ),
            ),
            'field_status_value' => array(
              0 => '10',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e75cd691-1381-4005-beba-aecbbabf1c67';
    $display->content['new-e75cd691-1381-4005-beba-aecbbabf1c67'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-e75cd691-1381-4005-beba-aecbbabf1c67';
    $pane = new stdClass();
    $pane->pid = 'new-532a335f-cf18-4730-89b0-1360517ee464';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'league_standings-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '532a335f-cf18-4730-89b0-1360517ee464';
    $display->content['new-532a335f-cf18-4730-89b0-1360517ee464'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-532a335f-cf18-4730-89b0-1360517ee464';
    $pane = new stdClass();
    $pane->pid = 'new-545fcfbc-c95c-4df9-a420-ff9485ad0bd6';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_2';
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
    $pane->uuid = '545fcfbc-c95c-4df9-a420-ff9485ad0bd6';
    $display->content['new-545fcfbc-c95c-4df9-a420-ff9485ad0bd6'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-545fcfbc-c95c-4df9-a420-ff9485ad0bd6';
    $pane = new stdClass();
    $pane->pid = 'new-60f4dd06-ec59-4f6b-acaf-69f6cc1a1d2a';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '60f4dd06-ec59-4f6b-acaf-69f6cc1a1d2a';
    $display->content['new-60f4dd06-ec59-4f6b-acaf-69f6cc1a1d2a'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-60f4dd06-ec59-4f6b-acaf-69f6cc1a1d2a';
    $pane = new stdClass();
    $pane->pid = 'new-297dd24a-3fcf-4c7c-9e36-bd8a443911fb';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_9';
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
    $pane->uuid = '297dd24a-3fcf-4c7c-9e36-bd8a443911fb';
    $display->content['new-297dd24a-3fcf-4c7c-9e36-bd8a443911fb'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-297dd24a-3fcf-4c7c-9e36-bd8a443911fb';
    $pane = new stdClass();
    $pane->pid = 'new-ef9b3115-64fc-43f8-90ba-e6d68f7dc588';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'ef9b3115-64fc-43f8-90ba-e6d68f7dc588';
    $display->content['new-ef9b3115-64fc-43f8-90ba-e6d68f7dc588'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-ef9b3115-64fc-43f8-90ba-e6d68f7dc588';
    $pane = new stdClass();
    $pane->pid = 'new-d95918ad-82f5-40c0-9033-ed3ebe8ef664';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_8';
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
    $pane->uuid = 'd95918ad-82f5-40c0-9033-ed3ebe8ef664';
    $display->content['new-d95918ad-82f5-40c0-9033-ed3ebe8ef664'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-d95918ad-82f5-40c0-9033-ed3ebe8ef664';
    $pane = new stdClass();
    $pane->pid = 'new-c4fc987f-c9df-401d-bae4-407fa1927c4c';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c4fc987f-c9df-401d-bae4-407fa1927c4c';
    $display->content['new-c4fc987f-c9df-401d-bae4-407fa1927c4c'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-c4fc987f-c9df-401d-bae4-407fa1927c4c';
    $pane = new stdClass();
    $pane->pid = 'new-ebc04654-6c6d-46e6-8d7b-c00897e54986';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_7';
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
    $pane->uuid = 'ebc04654-6c6d-46e6-8d7b-c00897e54986';
    $display->content['new-ebc04654-6c6d-46e6-8d7b-c00897e54986'] = $pane;
    $display->panels['contentmainright'][0] = 'new-ebc04654-6c6d-46e6-8d7b-c00897e54986';
    $pane = new stdClass();
    $pane->pid = 'new-b105b76b-6c33-4dca-8606-354f8c76ab3a';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_5';
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
    $pane->uuid = 'b105b76b-6c33-4dca-8606-354f8c76ab3a';
    $display->content['new-b105b76b-6c33-4dca-8606-354f8c76ab3a'] = $pane;
    $display->panels['contentmainright'][1] = 'new-b105b76b-6c33-4dca-8606-354f8c76ab3a';
    $pane = new stdClass();
    $pane->pid = 'new-142e0671-13b4-4e0f-9b7c-a48c619df22a';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'special_event' => 'special_event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '142e0671-13b4-4e0f-9b7c-a48c619df22a';
    $display->content['new-142e0671-13b4-4e0f-9b7c-a48c619df22a'] = $pane;
    $display->panels['contentmainright'][2] = 'new-142e0671-13b4-4e0f-9b7c-a48c619df22a';
    $pane = new stdClass();
    $pane->pid = 'new-8a5f0d51-f363-4d32-9456-4d15079def36';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8a5f0d51-f363-4d32-9456-4d15079def36';
    $display->content['new-8a5f0d51-f363-4d32-9456-4d15079def36'] = $pane;
    $display->panels['contentmainright'][3] = 'new-8a5f0d51-f363-4d32-9456-4d15079def36';
    $pane = new stdClass();
    $pane->pid = 'new-bcd0debb-dee7-41ff-b5d2-12a15757308d';
    $pane->panel = 'footer';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bcd0debb-dee7-41ff-b5d2-12a15757308d';
    $display->content['new-bcd0debb-dee7-41ff-b5d2-12a15757308d'] = $pane;
    $display->panels['footer'][0] = 'new-bcd0debb-dee7-41ff-b5d2-12a15757308d';
    $pane = new stdClass();
    $pane->pid = 'new-1acb25e6-be0e-4be5-90af-4010dbf29484';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = '1acb25e6-be0e-4be5-90af-4010dbf29484';
    $display->content['new-1acb25e6-be0e-4be5-90af-4010dbf29484'] = $pane;
    $display->panels['sidebar'][0] = 'new-1acb25e6-be0e-4be5-90af-4010dbf29484';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1acb25e6-be0e-4be5-90af-4010dbf29484';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Narrative Campaigns',
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
              'narrative_campaign' => 'narrative_campaign',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'War Zones
Campaigns',
    'panels_breadcrumbs_paths' => 'warzone
warzone/narrative-campaigns',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
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
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e89ec8f4-b412-4db3-8f4e-5c9bb5ba2cda';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9551c216-4787-47a9-b3e5-82151805aeb7';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9551c216-4787-47a9-b3e5-82151805aeb7';
    $display->content['new-9551c216-4787-47a9-b3e5-82151805aeb7'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-9551c216-4787-47a9-b3e5-82151805aeb7';
    $pane = new stdClass();
    $pane->pid = 'new-8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $display->content['new-8f3a210b-8a49-430c-9b2d-c8b10221ec88'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $pane = new stdClass();
    $pane->pid = 'new-644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $pane->panel = 'contentmainbottom';
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
<?php print views_embed_view("war_zone_all_page_layout" , "panel_pane_9"); ?>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $display->content['new-644bf573-39c4-4cfb-890b-4b942b5e9ee8'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $pane = new stdClass();
    $pane->pid = 'new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $pane->panel = 'contentmainbottom';
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

<a href="/node/%node:nid/instances">
<div class="col-md-4">

    <div class=" thumbnail text-center">
      <h3><span class="glyphicon glyphicon-screenshot" aria-hidden="true"></span></h3>
      <span class="lead"><?php print views_embed_view("war_zone_campaign_summary" , "panel_pane_1"); ?></span>
      <p>Instances</p>
    </div>
  </div>
</a>
<a href="/node/%node:nid/campaign-battles">
<div class="col-md-4">
<div class=" thumbnail text-center">
<h3><span class="glyphicon glyphicon-fire" aria-hidden="true"></span></h3>
<span class="lead"><?php print views_embed_view("war_zone_campaign_summary" , "panel_pane_3"); ?></span>
<p>Battles</p>
</div>
</div>
</a>
<a href="/node/%node:nid/campaign-players">
<div class="col-md-4">
<div class=" thumbnail text-center">
<h3><span class="glyphicon glyphicon-user" aria-hidden="true"></span></h3>
<span class="lead"><?php print views_embed_view("war_zone_campaign_summary" , "panel_pane_2"); ?></span>
<p>Players</p>
</div>
</div>
</a>

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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $display->content['new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $pane = new stdClass();
    $pane->pid = 'new-61e97e10-9e8b-4cd5-a238-5f216724c99e';
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
    $pane->uuid = '61e97e10-9e8b-4cd5-a238-5f216724c99e';
    $display->content['new-61e97e10-9e8b-4cd5-a238-5f216724c99e'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-61e97e10-9e8b-4cd5-a238-5f216724c99e';
    $pane = new stdClass();
    $pane->pid = 'new-8c0b1573-4321-4f86-874e-947d49662239';
    $pane->panel = 'contentmainright';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8c0b1573-4321-4f86-874e-947d49662239';
    $display->content['new-8c0b1573-4321-4f86-874e-947d49662239'] = $pane;
    $display->panels['contentmainright'][0] = 'new-8c0b1573-4321-4f86-874e-947d49662239';
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
    $pane->pid = 'new-cb3f1fc1-e173-41fc-ab63-45c1c71b175f';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cb3f1fc1-e173-41fc-ab63-45c1c71b175f';
    $display->content['new-cb3f1fc1-e173-41fc-ab63-45c1c71b175f'] = $pane;
    $display->panels['sidebar'][1] = 'new-cb3f1fc1-e173-41fc-ab63-45c1c71b175f';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '53a39c5f-37ed-4f6a-9227-a9070a4a9f52';
    $display->content['new-53a39c5f-37ed-4f6a-9227-a9070a4a9f52'] = $pane;
    $display->panels['sidebar'][2] = 'new-53a39c5f-37ed-4f6a-9227-a9070a4a9f52';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ec4df102-20a8-4672-b9cc-41c3518035d9';
    $display->content['new-ec4df102-20a8-4672-b9cc-41c3518035d9'] = $pane;
    $display->panels['sidebar'][3] = 'new-ec4df102-20a8-4672-b9cc-41c3518035d9';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'aae5743a-d4e6-45de-8e23-ff4fd8dfa4fa';
    $display->content['new-aae5743a-d4e6-45de-8e23-ff4fd8dfa4fa'] = $pane;
    $display->panels['sidebar'][4] = 'new-aae5743a-d4e6-45de-8e23-ff4fd8dfa4fa';
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
  <li role="presentation"><a href="#"  data-toggle="modal" data-target="#add-phase">Add Phase</a></li>
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9bf465d3-ba6f-4c67-93bb-85ecd8594d7f';
    $display->content['new-9bf465d3-ba6f-4c67-93bb-85ecd8594d7f'] = $pane;
    $display->panels['sidebar'][5] = 'new-9bf465d3-ba6f-4c67-93bb-85ecd8594d7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function war_zones_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tournament_screen_share';
  $page->task = 'page';
  $page->admin_title = 'Tournament Screen Share';
  $page->admin_description = '';
  $page->path = 'node/%node/tourney-view';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'war_zone_tournament' => 'war_zone_tournament',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Display',
    'name' => 'navigation',
    'weight' => '50',
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
      'identifier' => 'Content: ID',
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
  $handler->name = 'page_tournament_screen_share_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tournament_screen_share';
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
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
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
  $display->title = '%node:title Round %node:field_warzone_round';
  $display->uuid = '14a6bff6-652e-487d-9d71-8bdf7b0793f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2aebb28-5f82-4bc2-a5a0-ec27421efd03';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_round_sc_value' => '%node:field_warzone_round',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'block',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b2aebb28-5f82-4bc2-a5a0-ec27421efd03';
    $display->content['new-b2aebb28-5f82-4bc2-a5a0-ec27421efd03'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-b2aebb28-5f82-4bc2-a5a0-ec27421efd03';
    $pane = new stdClass();
    $pane->pid = 'new-44fde6ec-3e60-4659-9034-2866874d1bc5';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_missions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_tournament_format',
          'settings' => array(
            'field_tournament_format' => array(
              'und' => array(
                0 => array(
                  'tid' => '1030',
                ),
              ),
            ),
            'field_tournament_format_tid' => array(
              0 => '1030',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_round_counter_tourney_value' => '%node:field_warzone_round',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '44fde6ec-3e60-4659-9034-2866874d1bc5';
    $display->content['new-44fde6ec-3e60-4659-9034-2866874d1bc5'] = $pane;
    $display->panels['contentmainright'][0] = 'new-44fde6ec-3e60-4659-9034-2866874d1bc5';
    $pane = new stdClass();
    $pane->pid = 'new-3006154b-161f-4c8e-b224-a06a15554546';
    $pane->panel = 'contentmainright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_tournament_format',
          'settings' => array(
            'field_tournament_format' => array(
              'und' => array(
                0 => array(
                  'tid' => '1916',
                ),
              ),
            ),
            'field_tournament_format_tid' => array(
              0 => '1916',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Steamroller Scenario Panel',
      'title' => 'Scenario',
      'body' => '<?php 
$round = %node:field_warzone_round -1;
print views_embed_view("war_zone_all_page_layout" , "panel_pane_14", %node:nid, $round); 
?>',
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
    $pane->uuid = '3006154b-161f-4c8e-b224-a06a15554546';
    $display->content['new-3006154b-161f-4c8e-b224-a06a15554546'] = $pane;
    $display->panels['contentmainright'][1] = 'new-3006154b-161f-4c8e-b224-a06a15554546';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tournament_screen_share'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_all_achievement_management';
  $page->task = 'page';
  $page->admin_title = 'War Zone: All: Achievement Management';
  $page->admin_description = '';
  $page->path = 'node/%node/management/achievements';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'event' => 'event',
            'narrative_campaign_instance' => 'narrative_campaign_instance',
            'special_event' => 'special_event',
            'war_zone_league' => 'war_zone_league',
            'war_zone_tournament' => 'war_zone_tournament',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
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
      2 => array(
        'name' => 'entity_field_value:node:event:field_enable_its_features',
        'settings' => array(
          'field_enable_its_features' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_enable_its_features_value' => array(
            0 => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Achievements',
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
      'identifier' => 'Content: ID',
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
  $handler->name = 'page_war_zone_all_achievement_management__panel_context_649afbc3-389f-409d-b17a-c05699cfc362';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_all_achievement_management';
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
  $display->title = 'Achievements';
  $display->uuid = '8b9c7918-1c3b-45b3-a346-889e9931cd72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ccd0dfb-7af4-48e5-8db8-439b6792da39';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Achievement Form',
      'title' => 'Grant Achievement to Player',
      'body' => '<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'war_zone_grant_achievement\';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ccd0dfb-7af4-48e5-8db8-439b6792da39';
    $display->content['new-5ccd0dfb-7af4-48e5-8db8-439b6792da39'] = $pane;
    $display->panels['contentmain'][0] = 'new-5ccd0dfb-7af4-48e5-8db8-439b6792da39';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5ccd0dfb-7af4-48e5-8db8-439b6792da39';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_all_achievement_management'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_all_battle_list';
  $page->task = 'page';
  $page->admin_title = 'War Zone: All: Battle List';
  $page->admin_description = '';
  $page->path = 'node/%node/battle-list';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'league' => 'league',
            'narrative_campaign_instance' => 'narrative_campaign_instance',
            'war_zone_tournament' => 'war_zone_tournament',
            'war_zone_league' => 'war_zone_league',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
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
  $handler->name = 'page_war_zone_all_battle_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_all_battle_list';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node:title',
    'panels_breadcrumbs_paths' => '%node:url',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = '%node:title Battles';
  $display->uuid = '24199215-383a-44a2-b3df-44b7865563e0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6f7fd8bc-de4a-4d8b-ae8c-36477c9ffbdf';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_battles-panel_pane_1';
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
    $pane->uuid = '6f7fd8bc-de4a-4d8b-ae8c-36477c9ffbdf';
    $display->content['new-6f7fd8bc-de4a-4d8b-ae8c-36477c9ffbdf'] = $pane;
    $display->panels['contentmain'][0] = 'new-6f7fd8bc-de4a-4d8b-ae8c-36477c9ffbdf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_all_battle_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_all_news_and_updates';
  $page->task = 'page';
  $page->admin_title = 'War Zone: All: News and Updates';
  $page->admin_description = '';
  $page->path = 'node/%node/news-updates';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
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
  $handler->name = 'page_war_zone_all_news_and_updates_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_all_news_and_updates';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Warzone
%node:title',
    'panels_breadcrumbs_paths' => 'warzone
%node:url',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = '%node:title News and Updates';
  $display->uuid = 'f9849c8b-ae09-4462-886e-a1d10d807a68';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-68a43156-fff2-418e-add1-300a223196d7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_news-panel_pane_2';
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
    $pane->uuid = '68a43156-fff2-418e-add1-300a223196d7';
    $display->content['new-68a43156-fff2-418e-add1-300a223196d7'] = $pane;
    $display->panels['contentmain'][0] = 'new-68a43156-fff2-418e-add1-300a223196d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_all_news_and_updates'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_all_score_card_management';
  $page->task = 'page';
  $page->admin_title = 'War Zone: All: Score Card Management';
  $page->admin_description = '';
  $page->path = 'node/%node/management/score-cards';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'event' => 'event',
            'narrative_campaign_instance' => 'narrative_campaign_instance',
            'special_event' => 'special_event',
            'war_zone_league' => 'war_zone_league',
            'war_zone_tournament' => 'war_zone_tournament',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Author Check',
          'php' => 'if ($contexts[\'argument_entity_id:node_1\']->data->uid == $contexts[\'logged-in-user\']->data->uid || $contexts[\'logged-in-user\']->data->uid == 1) {
   return TRUE;
} else {
   return FALSE;
}
',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'entity_field_value:node:event:field_enable_its_features',
        'settings' => array(
          'field_enable_its_features' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_enable_its_features_value' => array(
            0 => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Score Cards',
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
      'identifier' => 'Content: ID',
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
  $handler->name = 'page_war_zone_all_score_card_management__panel_context_9974c61f-a55c-4849-8169-27c8fce7305b';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_all_score_card_management';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node:title
Manage',
    'panels_breadcrumbs_paths' => '%node:url
/node/%node:nid/management',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = '%node:title: Score Cards';
  $display->uuid = '0a51e7c7-cd85-4335-bb99-0177055f7c67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dd88e35e-eae4-451e-9d4c-2ed3ff1b20e2';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add Scorecard form',
      'title' => '',
      'body' => '<button class="btn btn-default" type="button" data-toggle="collapse" data-target="#collapseExample" aria-expanded="false" aria-controls="collapseExample">
  Add Score
</button>
<div class="collapse" id="collapseExample">
  <div class="well">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'war_zone_all_generate_scorecard\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
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
    $pane->uuid = 'dd88e35e-eae4-451e-9d4c-2ed3ff1b20e2';
    $display->content['new-dd88e35e-eae4-451e-9d4c-2ed3ff1b20e2'] = $pane;
    $display->panels['contentmain'][0] = 'new-dd88e35e-eae4-451e-9d4c-2ed3ff1b20e2';
    $pane = new stdClass();
    $pane->pid = 'new-6d146f49-39b3-4172-99cb-651a1b28094c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_5';
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
    $pane->uuid = '6d146f49-39b3-4172-99cb-651a1b28094c';
    $display->content['new-6d146f49-39b3-4172-99cb-651a1b28094c'] = $pane;
    $display->panels['contentmain'][1] = 'new-6d146f49-39b3-4172-99cb-651a1b28094c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_all_score_card_management'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_all_update_management';
  $page->task = 'page';
  $page->admin_title = 'War Zone: All: Update Management';
  $page->admin_description = '';
  $page->path = 'node/%node/management/updates';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'event' => 'event',
            'narrative_campaign_instance' => 'narrative_campaign_instance',
            'special_event' => 'special_event',
            'war_zone_league' => 'war_zone_league',
            'war_zone_tournament' => 'war_zone_tournament',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'entity_field_value:node:event:field_enable_its_features',
        'settings' => array(
          'field_enable_its_features' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_enable_its_features_value' => array(
            0 => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Updates',
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
      'identifier' => 'Content: ID',
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
  $handler->name = 'page_war_zone_all_update_management__panel_context_e549fbe0-bfbe-40e8-ba90-5b7d43600c95';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_all_update_management';
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
    'access' => array(
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
  $display->title = 'Updates';
  $display->uuid = '1597fb20-1d2e-46e0-a8b2-15029bc9ac3f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aadcf867-e583-4bf8-9ace-2e3416ed93c8';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Create Update Form',
      'title' => 'Create Update',
      'body' => '<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'war_zone_all_generate_article\';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aadcf867-e583-4bf8-9ace-2e3416ed93c8';
    $display->content['new-aadcf867-e583-4bf8-9ace-2e3416ed93c8'] = $pane;
    $display->panels['contentmain'][0] = 'new-aadcf867-e583-4bf8-9ace-2e3416ed93c8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_all_update_management'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_landing_page';
  $page->task = 'page';
  $page->admin_title = 'War Zone Landing Page';
  $page->admin_description = '';
  $page->path = 'theater/warzone';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'War Zones',
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
  $handler->name = 'page_war_zone_landing_page__panel_context_f4519bee-311e-4dc5-9084-cefa006fb50f';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_landing_page';
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
    'name' => '',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'War Zones | iToysoldiers',
        ),
        'description' => array(
          'value' => 'Competitive and structured miniature wargaming events.  Leagues, Tournaments, Campaigns.',
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
  $display->title = 'War Zones';
  $display->uuid = '4c7c5ffe-39b0-466d-921a-308bb4c1edc9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-189d8393-80b1-43e9-8b5e-f267f770398f';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'War Zone Types',
      'title' => 'War Zone Classifications',
      'body' => '<div class="media">
  <div class="pull-left">
    <a href="/theater/warzone/tournament">
      <img class="media-object" src="/sites/default/files/styles/button/public/default_images/location.png" alt="...">
    </a>
  </div>
  <div class="media-body">
      <h4 class="media-heading"><a href="/theater/warzone/tournament">Tournaments</a></h4>
    <p>The iToysoldiers tournament manager makes it easy to run and participate in a miniature wargaming tournament.</p>
    <p>View past and future <a href="/theater/warzone/tournaments/">tournament</a>.
  </div>
</div>
<div class="media">
  <div class="pull-left">
    <a href="/theater/warzone/league">
      <img class="media-object" src="/sites/default/files/styles/button/public/default_images/league.png" alt="...">
    </a>
  </div>
  <div class="media-body">
      <h4 class="media-heading"><a href="/theater/warzone/league">Leagues</a></h4>
    <p>The iToysoldiers tournament manager makes it easy to run and participate in a miniature wargaming tournament.</p>
    <p>View past and future <a href="/theater/warzone/league">leagues</a>.
  </div>
</div>
<div class="media">
  <div class="pull-left">
    <a href="/theater/warzone/narrative-campaigns/operational">
      <img class="media-object" src="/sites/default/files/styles/button/public/default_images/narrative.png" alt="...">
    </a>
  </div>
  <div class="media-body">
      <h4 class="media-heading"><a href="/theater/warzone/narrative-campaigns/operational">Campaigns</a></h4>
    <p>The iToysoldiers tournament manager makes it easy to run and participate in a miniature wargaming tournament.</p>
    <p>View past and future <a href="/theater/warzone/narrative-campaigns/operational">campaigns</a>.
  </div>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '189d8393-80b1-43e9-8b5e-f267f770398f';
    $display->content['new-189d8393-80b1-43e9-8b5e-f267f770398f'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-189d8393-80b1-43e9-8b5e-f267f770398f';
    $pane = new stdClass();
    $pane->pid = 'new-b7083836-b9a1-46bd-8818-c946d3864451';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_lists-panel_pane_1';
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
    $pane->uuid = 'b7083836-b9a1-46bd-8818-c946d3864451';
    $display->content['new-b7083836-b9a1-46bd-8818-c946d3864451'] = $pane;
    $display->panels['contentmainright'][0] = 'new-b7083836-b9a1-46bd-8818-c946d3864451';
    $pane = new stdClass();
    $pane->pid = 'new-4a869d36-0fef-4b65-89d4-937dc1b1b4a6';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
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
      <a class="navbar-brand" href="#">War Zones</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/theater/warzone/league">Leagues</a></li>
        <li><a href="/theater/warzone/tournament">Tournaments</a></li>
        <li><a href="/theater/warzone/all">All</a></li>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a869d36-0fef-4b65-89d4-937dc1b1b4a6';
    $display->content['new-4a869d36-0fef-4b65-89d4-937dc1b1b4a6'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-4a869d36-0fef-4b65-89d4-937dc1b1b4a6';
    $pane = new stdClass();
    $pane->pid = 'new-cbd80712-b834-4300-942c-bc4e1080e063';
    $pane->panel = 'contentmaintop';
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
      'admin_title' => 'Auth Nav Bar',
      'title' => '',
      'body' => '<!-- Authenticated User -->
<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">War Zones</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/theater/warzone/league">Leagues</a></li>
        <li><a href="/theater/warzone/tournament">Tournaments</a></li>
        <li><a href="/theater/warzone/all">All</a></li>
        <li class="dropdown">
            <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">Create <span class="caret"></span></a>
            <ul class="dropdown-menu">
                <li><a href="/node/add/war-zone-tournament">Tournament</a></li>
                <li><a href="/node/add/war-zone-league">League</a></li>
            </ul>
        </li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
      'format' => 'php_code',
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
    $pane->uuid = 'cbd80712-b834-4300-942c-bc4e1080e063';
    $display->content['new-cbd80712-b834-4300-942c-bc4e1080e063'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-cbd80712-b834-4300-942c-bc4e1080e063';
    $pane = new stdClass();
    $pane->pid = 'new-002d325a-45e6-4223-bba1-22343703f3ca';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>structured and competitive play on iToysoldiers</h2>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '002d325a-45e6-4223-bba1-22343703f3ca';
    $display->content['new-002d325a-45e6-4223-bba1-22343703f3ca'] = $pane;
    $display->panels['header'][0] = 'new-002d325a-45e6-4223-bba1-22343703f3ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-002d325a-45e6-4223-bba1-22343703f3ca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_main_page';
  $page->task = 'page';
  $page->admin_title = 'Theater Main Page';
  $page->admin_description = '';
  $page->path = 'theater';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Theater',
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
  $handler->name = 'page_war_zone_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_main_page';
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
        'title' => array(
          'value' => 'War Zones',
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
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
  $display->title = 'War Zones';
  $display->uuid = 'ec64381b-9065-42df-8568-fb65686c7160';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a638f55d-281b-4f2f-9a0f-8057843edab0';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Calendar Block',
      'title' => 'This Month',
      'body' => '<div class="seperator"></div>
<?php
  $block = module_invoke(\'views\', \'block_view\', \'event_calendar-block_1\');
  print render($block[\'content\']);
?>',
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
    $pane->uuid = 'a638f55d-281b-4f2f-9a0f-8057843edab0';
    $display->content['new-a638f55d-281b-4f2f-9a0f-8057843edab0'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-a638f55d-281b-4f2f-9a0f-8057843edab0';
    $pane = new stdClass();
    $pane->pid = 'new-9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_lists-panel_pane_1';
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
    $pane->uuid = '9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac';
    $display->content['new-9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac'] = $pane;
    $display->panels['contentmainright'][0] = 'new-9d4ac9b8-7bfd-42fe-82ba-b74ec818e1ac';
    $pane = new stdClass();
    $pane->pid = 'new-595564dd-216b-46ce-a90a-ee5fd51b010d';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
  <h1>Theaters</h1>
  <h2>a world of war - events and locations to field your toy soldier armies</h2>
</div>
',
      'format' => 'pure_html',
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
    $pane->uuid = '595564dd-216b-46ce-a90a-ee5fd51b010d';
    $display->content['new-595564dd-216b-46ce-a90a-ee5fd51b010d'] = $pane;
    $display->panels['header'][0] = 'new-595564dd-216b-46ce-a90a-ee5fd51b010d';
    $pane = new stdClass();
    $pane->pid = 'new-c2b6aed7-555c-4b61-86f2-4e89c91dfdd5';
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
      <a class="navbar-brand" href="#">Theaters</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/theater/battlefield">Battlefields</a></li>
        <li><a href="/theater/events">Calendar</a></li>
        <li><a href="/theater/narrative-campaigns">Campaigns</a></li>
        <li><a href="/theater/warzone">War Zones</a></li>
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
    $pane->uuid = 'c2b6aed7-555c-4b61-86f2-4e89c91dfdd5';
    $display->content['new-c2b6aed7-555c-4b61-86f2-4e89c91dfdd5'] = $pane;
    $display->panels['header'][1] = 'new-c2b6aed7-555c-4b61-86f2-4e89c91dfdd5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_manage';
  $page->task = 'page';
  $page->admin_title = 'War Zone: All: Manage';
  $page->admin_description = '';
  $page->path = 'node/%node/management/main';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'event' => 'event',
            'narrative_campaign_instance' => 'narrative_campaign_instance',
            'special_event' => 'special_event',
            'war_zone_league' => 'war_zone_league',
            'war_zone_tournament' => 'war_zone_tournament',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Author Check',
          'php' => 'if ($contexts[\'argument_entity_id:node_1\']->data->uid == $contexts[\'logged-in-user\']->data->uid || $contexts[\'logged-in-user\']->data->uid == 1) {
   return TRUE;
} else {
   return FALSE;
}
',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'entity_field_value:node:event:field_enable_its_features',
        'settings' => array(
          'field_enable_its_features' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_enable_its_features_value' => array(
            0 => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Manage',
    'name' => 'navigation',
    'weight' => '-10',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Manage',
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
  $handler->name = 'page_war_zone_manage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_manage';
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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'narrative_campaign_instance' => 'narrative_campaign_instance',
              'special_event' => 'special_event',
              'war_zone_league' => 'war_zone_league',
              'war_zone_tournament' => 'war_zone_tournament',
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
  $display->title = '%node:title Management';
  $display->uuid = 'dc1c81e4-b84a-4a29-8cd3-273bd11e9e82';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54253b68-46db-4bb3-882d-64d489c8928d';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
      'arguments' => array(
        'field_round_sc_value' => 'Current Round Scorecards',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '54253b68-46db-4bb3-882d-64d489c8928d';
    $display->content['new-54253b68-46db-4bb3-882d-64d489c8928d'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-54253b68-46db-4bb3-882d-64d489c8928d';
    $pane = new stdClass();
    $pane->pid = 'new-593de03a-46ed-43d0-a9a4-004c7c58a9ce';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '593de03a-46ed-43d0-a9a4-004c7c58a9ce';
    $display->content['new-593de03a-46ed-43d0-a9a4-004c7c58a9ce'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-593de03a-46ed-43d0-a9a4-004c7c58a9ce';
    $pane = new stdClass();
    $pane->pid = 'new-5563bb21-0511-4547-9c22-f26efde3570e';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5563bb21-0511-4547-9c22-f26efde3570e';
    $display->content['new-5563bb21-0511-4547-9c22-f26efde3570e'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-5563bb21-0511-4547-9c22-f26efde3570e';
    $pane = new stdClass();
    $pane->pid = 'new-27e37e08-92cb-4942-a278-a7c288690e95';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_player_final_scores-panel_pane_1';
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
    $pane->uuid = '27e37e08-92cb-4942-a278-a7c288690e95';
    $display->content['new-27e37e08-92cb-4942-a278-a7c288690e95'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-27e37e08-92cb-4942-a278-a7c288690e95';
    $pane = new stdClass();
    $pane->pid = 'new-92656c67-60f4-453a-9caa-ba9c9307a351';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_phase_rules-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'narrative_campaign_instance' => 'narrative_campaign_instance',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '92656c67-60f4-453a-9caa-ba9c9307a351';
    $display->content['new-92656c67-60f4-453a-9caa-ba9c9307a351'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-92656c67-60f4-453a-9caa-ba9c9307a351';
    $pane = new stdClass();
    $pane->pid = 'new-10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_registration-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca';
    $display->content['new-10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca'] = $pane;
    $display->panels['contentmainbottom'][5] = 'new-10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca';
    $pane = new stdClass();
    $pane->pid = 'new-fe02e533-1612-4ade-9a69-0cc54b13861f';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'war_zone_tournament' => 'war_zone_tournament',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '3',
                ),
              ),
            ),
            'field_status_value' => array(
              0 => '3',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Tournament: Signup Warning',
      'title' => 'Notice',
      'body' => 'Please mark attendance before clicking, "Start Warzone".',
      'format' => 'filtered_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alert alert-danger',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe02e533-1612-4ade-9a69-0cc54b13861f';
    $display->content['new-fe02e533-1612-4ade-9a69-0cc54b13861f'] = $pane;
    $display->panels['header'][0] = 'new-fe02e533-1612-4ade-9a69-0cc54b13861f';
    $pane = new stdClass();
    $pane->pid = 'new-893eb12a-00d8-4c8d-beb2-1f89977639f1';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_management-panel_pane_1';
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
    $pane->uuid = '893eb12a-00d8-4c8d-beb2-1f89977639f1';
    $display->content['new-893eb12a-00d8-4c8d-beb2-1f89977639f1'] = $pane;
    $display->panels['header'][1] = 'new-893eb12a-00d8-4c8d-beb2-1f89977639f1';
    $pane = new stdClass();
    $pane->pid = 'new-7509067c-2615-4992-b3ef-54332881baca';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_1';
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
    $pane->uuid = '7509067c-2615-4992-b3ef-54332881baca';
    $display->content['new-7509067c-2615-4992-b3ef-54332881baca'] = $pane;
    $display->panels['sidebar'][0] = 'new-7509067c-2615-4992-b3ef-54332881baca';
    $pane = new stdClass();
    $pane->pid = 'new-89629baa-92aa-44d4-9be5-874e4d78189d';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'hr_spacer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
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
    $pane->uuid = '89629baa-92aa-44d4-9be5-874e4d78189d';
    $display->content['new-89629baa-92aa-44d4-9be5-874e4d78189d'] = $pane;
    $display->panels['sidebar'][1] = 'new-89629baa-92aa-44d4-9be5-874e4d78189d';
    $pane = new stdClass();
    $pane->pid = 'new-ae924330-f6a5-49c2-9e7e-31c60d03dfb0';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:rules_links_war_zone_all_open_registration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'ae924330-f6a5-49c2-9e7e-31c60d03dfb0';
    $display->content['new-ae924330-f6a5-49c2-9e7e-31c60d03dfb0'] = $pane;
    $display->panels['sidebar'][2] = 'new-ae924330-f6a5-49c2-9e7e-31c60d03dfb0';
    $pane = new stdClass();
    $pane->pid = 'new-2a4fe893-bb6c-4bbd-8e00-3f5258cd8225';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:rules_links_wz_start';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2a4fe893-bb6c-4bbd-8e00-3f5258cd8225';
    $display->content['new-2a4fe893-bb6c-4bbd-8e00-3f5258cd8225'] = $pane;
    $display->panels['sidebar'][3] = 'new-2a4fe893-bb6c-4bbd-8e00-3f5258cd8225';
    $pane = new stdClass();
    $pane->pid = 'new-5eba1c07-b15d-4637-ae88-47f148b29b61';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:rules_links_wz_complete';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5eba1c07-b15d-4637-ae88-47f148b29b61';
    $display->content['new-5eba1c07-b15d-4637-ae88-47f148b29b61'] = $pane;
    $display->panels['sidebar'][4] = 'new-5eba1c07-b15d-4637-ae88-47f148b29b61';
    $pane = new stdClass();
    $pane->pid = 'new-7540ac00-19dc-47b7-b3f6-46bcdc2846a4';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
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
        1 => array(
          'name' => 'entity_field_value:node:narrative_campaign_instance:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '5',
                ),
              ),
            ),
            'field_status_value' => '5',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add Points Button',
      'title' => '',
      'body' => '<a href="#" data-toggle="collapse" data-target="#points">
  Add Points
</a>
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7540ac00-19dc-47b7-b3f6-46bcdc2846a4';
    $display->content['new-7540ac00-19dc-47b7-b3f6-46bcdc2846a4'] = $pane;
    $display->panels['sidebar'][5] = 'new-7540ac00-19dc-47b7-b3f6-46bcdc2846a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7509067c-2615-4992-b3ef-54332881baca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_war_zone_manage__event-management';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_manage';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Event Management',
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
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:event:field_enable_its_features',
          'settings' => array(
            'field_enable_its_features' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_enable_its_features_value' => array(
              0 => 1,
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'event-management',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
  $display->title = '%node:title Management';
  $display->uuid = 'dc1c81e4-b84a-4a29-8cd3-273bd11e9e82';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe02e533-1612-4ade-9a69-0cc54b13861f';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'war_zone_tournament' => 'war_zone_tournament',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '3',
                ),
              ),
            ),
            'field_status_value' => array(
              0 => '3',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Tournament: Signup Warning',
      'title' => 'Notice',
      'body' => 'Please mark attendance before clicking, "Start Warzone".',
      'format' => 'filtered_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alert alert-danger',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe02e533-1612-4ade-9a69-0cc54b13861f';
    $display->content['new-fe02e533-1612-4ade-9a69-0cc54b13861f'] = $pane;
    $display->panels['contentmain'][0] = 'new-fe02e533-1612-4ade-9a69-0cc54b13861f';
    $pane = new stdClass();
    $pane->pid = 'new-893eb12a-00d8-4c8d-beb2-1f89977639f1';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_management-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '893eb12a-00d8-4c8d-beb2-1f89977639f1';
    $display->content['new-893eb12a-00d8-4c8d-beb2-1f89977639f1'] = $pane;
    $display->panels['contentmain'][1] = 'new-893eb12a-00d8-4c8d-beb2-1f89977639f1';
    $pane = new stdClass();
    $pane->pid = 'new-54253b68-46db-4bb3-882d-64d489c8928d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
      'arguments' => array(
        'field_round_sc_value' => 'Current Round Scorecards',
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
    $pane->uuid = '54253b68-46db-4bb3-882d-64d489c8928d';
    $display->content['new-54253b68-46db-4bb3-882d-64d489c8928d'] = $pane;
    $display->panels['contentmain'][2] = 'new-54253b68-46db-4bb3-882d-64d489c8928d';
    $pane = new stdClass();
    $pane->pid = 'new-593de03a-46ed-43d0-a9a4-004c7c58a9ce';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '593de03a-46ed-43d0-a9a4-004c7c58a9ce';
    $display->content['new-593de03a-46ed-43d0-a9a4-004c7c58a9ce'] = $pane;
    $display->panels['contentmain'][3] = 'new-593de03a-46ed-43d0-a9a4-004c7c58a9ce';
    $pane = new stdClass();
    $pane->pid = 'new-5563bb21-0511-4547-9c22-f26efde3570e';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_tournament_score_cards-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5563bb21-0511-4547-9c22-f26efde3570e';
    $display->content['new-5563bb21-0511-4547-9c22-f26efde3570e'] = $pane;
    $display->panels['contentmain'][4] = 'new-5563bb21-0511-4547-9c22-f26efde3570e';
    $pane = new stdClass();
    $pane->pid = 'new-27e37e08-92cb-4942-a278-a7c288690e95';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_player_final_scores-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '27e37e08-92cb-4942-a278-a7c288690e95';
    $display->content['new-27e37e08-92cb-4942-a278-a7c288690e95'] = $pane;
    $display->panels['contentmain'][5] = 'new-27e37e08-92cb-4942-a278-a7c288690e95';
    $pane = new stdClass();
    $pane->pid = 'new-92656c67-60f4-453a-9caa-ba9c9307a351';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_phase_rules-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'narrative_campaign_instance' => 'narrative_campaign_instance',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '92656c67-60f4-453a-9caa-ba9c9307a351';
    $display->content['new-92656c67-60f4-453a-9caa-ba9c9307a351'] = $pane;
    $display->panels['contentmain'][6] = 'new-92656c67-60f4-453a-9caa-ba9c9307a351';
    $pane = new stdClass();
    $pane->pid = 'new-10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_registration-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca';
    $display->content['new-10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca'] = $pane;
    $display->panels['contentmain'][7] = 'new-10bf1327-3dc1-4b71-bbbb-b99cb4f1bcca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_manage'] = $page;

  return $pages;

}
