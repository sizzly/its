<?php
/**
 * @file
 * core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function core_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_10';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Battlefield',
    'form_title' => '',
    'contexts' => array(),
    'relationships' => array(),
    'modification' => array(
      ':title' => array(
        'override' => 0,
        'label' => 'Name',
        'hidden_field' => 0,
      ),
      'field_address' => array(
        'override' => 1,
        'label' => 'Address',
        'hidden_field' => '1',
      ),
      'field_geolocation' => array(
        'override' => 0,
        'label' => 'Geolocation',
        'hidden_field' => 0,
      ),
      'field_location_type' => array(
        'override' => 0,
        'label' => 'Location type',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'body' => array(
        'override' => 0,
        'label' => 'Description',
        'hidden_field' => 0,
      ),
      'field_website' => array(
        'override' => 0,
        'label' => 'Website',
        'hidden_field' => 0,
      ),
      'field_supported_games' => array(
        'override' => 0,
        'label' => 'Supported Games',
        'hidden_field' => 0,
      ),
      'field_phone' => array(
        'override' => 0,
        'label' => 'Phone',
        'hidden_field' => 0,
      ),
      'field_address_2' => array(
        'override' => 0,
        'label' => 'Address',
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
              'location' => 'location',
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
  $export['node_edit_form_mutator_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Blog Entry',
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
      'field_blog_army' => array(
        'override' => 0,
        'label' => 'Tags',
        'hidden_field' => 0,
      ),
      'field_rate_content' => array(
        'override' => 0,
        'label' => 'Rate Content',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'field_points_per_army' => array(
        'override' => 1,
        'label' => 'Points',
        'hidden_field' => '1',
      ),
      'field_site_event' => array(
        'override' => 1,
        'label' => 'List Crit',
        'hidden_field' => '1',
      ),
      'field_your_army' => array(
        'override' => 1,
        'label' => 'Army',
        'hidden_field' => '1',
      ),
      'field_opponent_s_army' => array(
        'override' => 1,
        'label' => 'Designed to defeat',
        'hidden_field' => '1',
      ),
      'field_list_crit_tags' => array(
        'override' => 1,
        'label' => 'List Crit Tags',
        'hidden_field' => '1',
      ),
      'field_batteresult_commander' => array(
        'override' => 1,
        'label' => 'Commander',
        'hidden_field' => '1',
      ),
      'field_listcrit_component_units' => array(
        'override' => 1,
        'label' => 'Component Units',
        'hidden_field' => '1',
      ),
      'field_allied_detatchment' => array(
        'override' => 1,
        'label' => 'Allied Detatchment',
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
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Acknowledged Battle',
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
      'field_game_date' => array(
        'override' => 1,
        'label' => 'Date',
        'hidden_field' => '1',
      ),
      'field_opponent' => array(
        'override' => 1,
        'label' => 'Opponent',
        'hidden_field' => '1',
      ),
      'field_images' => array(
        'override' => 0,
        'label' => 'Images',
        'hidden_field' => 0,
      ),
      'field_your_results' => array(
        'override' => 1,
        'label' => 'Your Results',
        'hidden_field' => '1',
      ),
      'field_game' => array(
        'override' => 1,
        'label' => 'Game',
        'hidden_field' => '1',
      ),
      'field_mission' => array(
        'override' => 1,
        'label' => 'Mission',
        'hidden_field' => '1',
      ),
      'field_opponent_s_army' => array(
        'override' => 1,
        'label' => 'Opponent\'s Army',
        'hidden_field' => '1',
      ),
      'field_your_army' => array(
        'override' => 1,
        'label' => 'Your Army',
        'hidden_field' => '1',
      ),
      'field_game_reference' => array(
        'override' => 1,
        'label' => 'Game Reference',
        'hidden_field' => '1',
      ),
      'field_victory' => array(
        'override' => 0,
        'label' => 'Victory',
        'hidden_field' => 0,
      ),
      'field_draw' => array(
        'override' => 0,
        'label' => 'Draw',
        'hidden_field' => 0,
      ),
      'field_defeat' => array(
        'override' => 0,
        'label' => 'Defeat',
        'hidden_field' => 0,
      ),
      'field_location' => array(
        'override' => 1,
        'label' => 'Battlefield',
        'hidden_field' => '1',
      ),
      'field_event_link' => array(
        'override' => 1,
        'label' => 'Event',
        'hidden_field' => '1',
      ),
      'field_points_per_army' => array(
        'override' => 0,
        'label' => 'Points per army',
        'hidden_field' => 0,
      ),
      'field_batteresult_commander' => array(
        'override' => 0,
        'label' => 'Commander',
        'hidden_field' => 0,
      ),
      'field_battle_most_valuable_unit' => array(
        'override' => 0,
        'label' => 'Most Valuable Unit',
        'hidden_field' => 0,
      ),
      'field_battle_deployment' => array(
        'override' => 0,
        'label' => 'Deployment',
        'hidden_field' => 0,
      ),
      'field_battle_mission_rules' => array(
        'override' => 0,
        'label' => 'Mission Rules in Effect',
        'hidden_field' => 0,
      ),
      'field_your_commander_survival' => array(
        'override' => 0,
        'label' => 'Your Commander Survival',
        'hidden_field' => 0,
      ),
      'field_enemy_commander_survival' => array(
        'override' => 0,
        'label' => 'Enemy Commander Survival',
        'hidden_field' => 0,
      ),
      'field_its_rating' => array(
        'override' => 1,
        'label' => 'iTS_Rating',
        'hidden_field' => '1',
      ),
      'field_battleresult_enemy_command' => array(
        'override' => 0,
        'label' => 'Enemy Commander',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 1,
        'label' => 'Image',
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
              'game_result_system_' => 'game_result_system_',
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
  $export['node_edit_form_mutator_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_6';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Gallery',
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
      'field_images' => array(
        'override' => 0,
        'label' => 'Images',
        'hidden_field' => 0,
      ),
      'field_armies' => array(
        'override' => 0,
        'label' => 'Categories',
        'hidden_field' => 0,
      ),
      'field_tags' => array(
        'override' => 1,
        'label' => 'Tags',
        'hidden_field' => '1',
      ),
      'field_site_event' => array(
        'override' => 0,
        'label' => 'Taken at a listed event?',
        'hidden_field' => 0,
      ),
      'field_event_link' => array(
        'override' => 0,
        'label' => 'Event',
        'hidden_field' => 0,
      ),
      'field_rating' => array(
        'override' => 0,
        'label' => 'Rating',
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
              'gallery' => 'gallery',
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
  $export['node_edit_form_mutator_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_7';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Battle Results',
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
      'field_images' => array(
        'override' => 0,
        'label' => 'Images',
        'hidden_field' => 0,
      ),
      'field_game' => array(
        'override' => 1,
        'label' => 'Game',
        'hidden_field' => '1',
      ),
      'field_mission' => array(
        'override' => 0,
        'label' => 'Mission',
        'hidden_field' => 0,
      ),
      'field_game_date' => array(
        'override' => 0,
        'label' => 'Date',
        'hidden_field' => 0,
      ),
      'field_your_army' => array(
        'override' => 0,
        'label' => 'Your Army',
        'hidden_field' => 0,
      ),
      'field_opponent_s_army' => array(
        'override' => 0,
        'label' => 'Opponent\'s Army',
        'hidden_field' => 0,
      ),
      'field_your_results' => array(
        'override' => 0,
        'label' => 'Your Results',
        'hidden_field' => 0,
      ),
      'field_opponent' => array(
        'override' => 0,
        'label' => 'Opponent ID',
        'hidden_field' => 0,
      ),
      'field_victory' => array(
        'override' => 0,
        'label' => 'Victory',
        'hidden_field' => 0,
      ),
      'field_draw' => array(
        'override' => 0,
        'label' => 'Draw',
        'hidden_field' => 0,
      ),
      'field_defeat' => array(
        'override' => 0,
        'label' => 'Defeat',
        'hidden_field' => 0,
      ),
      'field_location' => array(
        'override' => 0,
        'label' => 'Battlefield',
        'hidden_field' => 0,
      ),
      'field_event_link' => array(
        'override' => 1,
        'label' => 'Event',
        'hidden_field' => '1',
      ),
      'field_opponent_s_name' => array(
        'override' => 0,
        'label' => 'Opponent\'s Name',
        'hidden_field' => 0,
      ),
      'field_game_reference' => array(
        'override' => 1,
        'label' => 'Game Reference',
        'hidden_field' => '1',
      ),
      'field_points_per_army' => array(
        'override' => 0,
        'label' => 'Points per army',
        'hidden_field' => 0,
      ),
      'field_batteresult_commander' => array(
        'override' => 0,
        'label' => 'Commander',
        'hidden_field' => 0,
      ),
      'field_battle_most_valuable_unit' => array(
        'override' => 0,
        'label' => 'Most Valuable Unit',
        'hidden_field' => 0,
      ),
      'field_battle_deployment' => array(
        'override' => 0,
        'label' => 'Deployment',
        'hidden_field' => 0,
      ),
      'field_battle_mission_rules' => array(
        'override' => 0,
        'label' => 'Mission Rules in Effect',
        'hidden_field' => 0,
      ),
      'field_battle_my_vc' => array(
        'override' => 0,
        'label' => 'My Victory Conditions met',
        'hidden_field' => 0,
      ),
      'field_image' => array(
        'override' => 1,
        'label' => 'Image',
        'hidden_field' => '1',
      ),
      'field_allied_detatchment' => array(
        'override' => 0,
        'label' => 'Your Allied Detatchment',
        'hidden_field' => 0,
      ),
      'field_opponent_s_allied_detachme' => array(
        'override' => 0,
        'label' => 'Opponent\'s Allied Detachment',
        'hidden_field' => 0,
      ),
      'field_tourney_p1_battle' => array(
        'override' => 0,
        'label' => 'Tourney P1',
        'hidden_field' => 0,
      ),
      'field_tourney_p2_battle' => array(
        'override' => 0,
        'label' => 'Tourney P2',
        'hidden_field' => 0,
      ),
      'field_your_commander_survival' => array(
        'override' => 0,
        'label' => 'Your Commander Survival',
        'hidden_field' => 0,
      ),
      'field_enemy_commander_survival' => array(
        'override' => 0,
        'label' => 'Enemy Commander Survival',
        'hidden_field' => 0,
      ),
      'field_its_rating' => array(
        'override' => 0,
        'label' => 'iTS_Rating',
        'hidden_field' => 0,
      ),
      'field_battleresult_enemy_command' => array(
        'override' => 0,
        'label' => 'Enemy Commander',
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
        'override' => 1,
        'label' => 'Revision information',
        'hidden_field' => '1',
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
              'game_results' => 'game_results',
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
  $export['node_edit_form_mutator_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_form_mutator_8';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'form_mutator';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Battlefield - not Iron Monger',
    'form_title' => '',
    'contexts' => array(),
    'relationships' => array(),
    'modification' => array(
      ':title' => array(
        'override' => 0,
        'label' => 'Name',
        'hidden_field' => 0,
      ),
      'field_address' => array(
        'override' => 0,
        'label' => 'Address',
        'hidden_field' => 0,
      ),
      'field_geolocation' => array(
        'override' => 0,
        'label' => 'Geolocation',
        'hidden_field' => 0,
      ),
      'field_location_type' => array(
        'override' => 0,
        'label' => 'Location type',
        'hidden_field' => 0,
      ),
      'group_group' => array(
        'override' => 1,
        'label' => 'Group',
        'hidden_field' => '1',
      ),
      'field_image' => array(
        'override' => 0,
        'label' => 'Image',
        'hidden_field' => 0,
      ),
      'body' => array(
        'override' => 1,
        'label' => 'Description',
        'hidden_field' => '1',
      ),
      'field_website' => array(
        'override' => 1,
        'label' => 'Website',
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
              'location' => 'location',
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
              1 => 9,
              2 => 8,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_edit_form_mutator_8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_16539a59-3c8a-477f-a570-581965d05a69';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'Models',
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
              'models' => 'models',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Munitions
Modeling Projects',
    'panels_breadcrumbs_paths' => 'munitions
munitions/modeling-projects',
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
  $display->title = '%node:title';
  $display->uuid = '63ebbe70-ddef-4378-a81f-9aa3f556ec67';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd15e743-33a6-422f-9be7-92482b42264d';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="row">
<div class="col-sm-6">
<?php print views_embed_view("core_all_node_layout" , "panel_pane_2"); ?>   
</div>
<div class="col-sm-6">
<?php print views_embed_view("models_all_page_layout" , "panel_pane_1"); ?>
</div>
</div>',
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
    $pane->uuid = 'bd15e743-33a6-422f-9be7-92482b42264d';
    $display->content['new-bd15e743-33a6-422f-9be7-92482b42264d'] = $pane;
    $display->panels['contentmain'][0] = 'new-bd15e743-33a6-422f-9be7-92482b42264d';
    $pane = new stdClass();
    $pane->pid = 'new-7639c277-1dc1-4d32-8ad4-e701b2c8c5b2';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'models_all_page_layout-panel_pane_3';
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
    $pane->uuid = '7639c277-1dc1-4d32-8ad4-e701b2c8c5b2';
    $display->content['new-7639c277-1dc1-4d32-8ad4-e701b2c8c5b2'] = $pane;
    $display->panels['contentmain'][1] = 'new-7639c277-1dc1-4d32-8ad4-e701b2c8c5b2';
    $pane = new stdClass();
    $pane->pid = 'new-287e6f2b-6b5e-4c3f-a758-6250f6f991ca';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Initial Thoughts',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '287e6f2b-6b5e-4c3f-a758-6250f6f991ca';
    $display->content['new-287e6f2b-6b5e-4c3f-a758-6250f6f991ca'] = $pane;
    $display->panels['contentmain'][2] = 'new-287e6f2b-6b5e-4c3f-a758-6250f6f991ca';
    $pane = new stdClass();
    $pane->pid = 'new-8b2a8b00-27ec-4988-9786-3e7fcee38ed0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_4';
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
    $pane->uuid = '8b2a8b00-27ec-4988-9786-3e7fcee38ed0';
    $display->content['new-8b2a8b00-27ec-4988-9786-3e7fcee38ed0'] = $pane;
    $display->panels['contentmain'][3] = 'new-8b2a8b00-27ec-4988-9786-3e7fcee38ed0';
    $pane = new stdClass();
    $pane->pid = 'new-392264f0-7f60-4598-8d79-373bbd41739c';
    $pane->panel = 'contentmain';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '392264f0-7f60-4598-8d79-373bbd41739c';
    $display->content['new-392264f0-7f60-4598-8d79-373bbd41739c'] = $pane;
    $display->panels['contentmain'][4] = 'new-392264f0-7f60-4598-8d79-373bbd41739c';
    $pane = new stdClass();
    $pane->pid = 'new-ff30024b-0e00-4910-9cbd-b7a3f1dc16e9';
    $pane->panel = 'contentmain';
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
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Post',
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
      'substitute' => 0,
      'name' => 'posts_update_no_battle',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ff30024b-0e00-4910-9cbd-b7a3f1dc16e9';
    $display->content['new-ff30024b-0e00-4910-9cbd-b7a3f1dc16e9'] = $pane;
    $display->panels['contentmain'][5] = 'new-ff30024b-0e00-4910-9cbd-b7a3f1dc16e9';
    $pane = new stdClass();
    $pane->pid = 'new-b289da47-4862-40c5-9d5f-6b9ac3bcf12d';
    $pane->panel = 'contentmain';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b289da47-4862-40c5-9d5f-6b9ac3bcf12d';
    $display->content['new-b289da47-4862-40c5-9d5f-6b9ac3bcf12d'] = $pane;
    $display->panels['contentmain'][6] = 'new-b289da47-4862-40c5-9d5f-6b9ac3bcf12d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_16539a59-3c8a-477f-a570-581965d05a69'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_15';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Army Profile',
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
              'army_profile' => 'army_profile',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node:author
Armies',
    'panels_breadcrumbs_paths' => 'user/%node:author:uid
user/%node:author:uid/armies',
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
      'center' => NULL,
      'data_sheet' => NULL,
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
  $display->uuid = '4cb974fd-5af8-4f16-914e-35812d41b255';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4f12cf2f-1f0d-4c08-a1ce-9d4d1163d6ea';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_3';
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
    $pane->uuid = '4f12cf2f-1f0d-4c08-a1ce-9d4d1163d6ea';
    $display->content['new-4f12cf2f-1f0d-4c08-a1ce-9d4d1163d6ea'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-4f12cf2f-1f0d-4c08-a1ce-9d4d1163d6ea';
    $pane = new stdClass();
    $pane->pid = 'new-9c7a677e-4eee-4025-870e-237f5b8800a0';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Body',
      'title' => '',
      'body' => '<div>

  <!-- Nav tabs -->
  <ul class="nav nav-tabs" role="tablist">
    <li role="presentation" class="active"><a href="#narrative" aria-controls="home" role="tab" data-toggle="tab">Narrative</a></li>
    <li role="presentation"><a href="#gaming" aria-controls="profile" role="tab" data-toggle="tab">Gaming</a></li>
    <li role="presentation"><a href="#modeling" aria-controls="messages" role="tab" data-toggle="tab">Modeling</a></li>
  </ul>

  <!-- Tab panes -->
  <div class="tab-content">
    <div role="tabpanel" class="tab-pane active" id="narrative">
      <div class="panel"><div class="panel-body"><?php print views_embed_view("core_all_node_layout" , "panel_pane_1"); ?></div></div>
    </div>
    <div role="tabpanel" class="tab-pane" id="gaming">Gaming Elements</div>
    <div role="tabpanel" class="tab-pane" id="modeling">Modeling Elements</div>
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
    $pane->uuid = '9c7a677e-4eee-4025-870e-237f5b8800a0';
    $display->content['new-9c7a677e-4eee-4025-870e-237f5b8800a0'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-9c7a677e-4eee-4025-870e-237f5b8800a0';
    $pane = new stdClass();
    $pane->pid = 'new-c25e0b3e-2d08-460c-859c-b0004c099c98';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_4';
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
    $pane->uuid = 'c25e0b3e-2d08-460c-859c-b0004c099c98';
    $display->content['new-c25e0b3e-2d08-460c-859c-b0004c099c98'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-c25e0b3e-2d08-460c-859c-b0004c099c98';
    $pane = new stdClass();
    $pane->pid = 'new-25258632-a5cc-4cfb-b693-d115d59503d7';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '25258632-a5cc-4cfb-b693-d115d59503d7';
    $display->content['new-25258632-a5cc-4cfb-b693-d115d59503d7'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-25258632-a5cc-4cfb-b693-d115d59503d7';
    $pane = new stdClass();
    $pane->pid = 'new-8bdb101e-0ea5-4387-b933-6ebcb8aef17e';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8bdb101e-0ea5-4387-b933-6ebcb8aef17e';
    $display->content['new-8bdb101e-0ea5-4387-b933-6ebcb8aef17e'] = $pane;
    $display->panels['contentmainbottom'][4] = 'new-8bdb101e-0ea5-4387-b933-6ebcb8aef17e';
    $pane = new stdClass();
    $pane->pid = 'new-25281efe-bae1-4280-8065-03cf8ce0bc08';
    $pane->panel = 'contentmainbottom';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '25281efe-bae1-4280-8065-03cf8ce0bc08';
    $display->content['new-25281efe-bae1-4280-8065-03cf8ce0bc08'] = $pane;
    $display->panels['contentmainbottom'][5] = 'new-25281efe-bae1-4280-8065-03cf8ce0bc08';
    $pane = new stdClass();
    $pane->pid = 'new-3f425402-69a7-4c80-a26c-90f0bb89e4d3';
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
    $pane->uuid = '3f425402-69a7-4c80-a26c-90f0bb89e4d3';
    $display->content['new-3f425402-69a7-4c80-a26c-90f0bb89e4d3'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-3f425402-69a7-4c80-a26c-90f0bb89e4d3';
    $pane = new stdClass();
    $pane->pid = 'new-a68b9a23-1b50-476a-a340-2ebe764d0e5c';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profile_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'a68b9a23-1b50-476a-a340-2ebe764d0e5c';
    $display->content['new-a68b9a23-1b50-476a-a340-2ebe764d0e5c'] = $pane;
    $display->panels['contentmainright'][0] = 'new-a68b9a23-1b50-476a-a340-2ebe764d0e5c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_15'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__battle-meta';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Battle Meta',
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
              'custom_property' => 'custom_property',
              'deployment' => 'deployment',
              'missions' => 'missions',
              'scenario_special_rules' => 'scenario_special_rules',
              'units' => 'units',
              'victory_conditions' => 'victory_conditions',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'abstract' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'keywords' => array(
          'value' => '[term:name] battles, [term:field-army-game:name] battles',
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
        'og:description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'og:type' => array(
          'value' => 'website',
        ),
      ),
    ),
    'name' => 'battle-meta',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Battles
Meta
',
    'panels_breadcrumbs_paths' => 'battle-reports
battle-reports/battle-meta
',
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
      'sidebar' => NULL,
      'footer' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'a5173420-e4f8-436e-9644-c681e4248859';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5fc066b-cf6d-4395-b30d-679435cc803c';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_default_page_layout-panel_pane_1';
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
    $pane->uuid = 'b5fc066b-cf6d-4395-b30d-679435cc803c';
    $display->content['new-b5fc066b-cf6d-4395-b30d-679435cc803c'] = $pane;
    $display->panels['header'][0] = 'new-b5fc066b-cf6d-4395-b30d-679435cc803c';
    $pane = new stdClass();
    $pane->pid = 'new-a24793d8-d3ec-476a-a2cd-002912af0281';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_3';
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
    $pane->uuid = 'a24793d8-d3ec-476a-a2cd-002912af0281';
    $display->content['new-a24793d8-d3ec-476a-a2cd-002912af0281'] = $pane;
    $display->panels['header'][1] = 'new-a24793d8-d3ec-476a-a2cd-002912af0281';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__battle-meta'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_7';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'abstract' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'keywords' => array(
          'value' => '[term:name] battles, [term:field-army-game:name] battles',
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
        'og:description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'og:type' => array(
          'value' => 'website',
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
      'footer' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'a5173420-e4f8-436e-9644-c681e4248859';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5fc066b-cf6d-4395-b30d-679435cc803c';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_default_page_layout-panel_pane_1';
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
    $pane->uuid = 'b5fc066b-cf6d-4395-b30d-679435cc803c';
    $display->content['new-b5fc066b-cf6d-4395-b30d-679435cc803c'] = $pane;
    $display->panels['header'][0] = 'new-b5fc066b-cf6d-4395-b30d-679435cc803c';
    $pane = new stdClass();
    $pane->pid = 'new-a24793d8-d3ec-476a-a2cd-002912af0281';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_3';
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
    $pane->uuid = 'a24793d8-d3ec-476a-a2cd-002912af0281';
    $display->content['new-a24793d8-d3ec-476a-a2cd-002912af0281'] = $pane;
    $display->panels['header'][1] = 'new-a24793d8-d3ec-476a-a2cd-002912af0281';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Player View v2',
    'no_blocks' => 0,
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
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = ' %user:name';
  $display->uuid = '3a36b3d3-e442-478c-8c83-d8cadf161067';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ab095e32-1837-447d-9ee3-a6b3d43d9b21';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_prfile_user_201406-panel_pane_1';
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
    $pane->uuid = 'ab095e32-1837-447d-9ee3-a6b3d43d9b21';
    $display->content['new-ab095e32-1837-447d-9ee3-a6b3d43d9b21'] = $pane;
    $display->panels['contentmain'][0] = 'new-ab095e32-1837-447d-9ee3-a6b3d43d9b21';
    $pane = new stdClass();
    $pane->pid = 'new-99e16b1d-de9e-4ddf-81e9-eb4dfa5ac4d5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_prfile_user_201406-panel_pane_6';
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
    $pane->uuid = '99e16b1d-de9e-4ddf-81e9-eb4dfa5ac4d5';
    $display->content['new-99e16b1d-de9e-4ddf-81e9-eb4dfa5ac4d5'] = $pane;
    $display->panels['contentmain'][1] = 'new-99e16b1d-de9e-4ddf-81e9-eb4dfa5ac4d5';
    $pane = new stdClass();
    $pane->pid = 'new-68d1c00f-074a-4cf1-8a12-5017b973c720';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'topbuffer',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '68d1c00f-074a-4cf1-8a12-5017b973c720';
    $display->content['new-68d1c00f-074a-4cf1-8a12-5017b973c720'] = $pane;
    $display->panels['contentmain'][2] = 'new-68d1c00f-074a-4cf1-8a12-5017b973c720';
    $pane = new stdClass();
    $pane->pid = 'new-a98467e2-7320-4089-be89-2398cdf2c43e';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="row">

<div class="col-xs-12 clearfix">
 <?php print views_embed_view("player_profile_cards" , "panel_pane_1"); ?>
 <?php print views_embed_view("player_profile_cards" , "panel_pane_2"); ?>
 <?php print views_embed_view("player_profile_cards" , "panel_pane_3"); ?>
 <?php print views_embed_view("player_profile_cards" , "panel_pane_4"); ?>
 <?php print views_embed_view("player_profile_cards" , "panel_pane_5"); ?>
 <?php print views_embed_view("player_profile_cards" , "panel_pane_6"); ?>
</div>

</div>',
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
    $pane->uuid = 'a98467e2-7320-4089-be89-2398cdf2c43e';
    $display->content['new-a98467e2-7320-4089-be89-2398cdf2c43e'] = $pane;
    $display->panels['contentmain'][3] = 'new-a98467e2-7320-4089-be89-2398cdf2c43e';
    $pane = new stdClass();
    $pane->pid = 'new-41a14611-4d59-4d38-b345-f540063aedc5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_4';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'topbuffer',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '41a14611-4d59-4d38-b345-f540063aedc5';
    $display->content['new-41a14611-4d59-4d38-b345-f540063aedc5'] = $pane;
    $display->panels['contentmain'][4] = 'new-41a14611-4d59-4d38-b345-f540063aedc5';
    $pane = new stdClass();
    $pane->pid = 'new-ab2f4c43-f74b-45ae-86fb-574ac194c173';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Armies and Games Graphs',
      'title' => '',
      'body' => '<div class="panel panel-primary">
<div class="panel-heading">
<h3 class="panel-title">Game Play</h3>
</div>
<div class="panel-body">

<div class="col-sm-6 col-xs-12">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Armies Played</h3>
</div>
<?php print views_embed_view("_player_profile_201406" , "panel_pane_2"); ?>
</div>
</div>

<div class="col-sm-6 col-xs-12">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Games Played</h3>
</div>
<?php print views_embed_view("_player_profile_201406" , "panel_pane_3"); ?>
</div>
</div>

</div>
</div>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ab2f4c43-f74b-45ae-86fb-574ac194c173';
    $display->content['new-ab2f4c43-f74b-45ae-86fb-574ac194c173'] = $pane;
    $display->panels['contentmain'][5] = 'new-ab2f4c43-f74b-45ae-86fb-574ac194c173';
    $pane = new stdClass();
    $pane->pid = 'new-d2aeaa69-a43e-4ff5-a72c-fbed242afa63';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'admin_title' => 'Overview',
      'title' => 'Overview',
      'body' => '<div class="col-sm-12 col-xs-12 col-md-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Overall</h3>
</div>
<?php print views_embed_view("_player_prfile_user_201406" , "panel_pane_2"); ?>
</div>
</div>

<div class="col-sm-12 col-xs-12 col-md-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battle Summary</h3>
</div>
<?php print views_embed_view("_player_profile_201406" , "panel_pane_5"); ?>
</div>
</div>',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd2aeaa69-a43e-4ff5-a72c-fbed242afa63';
    $display->content['new-d2aeaa69-a43e-4ff5-a72c-fbed242afa63'] = $pane;
    $display->panels['contentmain'][6] = 'new-d2aeaa69-a43e-4ff5-a72c-fbed242afa63';
    $pane = new stdClass();
    $pane->pid = 'new-40e3bd9f-878c-4f91-aa43-4a8a116d6c73';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_6';
    $pane->shown = FALSE;
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '40e3bd9f-878c-4f91-aa43-4a8a116d6c73';
    $display->content['new-40e3bd9f-878c-4f91-aa43-4a8a116d6c73'] = $pane;
    $display->panels['contentmain'][7] = 'new-40e3bd9f-878c-4f91-aa43-4a8a116d6c73';
    $pane = new stdClass();
    $pane->pid = 'new-25e85101-8321-40b9-b531-823df4bb6729';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_11';
    $pane->shown = FALSE;
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '25e85101-8321-40b9-b531-823df4bb6729';
    $display->content['new-25e85101-8321-40b9-b531-823df4bb6729'] = $pane;
    $display->panels['contentmain'][8] = 'new-25e85101-8321-40b9-b531-823df4bb6729';
    $pane = new stdClass();
    $pane->pid = 'new-0d451530-3d10-4c0a-baf8-62f81990120e';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_missions-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'block',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '0d451530-3d10-4c0a-baf8-62f81990120e';
    $display->content['new-0d451530-3d10-4c0a-baf8-62f81990120e'] = $pane;
    $display->panels['contentmain'][9] = 'new-0d451530-3d10-4c0a-baf8-62f81990120e';
    $pane = new stdClass();
    $pane->pid = 'new-1fd2985d-5453-4955-bc21-29c9ce968839';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_commander-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '1fd2985d-5453-4955-bc21-29c9ce968839';
    $display->content['new-1fd2985d-5453-4955-bc21-29c9ce968839'] = $pane;
    $display->panels['contentmain'][10] = 'new-1fd2985d-5453-4955-bc21-29c9ce968839';
    $pane = new stdClass();
    $pane->pid = 'new-76eb5f0f-c86b-4a9c-ab74-278028b6e20e';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_leagues-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '76eb5f0f-c86b-4a9c-ab74-278028b6e20e';
    $display->content['new-76eb5f0f-c86b-4a9c-ab74-278028b6e20e'] = $pane;
    $display->panels['contentmain'][11] = 'new-76eb5f0f-c86b-4a9c-ab74-278028b6e20e';
    $pane = new stdClass();
    $pane->pid = 'new-af7b53d9-1772-4c81-89b3-353a2de91d49';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_content_pages-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'af7b53d9-1772-4c81-89b3-353a2de91d49';
    $display->content['new-af7b53d9-1772-4c81-89b3-353a2de91d49'] = $pane;
    $display->panels['contentmain'][12] = 'new-af7b53d9-1772-4c81-89b3-353a2de91d49';
    $pane = new stdClass();
    $pane->pid = 'new-898c709c-0d68-42ab-8813-8352d0907980';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_content_pages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '898c709c-0d68-42ab-8813-8352d0907980';
    $display->content['new-898c709c-0d68-42ab-8813-8352d0907980'] = $pane;
    $display->panels['contentmain'][13] = 'new-898c709c-0d68-42ab-8813-8352d0907980';
    $pane = new stdClass();
    $pane->pid = 'new-a91a8747-518f-4130-9c10-6ce5ae99ab8a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_content_pages-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'a91a8747-518f-4130-9c10-6ce5ae99ab8a';
    $display->content['new-a91a8747-518f-4130-9c10-6ce5ae99ab8a'] = $pane;
    $display->panels['contentmain'][14] = 'new-a91a8747-518f-4130-9c10-6ce5ae99ab8a';
    $pane = new stdClass();
    $pane->pid = 'new-a8c4e318-6d58-4865-81c3-208266de463d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_content_pages-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'a8c4e318-6d58-4865-81c3-208266de463d';
    $display->content['new-a8c4e318-6d58-4865-81c3-208266de463d'] = $pane;
    $display->panels['contentmain'][15] = 'new-a8c4e318-6d58-4865-81c3-208266de463d';
    $pane = new stdClass();
    $pane->pid = 'new-883e2d28-b829-43b6-a446-0f6d4eddff7f';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_content_pages-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '883e2d28-b829-43b6-a446-0f6d4eddff7f';
    $display->content['new-883e2d28-b829-43b6-a446-0f6d4eddff7f'] = $pane;
    $display->panels['contentmain'][16] = 'new-883e2d28-b829-43b6-a446-0f6d4eddff7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'armies_factions';
  $page->task = 'page';
  $page->admin_title = 'Armies/Factions';
  $page->admin_description = '';
  $page->path = 'battle-meta/armies';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Armies',
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
  $handler->name = 'page_armies_factions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'armies_factions';
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
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Armies and Factions';
  $display->uuid = '6667d5fc-a946-40de-a073-d1f7f31856cb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14eac22b-6fbb-4ee4-bcc6-6fce976d291e';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'meta_pages-panel_pane_1';
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
    $pane->uuid = '14eac22b-6fbb-4ee4-bcc6-6fce976d291e';
    $display->content['new-14eac22b-6fbb-4ee4-bcc6-6fce976d291e'] = $pane;
    $display->panels['contentmain'][0] = 'new-14eac22b-6fbb-4ee4-bcc6-6fce976d291e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['armies_factions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'army_profile_detail';
  $page->task = 'page';
  $page->admin_title = 'Army Profile Detail';
  $page->admin_description = '';
  $page->path = 'user/%user/armies/%pfl';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
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
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
    'pfl' => array(
      'id' => 1,
      'identifier' => 'Field collection item: ID',
      'name' => 'entity_id:field_collection_item',
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
  $handler->name = 'page_army_profile_detail_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'army_profile_detail';
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
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy term from Field collection item (on Field collection item: Army [field_army_profile])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_army_profile-field_collection_item-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:field_collection_item_1',
        'id' => 1,
      ),
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
  $display->title = '%user:name\'s %taxonomy_term:name';
  $display->uuid = '316e6f9e-3a60-4ecc-a18a-291c18742970';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c0aab401-cd30-4173-9aef-7e20beafe1ec';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_army_profile-panel_pane_2';
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
    $pane->uuid = 'c0aab401-cd30-4173-9aef-7e20beafe1ec';
    $display->content['new-c0aab401-cd30-4173-9aef-7e20beafe1ec'] = $pane;
    $display->panels['contentmain'][0] = 'new-c0aab401-cd30-4173-9aef-7e20beafe1ec';
    $pane = new stdClass();
    $pane->pid = 'new-5996b335-365c-451a-8f6c-ce81317abd97';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Author Check',
            'php' => '$value = ctools_context_keyword_substitute(\'%user:uid\', array(), $contexts);
$value2 = $contexts[\'logged-in-user\']->data->uid;
return ($value == $value2);

',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Tools',
      'body' => '<p><button type="button" class="btn btn-default" data-toggle="collapse" data-target="#chronicle">
  Chronicle
</button>
</p>

<div id="chronicle" class="collapse">
    <div class="panel panel-default">
      <div class="panel-heading">
        <span class="pull-right">
          <span class="glyphicon glyphicon-question-sign" data-toggle="popover" title="Chronicle" data-content="Chronicle your army\'s deeds. This will also generate an item on your feed."></span>
          </span>
        <h3 class="panel-title">Chronicle</h3>
      </div>
      <div class="panel-body">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'army_event\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
      </div>
    </div>
</div>
',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5996b335-365c-451a-8f6c-ce81317abd97';
    $display->content['new-5996b335-365c-451a-8f6c-ce81317abd97'] = $pane;
    $display->panels['contentmain'][1] = 'new-5996b335-365c-451a-8f6c-ce81317abd97';
    $pane = new stdClass();
    $pane->pid = 'new-5b71d797-a4b4-4558-8eb7-7036b9621793';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Chronicle',
      'title' => '',
      'body' => '<script type=\'text/javascript\' src=\'http://code.jquery.com/jquery-git.js\'></script>
<script type="text/javascript" src="http://cdn.knightlab.com/libs/timeline/latest/js/storyjs-embed.js"></script>
        <script>
            $(document).ready(function() {
                createStoryJS({
                    type:       \'timeline\',
                    width:      \'100%\',
                    height:     \'500\',
                    source:     \'/timeline_json.php?ap=%pfl:item-id\',
                    embed_id:   \'my-timeline\',
                    font: \'DroidSerif-DroidSans\'

                });
            });
        </script>
        <!-- END TimelineJS -->

<div id="my-timeline"></div>',
      'format' => 'php_code',
      'substitute' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5b71d797-a4b4-4558-8eb7-7036b9621793';
    $display->content['new-5b71d797-a4b4-4558-8eb7-7036b9621793'] = $pane;
    $display->panels['contentmain'][2] = 'new-5b71d797-a4b4-4558-8eb7-7036b9621793';
    $pane = new stdClass();
    $pane->pid = 'new-154d92d1-82a1-4eb6-a2a1-19894473d1f7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_your_army_tid' => '%taxonomy_term:tid',
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
    $pane->uuid = '154d92d1-82a1-4eb6-a2a1-19894473d1f7';
    $display->content['new-154d92d1-82a1-4eb6-a2a1-19894473d1f7'] = $pane;
    $display->panels['contentmain'][3] = 'new-154d92d1-82a1-4eb6-a2a1-19894473d1f7';
    $pane = new stdClass();
    $pane->pid = 'new-3629f387-3f52-403d-af7c-5004a4a3fe8b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_armies_tid' => '%taxonomy_term:tid',
      ),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3629f387-3f52-403d-af7c-5004a4a3fe8b';
    $display->content['new-3629f387-3f52-403d-af7c-5004a4a3fe8b'] = $pane;
    $display->panels['contentmain'][4] = 'new-3629f387-3f52-403d-af7c-5004a4a3fe8b';
    $pane = new stdClass();
    $pane->pid = 'new-a6ec5ad2-0ff5-4375-a533-b1e230cb08e1';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_blog_army_tid' => '%taxonomy_term:tid',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a6ec5ad2-0ff5-4375-a533-b1e230cb08e1';
    $display->content['new-a6ec5ad2-0ff5-4375-a533-b1e230cb08e1'] = $pane;
    $display->panels['contentmain'][5] = 'new-a6ec5ad2-0ff5-4375-a533-b1e230cb08e1';
    $pane = new stdClass();
    $pane->pid = 'new-590d0a1d-80d9-465b-8bf9-2d03c172c538';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Game Play Graphs',
      'title' => '',
      'body' => '<div class="panel panel-primary">
<div class="panel-heading">
<h3 class="panel-title">Game Play</h3>
</div>
<div class="panel-body">

<div class="col-sm-6 col-xs-12">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Opponent\'s Armies</h3>
</div>
<?php print views_embed_view("_player_profile_201406" , "panel_pane_10", %user:uid, %taxonomy_term:tid); ?>
</div>
</div>

<div class="col-sm-6 col-xs-12">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Results</h3>
</div>
<?php print views_embed_view("_player_profile_201406" , "panel_pane_12", %user:uid, %taxonomy_term:tid); ?>
</div>
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '590d0a1d-80d9-465b-8bf9-2d03c172c538';
    $display->content['new-590d0a1d-80d9-465b-8bf9-2d03c172c538'] = $pane;
    $display->panels['contentmain'][6] = 'new-590d0a1d-80d9-465b-8bf9-2d03c172c538';
    $pane = new stdClass();
    $pane->pid = 'new-1bc3bfd0-7bda-47af-beaa-240f4fcb29eb';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Overview',
      'title' => 'Overview',
      'body' => '<div class="col-sm-12 col-xs-12 col-md-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Opponents</h3>
</div>
<?php print views_embed_view("_player_profile_201406" , "panel_pane_16", %user:uid, %taxonomy_term:tid); ?>
</div>
</div>

<div class="col-sm-12 col-xs-12 col-md-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battle Summary</h3>
</div>
<?php print views_embed_view("_player_profile_201406" , "panel_pane_13", %user:uid, %taxonomy_term:tid); ?>
</div>
</div>',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '1bc3bfd0-7bda-47af-beaa-240f4fcb29eb';
    $display->content['new-1bc3bfd0-7bda-47af-beaa-240f4fcb29eb'] = $pane;
    $display->panels['contentmain'][7] = 'new-1bc3bfd0-7bda-47af-beaa-240f4fcb29eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_profile_detail'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'army_profile_page';
  $page->task = 'page';
  $page->admin_title = 'Army Profile Page';
  $page->admin_description = '';
  $page->path = 'user/%user/armies';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Armies',
    'name' => 'navigation',
    'weight' => '35',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
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
  $handler->name = 'page_army_profile_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'army_profile_page';
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
  $display->title = '%user:name-raw\'s Armies';
  $display->uuid = 'acd4c7b5-6f08-4432-a443-2e6110bb4719';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-49102c79-9fe9-4dc7-b772-97bf0c4be0a5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profile_chronicle-panel_pane_1';
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
    $pane->uuid = '49102c79-9fe9-4dc7-b772-97bf0c4be0a5';
    $display->content['new-49102c79-9fe9-4dc7-b772-97bf0c4be0a5'] = $pane;
    $display->panels['contentmain'][0] = 'new-49102c79-9fe9-4dc7-b772-97bf0c4be0a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_profile_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'army_profiles_all_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Army Profiles: All: Landing Page';
  $page->admin_description = '';
  $page->path = 'order-of-battle/player-armies';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Army Profiles',
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
  $handler->name = 'page_army_profiles_all_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'army_profiles_all_landing_page';
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
    'name' => 'panel',
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
  $display->title = 'Army Profiles';
  $display->uuid = '14d2610f-3116-4319-b083-a325e67da0fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3c809a9-24b3-4595-86c8-6f637e9671a2';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profile_all_lists-panel_pane_1';
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
    $pane->uuid = 'c3c809a9-24b3-4595-86c8-6f637e9671a2';
    $display->content['new-c3c809a9-24b3-4595-86c8-6f637e9671a2'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-c3c809a9-24b3-4595-86c8-6f637e9671a2';
    $pane = new stdClass();
    $pane->pid = 'new-8b1598f2-73a6-413d-9040-839a1e36eea3';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'messages_all_lists_of_messages-panel_pane_1';
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
    $pane->uuid = '8b1598f2-73a6-413d-9040-839a1e36eea3';
    $display->content['new-8b1598f2-73a6-413d-9040-839a1e36eea3'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-8b1598f2-73a6-413d-9040-839a1e36eea3';
    $pane = new stdClass();
    $pane->pid = 'new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>your foes are amassing their forces against you</h2>
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
    $pane->uuid = 'a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
    $display->content['new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1'] = $pane;
    $display->panels['header'][0] = 'new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_profiles_all_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'army_stats';
  $page->task = 'page';
  $page->admin_title = 'Army Stats';
  $page->admin_description = '';
  $page->path = 'stats/army';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Army Stats',
    'name' => 'navigation',
    'weight' => '1',
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
  $handler->name = 'page_army_stats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'army_stats';
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
  $display->layout = 'twocol_bricks';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Army Stats';
  $display->uuid = '5c47f450-6e2a-4b83-af7d-ba8a42009c88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30c1371a-5470-4d7d-929b-c9b36b6ccb68';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_battle_count-panel_pane_1';
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
    $pane->uuid = '30c1371a-5470-4d7d-929b-c9b36b6ccb68';
    $display->content['new-30c1371a-5470-4d7d-929b-c9b36b6ccb68'] = $pane;
    $display->panels['left_above'][0] = 'new-30c1371a-5470-4d7d-929b-c9b36b6ccb68';
    $pane = new stdClass();
    $pane->pid = 'new-63e42b93-9def-4752-9e67-cf5c3dd72787';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_battle_score-panel_pane_1';
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
    $pane->uuid = '63e42b93-9def-4752-9e67-cf5c3dd72787';
    $display->content['new-63e42b93-9def-4752-9e67-cf5c3dd72787'] = $pane;
    $display->panels['right_above'][0] = 'new-63e42b93-9def-4752-9e67-cf5c3dd72787';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_stats'] = $page;

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
  $handler->name = 'page_battle_meta_panel_context';
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
  $page->name = 'decorations_all_renown_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Decorations: All: Renown landing page';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/renown';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Renown',
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
  $handler->name = 'page_decorations_all_renown_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'decorations_all_renown_landing_page';
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
    'name' => 'panel',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
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
  $display->title = 'Renown';
  $display->uuid = '3f7628f0-f716-4d2f-9d00-49066f83fe1a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d86b505b-2224-47ad-ad2a-99a37df66c96';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'decorations_renown_player_lists-panel_pane_1';
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
    $pane->uuid = 'd86b505b-2224-47ad-ad2a-99a37df66c96';
    $display->content['new-d86b505b-2224-47ad-ad2a-99a37df66c96'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-d86b505b-2224-47ad-ad2a-99a37df66c96';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['decorations_all_renown_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'decorations_medals_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Decorations: Medals: Landing Page';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/medals';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Medals',
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
  $handler->name = 'page_decorations_medals_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'decorations_medals_landing_page';
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
    'name' => 'panel',
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
  $display->title = 'Medals @ iToysoldiers';
  $display->uuid = '2c0be7c8-5d9f-4444-9fe1-a4524c9a04b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a45bf36d-5122-4015-b65c-8e135d11f086';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'decorations_medals_lists_of_medals-panel_pane_1';
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
    $pane->uuid = 'a45bf36d-5122-4015-b65c-8e135d11f086';
    $display->content['new-a45bf36d-5122-4015-b65c-8e135d11f086'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-a45bf36d-5122-4015-b65c-8e135d11f086';
    $pane = new stdClass();
    $pane->pid = 'new-7f9c876c-fc80-4375-8f79-dd3426e17397';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>rise through the ranks and earn the respect of your opponents</h2>
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
    $pane->uuid = '7f9c876c-fc80-4375-8f79-dd3426e17397';
    $display->content['new-7f9c876c-fc80-4375-8f79-dd3426e17397'] = $pane;
    $display->panels['header'][0] = 'new-7f9c876c-fc80-4375-8f79-dd3426e17397';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7f9c876c-fc80-4375-8f79-dd3426e17397';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['decorations_medals_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'discussion';
  $page->task = 'page';
  $page->admin_title = 'Discussion';
  $page->admin_description = '';
  $page->path = 'node/%node/discussion';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'group' => 'group',
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
  $handler->name = 'page_discussion_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'discussion';
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
  $display->title = '%node:title';
  $display->uuid = 'aaee742d-8e0f-472c-be0e-298b50216d96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-185388ac-b989-4200-9e8c-31a419f90e86';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => ' ',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '185388ac-b989-4200-9e8c-31a419f90e86';
    $display->content['new-185388ac-b989-4200-9e8c-31a419f90e86'] = $pane;
    $display->panels['contentmain'][0] = 'new-185388ac-b989-4200-9e8c-31a419f90e86';
    $pane = new stdClass();
    $pane->pid = 'new-6d327928-d6e9-4a8d-87ca-ce5263d8ace0';
    $pane->panel = 'contentmain';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => ' ',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6d327928-d6e9-4a8d-87ca-ce5263d8ace0';
    $display->content['new-6d327928-d6e9-4a8d-87ca-ce5263d8ace0'] = $pane;
    $display->panels['contentmain'][1] = 'new-6d327928-d6e9-4a8d-87ca-ce5263d8ace0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-185388ac-b989-4200-9e8c-31a419f90e86';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['discussion'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gallery_utility';
  $page->task = 'page';
  $page->admin_title = 'Gallery Utility';
  $page->admin_description = '';
  $page->path = 'node/%node/utility';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'gallery' => 'gallery',
            'game_results' => 'game_results',
            'game_result_system_' => 'game_result_system_',
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
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Utilites',
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
  $handler->name = 'page_gallery_utility_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'gallery_utility';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Galleries and Battle Reports',
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
              'gallery' => 'gallery',
              'game_results' => 'game_results',
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
  $display->layout = 'twocol_bricks';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Utilities';
  $display->uuid = '535bd487-c490-46a4-9fc5-4c7e4ac715d6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7f305f70-f0f2-4b66-a5fc-f8855f7dc891';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_utility-panel_pane_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7f305f70-f0f2-4b66-a5fc-f8855f7dc891';
    $display->content['new-7f305f70-f0f2-4b66-a5fc-f8855f7dc891'] = $pane;
    $display->panels['top'][0] = 'new-7f305f70-f0f2-4b66-a5fc-f8855f7dc891';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gallery_utility_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'gallery_utility';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Default',
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
  $display->layout = 'twocol_bricks';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Utilities';
  $display->uuid = '0e7059bb-34f0-45f5-81e4-5deff4efd447';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6bf30944-faa3-4b5d-ba33-b55bab31e51e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'coming_soon';
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
    $pane->uuid = '6bf30944-faa3-4b5d-ba33-b55bab31e51e';
    $display->content['new-6bf30944-faa3-4b5d-ba33-b55bab31e51e'] = $pane;
    $display->panels['top'][0] = 'new-6bf30944-faa3-4b5d-ba33-b55bab31e51e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6bf30944-faa3-4b5d-ba33-b55bab31e51e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gallery_utility'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'game_stats';
  $page->task = 'page';
  $page->admin_title = 'Game Stats';
  $page->admin_description = '';
  $page->path = 'stats/games';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Game Stats',
    'name' => 'navigation',
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
  $handler->name = 'page_game_stats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'game_stats';
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
  $display->layout = 'twocol_bricks';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Game Stats';
  $display->uuid = '45c43dd7-4e44-45c3-9266-5e86f87a28cc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4878ef4b-a692-4e9b-9fdf-527767248980';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'game_views-panel_pane_1';
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
    $pane->uuid = '4878ef4b-a692-4e9b-9fdf-527767248980';
    $display->content['new-4878ef4b-a692-4e9b-9fdf-527767248980'] = $pane;
    $display->panels['left_above'][0] = 'new-4878ef4b-a692-4e9b-9fdf-527767248980';
    $pane = new stdClass();
    $pane->pid = 'new-6dbe5eab-1f7f-4dec-9979-f923d9532e5b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'game_views-panel_pane_2';
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
    $pane->uuid = '6dbe5eab-1f7f-4dec-9979-f923d9532e5b';
    $display->content['new-6dbe5eab-1f7f-4dec-9979-f923d9532e5b'] = $pane;
    $display->panels['middle'][0] = 'new-6dbe5eab-1f7f-4dec-9979-f923d9532e5b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6dbe5eab-1f7f-4dec-9979-f923d9532e5b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['game_stats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gazetteer_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Gazetteer Landing Page';
  $page->admin_description = '';
  $page->path = 'gazetteer/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Gazetteer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Gazetteer',
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
  $handler->name = 'page_gazetteer_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'gazetteer_landing_page';
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
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Gazetteer',
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
  $display->uuid = '0a3c6fbe-cb58-4cf3-b372-b426899be541';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d72a366-426b-4874-9849-d12ba52cff89';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_4';
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
    $pane->uuid = '9d72a366-426b-4874-9849-d12ba52cff89';
    $display->content['new-9d72a366-426b-4874-9849-d12ba52cff89'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-9d72a366-426b-4874-9849-d12ba52cff89';
    $pane = new stdClass();
    $pane->pid = 'new-d5b99858-2ef4-4dd7-b71d-361b9a708f67';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_3';
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
    $pane->uuid = 'd5b99858-2ef4-4dd7-b71d-361b9a708f67';
    $display->content['new-d5b99858-2ef4-4dd7-b71d-361b9a708f67'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-d5b99858-2ef4-4dd7-b71d-361b9a708f67';
    $pane = new stdClass();
    $pane->pid = 'new-679f309c-4c8f-4620-b34a-f8e5bf641494';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_5';
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
    $pane->uuid = '679f309c-4c8f-4620-b34a-f8e5bf641494';
    $display->content['new-679f309c-4c8f-4620-b34a-f8e5bf641494'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-679f309c-4c8f-4620-b34a-f8e5bf641494';
    $pane = new stdClass();
    $pane->pid = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Gazetteer</h1>
<h2> player blogs, galleries, and discussions</h2>
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
    $pane->uuid = 'aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
    $display->content['new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc'] = $pane;
    $display->panels['header'][0] = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
    $pane = new stdClass();
    $pane->pid = 'new-d03117a9-5b8c-44be-97e3-d5c0e9f68093';
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
      <a class="navbar-brand" href="#">Gazatteer</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/blog">Blogs</a></li>
        <li><a href="/galleries">Galleries</a></li>
        <li><a href="/forum">Discussions</a></li>

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
    $pane->uuid = 'd03117a9-5b8c-44be-97e3-d5c0e9f68093';
    $display->content['new-d03117a9-5b8c-44be-97e3-d5c0e9f68093'] = $pane;
    $display->panels['header'][1] = 'new-d03117a9-5b8c-44be-97e3-d5c0e9f68093';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-aa0b28d2-e50f-47b0-97d7-82e4cb861ddc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gazetteer_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'missions_page';
  $page->task = 'page';
  $page->admin_title = 'Missions Page';
  $page->admin_description = '';
  $page->path = 'battle-meta/missions';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Missions',
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
  $handler->name = 'page_missions_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'missions_page';
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
      'one_main' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Missions';
  $display->uuid = '9280fb3a-7a2c-450d-8da9-b844d62be5b0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fdaa010-21ee-438d-90dc-941104d4d2de';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'meta_pages-panel_pane_2';
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
    $pane->uuid = '4fdaa010-21ee-438d-90dc-941104d4d2de';
    $display->content['new-4fdaa010-21ee-438d-90dc-941104d4d2de'] = $pane;
    $display->panels['contentmain'][0] = 'new-4fdaa010-21ee-438d-90dc-941104d4d2de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['missions_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'modeling_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Modeling Landing Page';
  $page->admin_description = '';
  $page->path = 'munitions/modeling-projects';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Modeling Projects',
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
  $handler->name = 'page_modeling_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'modeling_landing_page';
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
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Modeling Projects',
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
  $display->title = 'Modeling Projects';
  $display->uuid = '9ceec79d-c8a9-4f93-bb0f-0e0bb2771a81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2f0de72e-4107-4db8-986d-c8dd1899f3c4';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_6';
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
    $pane->uuid = '2f0de72e-4107-4db8-986d-c8dd1899f3c4';
    $display->content['new-2f0de72e-4107-4db8-986d-c8dd1899f3c4'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-2f0de72e-4107-4db8-986d-c8dd1899f3c4';
    $pane = new stdClass();
    $pane->pid = 'new-c1ce1a88-e34c-4f55-9a09-e46489b73381';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>What are  you working on?</h2>
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
    $pane->uuid = 'c1ce1a88-e34c-4f55-9a09-e46489b73381';
    $display->content['new-c1ce1a88-e34c-4f55-9a09-e46489b73381'] = $pane;
    $display->panels['header'][0] = 'new-c1ce1a88-e34c-4f55-9a09-e46489b73381';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c1ce1a88-e34c-4f55-9a09-e46489b73381';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['modeling_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'munitions_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Munitions Landing Page';
  $page->admin_description = '';
  $page->path = 'munitions';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Munitions',
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
  $handler->name = 'page_munitions_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'munitions_landing_page';
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
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Munitions',
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
  $display->title = '';
  $display->uuid = 'ab5299ca-a6b4-47ed-adac-64b19e5cd86c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16b663b4-1cf2-4059-8d67-f55b03e7b449';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_6';
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
    $pane->uuid = '16b663b4-1cf2-4059-8d67-f55b03e7b449';
    $display->content['new-16b663b4-1cf2-4059-8d67-f55b03e7b449'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-16b663b4-1cf2-4059-8d67-f55b03e7b449';
    $pane = new stdClass();
    $pane->pid = 'new-c4eaf961-4391-4181-b0e3-162efedb6b17';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_node_trending_content-panel_pane_7';
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
    $pane->uuid = 'c4eaf961-4391-4181-b0e3-162efedb6b17';
    $display->content['new-c4eaf961-4391-4181-b0e3-162efedb6b17'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-c4eaf961-4391-4181-b0e3-162efedb6b17';
    $pane = new stdClass();
    $pane->pid = 'new-c40470f2-0336-4ff3-acba-6bad6adba576';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Munitions</h1>
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
    $pane->uuid = 'c40470f2-0336-4ff3-acba-6bad6adba576';
    $display->content['new-c40470f2-0336-4ff3-acba-6bad6adba576'] = $pane;
    $display->panels['header'][0] = 'new-c40470f2-0336-4ff3-acba-6bad6adba576';
    $pane = new stdClass();
    $pane->pid = 'new-f8eb177e-3b12-4930-a72e-e9ebeeffe444';
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
      <a class="navbar-brand" href="#">Munitions</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/munitions/modeling-projects">Modeling Projects</a></li>
        <li><a href="/munitions/gaming-stores">Game Stores</a></li>
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
    $pane->uuid = 'f8eb177e-3b12-4930-a72e-e9ebeeffe444';
    $display->content['new-f8eb177e-3b12-4930-a72e-e9ebeeffe444'] = $pane;
    $display->panels['header'][1] = 'new-f8eb177e-3b12-4930-a72e-e9ebeeffe444';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['munitions_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'order_of_battle_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Order of Battle Landing Page';
  $page->admin_description = '';
  $page->path = 'order-of-battle/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Order of Battle',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Order of Battle',
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
  $handler->name = 'page_order_of_battle_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'order_of_battle_landing_page';
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
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Order of Battle @ iToysoldiers',
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
  $display->title = '';
  $display->uuid = '76f77e24-0b0d-4eeb-b3dd-c5a86812ceac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb2b9394-a7a9-4d0d-9876-8a1db728994b';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profile_all_lists-panel_pane_2';
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
    $pane->uuid = 'eb2b9394-a7a9-4d0d-9876-8a1db728994b';
    $display->content['new-eb2b9394-a7a9-4d0d-9876-8a1db728994b'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-eb2b9394-a7a9-4d0d-9876-8a1db728994b';
    $pane = new stdClass();
    $pane->pid = 'new-4171b17c-e74f-4202-97d5-9fbc4d2d0cb7';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_lists-panel_pane_1';
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
    $pane->uuid = '4171b17c-e74f-4202-97d5-9fbc4d2d0cb7';
    $display->content['new-4171b17c-e74f-4202-97d5-9fbc4d2d0cb7'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-4171b17c-e74f-4202-97d5-9fbc4d2d0cb7';
    $pane = new stdClass();
    $pane->pid = 'new-d00555be-c671-4e3e-bd95-3e40cfee3d83';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'players_all_lists-panel_pane_2';
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
    $pane->uuid = 'd00555be-c671-4e3e-bd95-3e40cfee3d83';
    $display->content['new-d00555be-c671-4e3e-bd95-3e40cfee3d83'] = $pane;
    $display->panels['contentmainright'][0] = 'new-d00555be-c671-4e3e-bd95-3e40cfee3d83';
    $pane = new stdClass();
    $pane->pid = 'new-52d1222a-500e-43f3-957c-56b732c0dbb6';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_lists-panel_pane_2';
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
    $pane->uuid = '52d1222a-500e-43f3-957c-56b732c0dbb6';
    $display->content['new-52d1222a-500e-43f3-957c-56b732c0dbb6'] = $pane;
    $display->panels['contentmainright'][1] = 'new-52d1222a-500e-43f3-957c-56b732c0dbb6';
    $pane = new stdClass();
    $pane->pid = 'new-c4bea39c-4517-4da7-a483-1e62efd20f19';
    $pane->panel = 'contentmaintop';
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
      <a class="navbar-brand" href="#">Order of Battle</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/order-of-battle/player-armies">Armies</a></li>
        <li><a href="/order-of-battle/players">Players</a></li>
        <li><a href="/order-of-battle/listcrit">ListCrit</a></li>
        <li><a href="/order-of-battle/gaming-clubs">Gaming Clubs</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>
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
    $pane->uuid = 'c4bea39c-4517-4da7-a483-1e62efd20f19';
    $display->content['new-c4bea39c-4517-4da7-a483-1e62efd20f19'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-c4bea39c-4517-4da7-a483-1e62efd20f19';
    $pane = new stdClass();
    $pane->pid = 'new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Order of Battle</h1>
<h2>wargaming is a social hobby</h2>
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
    $pane->uuid = 'fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
    $display->content['new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4'] = $pane;
    $display->panels['header'][0] = 'new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['order_of_battle_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Player landing page';
  $page->admin_description = '';
  $page->path = 'order-of-battle/players';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Players',
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
  $handler->name = 'page_player_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'player_landing_page';
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
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
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
  $display->title = 'Players';
  $display->uuid = '2ac2bc1f-a60b-4189-99b4-7f39b766aa04';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-29a16c76-b66e-4807-9e19-919e34767362';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="jumbotron">
<blockquote>If you know the enemy and know yourself, you need not fear the result of a hundred battles.<br>
- Sun Tzu</blockquote>
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
    $pane->uuid = '29a16c76-b66e-4807-9e19-919e34767362';
    $display->content['new-29a16c76-b66e-4807-9e19-919e34767362'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-29a16c76-b66e-4807-9e19-919e34767362';
    $pane = new stdClass();
    $pane->pid = 'new-0695f81f-6954-4b48-aff3-8158b3f8bd56';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'players_all_lists-panel_pane_3';
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
    $pane->uuid = '0695f81f-6954-4b48-aff3-8158b3f8bd56';
    $display->content['new-0695f81f-6954-4b48-aff3-8158b3f8bd56'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-0695f81f-6954-4b48-aff3-8158b3f8bd56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_stats';
  $page->task = 'page';
  $page->admin_title = 'Player Stats';
  $page->admin_description = '';
  $page->path = 'stats/player';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Player Stats',
    'name' => 'navigation',
    'weight' => '2',
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
  $handler->name = 'page_player_stats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'player_stats';
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
  $display->layout = 'twocol_bricks';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Player Stats';
  $display->uuid = '9b3b8db3-e815-4486-b446-87110855e6e3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f2b52701-e5c6-41a7-b0e6-1822cb68a162';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'battle_stat_views-panel_pane_1';
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
    $pane->uuid = 'f2b52701-e5c6-41a7-b0e6-1822cb68a162';
    $display->content['new-f2b52701-e5c6-41a7-b0e6-1822cb68a162'] = $pane;
    $display->panels['left_above'][0] = 'new-f2b52701-e5c6-41a7-b0e6-1822cb68a162';
    $pane = new stdClass();
    $pane->pid = 'new-469d95d2-d2a6-4750-babb-5dd77c8eb013';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'results_views-panel_pane_1';
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
    $pane->uuid = '469d95d2-d2a6-4750-babb-5dd77c8eb013';
    $display->content['new-469d95d2-d2a6-4750-babb-5dd77c8eb013'] = $pane;
    $display->panels['middle'][0] = 'new-469d95d2-d2a6-4750-babb-5dd77c8eb013';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f2b52701-e5c6-41a7-b0e6-1822cb68a162';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_stats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'renown_all_main_page';
  $page->task = 'page';
  $page->admin_title = 'Decorations: All: Main Page';
  $page->admin_description = '';
  $page->path = 'wargaming-decorations/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'navigation',
    'weight' => '-50',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Decorations',
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
  $handler->name = 'page_renown_all_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'renown_all_main_page';
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
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Decorations @ iToysoldiers',
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
  $display->title = 'Decorations';
  $display->uuid = '2fbc5f18-c204-4731-a1ee-0b35a8b7a6ae';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-44d74465-3709-4653-8dcd-ff57d12a4e43';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Renown Feature List',
      'title' => 'Available Decorations',
      'body' => '<div class="row">
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/achievements"><img class="center-block" src="/sites/default/files/default_images/league.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Achievements</h4>
        <p>iToysoldiers achievements recognize your miniature wargaming accomplishments. Whether your focus is narrative, gaming, or modeling you’ll gain rewards for your endeavors.  Why should the ‘puter gamers have all the fun. We were here first!</p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/"><img class="center-block" src="/sites/default/files/achievements/Mage%20Hunter%203.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Renown</h4>
        <p>Track your progress through the ranks with iToysoldiers Renown.  Every battle you fight, every model you paint, every achievement you earn generates renown.  Compare yours to other players in the area and the world and strive to become an epic wargamer.</p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/medals"><img class="center-block" src="sites/default/files/badges/lvl1.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Medals</h4>
        <p><strong>Work in Progress</strong>: Medals represent specific milestones in your quest to become a wargamer to be feared and respected. There are two types of medals: Rank – think of this as a level counter and Career – medals designed to reflect your focus on a particular element of the miniature wargaming hobby.</p>
    </div>
    <div class="clearfix"></div>
    <div class="col-xs-12 col-sm-3">
        <a href="/wargaming-decorations/leaderboards"><img class="center-block" src="/sites/default/files/achievements/First Place.png" width=220 height=220></a>
    </div>
    <div class="col-xs-12 col-sm-9">
        <h4>Leaderboards</h4>
        <p>Bringing all the Decorations together are the leaderboards.  See how you rank in all sorts of categories: Battle Score, Achievements, Renown and more to come. Do you have what it takes to become number one?</p>
    </div>    
</div>
<div class="seperator"></div>
<div class="seperator"></div>
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
    $pane->uuid = '44d74465-3709-4653-8dcd-ff57d12a4e43';
    $display->content['new-44d74465-3709-4653-8dcd-ff57d12a4e43'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-44d74465-3709-4653-8dcd-ff57d12a4e43';
    $pane = new stdClass();
    $pane->pid = 'new-0d7461c8-2edb-4a9a-8df3-f27a039d7205';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'achievements_main_messages-panel_pane_1';
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
    $pane->uuid = '0d7461c8-2edb-4a9a-8df3-f27a039d7205';
    $display->content['new-0d7461c8-2edb-4a9a-8df3-f27a039d7205'] = $pane;
    $display->panels['contentmainright'][0] = 'new-0d7461c8-2edb-4a9a-8df3-f27a039d7205';
    $pane = new stdClass();
    $pane->pid = 'new-f876ec55-3987-4325-82bf-7d219e130a98';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Decorations</h1>
<h2>reap the rewards of your miniature wargaming exploits</h2>
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
    $pane->uuid = 'f876ec55-3987-4325-82bf-7d219e130a98';
    $display->content['new-f876ec55-3987-4325-82bf-7d219e130a98'] = $pane;
    $display->panels['header'][0] = 'new-f876ec55-3987-4325-82bf-7d219e130a98';
    $pane = new stdClass();
    $pane->pid = 'new-fec92970-24a4-487d-a6bf-bbc8566de84d';
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
      <a class="navbar-brand" href="#">Decorations</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/wargaming-decorations/achievements">Achievements</a></li>
        <li><a href="/wargaming-decorations/renown">Renown</a></li>
        <li><a href="/wargaming-decorations/medals">Medals</a></li>
        <li><a href="/wargaming-decorations/leaderboards">Leaderboards</a></li>
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
    $pane->uuid = 'fec92970-24a4-487d-a6bf-bbc8566de84d';
    $display->content['new-fec92970-24a4-487d-a6bf-bbc8566de84d'] = $pane;
    $display->panels['header'][1] = 'new-fec92970-24a4-487d-a6bf-bbc8566de84d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['renown_all_main_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'structured_play_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Structured Play Landing Page';
  $page->admin_description = '';
  $page->path = 'warzone/structured-play';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Structured Play',
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
  $handler->name = 'page_structured_play_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'structured_play_landing_page';
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
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Structured War Gaming',
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
  $display->title = 'Structured Wargaming';
  $display->uuid = '848614c7-0b6b-492e-89e3-a09a1acfa3cc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c44cc4f7-da7a-4a5c-b0f0-fbce62f6ca9a';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>competitive and structured wargaming on iToysoldiers</h2>
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
    $pane->uuid = 'c44cc4f7-da7a-4a5c-b0f0-fbce62f6ca9a';
    $display->content['new-c44cc4f7-da7a-4a5c-b0f0-fbce62f6ca9a'] = $pane;
    $display->panels['header'][0] = 'new-c44cc4f7-da7a-4a5c-b0f0-fbce62f6ca9a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c44cc4f7-da7a-4a5c-b0f0-fbce62f6ca9a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['structured_play_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'taxonomy_stats';
  $page->task = 'page';
  $page->admin_title = 'Taxonomy Stats';
  $page->admin_description = '';
  $page->path = 'taxonomy/term/%taxonomy_term/stats/main';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'term_vocabulary',
        'settings' => array(
          'vids' => array(
            2 => '2',
          ),
        ),
        'context' => 'argument_term_1',
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
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Summary',
    'name' => 'navigation',
    'weight' => '-10',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Stats',
      'name' => 'navigation',
      'weight' => '5',
    ),
  );
  $page->arguments = array(
    'taxonomy_term' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          12 => 0,
          2 => 0,
          14 => 0,
          17 => 0,
          9 => 0,
          7 => 0,
          3 => 0,
          13 => 0,
          11 => 0,
          8 => 0,
          4 => 0,
          5 => 0,
          16 => 0,
          1 => 0,
          18 => 0,
          15 => 0,
          10 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_taxonomy_stats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'taxonomy_stats';
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              2 => '2',
            ),
          ),
          'context' => 'argument_term_1',
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
      'one_main' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:name : Stats';
  $display->uuid = '2f1bab30-64eb-4fc8-94b6-a321281c8d57';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17dd050e-7115-4f8a-9d37-0090a5690766';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Summary',
      'title' => '',
      'body' => '<div>
    <?php
    $view_term = %taxonomy_term:tid;
    $tree = taxonomy_get_tree(2, $parent = $view_term, $max_depth = NULL, $load_entities = FALSE);
    foreach($tree as $value) {
        $term_list .= $value->tid . "+";
    }
    $term_list .= $view_term;

    print views_embed_view("term_stats_army_201410","panel_pane_1", $term_list); 
    ?>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17dd050e-7115-4f8a-9d37-0090a5690766';
    $display->content['new-17dd050e-7115-4f8a-9d37-0090a5690766'] = $pane;
    $display->panels['contentmain'][0] = 'new-17dd050e-7115-4f8a-9d37-0090a5690766';
    $pane = new stdClass();
    $pane->pid = 'new-361ebcf3-4b31-4471-bcc6-0f49861eb077';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Continuous Battle Score',
      'title' => '',
      'body' => '<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js"></script>
<script type="text/javascript">
$(function() {

	$.getJSON(\'http://www.highcharts.com/samples/data/jsonp.php?filename=aapl-c.json&callback=?\', function(data) {
		// Create the chart
		window.chart = new Highcharts.StockChart({
			chart : {
				renderTo : \'container\'
			},
credits: {
      enabled: false
  },

			rangeSelector : {
				selected : 1
			},

			title : {
				text : \'Average Battle Score\'
			},
			
			series : [{
				name : \'Battle Score\',
				data : data,
				tooltip: {
					valueDecimals: 2
				}
			}]
		});
	});

});

		</script>
<script src="/sites/all/libraries/highstock/js/highstock.js"></script>


<div id="container" style="height: 250px; min-width: 100%"></div>',
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
    $pane->uuid = '361ebcf3-4b31-4471-bcc6-0f49861eb077';
    $display->content['new-361ebcf3-4b31-4471-bcc6-0f49861eb077'] = $pane;
    $display->panels['contentmain'][1] = 'new-361ebcf3-4b31-4471-bcc6-0f49861eb077';
    $pane = new stdClass();
    $pane->pid = 'new-1f26de69-4dff-41f8-ab65-078a14275100';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'First Row of Lists',
      'title' => '',
      'body' => '<div class="col-xs-12">
    <div class="panel panel-default">
        <div class="panel-heading">
            <h3 class="panel-title">Commander Kill Ratio</h3>
        </div>
        <div class="panel-body">
            <?php
            $view_term = %taxonomy_term:tid;
            $tree = taxonomy_get_tree(2, $parent = $view_term, $max_depth = NULL, $load_entities = FALSE);

            foreach ($tree as $value) {
                $term_list .= $value->tid . "+";
            }
            $term_list .= $view_term;

            print views_embed_view("term_stats_army", "panel_pane_3", $term_list);
            ?>
        </div>
    </div>
</div>

<div class="col-xs-12">
    <div class="panel panel-default">
        <div class="panel-heading">
            <h3 class="panel-title">Commander Death Ratio</h3>
        </div>
        <div class="panel-body">
<?php print views_embed_view("term_stats_army", "panel_pane_4", $term_list); ?>
        </div>
    </div>
</div>

<div class="col-xs-12 col-sm-6">
    <div class="panel panel-default">
        <div class="panel-heading">
            <h3 class="panel-title">Top Players</h3>
        </div>
        <div>
            <?php print views_embed_view("term_stats_army", "panel_pane_2", $term_list); ?>
        </div>
    </div>
</div>

<div class="col-xs-12 col-sm-6">
    <div class="panel panel-default">
        <div class="panel-heading">
            <h3 class="panel-title">Best Against</h3>
        </div>
        <div>
            <?php print views_embed_view("term_stats_army", "panel_pane_1", $term_list); ?>
        </div>
    </div>
</div>

<div class="col-xs-12 col-sm-6">
    <div class="panel panel-default">
        <div class="panel-heading">
            <h3 class="panel-title">Missions and Scenarios</h3>
        </div>
        <div>
            <?php print views_embed_view("term_stats_army", "panel_pane_5", $term_list); ?>
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1f26de69-4dff-41f8-ab65-078a14275100';
    $display->content['new-1f26de69-4dff-41f8-ab65-078a14275100'] = $pane;
    $display->panels['contentmain'][2] = 'new-1f26de69-4dff-41f8-ab65-078a14275100';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['taxonomy_stats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'units_and_commanders';
  $page->task = 'page';
  $page->admin_title = 'Units and Commanders';
  $page->admin_description = '';
  $page->path = 'battle-meta/units-and-commanders';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Units',
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
  $handler->name = 'page_units_and_commanders_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'units_and_commanders';
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
  $display->title = 'Units and Commanders';
  $display->uuid = '07cf4cd7-da72-4107-97a2-41c20a272ef7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-19b98c59-70c1-46cb-8003-bbe76f8e9f96';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'meta_pages-panel_pane_3';
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
    $pane->uuid = '19b98c59-70c1-46cb-8003-bbe76f8e9f96';
    $display->content['new-19b98c59-70c1-46cb-8003-bbe76f8e9f96'] = $pane;
    $display->panels['contentmain'][0] = 'new-19b98c59-70c1-46cb-8003-bbe76f8e9f96';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-19b98c59-70c1-46cb-8003-bbe76f8e9f96';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['units_and_commanders'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_stats';
  $page->task = 'page';
  $page->admin_title = 'User Stats';
  $page->admin_description = '';
  $page->path = 'user/%user/stats/main';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Summary',
    'name' => 'navigation',
    'weight' => '-1',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Stats',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
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
  $handler->name = 'page_user_stats_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'user_stats';
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
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'half' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:name Stats';
  $display->uuid = '5ba042ef-3ea9-44ff-9f1a-68234f049142';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e1c4dcf5-d855-430f-991c-b662fb9d38d8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = '_player_profile_201406-panel_pane_1';
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
    $pane->uuid = 'e1c4dcf5-d855-430f-991c-b662fb9d38d8';
    $display->content['new-e1c4dcf5-d855-430f-991c-b662fb9d38d8'] = $pane;
    $display->panels['contentmain'][0] = 'new-e1c4dcf5-d855-430f-991c-b662fb9d38d8';
    $pane = new stdClass();
    $pane->pid = 'new-06c0b4b5-ab2a-4eda-8940-1cc77b9f733d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_7';
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
    $pane->uuid = '06c0b4b5-ab2a-4eda-8940-1cc77b9f733d';
    $display->content['new-06c0b4b5-ab2a-4eda-8940-1cc77b9f733d'] = $pane;
    $display->panels['contentmain'][1] = 'new-06c0b4b5-ab2a-4eda-8940-1cc77b9f733d';
    $pane = new stdClass();
    $pane->pid = 'new-08f056ea-c8db-408b-9bf1-1df762053aaa';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_3';
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
    $pane->uuid = '08f056ea-c8db-408b-9bf1-1df762053aaa';
    $display->content['new-08f056ea-c8db-408b-9bf1-1df762053aaa'] = $pane;
    $display->panels['contentmain'][2] = 'new-08f056ea-c8db-408b-9bf1-1df762053aaa';
    $pane = new stdClass();
    $pane->pid = 'new-0f78d26d-19d5-488b-94ed-570b08c1d080';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_4';
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
    $pane->uuid = '0f78d26d-19d5-488b-94ed-570b08c1d080';
    $display->content['new-0f78d26d-19d5-488b-94ed-570b08c1d080'] = $pane;
    $display->panels['contentmain'][3] = 'new-0f78d26d-19d5-488b-94ed-570b08c1d080';
    $pane = new stdClass();
    $pane->pid = 'new-2d2cfe5a-aae6-43f2-ae74-5415724f5cd9';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_2';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2d2cfe5a-aae6-43f2-ae74-5415724f5cd9';
    $display->content['new-2d2cfe5a-aae6-43f2-ae74-5415724f5cd9'] = $pane;
    $display->panels['contentmain'][4] = 'new-2d2cfe5a-aae6-43f2-ae74-5415724f5cd9';
    $pane = new stdClass();
    $pane->pid = 'new-2b87b68d-289b-4019-91dd-755d3cfd1e4a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_1';
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
    $pane->uuid = '2b87b68d-289b-4019-91dd-755d3cfd1e4a';
    $display->content['new-2b87b68d-289b-4019-91dd-755d3cfd1e4a'] = $pane;
    $display->panels['contentmain'][5] = 'new-2b87b68d-289b-4019-91dd-755d3cfd1e4a';
    $pane = new stdClass();
    $pane->pid = 'new-440affee-298a-47d5-b81f-7fe465bf3415';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_stats-panel_pane_5';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '440affee-298a-47d5-b81f-7fe465bf3415';
    $display->content['new-440affee-298a-47d5-b81f-7fe465bf3415'] = $pane;
    $display->panels['contentmain'][6] = 'new-440affee-298a-47d5-b81f-7fe465bf3415';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_stats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'victory_conditions';
  $page->task = 'page';
  $page->admin_title = 'Victory Conditions';
  $page->admin_description = '';
  $page->path = 'battle-meta/victory-conditions';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Victory Conditions',
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
  $handler->name = 'page_victory_conditions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'victory_conditions';
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
  $display->title = 'Victory Conditions';
  $display->uuid = '2169bb14-8c82-4db9-8421-a84c73cbbebd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1fc496b2-cb08-4b24-9f7d-837944a33e9b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'meta_pages-panel_pane_4';
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
    $pane->uuid = '1fc496b2-cb08-4b24-9f7d-837944a33e9b';
    $display->content['new-1fc496b2-cb08-4b24-9f7d-837944a33e9b'] = $pane;
    $display->panels['contentmain'][0] = 'new-1fc496b2-cb08-4b24-9f7d-837944a33e9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1fc496b2-cb08-4b24-9f7d-837944a33e9b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['victory_conditions'] = $page;

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
  $handler->name = 'page_war_zone_landing_page__panel';
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
    'name' => 'panel',
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
    <a href="/theater/warzone/tournaments">
      <img class="media-object" src="/sites/default/files/styles/button/public/default_images/location.png" alt="...">
    </a>
  </div>
  <div class="media-body">
      <h4 class="media-heading"><a href="/theater/warzone/tournaments">Tournaments</a></h4>
    <p>The iToysoldiers tournament manager makes it easy to run and participate in a miniature wargaming tournament.</p>
    <p>View past and future <a href="/theater/warzone/tournaments/">tournaments</a>.
  </div>
</div>
<div class="media">
  <div class="pull-left">
    <a href="/theater/warzone/leagues">
      <img class="media-object" src="/sites/default/files/styles/button/public/default_images/league.png" alt="...">
    </a>
  </div>
  <div class="media-body">
      <h4 class="media-heading"><a href="/theater/warzone/leagues">Leagues</a></h4>
    <p>The iToysoldiers tournament manager makes it easy to run and participate in a miniature wargaming tournament.</p>
    <p>View past and future <a href="/theater/warzone/leagues">leagues</a>.
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
      <a class="navbar-brand" href="#">War Zones</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/theater/warzone/leagues">Leagues</a></li>
        <li><a href="/theater/warzone/tournaments">Tournaments</a></li>
        <li><a href="/theater/warzone/narrative-campaigns/operational">Campaigns</a></li>
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
    $pane->pid = 'new-630918fd-c536-4ab9-be8e-f2b447ae4a49';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'warzone_special_event_page_layout-panel_pane_3';
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
    $pane->uuid = '630918fd-c536-4ab9-be8e-f2b447ae4a49';
    $display->content['new-630918fd-c536-4ab9-be8e-f2b447ae4a49'] = $pane;
    $display->panels['contentmain'][0] = 'new-630918fd-c536-4ab9-be8e-f2b447ae4a49';
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
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd5dac70b-dc6d-4436-84fe-16a411c26e78';
    $display->content['new-d5dac70b-dc6d-4436-84fe-16a411c26e78'] = $pane;
    $display->panels['contentmain'][1] = 'new-d5dac70b-dc6d-4436-84fe-16a411c26e78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['war_zone_management'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'widgets';
  $page->task = 'page';
  $page->admin_title = 'Widgets';
  $page->admin_description = '';
  $page->path = 'widgets';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Widgets',
    'name' => 'menu-extras',
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
  $handler->name = 'page_widgets_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'widgets';
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
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Widgets';
  $display->uuid = 'c29cad9b-d84e-4ad2-8fb2-f211462c4aac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb029834-5915-463a-abe2-be7574d6f9f8';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'BBcode Widget',
      'title' => 'BBcode Signature Widget',
      'body' => '<p>Cut and paste this into a forum that uses BBcode like phpBB</p>
<p><textarea id=txtArea cols=60 rows=2 onFocus=this.select() onmouseup="return false">
[url=http://itoysoldiers.com/user/%user:uid][img]http://itoysoldiers.com/widget/bbcode.php?user_id=%user:uid[/img][/url]
</textarea></p>

<p>It\'ll look like this:</p>

<a href="http://itoysoldiers.com/user/%user:uid"><img src="http://itoysoldiers.com/widget/bbcode.php?user_id=%user:uid" /></a>',
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
    $pane->uuid = 'eb029834-5915-463a-abe2-be7574d6f9f8';
    $display->content['new-eb029834-5915-463a-abe2-be7574d6f9f8'] = $pane;
    $display->panels['contentmain'][0] = 'new-eb029834-5915-463a-abe2-be7574d6f9f8';
    $pane = new stdClass();
    $pane->pid = 'new-a27a0a1e-54cf-42a8-bdfc-896245d6e280';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'widget_last_battle-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
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
    $pane->uuid = 'a27a0a1e-54cf-42a8-bdfc-896245d6e280';
    $display->content['new-a27a0a1e-54cf-42a8-bdfc-896245d6e280'] = $pane;
    $display->panels['contentmain'][1] = 'new-a27a0a1e-54cf-42a8-bdfc-896245d6e280';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['widgets'] = $page;

  return $pages;

}
