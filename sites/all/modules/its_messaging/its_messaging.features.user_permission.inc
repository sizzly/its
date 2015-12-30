<?php
/**
 * @file
 * its_messaging.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function its_messaging_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer privatemsg settings'.
  $permissions['administer privatemsg settings'] = array(
    'name' => 'administer privatemsg settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'message',
  );

  // Exported permission: 'create private message tags'.
  $permissions['create private message tags'] = array(
    'name' => 'create private message tags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg_filter',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete file_comments reply'.
  $permissions['delete file_comments reply'] = array(
    'name' => 'delete file_comments reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own file_comments reply'.
  $permissions['delete own file_comments reply'] = array(
    'name' => 'delete own file_comments reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'delete own status_comments reply'.
  $permissions['delete own status_comments reply'] = array(
    'name' => 'delete own status_comments reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'delete status_comments reply'.
  $permissions['delete status_comments reply'] = array(
    'name' => 'delete status_comments reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit file_comments reply'.
  $permissions['edit file_comments reply'] = array(
    'name' => 'edit file_comments reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own file_comments reply'.
  $permissions['edit own file_comments reply'] = array(
    'name' => 'edit own file_comments reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'edit own status_comments reply'.
  $permissions['edit own status_comments reply'] = array(
    'name' => 'edit own status_comments reply',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'edit status_comments reply'.
  $permissions['edit status_comments reply'] = array(
    'name' => 'edit status_comments reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'filter private messages'.
  $permissions['filter private messages'] = array(
    'name' => 'filter private messages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg_filter',
  );

  // Exported permission: 'post file_comments reply'.
  $permissions['post file_comments reply'] = array(
    'name' => 'post file_comments reply',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'post status_comments reply'.
  $permissions['post status_comments reply'] = array(
    'name' => 'post status_comments reply',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'read all private messages'.
  $permissions['read all private messages'] = array(
    'name' => 'read all private messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'read privatemsg'.
  $permissions['read privatemsg'] = array(
    'name' => 'read privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'tag private messages'.
  $permissions['tag private messages'] = array(
    'name' => 'tag private messages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg_filter',
  );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view file_comments reply'.
  $permissions['view file_comments reply'] = array(
    'name' => 'view file_comments reply',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view roles recipients'.
  $permissions['view roles recipients'] = array(
    'name' => 'view roles recipients',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg_roles',
  );

  // Exported permission: 'view status_comments reply'.
  $permissions['view status_comments reply'] = array(
    'name' => 'view status_comments reply',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'write privatemsg'.
  $permissions['write privatemsg'] = array(
    'name' => 'write privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'write privatemsg to roles'.
  $permissions['write privatemsg to roles'] = array(
    'name' => 'write privatemsg to roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg_roles',
  );

  return $permissions;
}
