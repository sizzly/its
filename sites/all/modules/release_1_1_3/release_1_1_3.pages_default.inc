<?php
/**
 * @file
 * release_1_1_3.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function release_1_1_3_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_11';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -20;
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
  $handler->weight = -19;
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
      'field_round_duration' => array(
        'override' => 1,
        'label' => 'Phase Duration',
        'hidden_field' => '3',
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
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Narrative Campaign Instance',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
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
    'panels_breadcrumbs_titles' => 'Warzone',
    'panels_breadcrumbs_paths' => 'warzone',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bbba3f62-61a1-4212-88b0-e6244ffddfc8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c4f69f51-4dee-4efc-a1d2-43330a1b6e84';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_campaign_timeline-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4f69f51-4dee-4efc-a1d2-43330a1b6e84';
    $display->content['new-c4f69f51-4dee-4efc-a1d2-43330a1b6e84'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-c4f69f51-4dee-4efc-a1d2-43330a1b6e84';
    $pane = new stdClass();
    $pane->pid = 'new-3081eeb9-925c-4c94-a088-50b9898969e6';
    $pane->panel = 'contentmainleft';
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
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-success',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3081eeb9-925c-4c94-a088-50b9898969e6';
    $display->content['new-3081eeb9-925c-4c94-a088-50b9898969e6'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-3081eeb9-925c-4c94-a088-50b9898969e6';
    $pane = new stdClass();
    $pane->pid = 'new-da476ee6-43c7-4095-a5ba-06834984bdf2';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'da476ee6-43c7-4095-a5ba-06834984bdf2';
    $display->content['new-da476ee6-43c7-4095-a5ba-06834984bdf2'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-da476ee6-43c7-4095-a5ba-06834984bdf2';
    $pane = new stdClass();
    $pane->pid = 'new-3c5b30a2-895a-413f-96b3-cee5bafd0c88';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_9';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3c5b30a2-895a-413f-96b3-cee5bafd0c88';
    $display->content['new-3c5b30a2-895a-413f-96b3-cee5bafd0c88'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-3c5b30a2-895a-413f-96b3-cee5bafd0c88';
    $pane = new stdClass();
    $pane->pid = 'new-06c62137-c18c-4d99-867b-33bd50d0e75f';
    $pane->panel = 'contentmainleft';
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
    $pane->uuid = '06c62137-c18c-4d99-867b-33bd50d0e75f';
    $display->content['new-06c62137-c18c-4d99-867b-33bd50d0e75f'] = $pane;
    $display->panels['contentmainleft'][3] = 'new-06c62137-c18c-4d99-867b-33bd50d0e75f';
    $pane = new stdClass();
    $pane->pid = 'new-42481d30-bead-4898-949e-134305073113';
    $pane->panel = 'contentmainright';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '42481d30-bead-4898-949e-134305073113';
    $display->content['new-42481d30-bead-4898-949e-134305073113'] = $pane;
    $display->panels['contentmainright'][0] = 'new-42481d30-bead-4898-949e-134305073113';
    $pane = new stdClass();
    $pane->pid = 'new-2095af12-205e-445b-aed9-33a4d9429132';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_5';
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
    $pane->uuid = '2095af12-205e-445b-aed9-33a4d9429132';
    $display->content['new-2095af12-205e-445b-aed9-33a4d9429132'] = $pane;
    $display->panels['contentmainright'][1] = 'new-2095af12-205e-445b-aed9-33a4d9429132';
    $pane = new stdClass();
    $pane->pid = 'new-215994c6-ff0c-49a6-9f7a-425ed1ff7872';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_7';
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
    $pane->uuid = '215994c6-ff0c-49a6-9f7a-425ed1ff7872';
    $display->content['new-215994c6-ff0c-49a6-9f7a-425ed1ff7872'] = $pane;
    $display->panels['contentmainright'][2] = 'new-215994c6-ff0c-49a6-9f7a-425ed1ff7872';
    $pane = new stdClass();
    $pane->pid = 'new-e2f31ccd-5714-44ce-aca7-eb9aed838aea';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_3';
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
    $pane->uuid = 'e2f31ccd-5714-44ce-aca7-eb9aed838aea';
    $display->content['new-e2f31ccd-5714-44ce-aca7-eb9aed838aea'] = $pane;
    $display->panels['contentmainright'][3] = 'new-e2f31ccd-5714-44ce-aca7-eb9aed838aea';
    $pane = new stdClass();
    $pane->pid = 'new-32aec890-8a69-4261-86d6-4b45f39f3bb5';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_10';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32aec890-8a69-4261-86d6-4b45f39f3bb5';
    $display->content['new-32aec890-8a69-4261-86d6-4b45f39f3bb5'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-32aec890-8a69-4261-86d6-4b45f39f3bb5';
    $pane = new stdClass();
    $pane->pid = 'new-6dafcd82-884d-4d34-b138-d554ce7996b4';
    $pane->panel = 'footer';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6dafcd82-884d-4d34-b138-d554ce7996b4';
    $display->content['new-6dafcd82-884d-4d34-b138-d554ce7996b4'] = $pane;
    $display->panels['footer'][0] = 'new-6dafcd82-884d-4d34-b138-d554ce7996b4';
    $pane = new stdClass();
    $pane->pid = 'new-7caff502-fae1-43c6-802f-3d21fbfc97b9';
    $pane->panel = 'footer';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7caff502-fae1-43c6-802f-3d21fbfc97b9';
    $display->content['new-7caff502-fae1-43c6-802f-3d21fbfc97b9'] = $pane;
    $display->panels['footer'][1] = 'new-7caff502-fae1-43c6-802f-3d21fbfc97b9';
    $pane = new stdClass();
    $pane->pid = 'new-d39986a2-8f00-4410-b438-78f65b099bb9';
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
    $pane->uuid = 'd39986a2-8f00-4410-b438-78f65b099bb9';
    $display->content['new-d39986a2-8f00-4410-b438-78f65b099bb9'] = $pane;
    $display->panels['sidebar'][0] = 'new-d39986a2-8f00-4410-b438-78f65b099bb9';
    $pane = new stdClass();
    $pane->pid = 'new-27c93ac1-5e4f-4ddc-a450-d66936bfd76d';
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
    $pane->uuid = '27c93ac1-5e4f-4ddc-a450-d66936bfd76d';
    $display->content['new-27c93ac1-5e4f-4ddc-a450-d66936bfd76d'] = $pane;
    $display->panels['sidebar'][1] = 'new-27c93ac1-5e4f-4ddc-a450-d66936bfd76d';
    $pane = new stdClass();
    $pane->pid = 'new-8f9af446-9a44-40e5-890b-1c6dbcff7c27';
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
    $pane->uuid = '8f9af446-9a44-40e5-890b-1c6dbcff7c27';
    $display->content['new-8f9af446-9a44-40e5-890b-1c6dbcff7c27'] = $pane;
    $display->panels['sidebar'][2] = 'new-8f9af446-9a44-40e5-890b-1c6dbcff7c27';
    $pane = new stdClass();
    $pane->pid = 'new-d989ab3c-9c4c-48ad-87ba-8c142543fb70';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd989ab3c-9c4c-48ad-87ba-8c142543fb70';
    $display->content['new-d989ab3c-9c4c-48ad-87ba-8c142543fb70'] = $pane;
    $display->panels['sidebar'][3] = 'new-d989ab3c-9c4c-48ad-87ba-8c142543fb70';
    $pane = new stdClass();
    $pane->pid = 'new-c0e9e08d-c5c3-452e-937f-e1820d710612';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_instance_page_layout-panel_pane_8';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c0e9e08d-c5c3-452e-937f-e1820d710612';
    $display->content['new-c0e9e08d-c5c3-452e-937f-e1820d710612'] = $pane;
    $display->panels['sidebar'][4] = 'new-c0e9e08d-c5c3-452e-937f-e1820d710612';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function release_1_1_3_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_management';
  $page->task = 'page';
  $page->admin_title = 'War Zone Management';
  $page->admin_description = '';
  $page->path = 'node/%node/manage';
  $page->access = array(
    'plugins' => array(
      2 => array(
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
      3 => array(
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
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Manage',
    'name' => 'navigation',
    'weight' => '49',
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
  $handler->name = 'page_war_zone_management_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_management';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Tournament',
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
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Management';
  $display->uuid = '54856043-0e1a-44db-8dcd-dff4db31c3b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-82b5194a-c311-4f9a-9470-2620bdfcfaef';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_tourney_page_layout-panel_pane_3';
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
    $pane->uuid = '82b5194a-c311-4f9a-9470-2620bdfcfaef';
    $display->content['new-82b5194a-c311-4f9a-9470-2620bdfcfaef'] = $pane;
    $display->panels['contentmain'][0] = 'new-82b5194a-c311-4f9a-9470-2620bdfcfaef';
    $pane = new stdClass();
    $pane->pid = 'new-f911a120-7f96-4ffd-bff6-186f054b3c69';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_tourney_ranking_2-panel_pane_2';
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
    $pane->uuid = 'f911a120-7f96-4ffd-bff6-186f054b3c69';
    $display->content['new-f911a120-7f96-4ffd-bff6-186f054b3c69'] = $pane;
    $display->panels['contentmain'][1] = 'new-f911a120-7f96-4ffd-bff6-186f054b3c69';
    $pane = new stdClass();
    $pane->pid = 'new-eeb4f73c-a762-44b6-b3db-3368906d903b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_tourney_ranking_2-panel_pane_3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eeb4f73c-a762-44b6-b3db-3368906d903b';
    $display->content['new-eeb4f73c-a762-44b6-b3db-3368906d903b'] = $pane;
    $display->panels['contentmain'][2] = 'new-eeb4f73c-a762-44b6-b3db-3368906d903b';
    $pane = new stdClass();
    $pane->pid = 'new-d5dac70b-dc6d-4436-84fe-16a411c26e78';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_registrations-panel_pane_1';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd5dac70b-dc6d-4436-84fe-16a411c26e78';
    $display->content['new-d5dac70b-dc6d-4436-84fe-16a411c26e78'] = $pane;
    $display->panels['contentmain'][3] = 'new-d5dac70b-dc6d-4436-84fe-16a411c26e78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_war_zone_management_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_management';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'League',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
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
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Manage';
  $display->uuid = 'c61589c9-02f9-4c55-9656-5e59217942b2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3fa61ce3-ea23-40b7-a39f-ab68fe21f3fa';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_management-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
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
    $pane->uuid = '3fa61ce3-ea23-40b7-a39f-ab68fe21f3fa';
    $display->content['new-3fa61ce3-ea23-40b7-a39f-ab68fe21f3fa'] = $pane;
    $display->panels['contentmain'][0] = 'new-3fa61ce3-ea23-40b7-a39f-ab68fe21f3fa';
    $pane = new stdClass();
    $pane->pid = 'new-584b877c-d27c-430e-8c7c-4210f85fce60';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'master_v2_challenges-panel_pane_3';
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
    $pane->uuid = '584b877c-d27c-430e-8c7c-4210f85fce60';
    $display->content['new-584b877c-d27c-430e-8c7c-4210f85fce60'] = $pane;
    $display->panels['contentmain'][1] = 'new-584b877c-d27c-430e-8c7c-4210f85fce60';
    $pane = new stdClass();
    $pane->pid = 'new-fe9fcb66-8508-42ee-91f1-1d5138776f6f';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_registered_players-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe9fcb66-8508-42ee-91f1-1d5138776f6f';
    $display->content['new-fe9fcb66-8508-42ee-91f1-1d5138776f6f'] = $pane;
    $display->panels['contentmain'][2] = 'new-fe9fcb66-8508-42ee-91f1-1d5138776f6f';
    $pane = new stdClass();
    $pane->pid = 'new-290f0dba-53c0-4df2-a624-553e29175923';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_management_scores-panel_pane_1';
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
    $pane->uuid = '290f0dba-53c0-4df2-a624-553e29175923';
    $display->content['new-290f0dba-53c0-4df2-a624-553e29175923'] = $pane;
    $display->panels['contentmain'][3] = 'new-290f0dba-53c0-4df2-a624-553e29175923';
    $pane = new stdClass();
    $pane->pid = 'new-effac603-7137-4242-b88f-d28818c685b9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_registrations-panel_pane_1';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'effac603-7137-4242-b88f-d28818c685b9';
    $display->content['new-effac603-7137-4242-b88f-d28818c685b9'] = $pane;
    $display->panels['contentmain'][4] = 'new-effac603-7137-4242-b88f-d28818c685b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_war_zone_management_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_management';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Special Events',
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
              'special_event' => 'special_event',
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
  $display->title = '%node:title Management';
  $display->uuid = '54856043-0e1a-44db-8dcd-dff4db31c3b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93e8d7b0-d3b4-4f1e-af58-bae44a1de3ab';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Tools',
      'body' => '<div class="seperator"></div>
<ul class="nav nav-pills">
  <li role="presentation"><a href="#" data-toggle="modal" data-target="#award-achievement">Award Achievement</a></li>
  <li role="presentation">
<?php
   $destination = drupal_get_destination();
   $parameters = array();
   $str = render(rules_link_render(\'war_zone_open_league\', %node:nid, $destination, $parameters));
    print strip_tags($str, \'<a>\');
?>
</li>
</ul>
<div class="seperator"></div>
<!-- Modal --><div class="modal fade" id="award-achievement" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
        <h4 class="modal-title" id="myModalLabel">Grant Achievement</h4>
      </div>
      <div class="modal-body">

      <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'war_zone_grant_achievement\';
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
    $pane->uuid = '93e8d7b0-d3b4-4f1e-af58-bae44a1de3ab';
    $display->content['new-93e8d7b0-d3b4-4f1e-af58-bae44a1de3ab'] = $pane;
    $display->panels['contentmain'][0] = 'new-93e8d7b0-d3b4-4f1e-af58-bae44a1de3ab';
    $pane = new stdClass();
    $pane->pid = 'new-630918fd-c536-4ab9-be8e-f2b447ae4a49';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_special_event_page_layout-panel_pane_3';
    $pane->shown = FALSE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '630918fd-c536-4ab9-be8e-f2b447ae4a49';
    $display->content['new-630918fd-c536-4ab9-be8e-f2b447ae4a49'] = $pane;
    $display->panels['contentmain'][1] = 'new-630918fd-c536-4ab9-be8e-f2b447ae4a49';
    $pane = new stdClass();
    $pane->pid = 'new-d5dac70b-dc6d-4436-84fe-16a411c26e78';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_registrations-panel_pane_1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd5dac70b-dc6d-4436-84fe-16a411c26e78';
    $display->content['new-d5dac70b-dc6d-4436-84fe-16a411c26e78'] = $pane;
    $display->panels['contentmain'][2] = 'new-d5dac70b-dc6d-4436-84fe-16a411c26e78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_war_zone_management_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_management';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Campaign Instance',
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
  $display->layout = 'bootopoly_its';
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
  $display->title = '%node:title Management';
  $display->uuid = '54856043-0e1a-44db-8dcd-dff4db31c3b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d5dac70b-dc6d-4436-84fe-16a411c26e78';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_registrations-panel_pane_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd5dac70b-dc6d-4436-84fe-16a411c26e78';
    $display->content['new-d5dac70b-dc6d-4436-84fe-16a411c26e78'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-d5dac70b-dc6d-4436-84fe-16a411c26e78';
    $pane = new stdClass();
    $pane->pid = 'new-d8ce2a0e-3477-446e-b79a-7a61f8a6aaf7';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_campaign_phase_rules-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8ce2a0e-3477-446e-b79a-7a61f8a6aaf7';
    $display->content['new-d8ce2a0e-3477-446e-b79a-7a61f8a6aaf7'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-d8ce2a0e-3477-446e-b79a-7a61f8a6aaf7';
    $pane = new stdClass();
    $pane->pid = 'new-5954c25b-4cab-4b09-ad58-77af02cee8a8';
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
    $pane->uuid = '5954c25b-4cab-4b09-ad58-77af02cee8a8';
    $display->content['new-5954c25b-4cab-4b09-ad58-77af02cee8a8'] = $pane;
    $display->panels['sidebar'][0] = 'new-5954c25b-4cab-4b09-ad58-77af02cee8a8';
    $pane = new stdClass();
    $pane->pid = 'new-1c1a6d63-138c-4392-a782-2a344ce5747f';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Static Tools',
      'title' => 'Tools',
      'body' => '<div class="seperator"></div>
<ul class="nav nav-pills nav-stacked">
  <li role="presentation"><a href="#" data-toggle="modal" data-target="#award-achievement">Award Achievement</a></li>
  <li role="presentation">
<?php
   $destination = drupal_get_destination();
   $parameters = array();
   $str = render(rules_link_render(\'war_zone_open_league\', %node:nid, $destination, $parameters));
    print strip_tags($str, \'<a>\');
?>
</li>
</ul>

<div class="seperator"></div>
<!-- Modal --><div class="modal fade" id="award-achievement" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
        <h4 class="modal-title" id="myModalLabel">Grant Achievement</h4>
      </div>
      <div class="modal-body">

      <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'war_zone_grant_achievement\';
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c1a6d63-138c-4392-a782-2a344ce5747f';
    $display->content['new-1c1a6d63-138c-4392-a782-2a344ce5747f'] = $pane;
    $display->panels['sidebar'][1] = 'new-1c1a6d63-138c-4392-a782-2a344ce5747f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_management'] = $page;

  return $pages;

}
