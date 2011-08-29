<?php
/**
 * @file
 * mica_projects.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mica_projects_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function mica_projects_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mica_projects_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'mica_projects',
      'description' => t('Research activities with a specific scientific question or target'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'teleconference' => array(
      'name' => t('Teleconference'),
      'base' => 'mica_projects',
      'description' => t('Teleconference event and details'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}