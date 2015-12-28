<?php

/**
 * @file
 * Plugin to provide access control based on evaluated PHP.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Node: registration status"),
  'description' => t('Is user registered to node.'),
  'callback' => 'node_registration_status_access_check',
  'default' => array('description' => '', 'registration_status' => ''),
  'settings form' => 'node_registration_status_access_settings',
  'summary' => 'node_registration_status_access_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Settings form for the 'by perm' access plugin
 *
 */
function node_registration_status_access_settings($form, &$form_state, $conf) {
  $form['settings']['registration_status'] = array(
    '#type' => 'radios',
    '#title' => t('Registration status'),
    '#default_value' => $conf['registration_status'],
    '#options' => array('Logged in user is NOT registered', 'Logged in user IS currently registered'),
    '#required' => TRUE,
    '#description' =>  t('The registration state of the current user on this node'),
  );
  return $form;
}

/**
 * Check for access.
 */
function node_registration_status_access_check($__conf, $contexts) {
  global $user;
  $access = FALSE;
  $node = $contexts->data;
  module_load_include('inc', 'node_registration', '/includes/node_registration.api');
  $registration  = _node_registration_user_registered($node, $user);
  if ((empty($registration) && $__conf['registration_status'] == 0) || (!empty($registration) && $__conf['registration_status'] == 1)) {
    $access = TRUE;
  }
  return $access;
}

/**
 * Provide a summary description based upon the checked roles.
 */
function node_registration_status_access_summary($conf, $contexts) {
  return t('Registration status');
}

