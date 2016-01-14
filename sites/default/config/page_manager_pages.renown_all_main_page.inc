<?php
/**
 * @file
 * page_manager_pages.renown_all_main_page.inc
 */

$api = '2.0.0';

$data = $page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'renown_all_main_page';
$page->task = 'page';
$page->admin_title = 'Decorations: All: Main Page';
$page->admin_description = '';
$page->path = 'wargaming-decorations/main';
$page->access = array();
$page->menu = array(
  'type' => 'default tab',
  'title' => 'Main',
  'name' => 'navigation',
  'weight' => '-50',
  'parent' => array(
    'type' => 'normal',
    'title' => 'Decorations',
    'name' => 'main-menu',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);


$dependencies = array(
  'page_manager_handlers.page_renown_all_main_page_panel_context' => 'page_manager_handlers.page_renown_all_main_page_panel_context',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
