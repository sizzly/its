<?php
/**
 * @file
 * core.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function core_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'add_image_block';
  $content->admin_title = 'Add Image Block';
  $content->admin_description = 'Generates the collapsible panel for adding images to nodes.';
  $content->category = 'Node';
  $content->settings = array(
    'admin_title' => 'Add Image Block',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="collapse" id="collapseImageForm">
  <div class="well">
<?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'status_all_upload_image\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
  </div>
</div>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $export['add_image_block'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'coming_soon';
  $content->admin_title = 'Coming Soon';
  $content->admin_description = '';
  $content->category = 'DEV';
  $content->settings = array(
    'admin_title' => 'Coming Soon',
    'title' => 'Coming Soon',
    'body' => 'This part of iToysoldiers is under development and not quite ready for you yet.  The stuff you see may be usable or not. You may, of course, submit bugs or feature requests against it though. ',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $export['coming_soon'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'core_taxonomy_content_count';
  $content->admin_title = 'Core: Taxonomy Content Counts';
  $content->admin_description = 'This generates a shortcut bar to content related to a taxonomy type.';
  $content->category = 'Term';
  $content->settings = array(
    'admin_title' => 'Core: Taxonomy Content Counts',
    'title' => '',
    'body' => '<div class="grey-container shortcut-wrapper">
<?php print strip_tags(views_embed_view("core_taxonomy_content_count" , "panel_pane_1"),"<i> <a> <span>"); ?> 
<?php print strip_tags(views_embed_view("core_taxonomy_content_count" , "panel_pane_7"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("core_taxonomy_content_count" , "panel_pane_3"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("core_taxonomy_content_count" , "panel_pane_5"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("core_taxonomy_content_count" , "panel_pane_6"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("core_taxonomy_content_count" , "panel_pane_4"),"<i> <a> <span>"); ?>
<?php print strip_tags(views_embed_view("core_taxonomy_content_count" , "panel_pane_2"),"<i> <a> <span>"); ?>
</div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $export['core_taxonomy_content_count'] = $content;

  return $export;
}
