<?php
/**
 * @file
 * its_media.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function its_media_default_rules_configuration() {
  $items = array();
  $items['rules_media_images_on_new_reply'] = entity_import('rules_config', '{ "rules_media_images_on_new_reply" : {
      "LABEL" : "Media: Images: On New Reply",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.2", "Media" ],
      "REQUIRES" : [ "rules", "reply" ],
      "ON" : { "reply_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "reply" ],
            "type" : "reply",
            "bundle" : { "value" : { "file_comments" : "file_comments" } }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "file", "id" : [ "reply:entity-id" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "media_image_new_comment",
              "param_user" : [ "reply:uid" ]
            },
            "PROVIDE" : { "entity_created" : { "message" : "Created message" } }
          }
        },
        { "data_set" : {
            "data" : [ "message:field-file-reference" ],
            "value" : [ "entity-fetched" ]
          }
        },
        { "entity_save" : { "data" : [ "message" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_media_images_on_salute'] = entity_import('rules_config', '{ "rules_media_images_on_salute" : {
      "LABEL" : "Media: Images: On Salute",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "4.2", "Media" ],
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_flagged_like_image" : [] },
      "DO" : []
    }
  }');
  return $items;
}
