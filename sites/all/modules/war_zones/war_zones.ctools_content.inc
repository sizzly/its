<?php
/**
 * @file
 * war_zones.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function war_zones_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'war_zone_all_content_count';
  $content->admin_title = 'War Zone: All: Content Count';
  $content->admin_description = 'Generates the short cut bar for war zones.';
  $content->category = 'War Zone';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="grey-container shortcut-wrapper">
<?php print strip_tags(views_embed_view("war_zone_all_content_counts" , "panel_pane_1"),"<i> <a> <span>"); ?> 
<?php print strip_tags(views_embed_view("war_zone_all_content_counts" , "panel_pane_7"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("war_zone_all_content_counts" , "panel_pane_3"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("war_zone_all_content_counts" , "panel_pane_5"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("war_zone_all_content_counts" , "panel_pane_6"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("war_zone_all_content_counts" , "panel_pane_4"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("war_zone_all_content_counts" , "panel_pane_2"),"<i> <a> <span>"); ?>
</div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $export['war_zone_all_content_count'] = $content;

  return $export;
}
