<?php
/**
 * @file
 * news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function news_node_info() {
  $items = array(
    'news_item' => array(
      'name' => t('News Item'),
      'base' => 'node_content',
      'description' => t('This is a newsworthy item that will show on your front page.'),
      'has_title' => '1',
      'title_label' => t('News Topic'),
      'help' => t('If you have published selected above this item will appear on the front page within 5 minutes.'),
    ),
  );
  return $items;
}
