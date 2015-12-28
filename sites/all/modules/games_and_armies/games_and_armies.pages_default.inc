<?php
/**
 * @file
 * games_and_armies.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function games_and_armies_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Armies',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'armies' => 'armies',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'term_parent',
          'settings' => array(
            'vid' => '2',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'abstract' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'keywords' => array(
          'value' => '[term:name] battles, [term:field-army-game:name] battles',
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
        'og:description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'og:type' => array(
          'value' => 'website',
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
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'a5173420-e4f8-436e-9644-c681e4248859';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-107846c0-d572-4301-b1cb-dc27268a8046';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_4';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '107846c0-d572-4301-b1cb-dc27268a8046';
    $display->content['new-107846c0-d572-4301-b1cb-dc27268a8046'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-107846c0-d572-4301-b1cb-dc27268a8046';
    $pane = new stdClass();
    $pane->pid = 'new-396203e7-cbe8-47d2-ab87-c284a4e70444';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_content_pages-panel_pane_7';
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
    $pane->uuid = '396203e7-cbe8-47d2-ab87-c284a4e70444';
    $display->content['new-396203e7-cbe8-47d2-ab87-c284a4e70444'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-396203e7-cbe8-47d2-ab87-c284a4e70444';
    $pane = new stdClass();
    $pane->pid = 'new-61903ff0-f709-42f9-97d0-07bf1f56d275';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'text-center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61903ff0-f709-42f9-97d0-07bf1f56d275';
    $display->content['new-61903ff0-f709-42f9-97d0-07bf1f56d275'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-61903ff0-f709-42f9-97d0-07bf1f56d275';
    $pane = new stdClass();
    $pane->pid = 'new-5dac2450-49d9-49f1-a03c-89ea810fad66';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Content Count',
      'title' => '',
      'body' => '<div class="panel m-top-md">
    <div class="panel-body">
        <div class="row">
            
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("term_armies_content" , "panel_pane_1"); ?></span>
                <small class="text-muted">Blogs</small>
            </div><!-- /.col -->
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("term_armies_content" , "panel_pane_2"); ?></span>
                <small class="text-muted">Galleries</small>
            </div><!-- /.col -->
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("term_armies_content" , "panel_pane_3"); ?></span>
                <small class="text-muted">Lists</small>
            </div><!-- /.col -->
        </div>
    </div>
</div>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5dac2450-49d9-49f1-a03c-89ea810fad66';
    $display->content['new-5dac2450-49d9-49f1-a03c-89ea810fad66'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-5dac2450-49d9-49f1-a03c-89ea810fad66';
    $pane = new stdClass();
    $pane->pid = 'new-22c30b77-2b7e-469f-aaef-e5645556a95e';
    $pane->panel = 'contentmainleft';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '22c30b77-2b7e-469f-aaef-e5645556a95e';
    $display->content['new-22c30b77-2b7e-469f-aaef-e5645556a95e'] = $pane;
    $display->panels['contentmainleft'][2] = 'new-22c30b77-2b7e-469f-aaef-e5645556a95e';
    $pane = new stdClass();
    $pane->pid = 'new-d8edd164-f030-4789-8ce6-d9160a7a3e10';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Average Battle Score',
      'title' => '',
      'body' => '<a href="/taxonomy/term/%term:tid/stats">
<?php
$view_term = %term:tid;
$term_list = "";
$tree = taxonomy_get_tree(2, $parent = $view_term, $max_depth = NULL, $load_entities = FALSE);

foreach($tree as $value) {
   $term_list .= $value->tid . "+";
}

$trimmed = $term_list .= $view_term;

print views_embed_view(\'term_armies_stats\',\'panel_pane_1\', $trimmed);
?>
</a>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd8edd164-f030-4789-8ce6-d9160a7a3e10';
    $display->content['new-d8edd164-f030-4789-8ce6-d9160a7a3e10'] = $pane;
    $display->panels['contentmainleft'][3] = 'new-d8edd164-f030-4789-8ce6-d9160a7a3e10';
    $pane = new stdClass();
    $pane->pid = 'new-d4a12a2b-3aa6-4882-a4d7-7bcf16f1f0b8';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_3';
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
    $pane->uuid = 'd4a12a2b-3aa6-4882-a4d7-7bcf16f1f0b8';
    $display->content['new-d4a12a2b-3aa6-4882-a4d7-7bcf16f1f0b8'] = $pane;
    $display->panels['contentmainright'][0] = 'new-d4a12a2b-3aa6-4882-a4d7-7bcf16f1f0b8';
    $pane = new stdClass();
    $pane->pid = 'new-befe312a-b536-4989-b452-7669ba034b6d';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_content-panel_pane_4';
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
    $pane->uuid = 'befe312a-b536-4989-b452-7669ba034b6d';
    $display->content['new-befe312a-b536-4989-b452-7669ba034b6d'] = $pane;
    $display->panels['contentmainright'][1] = 'new-befe312a-b536-4989-b452-7669ba034b6d';
    $pane = new stdClass();
    $pane->pid = 'new-95a566b6-867c-455a-9702-2e6fcd295361';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'messages_list_for_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '95a566b6-867c-455a-9702-2e6fcd295361';
    $display->content['new-95a566b6-867c-455a-9702-2e6fcd295361'] = $pane;
    $display->panels['contentmainright'][2] = 'new-95a566b6-867c-455a-9702-2e6fcd295361';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_6';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Games',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'armies' => 'armies',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'term_parent',
          'settings' => array(
            'vid' => '2',
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'abstract' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'keywords' => array(
          'value' => '[term:name] battles, [term:field-army-game:name] battles',
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
        'og:description' => array(
          'value' => 'The main [term:name] overview page on iToysoldiers with stats, battles, and content summaries.',
        ),
        'og:type' => array(
          'value' => 'website',
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Battles
Meta
Games',
    'panels_breadcrumbs_paths' => 'battle-reports
battle-meta
battle-meta/games',
    'panels_breadcrumbs_home' => 1,
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
      'footer' => NULL,
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'a5173420-e4f8-436e-9644-c681e4248859';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-934e94d6-d2ec-4048-b373-84355d3eec18';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_4';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '934e94d6-d2ec-4048-b373-84355d3eec18';
    $display->content['new-934e94d6-d2ec-4048-b373-84355d3eec18'] = $pane;
    $display->panels['contentmainbottom'][0] = 'new-934e94d6-d2ec-4048-b373-84355d3eec18';
    $pane = new stdClass();
    $pane->pid = 'new-035de01e-869c-4555-b848-1052bf52c6bc';
    $pane->panel = 'contentmainbottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_content_pages-panel_pane_7';
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
    $pane->uuid = '035de01e-869c-4555-b848-1052bf52c6bc';
    $display->content['new-035de01e-869c-4555-b848-1052bf52c6bc'] = $pane;
    $display->panels['contentmainbottom'][1] = 'new-035de01e-869c-4555-b848-1052bf52c6bc';
    $pane = new stdClass();
    $pane->pid = 'new-d882c9cd-aa75-473a-abbf-da811498a34f';
    $pane->panel = 'contentmainleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Content Count',
      'title' => '',
      'body' => '<div class="panel m-top-md">
    <div class="panel-body">
        <div class="row">
            
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("term_armies_content" , "panel_pane_1"); ?></span>
                <small class="text-muted">Blogs</small>
            </div><!-- /.col -->
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("term_armies_content" , "panel_pane_2"); ?></span>
                <small class="text-muted">Galleries</small>
            </div><!-- /.col -->
            <div class="col-xs-4 text-center">
                <span class="block font-14"><?php print views_embed_view("term_armies_content" , "panel_pane_3"); ?></span>
                <small class="text-muted">Lists</small>
            </div><!-- /.col -->
        </div>
    </div>
</div>',
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
    $pane->uuid = 'd882c9cd-aa75-473a-abbf-da811498a34f';
    $display->content['new-d882c9cd-aa75-473a-abbf-da811498a34f'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-d882c9cd-aa75-473a-abbf-da811498a34f';
    $pane = new stdClass();
    $pane->pid = 'new-ffdaa689-18b6-47cc-b7f1-e206184e0296';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_content-panel_pane_4';
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
    $pane->uuid = 'ffdaa689-18b6-47cc-b7f1-e206184e0296';
    $display->content['new-ffdaa689-18b6-47cc-b7f1-e206184e0296'] = $pane;
    $display->panels['contentmainleft'][1] = 'new-ffdaa689-18b6-47cc-b7f1-e206184e0296';
    $pane = new stdClass();
    $pane->pid = 'new-4a00564e-fd9a-48b8-8fc3-873591bfb7e1';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'messages_list_for_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 0,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a00564e-fd9a-48b8-8fc3-873591bfb7e1';
    $display->content['new-4a00564e-fd9a-48b8-8fc3-873591bfb7e1'] = $pane;
    $display->panels['contentmainright'][0] = 'new-4a00564e-fd9a-48b8-8fc3-873591bfb7e1';
    $pane = new stdClass();
    $pane->pid = 'new-2b83d090-d985-4fcc-8f13-94ff2459bcc5';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_7';
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
    $pane->uuid = '2b83d090-d985-4fcc-8f13-94ff2459bcc5';
    $display->content['new-2b83d090-d985-4fcc-8f13-94ff2459bcc5'] = $pane;
    $display->panels['header'][0] = 'new-2b83d090-d985-4fcc-8f13-94ff2459bcc5';
    $pane = new stdClass();
    $pane->pid = 'new-42b5553a-fca5-4263-90c5-21a4084b2f16';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_2';
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
    $pane->uuid = '42b5553a-fca5-4263-90c5-21a4084b2f16';
    $display->content['new-42b5553a-fca5-4263-90c5-21a4084b2f16'] = $pane;
    $display->panels['header'][1] = 'new-42b5553a-fca5-4263-90c5-21a4084b2f16';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_6'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function games_and_armies_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'army_stats_page';
  $page->task = 'page';
  $page->admin_title = 'Army Stats Page';
  $page->admin_description = '';
  $page->path = 'taxonomy/term/%term/stats/main';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'term_vocabulary',
        'settings' => array(
          'machine_name' => array(
            'armies' => 'armies',
          ),
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Summary',
    'name' => 'navigation',
    'weight' => '-10',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Stats',
      'name' => 'navigation',
      'weight' => '10',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          31 => 0,
          20 => 0,
          2 => 0,
          29 => 0,
          19 => 0,
          17 => 0,
          30 => 0,
          9 => 0,
          3 => 0,
          13 => 0,
          22 => 0,
          11 => 0,
          8 => 0,
          4 => 0,
          28 => 0,
          5 => 0,
          16 => 0,
          1 => 0,
          18 => 0,
          21 => 0,
          15 => 0,
          10 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_army_stats_page__panel_context_b53b5f29-6bed-4d50-a188-fd44a6217717';
  $handler->task = 'page';
  $handler->subtask = 'army_stats_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Game Systems',
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
          'name' => 'term_parent',
          'settings' => array(
            'vid' => '2',
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '%term:name Battle Stat Summary';
  $display->uuid = '1a4479bc-c9c0-4efd-bc1f-9f41cf7dacfb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e6d0db27-38e1-4191-aba7-7448815959ee';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Game System Stats Top Row',
      'title' => '',
      'body' => '<?php
$view_term = %term:tid;
$term_list = "";
$tree = taxonomy_get_tree(2, $parent = $view_term, $max_depth = NULL, $load_entities = FALSE);

foreach($tree as $value) {
   $term_list .= $value->tid . "+";
}
$term_list .= $view_term;
?>

<div class="row">
<div class="col-xs-12 col-sm-6 col-md-6">
<?php print views_embed_view("term_armies_stats" , "panel_pane_8", $term_list); ?>
</div>
<div class="col-xs-12 col-sm-6 col-md-6">
<?php print views_embed_view("term_armies_content" , "panel_pane_4"); ?>
</div>
</div>',
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
    $pane->uuid = 'e6d0db27-38e1-4191-aba7-7448815959ee';
    $display->content['new-e6d0db27-38e1-4191-aba7-7448815959ee'] = $pane;
    $display->panels['contentmain'][0] = 'new-e6d0db27-38e1-4191-aba7-7448815959ee';
    $pane = new stdClass();
    $pane->pid = 'new-dc743de2-d974-45ea-9cef-4203f520a27b';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Player Block',
      'title' => '',
      'body' => '<?php
$view_term = %term:tid;
$term_list = "";
$tree = taxonomy_get_tree(2, $parent = $view_term, $max_depth = NULL, $load_entities = FALSE);

foreach($tree as $value) {
   $term_list .= $value->tid . "+";
}
$term_list .= $view_term;
?>
<h3>Top Players</h3>
<div class="row">
<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battle Score</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_6\', $term_list); ?>
</div>
</div>
</div>
<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battles</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_7\', $term_list); ?>
</div>
</div>
</div>
</div>
<h3>Factions</h3>
<div class="row">
<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battle Score</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_9\', $term_list); ?>
</div>
</div>
</div>

<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battles</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_10\', $term_list); ?>
</div>
</div>
</div>

</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dc743de2-d974-45ea-9cef-4203f520a27b';
    $display->content['new-dc743de2-d974-45ea-9cef-4203f520a27b'] = $pane;
    $display->panels['contentmain'][1] = 'new-dc743de2-d974-45ea-9cef-4203f520a27b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_army_stats_page__panel_context_967ba449-6dda-46c4-b2ff-40895643b04e';
  $handler->task = 'page';
  $handler->subtask = 'army_stats_page';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Armies/Factions',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_boxton';
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
  $display->title = '%term:name Battle Stat Summary';
  $display->uuid = '4fe44ff4-fd44-4f9b-862c-8369e233a853';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2e51e39-5cce-4208-850d-f0505a554ec3';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Army Stats Top Row',
      'title' => '',
      'body' => '<?php
$view_term = %term:tid;
$term_list = "";
$tree = taxonomy_get_tree(2, $parent = $view_term, $max_depth = NULL, $load_entities = FALSE);

foreach($tree as $value) {
   $term_list .= $value->tid . "+";
}
$term_list .= $view_term;
?>

<div class="row">
<div class="col-xs-12 col-sm-12 col-md-4">
<?php print views_embed_view("term_armies_stats" , "panel_pane_3", $term_list); ?> 
</div>
<div class="col-xs-12 col-sm-12 col-md-4">
<?php print views_embed_view("term_armies_stats" , "panel_pane_1", $term_list); ?>
</div>
<div class="col-xs-12 col-sm-12 col-md-4">
<?php print views_embed_view("term_armies_content" , "panel_pane_4"); ?>
</div>
</div>',
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
    $pane->uuid = 'c2e51e39-5cce-4208-850d-f0505a554ec3';
    $display->content['new-c2e51e39-5cce-4208-850d-f0505a554ec3'] = $pane;
    $display->panels['contentmain'][0] = 'new-c2e51e39-5cce-4208-850d-f0505a554ec3';
    $pane = new stdClass();
    $pane->pid = 'new-57dcfa60-e358-4abe-b3c5-64f9db4c987f';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Stat Block',
      'title' => '',
      'body' => '<?php
$view_term = %term:tid;
$term_list = "";
$tree = taxonomy_get_tree(2, $parent = $view_term, $max_depth = NULL, $load_entities = FALSE);

foreach($tree as $value) {
   $term_list .= $value->tid . "+";
}
$term_list .= $view_term;
?>
<h3>Top Players</h3>
<div class="row">
<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battle Score</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_6\', $term_list); ?>
</div>
</div>
</div>
<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Battles</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_7\', $term_list); ?>
</div>
</div>
</div>
</div>

<h3>Nemesis</h3>
<div class="row">
<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Faction</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_11\', $term_list); ?>
</div>
</div>
</div>
<div class="col-xs-12 col-sm-6">
<div class="panel panel-default">
<div class="panel-heading">
<h3 class="panel-title">Players</h3>
</div>
<div class="panel-body">
<?php print views_embed_view(\'term_armies_stats\',\'panel_pane_12\', $term_list); ?>
</div>
</div>
</div>
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '57dcfa60-e358-4abe-b3c5-64f9db4c987f';
    $display->content['new-57dcfa60-e358-4abe-b3c5-64f9db4c987f'] = $pane;
    $display->panels['contentmain'][1] = 'new-57dcfa60-e358-4abe-b3c5-64f9db4c987f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_stats_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'games';
  $page->task = 'page';
  $page->admin_title = 'Games';
  $page->admin_description = '';
  $page->path = 'battle-meta/games';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_games__panel_context_d9350d0e-7a91-423e-95a7-916d49d8606d';
  $handler->task = 'page';
  $handler->subtask = 'games';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Battles
Meta',
    'panels_breadcrumbs_paths' => 'battle-reports
battle-meta',
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
      'contentmaintop' => NULL,
      'contentmainbottom' => NULL,
      'contentmainright' => NULL,
      'contentmainleft' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Games @ iToysoldiers';
  $display->uuid = 'a03d376b-b566-4435-a704-61c5a84625d7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2977ab44-ff53-47f3-b27d-0d442b9b2986';
    $pane->panel = 'contentmainleft';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_5';
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
    $pane->uuid = '2977ab44-ff53-47f3-b27d-0d442b9b2986';
    $display->content['new-2977ab44-ff53-47f3-b27d-0d442b9b2986'] = $pane;
    $display->panels['contentmainleft'][0] = 'new-2977ab44-ff53-47f3-b27d-0d442b9b2986';
    $pane = new stdClass();
    $pane->pid = 'new-75945e19-28bf-44d4-a7e1-e343f3f78fd7';
    $pane->panel = 'contentmainright';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_stats-panel_pane_2';
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
    $pane->uuid = '75945e19-28bf-44d4-a7e1-e343f3f78fd7';
    $display->content['new-75945e19-28bf-44d4-a7e1-e343f3f78fd7'] = $pane;
    $display->panels['contentmainright'][0] = 'new-75945e19-28bf-44d4-a7e1-e343f3f78fd7';
    $pane = new stdClass();
    $pane->pid = 'new-d4c09930-a13b-45b0-acf1-568bceb3c72f';
    $pane->panel = 'contentmaintop';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_armies_page_layout-panel_pane_6';
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
    $pane->uuid = 'd4c09930-a13b-45b0-acf1-568bceb3c72f';
    $display->content['new-d4c09930-a13b-45b0-acf1-568bceb3c72f'] = $pane;
    $display->panels['contentmaintop'][0] = 'new-d4c09930-a13b-45b0-acf1-568bceb3c72f';
    $pane = new stdClass();
    $pane->pid = 'new-ef781598-405b-46b1-99c3-43df7b3aed7f';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'hr_spacer';
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
    $pane->uuid = 'ef781598-405b-46b1-99c3-43df7b3aed7f';
    $display->content['new-ef781598-405b-46b1-99c3-43df7b3aed7f'] = $pane;
    $display->panels['footer'][0] = 'new-ef781598-405b-46b1-99c3-43df7b3aed7f';
    $pane = new stdClass();
    $pane->pid = 'new-aad6fe8e-8f39-4c76-a4d6-feedffa79121';
    $pane->panel = 'footer';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1992',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'use_title' => 1,
        'use_footer' => 0,
        'panel_body' => 1,
        'footer_content' => '',
        'context_class' => 'panel-default',
      ),
      'style' => 'bootstrap_panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aad6fe8e-8f39-4c76-a4d6-feedffa79121';
    $display->content['new-aad6fe8e-8f39-4c76-a4d6-feedffa79121'] = $pane;
    $display->panels['footer'][1] = 'new-aad6fe8e-8f39-4c76-a4d6-feedffa79121';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['games'] = $page;

  return $pages;

}
