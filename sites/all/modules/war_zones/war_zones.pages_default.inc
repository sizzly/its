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
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Narrative Campaign Instance',
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
    $pane->pid = 'new-d4346dd9-3dad-4b5d-a989-dc7c14c593de';
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
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd4346dd9-3dad-4b5d-a989-dc7c14c593de';
    $display->content['new-d4346dd9-3dad-4b5d-a989-dc7c14c593de'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-d4346dd9-3dad-4b5d-a989-dc7c14c593de';
    $pane = new stdClass();
    $pane->pid = 'new-e5041e98-3c31-4910-9a6f-a14dd1d8869d';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_2';
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
    $pane->uuid = 'e5041e98-3c31-4910-9a6f-a14dd1d8869d';
    $display->content['new-e5041e98-3c31-4910-9a6f-a14dd1d8869d'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-e5041e98-3c31-4910-9a6f-a14dd1d8869d';
    $pane = new stdClass();
    $pane->pid = 'new-cd641e05-7427-48e4-a51a-f0f24d1b2817';
    $pane->panel = 'contentmainleft';
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
                  'value' => '3',
                ),
              ),
            ),
            'field_status_value' => '3',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Register',
      'title' => 'Register',
      'body' => '<?php
  $block = module_invoke(\'node_registration\', \'block_view\', \'node_registration_form\');
  print render($block[\'content\']);
?>',
      'format' => 'php_code',
      'substitute' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cd641e05-7427-48e4-a51a-f0f24d1b2817';
    $display->content['new-cd641e05-7427-48e4-a51a-f0f24d1b2817'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-cd641e05-7427-48e4-a51a-f0f24d1b2817';
    $pane = new stdClass();
    $pane->pid = 'new-a04e0b64-473e-46b5-9119-2213fe644a04';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a04e0b64-473e-46b5-9119-2213fe644a04';
    $display->content['new-a04e0b64-473e-46b5-9119-2213fe644a04'] = $pane;
    $display->panels['contentmainleft'][3] = 'new-a04e0b64-473e-46b5-9119-2213fe644a04';
    $pane = new stdClass();
    $pane->pid = 'new-fdc4458a-7259-4d4f-b8be-6c6ae693b315';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fdc4458a-7259-4d4f-b8be-6c6ae693b315';
    $display->content['new-fdc4458a-7259-4d4f-b8be-6c6ae693b315'] = $pane;
    $display->panels['contentmainleft'][4] = 'new-fdc4458a-7259-4d4f-b8be-6c6ae693b315';
    $pane = new stdClass();
    $pane->pid = 'new-ddaf1fa2-44b9-4d58-914e-a7e94ea91929';
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
    $pane->uuid = 'ddaf1fa2-44b9-4d58-914e-a7e94ea91929';
    $display->content['new-ddaf1fa2-44b9-4d58-914e-a7e94ea91929'] = $pane;
    $display->panels['contentmainright'][0] = 'new-ddaf1fa2-44b9-4d58-914e-a7e94ea91929';
    $pane = new stdClass();
    $pane->pid = 'new-f5c159a7-9903-4301-9002-3b872c85402c';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5c159a7-9903-4301-9002-3b872c85402c';
    $display->content['new-f5c159a7-9903-4301-9002-3b872c85402c'] = $pane;
    $display->panels['contentmainright'][1] = 'new-f5c159a7-9903-4301-9002-3b872c85402c';
    $pane = new stdClass();
    $pane->pid = 'new-b797d8fc-316f-4964-87da-3790ab79e5f5';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b797d8fc-316f-4964-87da-3790ab79e5f5';
    $display->content['new-b797d8fc-316f-4964-87da-3790ab79e5f5'] = $pane;
    $display->panels['contentmainright'][2] = 'new-b797d8fc-316f-4964-87da-3790ab79e5f5';
    $pane = new stdClass();
    $pane->pid = 'new-97dc0440-998a-48aa-811d-a5336d3d52ad';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_page_layout-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 0,
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
    $pane->uuid = '97dc0440-998a-48aa-811d-a5336d3d52ad';
    $display->content['new-97dc0440-998a-48aa-811d-a5336d3d52ad'] = $pane;
    $display->panels['contentmainright'][3] = 'new-97dc0440-998a-48aa-811d-a5336d3d52ad';
    $pane = new stdClass();
    $pane->pid = 'new-a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9';
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
    $pane->uuid = 'a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9';
    $display->content['new-a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-a7b543fd-6fb7-4ab9-bb1f-b0e70d7546d9';
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
    $pane->css = array();
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '93b0b4be-2cd0-420b-9a1e-c29c9c3f8da5';
    $display->content['new-93b0b4be-2cd0-420b-9a1e-c29c9c3f8da5'] = $pane;
    $display->panels['sidebar'][4] = 'new-93b0b4be-2cd0-420b-9a1e-c29c9c3f8da5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8a84982f-6db0-46be-87bb-dca6aa6b9b39';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'League 2.0',
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
              'league' => 'league',
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
  $display->uuid = '68c854f8-8c82-49b6-b37e-40644d0ec782';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52aa55e2-e8ec-44db-b3a0-90352756f67b';
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
    $pane->uuid = '52aa55e2-e8ec-44db-b3a0-90352756f67b';
    $display->content['new-52aa55e2-e8ec-44db-b3a0-90352756f67b'] = $pane;
    $display->panels['sidebar'][0] = 'new-52aa55e2-e8ec-44db-b3a0-90352756f67b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_12';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
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
  $display->layout = 'bootopoly_its';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f44634fe-b7d7-4b1e-9400-625a71c82394';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a4dc85ec-c6bd-4fc3-a078-c427e3158711';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_tourney_page_layout-panel_pane_1';
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
    $pane->uuid = 'a4dc85ec-c6bd-4fc3-a078-c427e3158711';
    $display->content['new-a4dc85ec-c6bd-4fc3-a078-c427e3158711'] = $pane;
    $display->panels['header'][0] = 'new-a4dc85ec-c6bd-4fc3-a078-c427e3158711';
    $pane = new stdClass();
    $pane->pid = 'new-bb3c542a-9118-46e3-9eb4-2169e904135c';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
      'admin_title' => 'Setup State',
      'title' => 'Setup',
      'body' => '<h3>This Tournament is not live!</h3>

<p>%node:title is currently in&nbsp;<strong>Setup</strong>&nbsp;mode. &nbsp;It is not visible to players. &nbsp;In order to activate this tournament and open up registration you will need to visit the "Manage" tab and click&nbsp;<strong>Open Registration.</strong></p>

<p>Please make sure that all of the settings for your tournament are accurate before opening registration. &nbsp;A fair number of settings cannot be changed once the tournament is open.</p>

<p>Thanks for using iToysoldiers to manage your tournament. &nbsp;Please let us know if you have any feedback. &nbsp;Good luck!</p>

<p>Rob<br />
iToysoldiers.com</p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-danger',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb3c542a-9118-46e3-9eb4-2169e904135c';
    $display->content['new-bb3c542a-9118-46e3-9eb4-2169e904135c'] = $pane;
    $display->panels['header'][1] = 'new-bb3c542a-9118-46e3-9eb4-2169e904135c';
    $pane = new stdClass();
    $pane->pid = 'new-b246c549-e36a-45cb-9681-26ffc6ebfd09';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:war_zone_tournament:field_status',
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
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Registration form',
      'title' => 'Register',
      'body' => '<?php
  $block = module_invoke(\'node_registration\', \'block_view\', \'node_registration_form\');
  print render($block[\'content\']);
?>',
      'format' => 'php_code',
      'substitute' => 0,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b246c549-e36a-45cb-9681-26ffc6ebfd09';
    $display->content['new-b246c549-e36a-45cb-9681-26ffc6ebfd09'] = $pane;
    $display->panels['header'][2] = 'new-b246c549-e36a-45cb-9681-26ffc6ebfd09';
    $pane = new stdClass();
    $pane->pid = 'new-aeb809c4-41d8-4280-b87f-99326e44d12e';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_tourney_ranking_2-panel_pane_1';
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
    $pane->uuid = 'aeb809c4-41d8-4280-b87f-99326e44d12e';
    $display->content['new-aeb809c4-41d8-4280-b87f-99326e44d12e'] = $pane;
    $display->panels['header'][3] = 'new-aeb809c4-41d8-4280-b87f-99326e44d12e';
    $pane = new stdClass();
    $pane->pid = 'new-be188b99-0d88-4b5d-a758-e3ef8fdcdd33';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_all_awards-panel_pane_1';
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
            'field_status_value' => '10',
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
                  'value' => '15',
                ),
              ),
            ),
            'field_status_value' => '15',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'be188b99-0d88-4b5d-a758-e3ef8fdcdd33';
    $display->content['new-be188b99-0d88-4b5d-a758-e3ef8fdcdd33'] = $pane;
    $display->panels['header'][4] = 'new-be188b99-0d88-4b5d-a758-e3ef8fdcdd33';
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
  $display->title_pane = 'new-a4dc85ec-c6bd-4fc3-a078-c427e3158711';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_12'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
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
  $display->layout = 'bootopoly_its';
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
  $display->layout = 'bootopoly_its';
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
    $pane->pid = 'new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $pane->panel = 'contentmaintop';
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
    $display->panels['contentmaintop'][0] = 'new-a696564f-5d5e-496a-b7e7-a05d9c06f1c5';
    $pane = new stdClass();
    $pane->pid = 'new-644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $pane->panel = 'contentmaintop';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $display->content['new-644bf573-39c4-4cfb-890b-4b942b5e9ee8'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-644bf573-39c4-4cfb-890b-4b942b5e9ee8';
    $pane = new stdClass();
    $pane->pid = 'new-8c0b1573-4321-4f86-874e-947d49662239';
    $pane->panel = 'contentmaintop';
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
    $display->panels['contentmaintop'][2] = 'new-8c0b1573-4321-4f86-874e-947d49662239';
    $pane = new stdClass();
    $pane->pid = 'new-8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $pane->panel = 'contentmaintop';
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
    $display->panels['contentmaintop'][3] = 'new-8f3a210b-8a49-430c-9b2d-c8b10221ec88';
    $pane = new stdClass();
    $pane->pid = 'new-9551c216-4787-47a9-b3e5-82151805aeb7';
    $pane->panel = 'contentmaintop';
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
    $display->panels['contentmaintop'][4] = 'new-9551c216-4787-47a9-b3e5-82151805aeb7';
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
    'no_blocks' => 1,
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
  $display->layout = 'bootopoly_bryant';
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
    $pane = new stdClass();
    $pane->pid = 'new-0bfaa326-17b4-4d64-8b87-8847fac99846';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_special_event_page_layout-panel_pane_1';
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
    $pane->uuid = '0bfaa326-17b4-4d64-8b87-8847fac99846';
    $display->content['new-0bfaa326-17b4-4d64-8b87-8847fac99846'] = $pane;
    $display->panels['sidebar'][0] = 'new-0bfaa326-17b4-4d64-8b87-8847fac99846';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_all_news_and_updates'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_all_player_list';
  $page->task = 'page';
  $page->admin_title = 'War Zone: All: Player List';
  $page->admin_description = '';
  $page->path = 'node/%node/player-list';
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
  $handler->name = 'page_war_zone_all_player_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_all_player_list';
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
    'panels_breadcrumbs_titles' => 'Warzone
%node:title',
    'panels_breadcrumbs_paths' => 'warzone
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_bryant';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Players';
  $display->uuid = 'f9849c8b-ae09-4462-886e-a1d10d807a68';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01a4daac-955a-4275-85de-e86a62d852d8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_platers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = '01a4daac-955a-4275-85de-e86a62d852d8';
    $display->content['new-01a4daac-955a-4275-85de-e86a62d852d8'] = $pane;
    $display->panels['contentmain'][0] = 'new-01a4daac-955a-4275-85de-e86a62d852d8';
    $pane = new stdClass();
    $pane->pid = 'new-0bfaa326-17b4-4d64-8b87-8847fac99846';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_special_event_page_layout-panel_pane_1';
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
    $pane->uuid = '0bfaa326-17b4-4d64-8b87-8847fac99846';
    $display->content['new-0bfaa326-17b4-4d64-8b87-8847fac99846'] = $pane;
    $display->panels['sidebar'][0] = 'new-0bfaa326-17b4-4d64-8b87-8847fac99846';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-01a4daac-955a-4275-85de-e86a62d852d8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_all_player_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'war_zone_main_page';
  $page->task = 'page';
  $page->admin_title = 'War Zone Main Page';
  $page->admin_description = '';
  $page->path = 'warzone';
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
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'War Zones';
  $display->uuid = 'ec64381b-9065-42df-8568-fb65686c7160';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-595564dd-216b-46ce-a90a-ee5fd51b010d';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="jumbotron">
  <h1>War Zones</h1>
  <h2>a world of war - events and locations to field your toy soldier armies</h2>

  <div>
    <?php print views_embed_view("location_map" , "panel_pane_2"); ?> 
  </div>
</div>
',
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
    $pane->uuid = '595564dd-216b-46ce-a90a-ee5fd51b010d';
    $display->content['new-595564dd-216b-46ce-a90a-ee5fd51b010d'] = $pane;
    $display->panels['contentmain'][0] = 'new-595564dd-216b-46ce-a90a-ee5fd51b010d';
    $pane = new stdClass();
    $pane->pid = 'new-ea43f1cd-0f39-41e9-bfef-ed8733782d19';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Triptich',
      'title' => '',
      'body' => '<div class="col-md-4">
<div class="panel panel-primary">
  <div class="panel-heading">
    <h3 class="panel-title">Leagues</h3>
  </div>
  <div class="panel-body">
<p>
<?php print views_embed_view("war_zone_list2" , "panel_pane_2"); ?> 
</p>
  </div>
</div>
</div>

<div class="col-md-4">
<div class="panel panel-primary">
  <div class="panel-heading">
    <h3 class="panel-title">Tournaments</h3>
  </div>
  <div class="panel-body">
<p>
    <?php print views_embed_view("war_zone_list2" , "panel_pane_3"); ?> 
</p>
  </div>
</div>
</div>

<div class="col-md-4">
<div class="panel panel-primary">
  <div class="panel-heading">
    <h3 class="panel-title"><?php echo date("F"); ?> Calendar</h3>
  </div>
  <div class="panel-body">
<?php print views_embed_view("event_calendar" , "block_1"); ?> 
<h4>Upcoming</h4>
<p><?php print views_embed_view("event_calendar" , "block_2"); ?> </p>
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ea43f1cd-0f39-41e9-bfef-ed8733782d19';
    $display->content['new-ea43f1cd-0f39-41e9-bfef-ed8733782d19'] = $pane;
    $display->panels['contentmain'][1] = 'new-ea43f1cd-0f39-41e9-bfef-ed8733782d19';
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
  $page->admin_title = 'War Zone Management';
  $page->admin_description = '';
  $page->path = 'node/%node/management';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'league' => 'league',
            'narrative_campaign' => 'narrative_campaign',
            'narrative_campaign_instance' => 'narrative_campaign_instance',
            'special_event' => 'special_event',
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
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Manage',
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
  $handler->name = 'page_war_zone_manage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'war_zone_manage';
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
  $display->layout = 'bootopoly_bryant';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Management';
  $display->uuid = 'dc1c81e4-b84a-4a29-8cd3-273bd11e9e82';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bff2ba8c-3427-4e97-8b50-a8344f7e4e99';
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
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bff2ba8c-3427-4e97-8b50-a8344f7e4e99';
    $display->content['new-bff2ba8c-3427-4e97-8b50-a8344f7e4e99'] = $pane;
    $display->panels['contentmain'][0] = 'new-bff2ba8c-3427-4e97-8b50-a8344f7e4e99';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '92656c67-60f4-453a-9caa-ba9c9307a351';
    $display->content['new-92656c67-60f4-453a-9caa-ba9c9307a351'] = $pane;
    $display->panels['contentmain'][1] = 'new-92656c67-60f4-453a-9caa-ba9c9307a351';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7509067c-2615-4992-b3ef-54332881baca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_manage'] = $page;

  return $pages;

}
