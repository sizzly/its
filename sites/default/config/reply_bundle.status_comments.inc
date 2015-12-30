<?php
/**
 * @file
 * reply_bundle.status_comments.inc
 */

$api = '2.0.0';

$data = entity_import('reply_bundle', '{
    "bundle" : "status_comments",
    "name" : "Status Comments",
    "access" : "2",
    "display" : "2",
    "description" : "",
    "form" : "1",
    "allow_reply" : "1",
    "locked" : "0"
  }');

$dependencies = array();

$optional = array(
  'field.reply.field_reply_body.status_comments' => 'field.reply.field_reply_body.status_comments',
);

$modules = array(
  0 => 'entity',
  1 => 'reply',
);
