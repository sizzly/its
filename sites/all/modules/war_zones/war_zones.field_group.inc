<?php
/**
 * @file
 * war_zones.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function war_zones_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|narrative_campaign_instance|teaser';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign_instance';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_game_warzone',
      2 => 'registration_link',
      3 => 'registration_slots_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_body_wrapper|node|narrative_campaign_instance|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|narrative_campaign|teaser';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_game_warzone',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_body_wrapper|node|narrative_campaign|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_wrapper|node|war_zone_league|teaser';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '16',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_body_wrapper|node|war_zone_league|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clearfix|node|war_zone_league|teaser';
  $field_group->group_name = 'group_clearfix';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Clear Fix',
    'weight' => '21',
    'children' => array(
      0 => 'group_image_wrapper',
      1 => 'group_data_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Clear Fix',
      'instance_settings' => array(
        'classes' => 'clearfix',
        'element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
        'id' => 'node_war_zone_league_teaser_group_clearfix',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_clearfix|node|war_zone_league|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_wrapper|node|war_zone_league|teaser';
  $field_group->group_name = 'group_data_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_clearfix';
  $field_group->data = array(
    'label' => 'Data Wrapper',
    'weight' => '22',
    'children' => array(
      0 => 'body',
      1 => 'field_warzone_game',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'id' => 'node_war_zone_league_teaser_group_data_wrapper',
      ),
    ),
  );
  $field_groups['group_data_wrapper|node|war_zone_league|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_thumb|node|war_zone_league|teaser';
  $field_group->group_name = 'group_image_thumb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Thumbnail',
    'weight' => '25',
    'children' => array(
      0 => 'field_campaign_badge',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Thumbnail',
      'instance_settings' => array(
        'classes' => 'thumbnail',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_war_zone_league_teaser_group_image_thumb',
      ),
    ),
  );
  $field_groups['group_image_thumb|node|war_zone_league|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|narrative_campaign_instance|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign_instance';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|narrative_campaign_instance|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|narrative_campaign|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'group_spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|narrative_campaign|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|war_zone_league|teaser';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '15',
    'children' => array(
      0 => 'group_image_thumb',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|war_zone_league|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logistics|node|special_event|form';
  $field_group->group_name = 'group_logistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logistics',
    'weight' => '7',
    'children' => array(
      0 => 'field_location',
      1 => 'field_website',
      2 => 'field_entry_fee',
      3 => 'field_event_date',
      4 => 'field_slots_warzone',
      5 => 'field_registration_deadline',
      6 => 'field_warzone_scheduling',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-logistics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_logistics|node|special_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logistics|node|war_zone_tournament|form';
  $field_group->group_name = 'group_logistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logistics',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_date_warzone',
      1 => 'field_location',
      2 => 'field_slots_warzone',
      3 => 'field_entry_fee',
      4 => 'field_registration_deadline',
      5 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-logistics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_logistics|node|war_zone_tournament|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_body|node|special_event|teaser';
  $field_group->group_name = 'group_media_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_wrapper';
  $field_group->data = array(
    'label' => 'Body Wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_event_date',
      2 => 'registration_slots_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_body|node|special_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_body|node|war_zone_tournament|teaser';
  $field_group->group_name = 'group_media_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_wrapper';
  $field_group->data = array(
    'label' => 'Media Body',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_game_warzone',
      2 => 'registration_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Body',
      'instance_settings' => array(
        'classes' => 'col-sm-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_body|node|war_zone_tournament|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_left|node|special_event|teaser';
  $field_group->group_name = 'group_media_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_wrapper';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'group_spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_left|node|special_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_left|node|war_zone_tournament|teaser';
  $field_group->group_name = 'group_media_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_wrapper';
  $field_group->data = array(
    'label' => 'Media Left',
    'weight' => '5',
    'children' => array(
      0 => 'group_spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Left',
      'instance_settings' => array(
        'classes' => 'col-sm-3 text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_left|node|war_zone_tournament|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_wrapper|node|special_event|teaser';
  $field_group->group_name = 'group_media_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_media_body',
      1 => 'group_media_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_wrapper|node|special_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_wrapper|node|war_zone_tournament|teaser';
  $field_group->group_name = 'group_media_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_media_body',
      1 => 'group_media_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_wrapper|node|war_zone_tournament|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|special_event|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '8',
    'children' => array(
      0 => 'field_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_meta|node|special_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|war_zone_tournament|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '9',
    'children' => array(
      0 => 'field_status',
      1 => 'field_event_type',
      2 => 'field_event_date',
      3 => 'field_warzone_round',
      4 => 'field_warzone_scheduling',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_meta|node|war_zone_tournament|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mission_label_wrapper|field_collection_item|field_tournament_missions|default';
  $field_group->group_name = 'group_mission_label_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_tournament_missions';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mission Label Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_mission_name_tourney',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Mission Label Wrapper',
      'instance_settings' => array(
        'classes' => 'h2',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_mission_label_wrapper|field_collection_item|field_tournament_missions|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|narrative_campaign_instance|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign_instance';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '23',
    'children' => array(
      0 => 'field_campaign_badge',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|narrative_campaign_instance|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|narrative_campaign|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_image_wrapper';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|narrative_campaign|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|special_event|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'special_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_left';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '22',
    'children' => array(
      0 => 'field_campaign_badge',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|special_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spacer|node|war_zone_tournament|teaser';
  $field_group->group_name = 'group_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_media_left';
  $field_group->data = array(
    'label' => 'Spacer',
    'weight' => '22',
    'children' => array(
      0 => 'field_campaign_badge',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Spacer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'thumbnail',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_spacer|node|war_zone_tournament|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tournament_options|node|war_zone_tournament|form';
  $field_group->group_name = 'group_tournament_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '8',
    'children' => array(
      0 => 'field_tournament_missions',
      1 => 'field_scenario_selection_pp',
      2 => 'field_warzone_rounds_pub',
      3 => 'field_steamroller_scenarios',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tournament-options field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tournament_options|node|war_zone_tournament|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warzone_details|node|war_zone_league|default';
  $field_group->group_name = 'group_warzone_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '3',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-warzone-details field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_warzone_details|node|war_zone_league|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warzone_logistics|node|war_zone_league|form';
  $field_group->group_name = 'group_warzone_logistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logistics',
    'weight' => '5',
    'children' => array(
      0 => 'field_location',
      1 => 'field_round_duration',
      2 => 'field_entry_fee',
      3 => 'field_website',
      4 => 'field_registration_deadline',
      5 => 'field_slots_warzone',
      6 => 'field_league_start_date',
      7 => 'og_group_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Logistics',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-warzone-logistics field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_warzone_logistics|node|war_zone_league|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warzone_meta|node|war_zone_league|form';
  $field_group->group_name = 'group_warzone_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_status',
      2 => 'field_event_type',
      3 => 'field_warzone_round',
      4 => 'field_league_rule_set',
      5 => 'field_warzone_scheduling',
      6 => 'field_calculated_rounds',
      7 => 'field_registration_open',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-warzone-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_warzone_meta|node|war_zone_league|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warzone_options|node|war_zone_league|form';
  $field_group->group_name = 'group_warzone_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '6',
    'children' => array(
      0 => 'group_warzone_swiss',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Options',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-warzone-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_warzone_options|node|war_zone_league|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_warzone_swiss|node|war_zone_league|form';
  $field_group->group_name = 'group_warzone_swiss';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_warzone_options';
  $field_group->data = array(
    'label' => 'Swiss Style',
    'weight' => '22',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Swiss Style',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-warzone-swiss field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_warzone_swiss|node|war_zone_league|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|narrative_campaign_instance|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign_instance';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_body_wrapper',
      1 => 'group_image_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wrapper|node|narrative_campaign_instance|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|narrative_campaign|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'narrative_campaign';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_body_wrapper',
      1 => 'group_image_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wrapper|node|narrative_campaign|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|war_zone_league|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'war_zone_league';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_body_wrapper',
      1 => 'group_image_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wrapper|node|war_zone_league|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Body Wrapper');
  t('Clear Fix');
  t('Data Wrapper');
  t('Details');
  t('Image Wrapper');
  t('Logistics');
  t('Media Body');
  t('Media Left');
  t('Media Wrapper');
  t('Meta');
  t('Mission Label Wrapper');
  t('Options');
  t('Spacer');
  t('Swiss Style');
  t('Thumbnail');
  t('Wrapper');

  return $field_groups;
}
