<?php
/**
 * @file
 * its_messaging.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_messaging_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function its_messaging_default_entityform_type() {
  $items = array();
  $items['status'] = entity_import('entityform_type', '{
    "type" : "status",
    "label" : "Status",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "3" : "3", "7" : "7", "9" : "9", "8" : "8", "1" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "[current-page:url:path]",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['status_node_add_comment'] = entity_import('entityform_type', '{
    "type" : "status_node_add_comment",
    "label" : "Status: Node: Add Comment",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "3" : 0, "7" : 0, "9" : 0, "8" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "[current-page:url:path]",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function its_messaging_flag_default_flags() {
  $flags = array();
  // Exported flag: "Salute Image".
  $flags['like_image'] = array(
    'content_type' => 'file',
    'title' => 'Salute Image',
    'global' => 0,
    'types' => array(
      0 => 'image',
    ),
    'flag_short' => 'Salute',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Recant',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Saluted',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_entity' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'module' => 'its_messaging',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Salute Status".
  $flags['messages_all_salute'] = array(
    'content_type' => 'message',
    'title' => 'Salute Status',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Salute',
    'flag_long' => 'Salute this update',
    'flag_message' => 'Saluted',
    'unflag_short' => 'Saluted',
    'unflag_long' => 'Click to remove Salute',
    'unflag_message' => 'Recanted',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_entity' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'module' => 'its_messaging',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function its_messaging_default_message_type() {
  $items = array();
  $items['models_all_start_project'] = entity_import('message_type', '{
    "name" : "models_all_start_project",
    "description" : "Models: All: Start Project",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cspan\\u003E[message:user] has started \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E[message:user] has started \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/span\\u003E"
        }
      ]
    }
  }');
  $items['statuses_all_new_files'] = entity_import('message_type', '{
    "name" : "statuses_all_new_files",
    "description" : "Statuses: All: New Files",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has submitted recon photos.",
          "format" : "pure_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E has submitted recon photos."
        }
      ]
    }
  }');
  $items['statuses_all_new_status'] = entity_import('message_type', '{
    "name" : "statuses_all_new_status",
    "description" : "Statuses: All: New Status",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E says...\\u003C\\/span\\u003E",
          "format" : "pure_html",
          "safe_value" : "\\u003Cspan\\u003E\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E says...\\u003C\\/span\\u003E"
        }
      ]
    }
  }');
  $items['stream_narrative_army_event'] = entity_import('message_type', '{
    "name" : "stream_narrative_army_event",
    "description" : "Stream: Narrative Army Event",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E chronicled an event for \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_player_acknowledges_a_battle'] = entity_import('message_type', '{
    "name" : "stream_player_acknowledges_a_battle",
    "description" : "Stream: Player Acknowledges a battle",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E acknowledged the battle, \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_player_comments_on_post'] = entity_import('message_type', '{
    "name" : "stream_player_comments_on_post",
    "description" : "Stream: Player Comments on Post",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E commented on \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]#posts\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "pure_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E commented on \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]#posts\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\n"
        }
      ]
    }
  }');
  $items['stream_player_likes_content'] = entity_import('message_type', '{
    "name" : "stream_player_likes_content",
    "description" : "Stream: Player Likes Content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E salutes \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_player_posts_a_battle'] = entity_import('message_type', '{
    "name" : "stream_player_posts_a_battle",
    "description" : "Stream: Player posts a battle",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E reported the battle, \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_player_posts_new_content'] = entity_import('message_type', '{
    "name" : "stream_player_posts_new_content",
    "description" : "Stream: Player posts new content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E created a new [message:field-stream-node-ref:content-type:name], \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  $items['stream_player_rates_list'] = entity_import('message_type', '{
    "name" : "stream_player_rates_list",
    "description" : "Stream: Player Rates List",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:relative]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E rated \\u003Ca href=\\u0022[message:field-stream-node-ref:url:relative]\\u0022\\u003E[message:field-stream-node-ref:title]\\u003C\\/a\\u003E.\\r\\n",
          "format" : "php_code"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_default_reply_bundle().
 */
function its_messaging_default_reply_bundle() {
  $items = array();
  $items['file_comments'] = entity_import('reply_bundle', '{
    "bundle" : "file_comments",
    "name" : "File Comments",
    "access" : "2",
    "display" : "2",
    "description" : "",
    "form" : "1",
    "allow_reply" : "1",
    "locked" : "0"
  }');
  $items['status_comments'] = entity_import('reply_bundle', '{
    "bundle" : "status_comments",
    "name" : "Status Comments",
    "access" : "2",
    "display" : "2",
    "description" : "",
    "form" : "1",
    "allow_reply" : "1",
    "locked" : "0"
  }');
  return $items;
}
