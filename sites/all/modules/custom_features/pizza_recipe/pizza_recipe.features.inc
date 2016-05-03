<?php
/**
 * @file
 * pizza_recipe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pizza_recipe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pizza_recipe_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('The latest pizza news.'),
      'has_title' => '1',
      'title_label' => t('Article Title'),
      'help' => '',
    ),
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Add a Recipe'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tips_and_tricks' => array(
      'name' => t('Tips and Tricks'),
      'base' => 'node_content',
      'description' => t('Tips and Tricks for cooking pizza.'),
      'has_title' => '1',
      'title_label' => t('Tip TItle'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
