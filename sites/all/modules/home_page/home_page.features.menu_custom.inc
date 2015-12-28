<?php
/**
 * @file
 * home_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function home_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-itoysoldiers.
  $menus['menu-about-itoysoldiers'] = array(
    'menu_name' => 'menu-about-itoysoldiers',
    'title' => 'About iToysoldiers',
    'description' => '',
  );
  // Exported menu: menu-contact-us.
  $menus['menu-contact-us'] = array(
    'menu_name' => 'menu-contact-us',
    'title' => 'Contact Us',
    'description' => '',
  );
  // Exported menu: menu-itoysoldiers-elsewhere.
  $menus['menu-itoysoldiers-elsewhere'] = array(
    'menu_name' => 'menu-itoysoldiers-elsewhere',
    'title' => 'iToysoldiers Elsewhere',
    'description' => '',
  );
  // Exported menu: menu-legal.
  $menus['menu-legal'] = array(
    'menu_name' => 'menu-legal',
    'title' => 'Legal',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About iToysoldiers');
  t('Contact Us');
  t('Legal');
  t('iToysoldiers Elsewhere');


  return $menus;
}
