<?php
/**
 * @file
 * war_zones.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function war_zones_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_league';
  $strongarm->value = 0;
  $export['comment_anonymous_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_narrative_campaign';
  $strongarm->value = 0;
  $export['comment_anonymous_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_narrative_campaign_instance';
  $strongarm->value = 0;
  $export['comment_anonymous_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_special_event';
  $strongarm->value = 0;
  $export['comment_anonymous_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_war_zone_league';
  $strongarm->value = 0;
  $export['comment_anonymous_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_war_zone_tournament';
  $strongarm->value = 0;
  $export['comment_anonymous_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_league';
  $strongarm->value = 1;
  $export['comment_default_mode_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_narrative_campaign';
  $strongarm->value = 1;
  $export['comment_default_mode_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_narrative_campaign_instance';
  $strongarm->value = 1;
  $export['comment_default_mode_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_special_event';
  $strongarm->value = 1;
  $export['comment_default_mode_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_war_zone_league';
  $strongarm->value = 1;
  $export['comment_default_mode_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_war_zone_tournament';
  $strongarm->value = 1;
  $export['comment_default_mode_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_league';
  $strongarm->value = '50';
  $export['comment_default_per_page_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_narrative_campaign';
  $strongarm->value = '50';
  $export['comment_default_per_page_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_narrative_campaign_instance';
  $strongarm->value = '50';
  $export['comment_default_per_page_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_special_event';
  $strongarm->value = '50';
  $export['comment_default_per_page_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_war_zone_league';
  $strongarm->value = '50';
  $export['comment_default_per_page_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_war_zone_tournament';
  $strongarm->value = '50';
  $export['comment_default_per_page_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_league';
  $strongarm->value = 0;
  $export['comment_form_location_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_narrative_campaign';
  $strongarm->value = 0;
  $export['comment_form_location_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_narrative_campaign_instance';
  $strongarm->value = 0;
  $export['comment_form_location_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_special_event';
  $strongarm->value = 0;
  $export['comment_form_location_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_war_zone_league';
  $strongarm->value = 0;
  $export['comment_form_location_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_war_zone_tournament';
  $strongarm->value = 0;
  $export['comment_form_location_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_league';
  $strongarm->value = '2';
  $export['comment_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_narrative_campaign';
  $strongarm->value = '2';
  $export['comment_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_narrative_campaign_instance';
  $strongarm->value = '2';
  $export['comment_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_league';
  $strongarm->value = '1';
  $export['comment_preview_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_narrative_campaign';
  $strongarm->value = '1';
  $export['comment_preview_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_narrative_campaign_instance';
  $strongarm->value = '1';
  $export['comment_preview_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_special_event';
  $strongarm->value = '1';
  $export['comment_preview_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_war_zone_league';
  $strongarm->value = '0';
  $export['comment_preview_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_war_zone_tournament';
  $strongarm->value = '1';
  $export['comment_preview_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_special_event';
  $strongarm->value = '2';
  $export['comment_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_league';
  $strongarm->value = 0;
  $export['comment_subject_field_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_narrative_campaign';
  $strongarm->value = 0;
  $export['comment_subject_field_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_narrative_campaign_instance';
  $strongarm->value = 0;
  $export['comment_subject_field_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_special_event';
  $strongarm->value = 0;
  $export['comment_subject_field_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_war_zone_league';
  $strongarm->value = 0;
  $export['comment_subject_field_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_war_zone_tournament';
  $strongarm->value = 0;
  $export['comment_subject_field_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_war_zone_league';
  $strongarm->value = '2';
  $export['comment_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_war_zone_tournament';
  $strongarm->value = '2';
  $export['comment_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__score_card';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__score_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__war_zone_grant_achievement';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__war_zone_grant_achievement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_a_warzone_has_begun';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_message__stream_a_warzone_has_begun'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_a_warzone_has_ended';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_message__stream_a_warzone_has_ended'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_new_war_zone';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_message__stream_new_war_zone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__stream_player_registers_for_warzone';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_message__stream_player_registers_for_warzone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__war_zone_all_anonymous_actions';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_message__war_zone_all_anonymous_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__war_zone_all_new_round_message';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_message__war_zone_all_new_round_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__league';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
        'badges' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__narrative_campaign';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
        ),
        'badges' => array(
          'weight' => '9',
        ),
        'locations' => array(
          'weight' => '13',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__narrative_campaign_instance';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '3',
        ),
        'metatags' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
        'badges' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'registration_link' => array(
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'registration_form' => array(
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'registration_slots_left' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'registration_unregistrable_reason' => array(
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'rules_links_war_zone_all_open_registration' => array(
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'rules_links_wz_complete' => array(
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'rules_links_wz_start' => array(
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__special_event';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '9',
        ),
        'badges' => array(
          'weight' => '10',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'registration_link' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'registration_form' => array(
          'teaser' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'registration_slots_left' => array(
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'registration_unregistrable_reason' => array(
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'rules_links_war_zone_all_open_registration' => array(
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'rules_links_wz_complete' => array(
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'rules_links_wz_start' => array(
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__war_zone_league';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
        'badges' => array(
          'weight' => '11',
        ),
        'locations' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'registration_link' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'registration_form' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'rules_links_start_round_robin_league' => array(
          'default' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'rules_links_close_war_zone' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'rules_links_open_war_zone' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'rules_links_join_war_zone' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'rules_links_next_round' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'rules_links_complete_warzone' => array(
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'rules_links_war_zone_open_league' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'rules_links_war_zone_start_league' => array(
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'registration_slots_left' => array(
          'teaser' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'registration_unregistrable_reason' => array(
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__war_zone_tournament';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
        'badges' => array(
          'weight' => '12',
        ),
        'locations' => array(
          'weight' => '14',
        ),
      ),
      'display' => array(
        'registration_link' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'registration_form' => array(
          'teaser' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
        'registration_slots_left' => array(
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'registration_unregistrable_reason' => array(
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'rules_links_war_zone_open_league' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_league';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_narrative_campaign';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_narrative_campaign_instance';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_special_event';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_war_zone_league';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_war_zone_tournament';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_league';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_narrative_campaign';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_narrative_campaign_instance';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_special_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_war_zone_league';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_war_zone_tournament';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_league';
  $strongarm->value = array();
  $export['node_options_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_narrative_campaign';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_narrative_campaign_instance';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_special_event';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_war_zone_league';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_war_zone_tournament';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_league';
  $strongarm->value = '1';
  $export['node_preview_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_narrative_campaign';
  $strongarm->value = '1';
  $export['node_preview_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_narrative_campaign_instance';
  $strongarm->value = '1';
  $export['node_preview_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_special_event';
  $strongarm->value = '1';
  $export['node_preview_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_war_zone_league';
  $strongarm->value = '1';
  $export['node_preview_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_war_zone_tournament';
  $strongarm->value = '1';
  $export['node_preview_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_registration_type_settings_narrative_campaign_instance';
  $strongarm->value = array(
    'date_field' => 'field_event_date',
    'max_registration_date_field' => 'field_registration_deadline',
    'min_registration_date_field' => '0',
    'capacity_field' => 'field_slots_warzone',
    'status' => 1,
    'toggle_enabled_in_node_form' => 0,
    'no_register_page' => 0,
    'extra_nr_owners_no_settings_tab' => 1,
    'allow_registration_until' => '',
    'registration_success_message' => 'Your forces have been committed to the campaign.',
    'allow_cancellation_until' => '',
    'allow_exceeding_capacity' => 1,
    'max_slots_per_registration_authenticated' => 1,
    'max_slots_per_registration_anonymous' => 1,
    'allow_email_change' => 0,
    'require_email_verification' => FALSE,
    'sender_name' => '',
    'sender_mail' => '',
    'mail_system' => '0',
    'send_mail_to_registree' => 1,
    'mail_to_registree_bcc' => '',
    'mail_to_registree_subject' => 'You\'ve registered for: [node:title]',
    'mail_to_registree_body' => '<p>This is what you\'ve registered with:</p>

<p>E-mail address: [node-registration:email]</p>

<p>To edit, go to [node-registration:edit-url]. To cancel, go to [node-registration:cancel-url].</p>',
    'change_mail_for_waiting_list_registree' => 0,
    'mail_for_waiting_list_registree_subject' => 'You\'ve registered for: [node:title] (BUT YOU\'RE ON THE WAITING LIST)',
    'mail_for_waiting_list_registree_body' => 'This is what you\'ve registered with:

E-mail address: [node-registration:email]

BUT YOU\'RE ON THE WAITING LIST.

To edit, go to [node-registration:edit-url].',
    'send_mail_to_admin' => 0,
    'mail_to_admin_recipients' => 'admin@itoysoldiers.com',
    'mail_to_admin_subject' => 'Somebody\'s registered for: [node:title]',
    'mail_to_admin_body' => 'This is what they entered:

E-mail address: [node-registration:email]

To view the registration, go to [node-registration:url].',
    'send_reminder_mail_to_registrees' => 0,
    'send_reminders_before' => '1 day',
    'reminder_mail_to_registrees_subject' => '[node:title] begins in [node:time-left]',
    'reminder_mail_to_registrees_body' => 'Hey [node-registration:email],

this [node:content-type:name] starts in [node:time-left].

Don\'t forget to go! It begins at [node:event-start].',
    'send_cancel_mail_to_registree' => 0,
    'cancel_mail_to_registree_bcc' => '',
    'cancel_mail_to_registree_subject' => 'You\'ve cancelled for: [node:title]',
    'cancel_mail_to_registree_body' => 'This is what you were registered with:

E-mail address: [node-registration:email]

But now it\'s gone...',
    'send_cancel_mail_to_admin' => 0,
    'cancel_mail_to_admin_recipients' => 'admin@itoysoldiers.com',
    'cancel_mail_to_admin_subject' => 'Somebody\'s cancelled for: [node:title]',
    'cancel_mail_to_admin_body' => 'They had ID [node-registration:registration-id] but it\'s now gone...',
    'send_unwaitinglist_mail_to_registree' => 0,
    'unwaitinglist_mail_to_registree_subject' => 'You\'ve been moved from the waiting list to the regular list',
    'unwaitinglist_mail_to_registree_body' => 'Hi [node-registration:email],

due to a cancellation you\'ve been moved from the waiting list to the regular list.

Event name: [node:title].
Event start: [node:event-start].',
    'show_message_access' => 1,
    'show_message_date' => 1,
    'show_message_capacity' => 1,
    'show_message_registered' => 1,
    'capacity' => 0,
  );
  $export['node_registration_type_settings_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_registration_type_settings_special_event';
  $strongarm->value = array(
    'date_field' => 'field_event_date',
    'max_registration_date_field' => 'field_registration_deadline',
    'min_registration_date_field' => '0',
    'capacity_field' => 'field_slots_warzone',
    'status' => 1,
    'toggle_enabled_in_node_form' => 0,
    'no_register_page' => 0,
    'extra_nr_owners_no_settings_tab' => 0,
    'allow_registration_until' => '1 minute',
    'registration_success_message' => 'Thank you, your registration has been received!',
    'allow_cancellation_until' => '1 minute',
    'allow_exceeding_capacity' => 1,
    'max_slots_per_registration_authenticated' => 1,
    'max_slots_per_registration_anonymous' => 1,
    'allow_email_change' => 1,
    'require_email_verification' => FALSE,
    'sender_name' => '',
    'sender_mail' => '',
    'mail_system' => '0',
    'send_mail_to_registree' => 1,
    'mail_to_registree_bcc' => '',
    'mail_to_registree_subject' => 'You\'ve registered for: [node:title]',
    'mail_to_registree_body' => 'This is what you\'ve registered with:

E-mail address: [node-registration:email]

To edit, go to [node-registration:edit-url]. To cancel, go to [node-registration:cancel-url].',
    'change_mail_for_waiting_list_registree' => 0,
    'mail_for_waiting_list_registree_subject' => 'You\'ve registered for: [node:title] (BUT YOU\'RE ON THE WAITING LIST)',
    'mail_for_waiting_list_registree_body' => 'This is what you\'ve registered with:

E-mail address: [node-registration:email]

BUT YOU\'RE ON THE WAITING LIST.

To edit, go to [node-registration:edit-url].',
    'send_mail_to_admin' => 0,
    'mail_to_admin_recipients' => 'admin@itoysoldiers.com',
    'mail_to_admin_subject' => 'Somebody\'s registered for: [node:title]',
    'mail_to_admin_body' => 'This is what they entered:

E-mail address: [node-registration:email]

To view the registration, go to [node-registration:url].',
    'send_reminder_mail_to_registrees' => 0,
    'send_reminders_before' => '1 day',
    'reminder_mail_to_registrees_subject' => '[node:title] begins in [node:time-left]',
    'reminder_mail_to_registrees_body' => 'Hey [node-registration:email],

this [node:content-type:name] starts in [node:time-left].

Don\'t forget to go! It begins at [node:event-start].',
    'send_cancel_mail_to_registree' => 0,
    'cancel_mail_to_registree_bcc' => '',
    'cancel_mail_to_registree_subject' => 'You\'ve cancelled for: [node:title]',
    'cancel_mail_to_registree_body' => 'This is what you were registered with:

E-mail address: [node-registration:email]

But now it\'s gone...',
    'send_cancel_mail_to_admin' => 0,
    'cancel_mail_to_admin_recipients' => 'admin@itoysoldiers.com',
    'cancel_mail_to_admin_subject' => 'Somebody\'s cancelled for: [node:title]',
    'cancel_mail_to_admin_body' => 'They had ID [node-registration:registration-id] but it\'s now gone...',
    'send_unwaitinglist_mail_to_registree' => 0,
    'unwaitinglist_mail_to_registree_subject' => 'You\'ve been moved from the waiting list to the regular list',
    'unwaitinglist_mail_to_registree_body' => 'Hi [node-registration:email],

due to a cancellation you\'ve been moved from the waiting list to the regular list.

Event name: [node:title].
Event start: [node:event-start].',
    'show_message_access' => 1,
    'show_message_date' => 1,
    'show_message_capacity' => 1,
    'show_message_registered' => 1,
  );
  $export['node_registration_type_settings_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_registration_type_settings_war_zone_tournament';
  $strongarm->value = array(
    'date_field' => 'field_event_date_warzone',
    'max_registration_date_field' => 'field_registration_deadline',
    'min_registration_date_field' => '0',
    'capacity_field' => 'field_slots_warzone',
    'status' => 1,
    'toggle_enabled_in_node_form' => 0,
    'no_register_page' => 0,
    'extra_nr_owners_no_settings_tab' => 1,
    'allow_registration_until' => '1 day',
    'registration_success_message' => 'Thank you, your registration has been received!',
    'allow_cancellation_until' => '5 minutes',
    'allow_exceeding_capacity' => 1,
    'max_slots_per_registration_authenticated' => 1,
    'max_slots_per_registration_anonymous' => 1,
    'allow_email_change' => 0,
    'require_email_verification' => FALSE,
    'sender_name' => '',
    'sender_mail' => '',
    'send_mail_to_registree' => 1,
    'mail_to_registree_bcc' => '',
    'mail_to_registree_subject' => 'You\'ve registered for: [node:title]',
    'mail_to_registree_body' => '<h1 style="color: #222222; font-family: \'Helvetica\', \'Arial\', sans-serif; font-weight: normal; text-align: left; line-height: 1.3; word-break: normal; font-size: 40px; margin: 0; padding: 0;" align="left">
Greetings, [node-registration:field-register-real-name]</h1>

<p class="lead" style="color: #222222; font-family: \'Helvetica\', \'Arial\', sans-serif; font-weight: normal; text-align: left; line-height: 21px; font-size: 18px; margin: 0 0 10px; padding: 0;" align="left">
You have successfully registered for <strong><a href="[node:url]">[node:title]</a></strong>!</p>

<p style="color: #222222; font-family: \'Helvetica\', \'Arial\', sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;" align="left">This is what you\'ve registered with:</p>

<p style="color: #222222; font-family: \'Helvetica\', \'Arial\', sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;" align="left">Army: [node-registration:field-register-army:name]</p>
<p style="color: #222222; font-family: \'Helvetica\', \'Arial\', sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;" align="left">E-mail address: [node-registration:email]</p>

<p style="color: #222222; font-family: \'Helvetica\', \'Arial\', sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;" align="left">To edit, go to [node-registration:edit-url]. To cancel, go to [node-registration:cancel-url].</p>

<p style="color: #222222; font-family: \'Helvetica\', \'Arial\', sans-serif; font-weight: normal; text-align: left; line-height: 19px; font-size: 14px; margin: 0 0 10px; padding: 0;" align="left">
Good hunting!
</p>',
    'change_mail_for_waiting_list_registree' => 0,
    'mail_for_waiting_list_registree_subject' => 'You\'ve registered for: [node:title] (BUT YOU\'RE ON THE WAITING LIST)',
    'mail_for_waiting_list_registree_body' => 'This is what you\'ve registered with:

E-mail address: [node-registration:email]

BUT YOU\'RE ON THE WAITING LIST.

To edit, go to [node-registration:edit-url].',
    'send_mail_to_admin' => 0,
    'mail_to_admin_recipients' => 'admin@itoysoldiers.com',
    'mail_to_admin_subject' => 'Somebody\'s registered for: [node:title]',
    'mail_to_admin_body' => 'This is what they entered:

E-mail address: [node-registration:email]

To view the registration, go to [node-registration:url].',
    'send_reminder_mail_to_registrees' => 0,
    'send_reminders_before' => '1 day',
    'reminder_mail_to_registrees_subject' => '[node:title] begins in [node:time-left]',
    'reminder_mail_to_registrees_body' => 'Hey [node-registration:email],

this [node:content-type:name] starts in [node:time-left].

Don\'t forget to go! It begins at [node:event-start].',
    'send_cancel_mail_to_registree' => 0,
    'cancel_mail_to_registree_bcc' => '',
    'cancel_mail_to_registree_subject' => 'You\'ve cancelled for: [node:title]',
    'cancel_mail_to_registree_body' => 'This is what you were registered with:

E-mail address: [node-registration:email]

But now it\'s gone...',
    'send_cancel_mail_to_admin' => 0,
    'cancel_mail_to_admin_recipients' => 'admin@itoysoldiers.com',
    'cancel_mail_to_admin_subject' => 'Somebody\'s cancelled for: [node:title]',
    'cancel_mail_to_admin_body' => 'They had ID [node-registration:registration-id] but it\'s now gone...',
    'send_unwaitinglist_mail_to_registree' => 0,
    'unwaitinglist_mail_to_registree_subject' => 'You\'ve been moved from the waiting list to the regular list',
    'unwaitinglist_mail_to_registree_body' => 'Hi [node-registration:email],

due to a cancellation you\'ve been moved from the waiting list to the regular list.

Event name: [node:title].
Event start: [node:event-start].',
    'show_message_access' => 1,
    'show_message_date' => 1,
    'show_message_capacity' => 1,
    'show_message_registered' => 1,
  );
  $export['node_registration_type_settings_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_league';
  $strongarm->value = 0;
  $export['node_submitted_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_narrative_campaign';
  $strongarm->value = 0;
  $export['node_submitted_narrative_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_narrative_campaign_instance';
  $strongarm->value = 0;
  $export['node_submitted_narrative_campaign_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_special_event';
  $strongarm->value = 0;
  $export['node_submitted_special_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_war_zone_league';
  $strongarm->value = 0;
  $export['node_submitted_war_zone_league'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_war_zone_tournament';
  $strongarm->value = 0;
  $export['node_submitted_war_zone_tournament'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_league_pattern';
  $strongarm->value = 'warzone/[node:title]';
  $export['pathauto_node_league_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_narrative_campaign_instance_pattern';
  $strongarm->value = 'warzone/[node:title]';
  $export['pathauto_node_narrative_campaign_instance_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_narrative_campaign_pattern';
  $strongarm->value = 'warzone/[node:title]';
  $export['pathauto_node_narrative_campaign_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_special_event_pattern';
  $strongarm->value = 'warzone/[node:title]';
  $export['pathauto_node_special_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_war_zone_league_pattern';
  $strongarm->value = 'leagues/[node:title]';
  $export['pathauto_node_war_zone_league_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_war_zone_tournament_pattern';
  $strongarm->value = 'warzone/[node:title]';
  $export['pathauto_node_war_zone_tournament_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_type_pattern';
  $strongarm->value = 'type/[term:name]';
  $export['pathauto_taxonomy_term_event_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_games_pattern';
  $strongarm->value = 'games/[term:name]';
  $export['pathauto_taxonomy_term_games_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '[term:vocabulary:name]/[term:name]';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  return $export;
}
