<?php
/**
 * @file
 * first_deployment.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function first_deployment_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'do_you_know_';
  $bean_type->label = 'Do you know?';
  $bean_type->options = '';
  $bean_type->description = 'Do you know?';
  $export['do_you_know_'] = $bean_type;

  return $export;
}
