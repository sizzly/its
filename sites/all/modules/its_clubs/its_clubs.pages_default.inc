<?php
/**
 * @file
 * its_clubs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_clubs_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Club Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'user',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'OG membership from a group node and user',
        'keyword' => 'og_membership',
        'name' => 'og_membership_from_group_and_user',
        'context' => array(
          0 => 'argument_entity_id:node_1',
          1 => 'context_user_1',
        ),
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gaming_club' => 'gaming_club',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Community
Gaming Clubs',
    'panels_breadcrumbs_paths' => 'community
community/gaming-clubs',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'center' => NULL,
      'data_sheet' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '438a141f-ddf4-4375-905f-2468c61dce38';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-88bae05f-17fa-471c-9e5f-0d7759755a14';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Brief',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '88bae05f-17fa-471c-9e5f-0d7759755a14';
    $display->content['new-88bae05f-17fa-471c-9e5f-0d7759755a14'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-88bae05f-17fa-471c-9e5f-0d7759755a14';
    $pane = new stdClass();
    $pane->pid = 'new-cdf4fbd6-4b88-410f-9554-71db6fec4329';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cdf4fbd6-4b88-410f-9554-71db6fec4329';
    $display->content['new-cdf4fbd6-4b88-410f-9554-71db6fec4329'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-cdf4fbd6-4b88-410f-9554-71db6fec4329';
    $pane = new stdClass();
    $pane->pid = 'new-a249de3b-2d1c-4dbd-8119-24e07e1bfae9';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Create Club Content',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a249de3b-2d1c-4dbd-8119-24e07e1bfae9';
    $display->content['new-a249de3b-2d1c-4dbd-8119-24e07e1bfae9'] = $pane;
    $display->panels['contentmainbottom'][2] = 'new-a249de3b-2d1c-4dbd-8119-24e07e1bfae9';
    $pane = new stdClass();
    $pane->pid = 'new-cf99224e-0ea8-451b-a8b9-80a3117ac63a';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cf99224e-0ea8-451b-a8b9-80a3117ac63a';
    $display->content['new-cf99224e-0ea8-451b-a8b9-80a3117ac63a'] = $pane;
    $display->panels['contentmainbottom'][3] = 'new-cf99224e-0ea8-451b-a8b9-80a3117ac63a';
    $pane = new stdClass();
    $pane->pid = 'new-224ba628-5d74-43fc-9fb4-9f3163f93b4d';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '224ba628-5d74-43fc-9fb4-9f3163f93b4d';
    $display->content['new-224ba628-5d74-43fc-9fb4-9f3163f93b4d'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-224ba628-5d74-43fc-9fb4-9f3163f93b4d';
    $pane = new stdClass();
    $pane->pid = 'new-f8b5240e-b979-4ea1-8f97-c9c8b3d39441';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f8b5240e-b979-4ea1-8f97-c9c8b3d39441';
    $display->content['new-f8b5240e-b979-4ea1-8f97-c9c8b3d39441'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-f8b5240e-b979-4ea1-8f97-c9c8b3d39441';
    $pane = new stdClass();
    $pane->pid = 'new-cd77a373-26ff-4f72-9466-bf4be29c5a00';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd77a373-26ff-4f72-9466-bf4be29c5a00';
    $display->content['new-cd77a373-26ff-4f72-9466-bf4be29c5a00'] = $pane;
    $display->panels['contentmainright'][0] = 'new-cd77a373-26ff-4f72-9466-bf4be29c5a00';
    $pane = new stdClass();
    $pane->pid = 'new-78092f64-d922-48ca-9ce5-a254911d3150';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78092f64-d922-48ca-9ce5-a254911d3150';
    $display->content['new-78092f64-d922-48ca-9ce5-a254911d3150'] = $pane;
    $display->panels['contentmainright'][1] = 'new-78092f64-d922-48ca-9ce5-a254911d3150';
    $pane = new stdClass();
    $pane->pid = 'new-27923dbc-91c5-4b64-ae14-08b6b1547e3c';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'group_all_distinction-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '27923dbc-91c5-4b64-ae14-08b6b1547e3c';
    $display->content['new-27923dbc-91c5-4b64-ae14-08b6b1547e3c'] = $pane;
    $display->panels['contentmainright'][2] = 'new-27923dbc-91c5-4b64-ae14-08b6b1547e3c';
    $pane = new stdClass();
    $pane->pid = 'new-deae1234-d5e3-4412-80b5-6a59e478b4a0';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Shortcuts',
      'title' => '',
      'body' => '<div class="grey-container shortcut-wrapper">
  <a href="#tools" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-cog" aria-hidden="true"></span>
    </span>
    <span class="text">Tools</span>
  </a>
  <a href="#officers" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-star" aria-hidden="true"></span>
    </span>
    <span class="text">Officers</span>
  </a>
  <a href="#forum" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
    </span>
    <span class="text">Forums</span>
  </a>
  <a href="#news" class="shortcut-link">
    <span class="shortcut-icon">
      <span class="glyphicon glyphicon-bullhorn" aria-hidden="true"></span>
    </span>
    <span class="text">News</span>
  </a>
</div>
',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'deae1234-d5e3-4412-80b5-6a59e478b4a0';
    $display->content['new-deae1234-d5e3-4412-80b5-6a59e478b4a0'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-deae1234-d5e3-4412-80b5-6a59e478b4a0';
    $pane = new stdClass();
    $pane->pid = 'new-5e2ef21c-95fe-47b7-b597-ecc128aeb153';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_forums-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5e2ef21c-95fe-47b7-b597-ecc128aeb153';
    $display->content['new-5e2ef21c-95fe-47b7-b597-ecc128aeb153'] = $pane;
    $display->panels['footer'][0] = 'new-5e2ef21c-95fe-47b7-b597-ecc128aeb153';
    $pane = new stdClass();
    $pane->pid = 'new-948e6aee-b4d8-4747-9057-a7ec0e4e2a07';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_nodes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '948e6aee-b4d8-4747-9057-a7ec0e4e2a07';
    $display->content['new-948e6aee-b4d8-4747-9057-a7ec0e4e2a07'] = $pane;
    $display->panels['footer'][1] = 'new-948e6aee-b4d8-4747-9057-a7ec0e4e2a07';
    $pane = new stdClass();
    $pane->pid = 'new-c719b0e7-e158-467f-a140-fa827e3b1643';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'club_page_layout-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c719b0e7-e158-467f-a140-fa827e3b1643';
    $display->content['new-c719b0e7-e158-467f-a140-fa827e3b1643'] = $pane;
    $display->panels['sidebar'][0] = 'new-c719b0e7-e158-467f-a140-fa827e3b1643';
    $pane = new stdClass();
    $pane->pid = 'new-14e15da5-1f15-42a3-9324-0fe9440191d6';
    $pane->panel = 'sidebar';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'current',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-sm',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '14e15da5-1f15-42a3-9324-0fe9440191d6';
    $display->content['new-14e15da5-1f15-42a3-9324-0fe9440191d6'] = $pane;
    $display->panels['sidebar'][1] = 'new-14e15da5-1f15-42a3-9324-0fe9440191d6';
    $pane = new stdClass();
    $pane->pid = 'new-254af14c-779d-4bc0-b4a6-97a48bff4ed4';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '254af14c-779d-4bc0-b4a6-97a48bff4ed4';
    $display->content['new-254af14c-779d-4bc0-b4a6-97a48bff4ed4'] = $pane;
    $display->panels['sidebar'][2] = 'new-254af14c-779d-4bc0-b4a6-97a48bff4ed4';
    $pane = new stdClass();
    $pane->pid = 'new-5540a69e-bcd6-4122-9f20-a5ae59472605';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'side_advert_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5540a69e-bcd6-4122-9f20-a5ae59472605';
    $display->content['new-5540a69e-bcd6-4122-9f20-a5ae59472605'] = $pane;
    $display->panels['sidebar'][3] = 'new-5540a69e-bcd6-4122-9f20-a5ae59472605';
    $pane = new stdClass();
    $pane->pid = 'new-91f3139b-7974-4f39-8e2b-ebd3e65e57ff';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-primary',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '91f3139b-7974-4f39-8e2b-ebd3e65e57ff';
    $display->content['new-91f3139b-7974-4f39-8e2b-ebd3e65e57ff'] = $pane;
    $display->panels['sidebar'][4] = 'new-91f3139b-7974-4f39-8e2b-ebd3e65e57ff';
    $pane = new stdClass();
    $pane->pid = 'new-a55a76b0-47d4-4782-b519-61dfa9b73af4';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Advert 2',
      'title' => '',
      'body' => '<!--/* Revive Adserver Javascript Tag v3.0.5 */-->

