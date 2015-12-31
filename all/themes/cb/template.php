<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Implements hook_preprocess_block().
 */
function cb_preprocess_page(&$variables) {
  if ( isset($variables['node']) && $variables['node']->type == 'drinks') {
    unset($variables['page']['content']);
  }
  $variables['page']['content']['system_main']['default_message'] = array();
  
}
