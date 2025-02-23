<?php
/**
 * @file
 * chancellor_in_the_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function chancellor_in_the_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function chancellor_in_the_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function chancellor_in_the_news_node_info() {
  $items = array(
    'in_the_news' => array(
      'name' => t('In the News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
