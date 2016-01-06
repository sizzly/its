<?php
/**
 * @file
 * views_view.files_test_modal.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'files_test_modal';
$view->description = 'Crafts the colorbox triggers for image display.';
$view->tag = 'In Development';
$view->base_table = 'file_managed';
$view->human_name = 'Files: Test: Modal';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Files: Test: Modal';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '17';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['class'] = 'photo-stream-lg';
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: File: User who uploaded */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Flags: like_image */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'file_managed';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like_image';
/* Field: Teaser Image */
$handler->display->display_options['fields']['rendered']['id'] = 'rendered';
$handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered']['ui_name'] = 'Teaser Image';
$handler->display->display_options['fields']['rendered']['label'] = '';
$handler->display->display_options['fields']['rendered']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered']['file_view_mode'] = 'preview';
/* Field: File: Path */
$handler->display->display_options['fields']['uri']['id'] = 'uri';
$handler->display->display_options['fields']['uri']['table'] = 'file_managed';
$handler->display->display_options['fields']['uri']['field'] = 'uri';
$handler->display->display_options['fields']['uri']['label'] = '';
$handler->display->display_options['fields']['uri']['exclude'] = TRUE;
$handler->display->display_options['fields']['uri']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uri']['alter']['text'] = '<img src=[uri] class="cboxPhoto">';
$handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
/* Field: Full Image */
$handler->display->display_options['fields']['rendered_1']['id'] = 'rendered_1';
$handler->display->display_options['fields']['rendered_1']['table'] = 'file_managed';
$handler->display->display_options['fields']['rendered_1']['field'] = 'rendered';
$handler->display->display_options['fields']['rendered_1']['ui_name'] = 'Full Image';
$handler->display->display_options['fields']['rendered_1']['label'] = '';
$handler->display->display_options['fields']['rendered_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_1']['file_view_mode'] = 'teaser';
/* Field: File: Edit link */
$handler->display->display_options['fields']['edit']['id'] = 'edit';
$handler->display->display_options['fields']['edit']['table'] = 'file_managed';
$handler->display->display_options['fields']['edit']['field'] = 'edit';
$handler->display->display_options['fields']['edit']['label'] = '';
$handler->display->display_options['fields']['edit']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit']['element_label_colon'] = FALSE;
/* Field: File: Description */
$handler->display->display_options['fields']['field_description_image']['id'] = 'field_description_image';
$handler->display->display_options['fields']['field_description_image']['table'] = 'field_data_field_description_image';
$handler->display->display_options['fields']['field_description_image']['field'] = 'field_description_image';
$handler->display->display_options['fields']['field_description_image']['label'] = '';
$handler->display->display_options['fields']['field_description_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_description_image']['element_label_colon'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['exclude'] = TRUE;
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['image_style'] = 'avatar_small';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: File: Usage link */
$handler->display->display_options['fields']['usage']['id'] = 'usage';
$handler->display->display_options['fields']['usage']['table'] = 'file_managed';
$handler->display->display_options['fields']['usage']['field'] = 'usage';
$handler->display->display_options['fields']['usage']['label'] = '';
$handler->display->display_options['fields']['usage']['exclude'] = TRUE;
$handler->display->display_options['fields']['usage']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['usage']['text'] = 'Content';
/* Field: File: Link */
$handler->display->display_options['fields']['link']['id'] = 'link';
$handler->display->display_options['fields']['link']['table'] = 'file_managed';
$handler->display->display_options['fields']['link']['field'] = 'link';
$handler->display->display_options['fields']['link']['exclude'] = TRUE;
$handler->display->display_options['fields']['link']['text'] = 'File';
/* Field: File: Upload date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'privatemsg_years';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
$handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
/* Field: File: Name */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['label'] = '';
$handler->display->display_options['fields']['filename']['exclude'] = TRUE;
$handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
/* Field: File: File ID */
$handler->display->display_options['fields']['fid']['id'] = 'fid';
$handler->display->display_options['fields']['fid']['table'] = 'file_managed';
$handler->display->display_options['fields']['fid']['field'] = 'fid';
$handler->display->display_options['fields']['fid']['label'] = '';
$handler->display->display_options['fields']['fid']['exclude'] = TRUE;
$handler->display->display_options['fields']['fid']['element_label_colon'] = FALSE;
/* Field: Flags: Flag link */
$handler->display->display_options['fields']['ops']['id'] = 'ops';
$handler->display->display_options['fields']['ops']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops']['field'] = 'ops';
$handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
$handler->display->display_options['fields']['ops']['label'] = '';
$handler->display->display_options['fields']['ops']['exclude'] = TRUE;
$handler->display->display_options['fields']['ops']['alter']['preserve_tags'] = '<a>';
$handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
/* Field: Colorbox: Colorbox trigger */
$handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
$handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
$handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
$handler->display->display_options['fields']['colorbox']['label'] = '';
$handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['colorbox']['trigger_field'] = 'rendered';
$handler->display->display_options['fields']['colorbox']['popup'] = '<div class="text-center">[rendered_1]</div>
<div class="image-text">
    <div class="panel">
        <div class="seperator"></div>
        <nav class="navbar navbar-default">
            <div class="container-fluid">
                <!-- Brand and toggle get grouped for better mobile display -->
                <div class="navbar-header">
                    <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
                        <span class="sr-only">Toggle navigation</span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                    <a class="navbar-brand" href="#">[filename]</a>
                </div>

                <!-- Collect the nav links, forms, and other content for toggling -->
                <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
                    <ul class="nav navbar-nav navbar-right">
                        <li>[link]</li>
                        <li>[ops]</li>
                        <li>[edit]</li>
                    </ul>
                </div><!-- /.navbar-collapse -->
            </div><!-- /.container-fluid -->
        </nav>

        <div class="panel-body">
            [field_description_image]<br>
        </div>
        <div class="media">
            <div class="pull-left text-center">
                [picture]
            </div>
            <div class="media-heading">
                [name]
            </div>
            <div class="media-body">
                [timestamp]
            </div>
        </div>
        <div class="clearfix"></div>
    </div>
</div>
';
$handler->display->display_options['fields']['colorbox']['caption'] = '[filename]';
$handler->display->display_options['fields']['colorbox']['gid'] = 1;
$handler->display->display_options['fields']['colorbox']['width'] = '';
$handler->display->display_options['fields']['colorbox']['height'] = '';
/* Filter criterion: File: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'file_managed';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'image' => 'image',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'files-test-modal';

/* Display: Associated Images */
$handler = $view->new_display('panel_pane', 'Associated Images', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: File: User who uploaded */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Flags: like_image */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'file_managed';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like_image';
/* Relationship: File: Entityform Submission using Upload */
$handler->display->display_options['relationships']['reverse_field_status_upload_images_entityform']['id'] = 'reverse_field_status_upload_images_entityform';
$handler->display->display_options['relationships']['reverse_field_status_upload_images_entityform']['table'] = 'file_managed';
$handler->display->display_options['relationships']['reverse_field_status_upload_images_entityform']['field'] = 'reverse_field_status_upload_images_entityform';
$handler->display->display_options['relationships']['reverse_field_status_upload_images_entityform']['required'] = TRUE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_update_reference_message']['id'] = 'reverse_field_update_reference_message';
$handler->display->display_options['relationships']['reverse_field_update_reference_message']['table'] = 'entityform';
$handler->display->display_options['relationships']['reverse_field_update_reference_message']['field'] = 'reverse_field_update_reference_message';
$handler->display->display_options['relationships']['reverse_field_update_reference_message']['relationship'] = 'reverse_field_status_upload_images_entityform';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Field: Associated Nodes (field_associated_nodes_stream) */
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['id'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['table'] = 'field_data_field_associated_nodes_stream';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['field'] = 'field_associated_nodes_stream_target_id';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['relationship'] = 'reverse_field_update_reference_message';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_associated_nodes_stream_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'Node';
$handler->display->display_options['pane_category']['weight'] = '0';

/* Display: Legacy Images Field */
$handler = $view->new_display('panel_pane', 'Legacy Images Field', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: File: User who uploaded */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Flags: like_image */
$handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['table'] = 'file_managed';
$handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like_image';
/* Relationship: File: Content using Images */
$handler->display->display_options['relationships']['reverse_field_images_node']['id'] = 'reverse_field_images_node';
$handler->display->display_options['relationships']['reverse_field_images_node']['table'] = 'file_managed';
$handler->display->display_options['relationships']['reverse_field_images_node']['field'] = 'reverse_field_images_node';
$handler->display->display_options['relationships']['reverse_field_images_node']['required'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_images_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'Node';
$handler->display->display_options['pane_category']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'system',
  2 => 'text',
  3 => 'views_content',
);
