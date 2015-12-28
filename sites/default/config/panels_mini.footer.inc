<?php
/**
 * @file
 * panels_mini.footer.inc
 */

$api = '2.0.0';

$data = $mini = new stdClass();
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
$display->content = array();
$display->panels = array();
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
    'body' => '<!-- UserVoice JavaScript SDK (only needed once on a page) -->
<script>(function(){var uv=document.createElement(\'script\');uv.type=\'text/javascript\';uv.async=true;uv.src=\'//widget.uservoice.com/btzCsfQb3IDIw5ApZEIYw.js\';var s=document.getElementsByTagName(\'script\')[0];s.parentNode.insertBefore(uv,s)})()</script>
<div class="row">
<div class="col-md-4">
  <div class="panel panel-default">
    <div class="panel-heading">
      <h3 class="panel-title">Site</h3>
    </div>
    <div class="panel-body">
        <ul class="menu nav">
            <li class="leaf">
                <a href="/about">About</a>
            </li>
            <li class="leaf">
                <a href="/site-news">News</a>
            </li>
            <li class="leaf">
                <a href="/privacy">Privacy</a>
            </li>
            <li class="leaf">
                <a href="/terms">Terms</a>
            </li>
            <li class="leaf">
                <a href="/copyright">Copyright</a>
            </li>
            <li class="leaf">
                <a href="javascript:void(0)" data-uv-lightbox="classic_widget" data-uv-mode="full" data-uv-primary-color="#cc6d00" data-uv-link-color="#007dbf" data-uv-default-mode="support" data-uv-forum-id="280893">Feedback &amp; Support</a>
            </li>
        </ul>
    </div>
  </div>
</div>

<div class="col-md-4">
  <div class="panel panel-default">
    <div class="panel-heading">
      <h3 class="panel-title">Social</h3>
    </div>
    <div class="panel-body">
        <ul class="menu nav">
            <li class="leaf">
                <a href="https://www.facebook.com/iToysoldiers">Facebook</a>
            </li>
            <li class="leaf">
                <a href="https://twitter.com/iToysoldiers">Twitter</a>
            </li>
            <li class="leaf">
                <a href="/newsletters">Newsletters</a>
            </li>
        </ul>
    </div>
  </div>
</div>

<div class="col-md-4">
  <div class="panel panel-default">
    <div class="panel-heading">
      <h3 class="panel-title">Extras</h3>
    </div>
    <div class="panel-body">
        <ul class="menu nav">
            <li class="leaf">
                <a href="/invite">Invite a friend</a>
            </li>
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
</div>',
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
    'css_class' => 'row',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '61d9b7cf-3eae-4411-ba39-efeb091663e2';
  $display->content['new-61d9b7cf-3eae-4411-ba39-efeb091663e2'] = $pane;
  $display->panels['contentmain'][0] = 'new-61d9b7cf-3eae-4411-ba39-efeb091663e2';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$mini->display = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'panels_mini',
);
