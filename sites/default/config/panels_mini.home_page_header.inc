<?php
/**
 * @file
 * panels_mini.home_page_header.inc
 */

$api = '2.0.0';

$data = $mini = new stdClass();
$mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
$mini->api_version = 1;
$mini->name = 'home_page_header';
$mini->category = 'Home';
$mini->admin_title = 'Home Page Header';
$mini->admin_description = '';
$mini->requiredcontexts = array();
$mini->contexts = array();
$mini->relationships = array();
$display = new panels_display();
$display->layout = 'bootopoly_whelan';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'header' => NULL,
    'column1' => NULL,
    'column2' => NULL,
    'column3' => NULL,
    'contentmain' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'c040e223-a7eb-4cad-aeaf-2ba8ecc93298';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cae887a0-5fb1-4daf-957e-1ea1915f295c';
  $pane->panel = 'column1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'iTS Logo',
    'title' => '',
    'body' => '<div align="center">
<img src="/sites/default/files/default_images/itslogo.jpg" title="iToysoldiers" alt="iToysoldiers Logo">
</div>',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cae887a0-5fb1-4daf-957e-1ea1915f295c';
  $display->content['new-cae887a0-5fb1-4daf-957e-1ea1915f295c'] = $pane;
  $display->panels['column1'][0] = 'new-cae887a0-5fb1-4daf-957e-1ea1915f295c';
  $pane = new stdClass();
  $pane->pid = 'new-58ff1d5c-e5ef-4963-a4cf-e6a10baa9585';
  $pane->panel = 'column2';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Profile Button',
    'title' => '',
    'body' => '<?php 
   if (!user_is_logged_in()) {
      print \'<div align="center" style="margin-top: 69px;"><a href="http://itoysoldiers.com/user/register" class="btn btn-primary btn-lg">Start your profile</a></div>\';
   }  else {
      print \'<div align="center" style="margin-top: 69px;"><a href="http://itoysoldiers.com/dashboard" class="btn btn-primary btn-lg">Your Dashboard</a></div>\';
   }   
?>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '58ff1d5c-e5ef-4963-a4cf-e6a10baa9585';
  $display->content['new-58ff1d5c-e5ef-4963-a4cf-e6a10baa9585'] = $pane;
  $display->panels['column2'][0] = 'new-58ff1d5c-e5ef-4963-a4cf-e6a10baa9585';
  $pane = new stdClass();
  $pane->pid = 'new-e0bb250b-2d37-4505-b450-c1c991984477';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h1 class="text-center">Chronicle the glory of your toy soldiers</h1>

<h4 class="text-center">iToysoldiers.com is a website all about showing off your miniature wargaming exploits. Tell the story of your army for the world to see.</h4>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e0bb250b-2d37-4505-b450-c1c991984477';
  $display->content['new-e0bb250b-2d37-4505-b450-c1c991984477'] = $pane;
  $display->panels['contentmain'][0] = 'new-e0bb250b-2d37-4505-b450-c1c991984477';
  $pane = new stdClass();
  $pane->pid = 'new-eeeb2e3e-d123-4ce0-b895-8c79cd5fbe06';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eeeb2e3e-d123-4ce0-b895-8c79cd5fbe06';
  $display->content['new-eeeb2e3e-d123-4ce0-b895-8c79cd5fbe06'] = $pane;
  $display->panels['contentmain'][1] = 'new-eeeb2e3e-d123-4ce0-b895-8c79cd5fbe06';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-e0bb250b-2d37-4505-b450-c1c991984477';
$mini->display = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'panels_mini',
);
