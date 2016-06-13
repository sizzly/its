<?php
/**
 * @file
 * its_army_profiles.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_army_profiles_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_1491016e-94ad-4d05-a866-7e0a06c37b66';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -11;
  $handler->conf = array(
    'title' => 'Army Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'army_profile' => 'army_profile',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Order of Battle
Army Profiles',
    'panels_breadcrumbs_paths' => 'order-of-battle
order-of-battle/player-armies',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ff95339b-b6d4-4eb1-9dd2-8a2f628f098c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-76cba8d6-0287-43e4-93ce-97a029f2bb48';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'text-center thumbnail',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '76cba8d6-0287-43e4-93ce-97a029f2bb48';
    $display->content['new-76cba8d6-0287-43e4-93ce-97a029f2bb48'] = $pane;
    $display->panels['contentmain'][0] = 'new-76cba8d6-0287-43e4-93ce-97a029f2bb48';
    $pane = new stdClass();
    $pane->pid = 'new-45cbf04f-4fea-486b-b3fc-4fbffa752cd6';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '45cbf04f-4fea-486b-b3fc-4fbffa752cd6';
    $display->content['new-45cbf04f-4fea-486b-b3fc-4fbffa752cd6'] = $pane;
    $display->panels['contentmain'][1] = 'new-45cbf04f-4fea-486b-b3fc-4fbffa752cd6';
    $pane = new stdClass();
    $pane->pid = 'new-fbec5258-b172-455f-9fc8-1a3ec1c5c6bd';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profile_all_page_layout-panel_pane_1';
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
    $pane->uuid = 'fbec5258-b172-455f-9fc8-1a3ec1c5c6bd';
    $display->content['new-fbec5258-b172-455f-9fc8-1a3ec1c5c6bd'] = $pane;
    $display->panels['contentmain'][2] = 'new-fbec5258-b172-455f-9fc8-1a3ec1c5c6bd';
    $pane = new stdClass();
    $pane->pid = 'new-54d2946f-cd0e-4eb5-84c9-3bbcef38fcdf';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_3';
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
    $pane->uuid = '54d2946f-cd0e-4eb5-84c9-3bbcef38fcdf';
    $display->content['new-54d2946f-cd0e-4eb5-84c9-3bbcef38fcdf'] = $pane;
    $display->panels['contentmain'][3] = 'new-54d2946f-cd0e-4eb5-84c9-3bbcef38fcdf';
    $pane = new stdClass();
    $pane->pid = 'new-1c212b6b-4598-4082-adf6-9ee207feea2b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_army_profile_elements';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1c212b6b-4598-4082-adf6-9ee207feea2b';
    $display->content['new-1c212b6b-4598-4082-adf6-9ee207feea2b'] = $pane;
    $display->panels['contentmain'][4] = 'new-1c212b6b-4598-4082-adf6-9ee207feea2b';
    $pane = new stdClass();
    $pane->pid = 'new-e9ad6263-7ee4-49cf-9281-748c95ce4416';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_layout-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e9ad6263-7ee4-49cf-9281-748c95ce4416';
    $display->content['new-e9ad6263-7ee4-49cf-9281-748c95ce4416'] = $pane;
    $display->panels['contentmain'][5] = 'new-e9ad6263-7ee4-49cf-9281-748c95ce4416';
    $pane = new stdClass();
    $pane->pid = 'new-3e6d9368-caca-4f21-91e1-167a7f259f19';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'posts_update_no_battle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3e6d9368-caca-4f21-91e1-167a7f259f19';
    $display->content['new-3e6d9368-caca-4f21-91e1-167a7f259f19'] = $pane;
    $display->panels['contentmain'][6] = 'new-3e6d9368-caca-4f21-91e1-167a7f259f19';
    $pane = new stdClass();
    $pane->pid = 'new-8c7048aa-6f67-4c46-a9b5-d6b3aae4c859';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '8c7048aa-6f67-4c46-a9b5-d6b3aae4c859';
    $display->content['new-8c7048aa-6f67-4c46-a9b5-d6b3aae4c859'] = $pane;
    $display->panels['contentmain'][7] = 'new-8c7048aa-6f67-4c46-a9b5-d6b3aae4c859';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_1491016e-94ad-4d05-a866-7e0a06c37b66'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_army_profiles_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'army_profile_stats';
  $page->task = 'page';
  $page->admin_title = 'Army Profile: Stats';
  $page->admin_description = '';
  $page->path = 'order-of-battle/player-armies/stats';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Stats',
    'name' => 'navigation',
    'weight' => '100',
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
  $handler->name = 'page_army_profile_stats__panel';
  $handler->task = 'page';
  $handler->subtask = 'army_profile_stats';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Army Profile Stats';
  $display->uuid = '5b0a0815-03a0-4e5d-85e4-d15fde182cd2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-25c52ffc-10ee-4bf3-89ae-45bd020eb699';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'coming_soon';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = '25c52ffc-10ee-4bf3-89ae-45bd020eb699';
    $display->content['new-25c52ffc-10ee-4bf3-89ae-45bd020eb699'] = $pane;
    $display->panels['contentmain'][0] = 'new-25c52ffc-10ee-4bf3-89ae-45bd020eb699';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-25c52ffc-10ee-4bf3-89ae-45bd020eb699';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_profile_stats'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'army_profiles_all_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Army Profiles: All: Landing Page';
  $page->admin_description = '';
  $page->path = 'order-of-battle/player-armies/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Main',
    'name' => 'main-menu',
    'weight' => '-50',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Army Profiles',
      'name' => 'main-menu',
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
  $handler->name = 'page_army_profiles_all_landing_page__panel_context_ad9c5832-26a7-4fe2-bb44-90055e8d0ed2';
  $handler->task = 'page';
  $handler->subtask = 'army_profiles_all_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
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
  $display->title = 'Army Profiles';
  $display->uuid = '14d2610f-3116-4319-b083-a325e67da0fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6abe916f-0bd6-4011-b582-a6870b8133e9';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'core_all_node_timeline-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'army_profile',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6abe916f-0bd6-4011-b582-a6870b8133e9';
    $display->content['new-6abe916f-0bd6-4011-b582-a6870b8133e9'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-6abe916f-0bd6-4011-b582-a6870b8133e9';
    $pane = new stdClass();
    $pane->pid = 'new-a53fe8f6-da73-4d02-b4d8-e9efe5b734b9';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Copy : Authenticated',
      'title' => 'Show off your Armies',
      'body' => '<p>Army Profiles at iToysoldiers help you bring your miniature wargaming armies to life. Linking your modeling projects, army write ups, pictures, and battles together to really show off the work you’ve done on all aspects of the hobby.</p>
<ul>
<li>Tell the world what armies you play</li>
<li>Link your modeling projects to the army</li>
<li>Enter the major battles, important units, and other stories about your army.</li>
<li>Show the whole story to the world.</li>
</ul>
<p class="text-center"><a href="/node/add/army-profile" class="btn btn-primary">Get Started with Army Profiles Now</a></p>
',
      'format' => 'pure_html',
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
    $pane->uuid = 'a53fe8f6-da73-4d02-b4d8-e9efe5b734b9';
    $display->content['new-a53fe8f6-da73-4d02-b4d8-e9efe5b734b9'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-a53fe8f6-da73-4d02-b4d8-e9efe5b734b9';
    $pane = new stdClass();
    $pane->pid = 'new-ddec87c7-c2bf-4256-a9f2-127d6c944a40';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Army Profile Copy: Anonymous',
      'title' => 'Show off your armies',
      'body' => '<p>Army Profiles at iToysoldiers help you bring your miniature wargaming armies to life. Linking your modeling projects, army write ups, pictures, and battles together to really show off the work you’ve done on all aspects of the hobby.</p>
<ul>
<li>Tell the world what armies you play</li>
<li>Link your modeling projects to the army</li>
<li>Enter the major battles, important units, and other stories about your army.</li>
<li>Show the whole story to the world.</li>
</ul>
<p class="text-center"><a href="/user/register" class="btn btn-primary">Get Started with Army Profiles Now</a></p>
',
      'format' => 'pure_html',
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
    $pane->uuid = 'ddec87c7-c2bf-4256-a9f2-127d6c944a40';
    $display->content['new-ddec87c7-c2bf-4256-a9f2-127d6c944a40'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-ddec87c7-c2bf-4256-a9f2-127d6c944a40';
    $pane = new stdClass();
    $pane->pid = 'new-c6312386-ffe8-4ad5-bd78-8f0ddd50bb90';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Profile Stats',
      'title' => 'Stat Summary',
      'body' => '<div class="list-group">
    <div class="list-group-item">
        <div class="media">
            <div class="media-left pull-left">
                <div class="activity-icon small">
                    <i class="fa fa-flag"></i>
                </div>
            </div>
            <div class="media-body">
                <strong class="font-14">Armies</strong>
                <div class="text-muted"><span class="badge"><?php print views_embed_view("army_profiles_all_stats", "panel_pane_1"); ?></span></div>
            </div>
        </div>
    </div>
</div>
<div class="text-center">
    <a href="/order-of-battle/player-armies/stats" class="btn btn-default" data-dismiss="modal">All Stats</a>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c6312386-ffe8-4ad5-bd78-8f0ddd50bb90';
    $display->content['new-c6312386-ffe8-4ad5-bd78-8f0ddd50bb90'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-c6312386-ffe8-4ad5-bd78-8f0ddd50bb90';
    $pane = new stdClass();
    $pane->pid = 'new-00d0b607-028c-43c9-aa20-1345b2fcd949';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profiles_all_lists_2-panel_pane_1';
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
    $pane->uuid = '00d0b607-028c-43c9-aa20-1345b2fcd949';
    $display->content['new-00d0b607-028c-43c9-aa20-1345b2fcd949'] = $pane;
    $display->panels['contentmainright'][0] = 'new-00d0b607-028c-43c9-aa20-1345b2fcd949';
    $pane = new stdClass();
    $pane->pid = 'new-3e505d06-1715-47a6-8381-b3daf4f2350b';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profiles_all_lists_2-panel_pane_2';
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
    $pane->uuid = '3e505d06-1715-47a6-8381-b3daf4f2350b';
    $display->content['new-3e505d06-1715-47a6-8381-b3daf4f2350b'] = $pane;
    $display->panels['contentmainright'][1] = 'new-3e505d06-1715-47a6-8381-b3daf4f2350b';
    $pane = new stdClass();
    $pane->pid = 'new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h2>your foes are amassing their forces against you</h2>
</div>',
      'format' => 'pure_html',
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
    $pane->uuid = 'a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
    $display->content['new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1'] = $pane;
    $display->panels['header'][0] = 'new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a77d2bb8-7974-4ba4-9115-3cb07d8089c1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_profiles_all_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'order_of_battle_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Order of Battle Landing Page';
  $page->admin_description = '';
  $page->path = 'order-of-battle/main';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Order of Battle',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Order of Battle',
      'name' => 'main-menu',
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
  $handler->name = 'page_order_of_battle_landing_page__panel_context_79123b1b-d8f1-45bc-a61d-35dc19d0b952';
  $handler->task = 'page';
  $handler->subtask = 'order_of_battle_landing_page';
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
    'name' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Order of Battle @ iToysoldiers',
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
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
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
  $display->title = '';
  $display->uuid = '76f77e24-0b0d-4eeb-b3dd-c5a86812ceac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb2b9394-a7a9-4d0d-9876-8a1db728994b';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'army_profile_all_lists-panel_pane_2';
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
    $pane->uuid = 'eb2b9394-a7a9-4d0d-9876-8a1db728994b';
    $display->content['new-eb2b9394-a7a9-4d0d-9876-8a1db728994b'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-eb2b9394-a7a9-4d0d-9876-8a1db728994b';
    $pane = new stdClass();
    $pane->pid = 'new-4171b17c-e74f-4202-97d5-9fbc4d2d0cb7';
    $pane->panel = 'contentmainleft';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4171b17c-e74f-4202-97d5-9fbc4d2d0cb7';
    $display->content['new-4171b17c-e74f-4202-97d5-9fbc4d2d0cb7'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-4171b17c-e74f-4202-97d5-9fbc4d2d0cb7';
    $pane = new stdClass();
    $pane->pid = 'new-d00555be-c671-4e3e-bd95-3e40cfee3d83';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'players_all_lists-panel_pane_2';
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
    $pane->uuid = 'd00555be-c671-4e3e-bd95-3e40cfee3d83';
    $display->content['new-d00555be-c671-4e3e-bd95-3e40cfee3d83'] = $pane;
    $display->panels['contentmainright'][0] = 'new-d00555be-c671-4e3e-bd95-3e40cfee3d83';
    $pane = new stdClass();
    $pane->pid = 'new-52d1222a-500e-43f3-957c-56b732c0dbb6';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'listcrit_all_lists-panel_pane_2';
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
    $pane->uuid = '52d1222a-500e-43f3-957c-56b732c0dbb6';
    $display->content['new-52d1222a-500e-43f3-957c-56b732c0dbb6'] = $pane;
    $display->panels['contentmainright'][1] = 'new-52d1222a-500e-43f3-957c-56b732c0dbb6';
    $pane = new stdClass();
    $pane->pid = 'new-c4bea39c-4517-4da7-a483-1e62efd20f19';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Nav Bar',
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
      <a class="navbar-brand" href="#">Order of Battle</a>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->
    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav navbar-right">
        <li><a href="/order-of-battle/player-armies">Armies</a></li>
        <li><a href="/order-of-battle/players">Players</a></li>
        <li><a href="/order-of-battle/listcrit">ListCrit</a></li>
        <li><a href="/order-of-battle/gaming-clubs">Gaming Clubs</a></li>
      </ul>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</nav>
',
      'format' => 'pure_html',
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
    $pane->uuid = 'c4bea39c-4517-4da7-a483-1e62efd20f19';
    $display->content['new-c4bea39c-4517-4da7-a483-1e62efd20f19'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-c4bea39c-4517-4da7-a483-1e62efd20f19';
    $pane = new stdClass();
    $pane->pid = 'new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '<div class="jumbotron">
<h1>Order of Battle</h1>
<h2>wargaming is a social hobby</h2>
</div>',
      'format' => 'pure_html',
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
    $pane->uuid = 'fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
    $display->content['new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4'] = $pane;
    $display->panels['header'][0] = 'new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-fa08129a-33d0-42ba-9d11-f330c1aa6eb4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['order_of_battle_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Player landing page';
  $page->admin_description = '';
  $page->path = 'order-of-battle/players';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Players',
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
  $handler->name = 'page_player_landing_page__panel_context_023553ca-3563-4989-8a80-121de38a811d';
  $handler->task = 'page';
  $handler->subtask = 'player_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_its2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
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
  $display->title = 'Players';
  $display->uuid = '2ac2bc1f-a60b-4189-99b4-7f39b766aa04';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-29a16c76-b66e-4807-9e19-919e34767362';
    $pane->panel = 'contentmaintop';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<div class="jumbotron">
<blockquote>If you know the enemy and know yourself, you need not fear the result of a hundred battles.<br>
- Sun Tzu</blockquote>
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
    $pane->uuid = '29a16c76-b66e-4807-9e19-919e34767362';
    $display->content['new-29a16c76-b66e-4807-9e19-919e34767362'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-29a16c76-b66e-4807-9e19-919e34767362';
    $pane = new stdClass();
    $pane->pid = 'new-0695f81f-6954-4b48-aff3-8158b3f8bd56';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'players_all_lists-panel_pane_3';
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
    $pane->uuid = '0695f81f-6954-4b48-aff3-8158b3f8bd56';
    $display->content['new-0695f81f-6954-4b48-aff3-8158b3f8bd56'] = $pane;
    $display->panels['contentmaintop'][1] = 'new-0695f81f-6954-4b48-aff3-8158b3f8bd56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_landing_page'] = $page;

  return $pages;

}
