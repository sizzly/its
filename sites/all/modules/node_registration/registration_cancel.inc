<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'icon' => 'icon_node_form.png',
  'title' => t('Cancel registration link'),
  'description' => t('Cancel registration link for already registered users.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
);

function node_registration_registration_cancel_content_type_render($subtype, $conf, $panel_args, &$context) {
  global $user;
  $block = new stdClass();
  $block->module = t('node');

  $block->title = t('Registration cancel');
  $block->delta = 'registration-cancel';
  $block->content = '';
  if (isset($context->data)) {
    $node = $context->data;
    if (!empty($node->registration)) {
      $account = $user;
      module_load_include('inc', 'node_resgistration', '/includes/node_registration.api');
      $reg = _node_registration_user_registered($node, $account);
      if (!empty($reg)) {
        $block->content = l(t('Cancel registration'), 'registration/' . $reg->registration_id . '/cancel', array('query' => drupal_get_destination()));
      }
    }
  }
  else {
    $block->content = t('Registration cancel link.');
  }
  return $block;
}

function node_registration_registration_cancel_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" node registration cancel link', array('@s' => $context->identifier));
}

function node_registration_registration_cancel_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}

