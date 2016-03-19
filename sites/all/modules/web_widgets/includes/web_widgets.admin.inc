<?php

/**
 * Implements hook_form().
 */
function web_widgets_admin_settings_form($form, &$form_state) {

  $form['web_widgets_use_ajax'] = array(
    '#type' => 'checkbox',
    '#title' => 'Use ajax',
    '#description' => 'Use ajax in view.',
    '#default_value' => variable_get('web_widgets_use_ajax', FALSE),
  );

  $form['web_widgets_use_pager'] = array(
    '#type' => 'checkbox',
    '#title' => 'Use pager',
    '#description' => 'Use pager in view.',
    '#default_value' => variable_get('web_widgets_use_pager', FALSE),
  );

  $form['web_widgets_iframe_autoheight'] = array(
    '#type' => 'checkbox',
    '#title' => 'IFrame autoheight',
    '#description' => 'Use autoheight plugin for iframe widget',
    '#default_value' => variable_get('web_widgets_iframe_autoheight', FALSE),
  );

  $methods = array(
    'bodyScroll',
    'documentElementOffset',
    'documentElementScroll',
    'max',
    'min',
    'grow',
    'lowestElement',
    'taggedElement',
  );

  $form['web_widgets_iframe_autoheight_method'] = array(
    '#type' => 'select',
    '#title' => 'IFrame autoheight method',
    '#description' => 'Select method which works best for your site. See details on http://davidjbradshaw.github.io/iframe-resizer/#heightcalculationmethod',
    '#default_value' => variable_get('web_widgets_iframe_autoheight_method', 'lowestElement'),
    '#states' => array(
        'visible' => array(
            ':input[name="web_widgets_iframe_autoheight"]' => array('checked' => TRUE),
        ),
    ),
    '#options' => drupal_map_assoc($methods),
  );

  return system_settings_form($form);
}
