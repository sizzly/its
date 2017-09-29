<?php
/**
 * @file
 * Theming functions for vtiger_webform.
 */

/**
 * Theme vtiger_webform_mapping_form.
 */
function theme_vtiger_crm_webform_mapping_form($variables) {
  $form = $variables['form'];

  if (isset($form['mappings'])) {
    $rows = array();
    foreach (element_children($form['mappings']) as $cid) {
      $rows[] = array(
        'data' => array(
          drupal_render($form['mappings'][$cid]['component']),
          drupal_render($form['mappings'][$cid]['vtiger_field']),
        ),
      );
      unset($form['mappings'][$cid]);
    }
    $header = array(t('Webform component'), t('Vtiger field'));

    $html_table = theme('table', array('header' => $header, 'rows' => $rows));

    $form['mappings']['mapping_table'] = array(
      '#prefix' => '<div id="mapping-table" style="max-width:65em;margin-top:1em;">',
      '#suffix' => '</div>',
      '#markup' => $html_table,
      '#weight' => '3',
    );
  }

  return drupal_render_children($form);
}
