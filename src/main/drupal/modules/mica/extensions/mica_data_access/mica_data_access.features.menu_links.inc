<?php
/**
 * @file
 * mica_data_access.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mica_data_access_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Data Access',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '35',
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '40',
  );
  // Exported menu link: main-menu:data-access/admin
  $menu_links['main-menu:data-access/admin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data-access/admin',
    'router_path' => 'data-access/admin',
    'link_title' => 'Data Access Administration',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'node/1',
  );
  // Exported menu link: main-menu:data-access/approved
  $menu_links['main-menu:data-access/approved'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data-access/approved',
    'router_path' => 'data-access/approved',
    'link_title' => 'DACO Approved Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/2',
  );
  // Exported menu link: main-menu:data-access/committee
  $menu_links['main-menu:data-access/committee'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data-access/committee',
    'router_path' => 'data-access/committee',
    'link_title' => 'Data Access Committee',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => 'node/1',
  );
  // Exported menu link: main-menu:data-access/request
  $menu_links['main-menu:data-access/request'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data-access/request',
    'router_path' => 'data-access/request',
    'link_title' => 'Data Access Request',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-30',
    'parent_path' => 'node/1',
  );
  // Exported menu link: main-menu:node/4
  $menu_links['main-menu:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Data Access Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('DACO Approved Projects');
  t('Data Access Administration');
  t('Data Access Committee');
  t('Data Access Request');
  t('Data Access Policy');
  t('Data Access');


  return $menu_links;
}