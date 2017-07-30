<?php
/**
 * @file
 * home_page.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function home_page_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'Layout';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
  $display->uuid = '8413aab9-1d0b-42b3-b6ac-83a4826d0a92';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-83aa1228-39af-41f0-9fcf-eb46983faa1f';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => '<front>',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Revive Leaderboard',
    'title' => '',
    'body' => '<div class="ad text-center">
<ins data-revive-zoneid="1" data-revive-id="4f7dfffe8e8e5dcd2cbcc3bb4563f765"></ins>
<script async src="//ads.itoysoldiers.com/www/delivery/asyncjs.php"></script>
</div>
<div class="seperator"></div>',
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
  $pane->uuid = '83aa1228-39af-41f0-9fcf-eb46983faa1f';
  $display->content['new-83aa1228-39af-41f0-9fcf-eb46983faa1f'] = $pane;
  $display->panels['contentmain'][0] = 'new-83aa1228-39af-41f0-9fcf-eb46983faa1f';
  $pane = new stdClass();
  $pane->pid = 'new-a20395dd-4f08-4d5d-a733-295cd1a9b3c1';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Footer Advert',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '        <!-- /254567099/footer_advert -->
        <div id=\'div-gpt-ad-1500913228612-0\' class="text-center">
            <script>
                googletag.cmd.push(function () {
                    googletag.display(\'div-gpt-ad-1500913228612-0\');
                });
            </script>
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a20395dd-4f08-4d5d-a733-295cd1a9b3c1';
  $display->content['new-a20395dd-4f08-4d5d-a733-295cd1a9b3c1'] = $pane;
  $display->panels['contentmain'][1] = 'new-a20395dd-4f08-4d5d-a733-295cd1a9b3c1';
  $pane = new stdClass();
  $pane->pid = 'new-61d9b7cf-3eae-4411-ba39-efeb091663e2';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Menus',
    'title' => '',
    'body' => '<div class="row">
    <div class="col-sm-6">

    </div>
    <div class="col-sm-6">
        <div class="pull-right">
            <a href="https://facebook.com/itoysoldiers" class="social-connect tooltip-test facebook-hover pull-left m-right-xs" data-toggle="tooltip" data-original-title="Facebook"><i class="fa fa-facebook fa-2x"></i></a>
            <a href="https://twitter.com/itoysoldiers" class="social-connect tooltip-test twitter-hover pull-left m-right-xs" data-toggle="tooltip" data-original-title="Twitter"><i class="fa fa-twitter fa-2x"></i></a>
            <a href="https://www.instagram.com/itoysoldiers/" class="social-connect tooltip-test twitter-hover pull-left m-right-xs" data-toggle="tooltip" data-original-title="Instagram"><i class="fa fa-instagram fa-2x"></i></a>
        </div> 
    </div>
</div>
<div class="row">
    <div class="col-md-4">
        <div class="panel panel-default">
            <div class="panel-heading">
                <h3 class="panel-title">iToysoldiers</h3>
            </div>
            <div>
                <ul class="menu nav">
                    <li class="leaf">
                        <a href="/about">About</a>
                    </li>
                    <li class="leaf">
                        <a href="http://blog.itoysoldiers.com">Blog</a>
                    </li>
                    <li class="leaf">
                        <a href="http://help.itoysoldiers.com">Need Help?</a>
                    </li>
                </ul>
            </div>
        </div>
    </div>
    <div class="col-md-4">
        <div class="panel panel-default">
            <div class="panel-heading">
                <h3 class="panel-title">Tools</h3>
            </div>
            <div>
                <ul class="menu nav">
                    <li class="leaf">
                        <a href="/request-new-game-support">Request New Game</a>
                    </li>
                    <li class="leaf">
                        <a href="/syndicate-your-blog-itoysoldiers">Syndicate Your Blog</a>
                    </li>
                    <li class="leaf">
                        <a href="/widgets">Widgets</a>
                    </li>
                </ul>
            </div>
        </div>
    </div>
    <div class="col-md-4">
        <div class="panel panel-default">
            <div class="panel-heading">
                <h3 class="panel-title">Policies</h3>
            </div>
            <div>
                <ul class="menu nav">
                    <li class="leaf">
                        <a href="/privacy">Privacy</a>
                    </li>
                    <li class="leaf">
                        <a href="/terms">Terms</a>
                    </li>
                    <li class="leaf">
                        <a href="/copyright">Copyright</a>
                    </li>
                </ul>
            </div>
        </div>
    </div>
</div>
',
    'format' => 'pure_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '61d9b7cf-3eae-4411-ba39-efeb091663e2';
  $display->content['new-61d9b7cf-3eae-4411-ba39-efeb091663e2'] = $pane;
  $display->panels['contentmain'][2] = 'new-61d9b7cf-3eae-4411-ba39-efeb091663e2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
