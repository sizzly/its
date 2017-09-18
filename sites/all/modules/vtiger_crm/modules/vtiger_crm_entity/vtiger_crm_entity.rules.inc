<?php
/**
 * @file
 * Provides an action for sending entites to Vtiger CRM.
 */

module_load_include('inc', 'vtiger_crm', 'includes/vtiger_crm.options');
module_load_include('inc', 'vtiger_crm_entity', 'includes/vtiger_crm_entity');

/**
 * Implements hook_rules_action_info().
 */
function vtiger_crm_entity_rules_action_info() {
  return array(
    'vtiger_crm_entity_send_to_vtiger_action' => array(
      'label' => t('Send Drupal entity to Vtiger CRM'),
      'parameter' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('The entity to be transferred to Vtiger.'),
        ),
        'vtiger_module' => array(
          'type' => 'text',
          'label' => t('Vtiger module'),
          'options list' => 'vtiger_crm_get_vtiger_modules_options',
          'description' => t('Select a Vtiger module to transfer to.'),
          'default value' => 'Leads',
        ),
      ),
      'group' => t('Vtiger CRM actions'),
      'callbacks' => array(
        'validate' => 'vtiger_crm_entity_actions_validate',
      ),
    ),
  );
}

/**
 * Validate callback: make sure that module is selected correctly.
 */
function vtiger_crm_entity_actions_validate($action) {
  $module = $action->settings['vtiger_module'];
  $vtiger_modules = vtiger_crm_get_vtiger_modules_options();
  if (!in_array($module, $vtiger_modules)) {
    form_set_error('', t('Vtiger module %module does not exist. Select a valid
      module from the list given in the description.',
      array('%module' => $module)));
  }
}

/**
 * Rules action callback: transfer entity to Vtiger.
 */
function vtiger_crm_entity_send_to_vtiger_action($entity, $vtiger_module) {
  $entity_type = $entity->type();
  $entity_data = $entity->value();
  vtiger_crm_entity_send_to_vtiger($entity_type, $entity_data, $vtiger_module);
}