<script type=\'text/javascript\'><!--//<![CDATA[
   var m3_u = (location.protocol==\'https:\'?\'https://ads.robtacey.com/www/delivery/ajs.php\':\'http://ads.robtacey.com/www/delivery/ajs.php\');
   var m3_r = Math.floor(Math.random()*99999999999);
   if (!document.MAX_used) document.MAX_used = \',\';
   document.write ("<scr"+"ipt type=\'text/javascript\' src=\'"+m3_u);
   document.write ("?zoneid=23&amp;block=1");
   document.write (\'&amp;cb=\' + m3_r);
   if (document.MAX_used != \',\') document.write ("&amp;exclude=" + document.MAX_used);
   document.write (document.charset ? \'&amp;charset=\'+document.charset : (document.characterSet ? \'&amp;charset=\'+document.characterSet : \'\'));
   document.write ("&amp;loc=" + escape(window.location));
   if (document.referrer) document.write ("&amp;referer=" + escape(document.referrer));
   if (document.context) document.write ("&context=" + escape(document.context));
   if (document.mmm_fo) document.write ("&amp;mmm_fo=1");
   document.write ("\'><\\/scr"+"ipt>");
//]]>--></script><noscript><a href=\'http://ads.robtacey.com/www/delivery/ck.php?n=ae28cdae&amp;cb=INSERT_RANDOM_NUMBER_HERE\' target=\'_blank\'><img src=\'http://ads.robtacey.com/www/delivery/avw.php?zoneid=23&amp;cb=6541832518565156514&amp;n=ae28cdae\' border=\'0\' alt=\'\' /></a></noscript>
',
      'format' => 'php_code',
      'substitute' => 0,
      'name' => 'side_advert_2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a55a76b0-47d4-4782-b519-61dfa9b73af4';
    $display->content['new-a55a76b0-47d4-4782-b519-61dfa9b73af4'] = $pane;
    $display->panels['sidebar'][5] = 'new-a55a76b0-47d4-4782-b519-61dfa9b73af4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_13'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_clubs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gaming_clubs_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Gaming clubs landing page';
  $page->admin_description = '';
  $page->path = 'community/gaming-clubs';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Gaming Clubs',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gaming_clubs_landing_page__panel_context_379a715b-45c4-414e-b3e8-7637123ce562';
  $handler->task = 'page';
  $handler->subtask = 'gaming_clubs_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Gaming Clubs',
        ),
        'robots' => array(
          'value' => array(
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '1df8c7b8-683e-426b-8471-9c9ca9617b6d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-525f11d1-b639-4512-a53d-e33d6791b2da';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'groups_all_lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '525f11d1-b639-4512-a53d-e33d6791b2da';
    $display->content['new-525f11d1-b639-4512-a53d-e33d6791b2da'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-525f11d1-b639-4512-a53d-e33d6791b2da';
    $pane = new stdClass();
    $pane->pid = 'new-658790ff-4a58-4d4a-8d95-5b1e01dbceac';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Club Nav Bar',
      'title' => '',
      'body' => '<nav class="navbar navbar-default">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">Gaming Clubs</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/community/gaming-clubs/list">All Clubs</a></li>
        <li><a href="/node/add/gaming-club">Register Club</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>',
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
    $pane->uuid = '658790ff-4a58-4d4a-8d95-5b1e01dbceac';
    $display->content['new-658790ff-4a58-4d4a-8d95-5b1e01dbceac'] = $pane;
    $display->panels['header'][0] = 'new-658790ff-4a58-4d4a-8d95-5b1e01dbceac';
    $pane = new stdClass();
    $pane->pid = 'new-ebc0b5fc-d270-4b38-8cc9-2d3015a11624';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Gaming Clubs</h1>
<h3>Show off your club</h3>
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
    $pane->uuid = 'ebc0b5fc-d270-4b38-8cc9-2d3015a11624';
    $display->content['new-ebc0b5fc-d270-4b38-8cc9-2d3015a11624'] = $pane;
    $display->panels['header'][1] = 'new-ebc0b5fc-d270-4b38-8cc9-2d3015a11624';
    $pane = new stdClass();
    $pane->pid = 'new-13333c8c-5171-4959-8ed0-293dcce470b2';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Gaming Club Intro',
      'title' => 'Represent Your Club on iToysoldiers',
      'body' => '<p>Miniature war gaming is a pretty social hobby. We gather together to inflict massive casualties on our model armies and gaming clubs are a pretty important part of the whole dynamic. Whether they’re independent or tied to a local gaming store, our gaming clubs bring players together, work out the details of the venues, arrange events, and all sorts of sundry things to ensure we can all play our games.</p>

<p>So with that in mind, I thought it was important to represent gaming clubs on iToysoldiers. The idea here is to help gaming clubs promote their activities, find new members, and communicate with their existing crew. Put your gaming club on iToysoldiers and become a club of distinction.</p>
',
      'format' => 'filtered_html',
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
    $pane->uuid = '13333c8c-5171-4959-8ed0-293dcce470b2';
    $display->content['new-13333c8c-5171-4959-8ed0-293dcce470b2'] = $pane;
    $display->panels['sidebar'][0] = 'new-13333c8c-5171-4959-8ed0-293dcce470b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gaming_clubs_landing_page'] = $page;

  return $pages;

}
