<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'icon' => 'icon_node_form.png',
  'title' => t('Node form registration status'),
  'description' => t('Registration status on the Node form.'),
  'required context' => new ctools_context_required(t('Form'), 'node_form'),
  'category' => t('Form'),
);

function node_registration_registration_status_content_type_render($subtype, $conf, $panel_args, &$context) {
  $block = new stdClass();
  $block->module = t('node_form');

  $block->title = t('Registration status');
  $block->delta = 'registration-status';

  if (isset($context->form)) {
    if (!empty($context->form['node_registration'])) {
      $block->content['node_registration'] = $context->form['node_registration'];
      if (isset($block->content['node_registration']['#group'])) {
        unset($block->content['node_registration']['#pre_render']);
        unset($block->content['node_registration']['#theme_wrappers']);
      }

      // Set access to false on the original rather than removing so that
      // vertical tabs doesn't clone it. I think this is due to references.
      $context->form['node_registration']['#access'] = FALSE;
    }
  }
  else {
    $block->content = t('Registration status.');
  }
  return $block;
}

function node_registration_registration_status_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" node form registration status', array('@s' => $context->identifier));
}

function node_registration_registration_status_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}

