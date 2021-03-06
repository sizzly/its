<?php

/**
 * @file
 * Handler function for views field.
 */

/**
 * A handler to provide a field that is added by the administrator.
 */
class views_add_after_nth_rows_handler_field extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  function query() {
    // Do nothing to override the parent query.
  }

  /**
   * {@inheritdoc}
   */
  function option_definition() {
    $options = parent::option_definition();

    // Override the alter text option to always alter the text.
    $options['alter']['contains']['alter_text'] = array('default' => TRUE, 'bool' => TRUE);
    $options['hide_alter_empty'] = array('default' => FALSE, 'bool' => TRUE);
    $options['nthrow'] = array('default' => 1);

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Nthrow option.
    $form['nthrow'] = array(
      '#type' => 'textfield',
      '#title' => t('Display every how many row(s)?'),
      '#weight' => -999,
      '#default_value' => $this->options['nthrow'],
      '#description' => t('Display this field once every number of rows specified here.'),
    );

    // Preserve custom label.
    $form['custom_label'] = array(
      '#type' => 'checkbox',
      '#title' => t('Create a label'),
      '#description' => t('Enable to create a label for this field.'),
      '#default_value' => ($this->options['label'] !== ''),
      '#weight' => -103,
    );
    $form['label'] = array(
      '#type' => 'textfield',
      '#title' => t('Label'),
      '#default_value' => $this->options['label'],
      '#dependency' => array(
        'edit-options-custom-label' => array(1),
      ),
      '#weight' => -102,
    );

    // Remove the checkbox.
    unset($form['alter']['alter_text']);
    unset($form['alter']['text']['#dependency']);
    unset($form['alter']['text']['#process']);
    unset($form['alter']['help']['#dependency']);
    unset($form['alter']['help']['#process']);
    $form['#pre_render'][] = 'views_add_after_nth_rows_pre_render_move_text';

  }

  /**
   * Render this field as altered text, from a fieldset set by the user.
   */
  function render_altered($alter, $tokens) {
    // Filter this right away as our substitutions are already sanitized.
    $value = filter_xss_admin($alter['text']);
    $value = strtr($value, $tokens);
    $return = NULL;
    if ((int) ($this->view->row_index + 1) % (int) $this->options['nthrow'] === 0) {
      $return = $value;
    }
    return $return;
  }

  /**
   * {@inheritdoc}
   */
  function label() {
    if ((int) ($this->view->row_index + 1) % (int) $this->options['nthrow'] === 0) {
      return $this->options['label'];
    }
    return '';
  }

}

/**
 * Prerender function to move the textarea to the top.
 */
function views_add_after_nth_rows_pre_render_move_text($form) {
  $form['text'] = $form['alter']['text'];
  $form['help'] = $form['alter']['help'];
  unset($form['alter']['text']);
  unset($form['alter']['help']);

  return $form;
}
