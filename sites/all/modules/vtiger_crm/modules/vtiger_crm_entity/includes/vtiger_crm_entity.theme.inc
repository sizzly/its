<?php

/**
 * @file
 * Theming functions for Vtiger entity.
 */

/**
 * Theming function for entity_create_new_mapping_form().
 */
function theme_vtiger_crm_entity_mapping_form($variables) {
  $form = $variables['form'];
  // Renders all elements of a form.
  if ($form) {
    if (!empty($form['field_mapping']['table'])) {
      $rows = array();
      foreach (element_children($form['field_mapping']['table']) as $row_number => $row) {
        $rows[] = array(
          'data' => array(
            drupal_render($form['field_mapping']['table'][$row_number]['drupal_entity_field']),
            drupal_render($form['field_mapping']['table'][$row_number]['vtiger_entity_field']),
          ),
        );
        unset($form['field_mapping'][$row_number]);
      }
      $header = array(
        t('Entity source field or property'),
        t('vTyger type field')
      );

      $html_table = theme('table', array(
        'header' => $header,
        'rows' => $rows,
        'attributes' => array('id' => 'vtiger-entity-new-mappings')
      ));

      $form['field_mapping']['vtiger_table'] = array(
        '#prefix' => '<div id="mapping-table" style="max-width:60em;margin-top:1em;">',
        '#suffix' => '</div>',
        '#markup' => $html_table,
        '#weight' => '3',
      );
    }

    return drupal_render_children($form);
  }
}
