<?php
/**
 * @file
 * core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_api_version';
  $strongarm->value = '4';
  $export['leaflet_mapbox_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_code';
  $strongarm->value = '';
  $export['leaflet_mapbox_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_description';
  $strongarm->value = '';
  $export['leaflet_mapbox_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_label';
  $strongarm->value = 'Decimal';
  $export['leaflet_mapbox_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_style_url';
  $strongarm->value = 'mapbox://styles/itoysoldiers/cj5mlpe3c3jih2rmtai49fywo';
  $export['leaflet_mapbox_style_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_token';
  $strongarm->value = 'pk.eyJ1IjoiaXRveXNvbGRpZXJzIiwiYSI6IjFyYkFHWVUifQ.3mqCDaWy2LK9XTDThkvIqw';
  $export['leaflet_mapbox_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_mapbox_zoomlevel';
  $strongarm->value = '5';
  $export['leaflet_mapbox_zoomlevel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_bulk_upload_edit';
  $strongarm->value = 0;
  $export['media_bulk_upload_edit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_ckeditor_fully_rendered_files';
  $strongarm->value = 1;
  $export['media_ckeditor_fully_rendered_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_alignment';
  $strongarm->value = 0;
  $export['media_wysiwyg_alignment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_external_link';
  $strongarm->value = 0;
  $export['media_wysiwyg_external_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_remove_media_class';
  $strongarm->value = 1;
  $export['media_wysiwyg_remove_media_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_use_link_text_for_filename';
  $strongarm->value = 1;
  $export['media_wysiwyg_use_link_text_for_filename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_override_field_types';
  $strongarm->value = array();
  $export['media_wysiwyg_wysiwyg_override_field_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_override_multivalue';
  $strongarm->value = 0;
  $export['media_wysiwyg_wysiwyg_override_multivalue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_auto_redirect';
  $strongarm->value = 1;
  $export['redirect_auto_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_default_status_code';
  $strongarm->value = '301';
  $export['redirect_default_status_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_purge_inactive';
  $strongarm->value = '15552000';
  $export['redirect_purge_inactive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_awssdk2_access_key';
  $strongarm->value = 'AKIAI7APZIFL7ON6XLTA';
  $export['s3fs_awssdk2_access_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_awssdk2_secret_key';
  $strongarm->value = 'lihfoEJUIPKG0BWjxjlEp+t4lhqvFBD3v3gzP6Xn';
  $export['s3fs_awssdk2_secret_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_awssdk2_use_instance_profile';
  $strongarm->value = 0;
  $export['s3fs_awssdk2_use_instance_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_bucket';
  $strongarm->value = 'media.itoysoldiers.com';
  $export['s3fs_bucket'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_domain';
  $strongarm->value = 'media.itoysoldiers.com';
  $export['s3fs_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_encryption';
  $strongarm->value = '';
  $export['s3fs_encryption'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_hostname';
  $strongarm->value = '';
  $export['s3fs_hostname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_migrate_fields';
  $strongarm->value = array();
  $export['s3fs_migrate_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_migrate_newer_first';
  $strongarm->value = 1;
  $export['s3fs_migrate_newer_first'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_no_rewrite_cssjs';
  $strongarm->value = 0;
  $export['s3fs_no_rewrite_cssjs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_presigned_urls';
  $strongarm->value = '';
  $export['s3fs_presigned_urls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_region';
  $strongarm->value = '';
  $export['s3fs_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_cname';
  $strongarm->value = 1;
  $export['s3fs_use_cname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_customhost';
  $strongarm->value = 0;
  $export['s3fs_use_customhost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_https';
  $strongarm->value = 0;
  $export['s3fs_use_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_s3_for_private';
  $strongarm->value = 0;
  $export['s3fs_use_s3_for_private'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 's3fs_use_s3_for_public';
  $strongarm->value = 0;
  $export['s3fs_use_s3_for_public'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'special_menu_items_nolink_tag';
  $strongarm->value = '<span class="lead">';
  $export['special_menu_items_nolink_tag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'special_menu_items_separator_tag';
  $strongarm->value = '<span>';
  $export['special_menu_items_separator_tag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'special_menu_items_separator_value';
  $strongarm->value = '<hr>';
  $export['special_menu_items_separator_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_main-menu';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.6',
  );
  $export['xmlsitemap_settings_menu_link_main-menu'] = $strongarm;

  return $export;
}
