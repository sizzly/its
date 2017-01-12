<?php
/**
 * @file
 * events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Events',
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
        'label' => 'Description',
        'hidden_field' => 0,
      ),
      'field_event_type' => array(
        'override' => 0,
        'label' => 'Event type',
        'hidden_field' => 0,
      ),
      'field_location' => array(
        'override' => 0,
        'label' => 'Location',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'field_supported_games' => array(
        'override' => 0,
        'label' => 'Supported Games',
        'hidden_field' => 0,
      ),
      'field_website' => array(
        'override' => 0,
        'label' => 'More Info',
        'hidden_field' => 0,
      ),
      'field_blog_army' => array(
        'override' => 0,
        'label' => 'Keywords',
        'hidden_field' => 0,
      ),
      'field_event_date_warzone' => array(
        'override' => 0,
        'label' => 'Event Date',
        'hidden_field' => 0,
      ),
      'field_entry_fee' => array(
        'override' => 0,
        'label' => 'Entry Fee',
        'hidden_field' => 0,
      ),
      'og_group_ref' => array(
        'override' => 0,
        'label' => 'Groups audience',
        'hidden_field' => 0,
      ),
      'field_event_organizer' => array(
        'override' => 0,
        'label' => 'I am the organizer',
        'hidden_field' => 0,
      ),
      'field_enable_its_features' => array(
        'override' => 0,
        'label' => 'Enable iToysoldiers Event Features',
        'hidden_field' => 0,
      ),
      'field_campaign_badge' => array(
        'override' => 0,
        'label' => 'Campaign Badge',
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
      'field_warzone_scheduling' => array(
        'override' => 0,
        'label' => 'Scheduling',
        'hidden_field' => 0,
      ),
      'field_status' => array(
        'override' => 1,
        'label' => 'Status',
        'hidden_field' => '1',
      ),
      'field_points_per_army' => array(
        'override' => 0,
        'label' => 'Points per army',
        'hidden_field' => 0,
      ),
      'field_open_registration' => array(
        'override' => 1,
        'label' => 'Open Registration',
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
              'event' => 'event',
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
  $export['node_edit_form_mutator'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Events',
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
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Theater
Events',
    'panels_breadcrumbs_paths' => 'theater
theater/events',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '93df7b4d-4261-45e1-a437-c8e3eba524ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d4e943c6-9f53-4f48-ad68-35888e7990db';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
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
          'not' => TRUE,
        ),
      ),
    );
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
    $pane->uuid = 'd4e943c6-9f53-4f48-ad68-35888e7990db';
    $display->content['new-d4e943c6-9f53-4f48-ad68-35888e7990db'] = $pane;
    $display->panels['contentmain'][0] = 'new-d4e943c6-9f53-4f48-ad68-35888e7990db';
    $pane = new stdClass();
    $pane->pid = 'new-031c29ee-85c0-4f67-ad3a-a41be88cc197';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_13';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
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
    );
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
    $pane->uuid = '031c29ee-85c0-4f67-ad3a-a41be88cc197';
    $display->content['new-031c29ee-85c0-4f67-ad3a-a41be88cc197'] = $pane;
    $display->panels['contentmain'][1] = 'new-031c29ee-85c0-4f67-ad3a-a41be88cc197';
    $pane = new stdClass();
    $pane->pid = 'new-40dabd07-d310-43cd-98f3-5a8c11b46a89';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'clubs_all_audience_list-panel_pane_1';
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
    $pane->uuid = '40dabd07-d310-43cd-98f3-5a8c11b46a89';
    $display->content['new-40dabd07-d310-43cd-98f3-5a8c11b46a89'] = $pane;
    $display->panels['contentmain'][2] = 'new-40dabd07-d310-43cd-98f3-5a8c11b46a89';
    $pane = new stdClass();
    $pane->pid = 'new-5990d264-7762-424b-b779-c481dbff41d2';
    $pane->panel = 'contentmain';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'current',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => 'Share',
      'override_title_heading' => 'h2',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5990d264-7762-424b-b779-c481dbff41d2';
    $display->content['new-5990d264-7762-424b-b779-c481dbff41d2'] = $pane;
    $display->panels['contentmain'][3] = 'new-5990d264-7762-424b-b779-c481dbff41d2';
    $pane = new stdClass();
    $pane->pid = 'new-027de8c2-cc15-40fa-a00c-6314b8a6b8d3';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_campaign_badge';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '027de8c2-cc15-40fa-a00c-6314b8a6b8d3';
    $display->content['new-027de8c2-cc15-40fa-a00c-6314b8a6b8d3'] = $pane;
    $display->panels['contentmain'][4] = 'new-027de8c2-cc15-40fa-a00c-6314b8a6b8d3';
    $pane = new stdClass();
    $pane->pid = 'new-a5c09156-6476-46fc-99d5-dabe670e459a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_8';
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
    $pane->uuid = 'a5c09156-6476-46fc-99d5-dabe670e459a';
    $display->content['new-a5c09156-6476-46fc-99d5-dabe670e459a'] = $pane;
    $display->panels['contentmain'][5] = 'new-a5c09156-6476-46fc-99d5-dabe670e459a';
    $pane = new stdClass();
    $pane->pid = 'new-fdbc0602-61bd-426b-bd94-66548d5b9361';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_4';
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
    $pane->uuid = 'fdbc0602-61bd-426b-bd94-66548d5b9361';
    $display->content['new-fdbc0602-61bd-426b-bd94-66548d5b9361'] = $pane;
    $display->panels['footer'][0] = 'new-fdbc0602-61bd-426b-bd94-66548d5b9361';
    $pane = new stdClass();
    $pane->pid = 'new-0488a145-f331-4ced-b94b-7fcb61b59192';
    $pane->panel = 'footer';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '0',
      'comments_per_page' => '10',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0488a145-f331-4ced-b94b-7fcb61b59192';
    $display->content['new-0488a145-f331-4ced-b94b-7fcb61b59192'] = $pane;
    $display->panels['footer'][1] = 'new-0488a145-f331-4ced-b94b-7fcb61b59192';
    $pane = new stdClass();
    $pane->pid = 'new-610b3760-d84c-4d02-aa5b-18e0737d11f3';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'hero_image_newsletter',
        'image_link' => '',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '610b3760-d84c-4d02-aa5b-18e0737d11f3';
    $display->content['new-610b3760-d84c-4d02-aa5b-18e0737d11f3'] = $pane;
    $display->panels['header'][0] = 'new-610b3760-d84c-4d02-aa5b-18e0737d11f3';
    $pane = new stdClass();
    $pane->pid = 'new-f567cda4-1e7e-4eaa-87df-262c737684c8';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f567cda4-1e7e-4eaa-87df-262c737684c8';
    $display->content['new-f567cda4-1e7e-4eaa-87df-262c737684c8'] = $pane;
    $display->panels['header'][1] = 'new-f567cda4-1e7e-4eaa-87df-262c737684c8';
    $pane = new stdClass();
    $pane->pid = 'new-d18f2aa9-6476-45b3-bd6e-0b988c0eae34';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
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
    $pane->uuid = 'd18f2aa9-6476-45b3-bd6e-0b988c0eae34';
    $display->content['new-d18f2aa9-6476-45b3-bd6e-0b988c0eae34'] = $pane;
    $display->panels['header'][2] = 'new-d18f2aa9-6476-45b3-bd6e-0b988c0eae34';
    $pane = new stdClass();
    $pane->pid = 'new-74d1e56e-ae9d-4276-82c3-dcbeb0507421';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'war_zone_all_player_final_scores-panel_pane_1';
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
    $pane->uuid = '74d1e56e-ae9d-4276-82c3-dcbeb0507421';
    $display->content['new-74d1e56e-ae9d-4276-82c3-dcbeb0507421'] = $pane;
    $display->panels['header'][3] = 'new-74d1e56e-ae9d-4276-82c3-dcbeb0507421';
    $pane = new stdClass();
    $pane->pid = 'new-aec39a15-8025-4261-b2fc-bda3703878a8';
    $pane->panel = 'sidebar';
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
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aec39a15-8025-4261-b2fc-bda3703878a8';
    $display->content['new-aec39a15-8025-4261-b2fc-bda3703878a8'] = $pane;
    $display->panels['sidebar'][0] = 'new-aec39a15-8025-4261-b2fc-bda3703878a8';
    $pane = new stdClass();
    $pane->pid = 'new-ed8eec22-7f2b-4727-a113-175617df527f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_15';
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
        'context_class' => 'panel-info',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ed8eec22-7f2b-4727-a113-175617df527f';
    $display->content['new-ed8eec22-7f2b-4727-a113-175617df527f'] = $pane;
    $display->panels['sidebar'][1] = 'new-ed8eec22-7f2b-4727-a113-175617df527f';
    $pane = new stdClass();
    $pane->pid = 'new-65aa9c4a-ed2e-4f58-bcf7-243dabc199d4';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_1';
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
    $pane->uuid = '65aa9c4a-ed2e-4f58-bcf7-243dabc199d4';
    $display->content['new-65aa9c4a-ed2e-4f58-bcf7-243dabc199d4'] = $pane;
    $display->panels['sidebar'][2] = 'new-65aa9c4a-ed2e-4f58-bcf7-243dabc199d4';
    $pane = new stdClass();
    $pane->pid = 'new-64cc4a0a-8732-40cd-9d4c-417fa65094b8';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_6';
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
    $pane->uuid = '64cc4a0a-8732-40cd-9d4c-417fa65094b8';
    $display->content['new-64cc4a0a-8732-40cd-9d4c-417fa65094b8'] = $pane;
    $display->panels['sidebar'][3] = 'new-64cc4a0a-8732-40cd-9d4c-417fa65094b8';
    $pane = new stdClass();
    $pane->pid = 'new-55d7f860-2f4e-4e1d-b913-97dea5afbcf8';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_7';
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
    $pane->uuid = '55d7f860-2f4e-4e1d-b913-97dea5afbcf8';
    $display->content['new-55d7f860-2f4e-4e1d-b913-97dea5afbcf8'] = $pane;
    $display->panels['sidebar'][4] = 'new-55d7f860-2f4e-4e1d-b913-97dea5afbcf8';
    $pane = new stdClass();
    $pane->pid = 'new-58772607-eb9f-4aed-b594-9927105c5f99';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_page_layout-panel_pane_9';
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
    $pane->uuid = '58772607-eb9f-4aed-b594-9927105c5f99';
    $display->content['new-58772607-eb9f-4aed-b594-9927105c5f99'] = $pane;
    $display->panels['sidebar'][5] = 'new-58772607-eb9f-4aed-b594-9927105c5f99';
    $pane = new stdClass();
    $pane->pid = 'new-7369f905-2ee7-46b1-84de-d3bde7bb58d2';
    $pane->panel = 'sidebar';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Details',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '7369f905-2ee7-46b1-84de-d3bde7bb58d2';
    $display->content['new-7369f905-2ee7-46b1-84de-d3bde7bb58d2'] = $pane;
    $display->panels['sidebar'][6] = 'new-7369f905-2ee7-46b1-84de-d3bde7bb58d2';
    $pane = new stdClass();
    $pane->pid = 'new-78c18cdd-5c5e-4f65-9525-552cbe798805';
    $pane->panel = 'sidebar';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
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
    $pane->uuid = '78c18cdd-5c5e-4f65-9525-552cbe798805';
    $display->content['new-78c18cdd-5c5e-4f65-9525-552cbe798805'] = $pane;
    $display->panels['sidebar'][7] = 'new-78c18cdd-5c5e-4f65-9525-552cbe798805';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Event Type',
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'event_type' => 'event_type',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Theater
Events',
    'panels_breadcrumbs_paths' => 'theater
theater/events',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Event Type: %term:name';
  $display->uuid = 'f7326251-f11b-44ed-9e4d-3377f26b74a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbafcc1d-84fd-4ff1-8174-427cfbf527c9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_all_lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'term_node_tid_depth' => '%term:tid',
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
    $pane->uuid = 'fbafcc1d-84fd-4ff1-8174-427cfbf527c9';
    $display->content['new-fbafcc1d-84fd-4ff1-8174-427cfbf527c9'] = $pane;
    $display->panels['contentmain'][0] = 'new-fbafcc1d-84fd-4ff1-8174-427cfbf527c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_main_page';
  $page->task = 'page';
  $page->admin_title = 'Events Main Page';
  $page->admin_description = '';
  $page->path = 'theater/events/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'main-menu',
    'weight' => '-50',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Events',
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
  $handler->name = 'page_events_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_main_page';
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
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Miniature War Gaming Events List',
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
  $display->layout = 'bootopoly_moscone';
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Wargaming Calendar of Events';
  $display->uuid = 'cd4967bf-cc17-43fa-aa23-b8e2e94d5a66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36b0b8b3-6340-4769-89f4-6304e954e2b8';
    $pane->panel = 'contentmain';
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
    $pane->uuid = '36b0b8b3-6340-4769-89f4-6304e954e2b8';
    $display->content['new-36b0b8b3-6340-4769-89f4-6304e954e2b8'] = $pane;
    $display->panels['contentmain'][0] = 'new-36b0b8b3-6340-4769-89f4-6304e954e2b8';
    $pane = new stdClass();
    $pane->pid = 'new-df48bf15-e13f-431c-bde8-062ecb223329';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_type_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'df48bf15-e13f-431c-bde8-062ecb223329';
    $display->content['new-df48bf15-e13f-431c-bde8-062ecb223329'] = $pane;
    $display->panels['contentmain'][1] = 'new-df48bf15-e13f-431c-bde8-062ecb223329';
    $pane = new stdClass();
    $pane->pid = 'new-e71235e1-9861-4e1f-b909-81cc94cff7f4';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Write Up',
      'title' => 'Upcoming Events',
      'body' => 'Here you\'ll find a list of all the miniature wargaming events that have been submitted to iToysoldiers.  They run the gamut between open gaming to leagues to massive battles to tournaments and everything in between. ',
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
    $pane->uuid = 'e71235e1-9861-4e1f-b909-81cc94cff7f4';
    $display->content['new-e71235e1-9861-4e1f-b909-81cc94cff7f4'] = $pane;
    $display->panels['sidebar'][0] = 'new-e71235e1-9861-4e1f-b909-81cc94cff7f4';
    $pane = new stdClass();
    $pane->pid = 'new-1d9bc336-9c97-4ca1-b889-ff899dec0ba5';
    $pane->panel = 'sidebar';
    $pane->type = 'views';
    $pane->subtype = 'event_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->uuid = '1d9bc336-9c97-4ca1-b889-ff899dec0ba5';
    $display->content['new-1d9bc336-9c97-4ca1-b889-ff899dec0ba5'] = $pane;
    $display->panels['sidebar'][1] = 'new-1d9bc336-9c97-4ca1-b889-ff899dec0ba5';
    $pane = new stdClass();
    $pane->pid = 'new-ae270f85-a216-4374-a1d2-47e4bf7ca2b4';
    $pane->panel = 'sidebar';
    $pane->type = 'views';
    $pane->subtype = 'event_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->uuid = 'ae270f85-a216-4374-a1d2-47e4bf7ca2b4';
    $display->content['new-ae270f85-a216-4374-a1d2-47e4bf7ca2b4'] = $pane;
    $display->panels['sidebar'][2] = 'new-ae270f85-a216-4374-a1d2-47e4bf7ca2b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_main_page'] = $page;

  return $pages;

}
