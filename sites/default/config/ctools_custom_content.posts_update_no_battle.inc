<?php
/**
 * @file
 * ctools_custom_content.posts_update_no_battle.inc
 */

$api = '2.0.0';

$data = $content = new stdClass();
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ctools_custom_content',
);
