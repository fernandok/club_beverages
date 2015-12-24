<?php
/**
 * @file
 * first_deployment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function first_deployment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}

/**
 * Implements hook_views_api().
 */
function first_deployment_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function first_deployment_image_default_styles() {
  $styles = array();

  // Exported image style: banner_image.
  $styles['banner_image'] = array(
    'label' => 'Banner Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function first_deployment_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('Banner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drinks' => array(
      'name' => t('Drinks'),
      'base' => 'node_content',
      'description' => t('Any kind of drinks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
