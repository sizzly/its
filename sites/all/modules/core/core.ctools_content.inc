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

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'post_update_with_battle';
  $content->admin_title = 'Post Update - With Battle';
  $content->admin_description = 'This generates a panel so players can post updates to content with the option to add a battle.';
  $content->category = 'Node';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Post',
    'body' => '<a name="posts"></a>
<div class="panel panel-default">
    <div class="panel-tab clearfix">
        <ul class="tab-bar">
            <li class="active"><a href="#home1" data-toggle="tab"><i class="fa fa-bullhorn"></i> Status</a></li>
            <li><a href="#profile1" data-toggle="tab"><i class="fa fa-fire"></i> Battle</a></li>
            <li><a href="#message1" data-toggle="tab"><i class="fa fa-image"></i> Image</a></li>
        </ul>
    </div>
    <div class="panel-body">
        <div class="tab-content">
            <div class="tab-pane fade in active" id="home1">
                <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'status\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
            </div>
            <div class="tab-pane fade" id="profile1">
<div class="well well-sm">
                <?php
  module_load_include(\'inc\', \'entityform\', \'entityform.admin\');
  $entity_form_name = \'quick_battle\';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), \'submit\', \'embedded\');
  echo drupal_render($render_estimate_form);
?>
</div>
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
</div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $export['post_update_with_battle'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'posts_update_no_battle';
  $content->admin_title = 'Post (Comments and Image)';
  $content->admin_description = '';
  $content->category = 'Node';
  $content->settings = array(
    'admin_title' => 'Post (Comments and Image)',
    'title' => 'Posts',
    'body' => '<a name="posts"></a>
<div class="panel panel-default">
    <div class="panel-tab clearfix">
        <ul class="tab-bar">
            <li class="active"><a href="#home1" data-toggle="tab"><i class="fa fa-comment"></i> Post</a></li>
            <li><a href="#message1" data-toggle="tab"><i class="fa fa-image"></i> Image</a></li>
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
  );
  $export['posts_update_no_battle'] = $content;

  return $export;
}
