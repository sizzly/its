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
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f8270853-56bf-4831-bd48-bde68118b09e';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'custom';
  $pane->subtype = 'core_taxonomy_content_count';
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
  $pane->uuid = 'f8270853-56bf-4831-bd48-bde68118b09e';
  $display->content['new-f8270853-56bf-4831-bd48-bde68118b09e'] = $pane;
  $display->panels['contentmainbottom'][0] = 'new-f8270853-56bf-4831-bd48-bde68118b09e';
  $pane = new stdClass();
  $pane->pid = 'new-22c30b77-2b7e-469f-aaef-e5645556a95e';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_term_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '22c30b77-2b7e-469f-aaef-e5645556a95e';
  $display->content['new-22c30b77-2b7e-469f-aaef-e5645556a95e'] = $pane;
  $display->panels['contentmainbottom'][1] = 'new-22c30b77-2b7e-469f-aaef-e5645556a95e';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '107846c0-d572-4301-b1cb-dc27268a8046';
  $display->content['new-107846c0-d572-4301-b1cb-dc27268a8046'] = $pane;
  $display->panels['contentmainbottom'][2] = 'new-107846c0-d572-4301-b1cb-dc27268a8046';
  $pane = new stdClass();
  $pane->pid = 'new-d5b1a86b-2e5d-47c5-b317-c607c320f94e';
  $pane->panel = 'contentmainbottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'core_all_node_timeline-panel_pane_3';
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
  $pane->uuid = 'd5b1a86b-2e5d-47c5-b317-c607c320f94e';
  $display->content['new-d5b1a86b-2e5d-47c5-b317-c607c320f94e'] = $pane;
  $display->panels['contentmainbottom'][3] = 'new-d5b1a86b-2e5d-47c5-b317-c607c320f94e';
  $pane = new stdClass();
  $pane->pid = 'new-e96d9bb8-82ff-4e08-8356-c5320d3d9ca8';
  $pane->panel = 'contentmainleft';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_term_1',
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
    'css_class' => 'text-center',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e96d9bb8-82ff-4e08-8356-c5320d3d9ca8';
  $display->content['new-e96d9bb8-82ff-4e08-8356-c5320d3d9ca8'] = $pane;
  $display->panels['contentmainleft'][0] = 'new-e96d9bb8-82ff-4e08-8356-c5320d3d9ca8';
  $pane = new stdClass();
  $pane->pid = 'new-1d166b64-b5df-402a-a3aa-8b165a04579e';
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
  $pane->uuid = '1d166b64-b5df-402a-a3aa-8b165a04579e';
  $display->content['new-1d166b64-b5df-402a-a3aa-8b165a04579e'] = $pane;
  $display->panels['contentmainright'][0] = 'new-1d166b64-b5df-402a-a3aa-8b165a04579e';
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
  $handler->weight = -4;
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
Meta',
    'panels_breadcrumbs_paths' => 'battle-reports
battle-reports/battle-meta
',
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7a1a8c25-e7ba-43b3-8cf4-f19f90993db6';
  $pane->panel = 'contentmaintop';
  $pane->type = 'custom';
  $pane->subtype = 'core_taxonomy_content_count';
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
  $pane->uuid = '7a1a8c25-e7ba-43b3-8cf4-f19f90993db6';
  $display->content['new-7a1a8c25-e7ba-43b3-8cf4-f19f90993db6'] = $pane;
  $display->panels['contentmaintop'][0] = 'new-7a1a8c25-e7ba-43b3-8cf4-f19f90993db6';
  $pane = new stdClass();
  $pane->pid = 'new-529f649a-7d19-41d6-afa0-46f23c12177f';
  $pane->panel = 'contentmaintop';
  $pane->type = 'views_panes';
  $pane->subtype = 'term_armies_page_layout-panel_pane_1';
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
  $pane->uuid = '529f649a-7d19-41d6-afa0-46f23c12177f';
  $display->content['new-529f649a-7d19-41d6-afa0-46f23c12177f'] = $pane;
  $display->panels['contentmaintop'][1] = 'new-529f649a-7d19-41d6-afa0-46f23c12177f';
  $pane = new stdClass();
  $pane->pid = 'new-934e94d6-d2ec-4048-b373-84355d3eec18';
  $pane->panel = 'contentmaintop';
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '934e94d6-d2ec-4048-b373-84355d3eec18';
  $display->content['new-934e94d6-d2ec-4048-b373-84355d3eec18'] = $pane;
  $display->panels['contentmaintop'][2] = 'new-934e94d6-d2ec-4048-b373-84355d3eec18';
  $pane = new stdClass();
  $pane->pid = 'new-fe2a06b2-17b5-4dbd-a491-85fba059d948';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_image';
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
    'context' => 'argument_term_1',
    'override_title' => 0,
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
  $pane->uuid = 'fe2a06b2-17b5-4dbd-a491-85fba059d948';
  $display->content['new-fe2a06b2-17b5-4dbd-a491-85fba059d948'] = $pane;
  $display->panels['header'][0] = 'new-fe2a06b2-17b5-4dbd-a491-85fba059d948';
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
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Stats',
    'name' => 'navigation',
    'weight' => '-10',
    'parent' => array(
      'type' => 'normal',
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
  $handler->name = 'page_army_stats_page__panel_context_967ba449-6dda-46c4-b2ff-40895643b04e';
  $handler->task = 'page';
  $handler->subtask = 'army_stats_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Armies/Factions',
    'no_blocks' => 1,
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
        1 => array(
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
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_army_stats_page__panel_context_967ba449-6dda-46c4-b2ff-40895643b04e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c26ec886-f199-418c-bf40-7ee707a9d7a9';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AVG Battle Score',
    'title' => 'Average Battle Score',
    'body' => '<script src="/sites/all/libraries/highcharts/js/highcharts-more.js"></script>
<script src="/sites/all/libraries/highcharts/js/modules/solid-gauge.js"></script>
<script>
jQuery(document).ready(function($) {
    var gaugeOptions = {

        chart: {
            type: \'solidgauge\'
        },
        credits: {
            enabled: false
        },

        title: null,

        pane: {
            center: [\'50%\', \'85%\'],
            size: \'140%\',
            startAngle: -90,
            endAngle: 90,
            background: {
                backgroundColor: (Highcharts.theme && Highcharts.theme.background2) || \'#EEE\',
                innerRadius: \'60%\',
                outerRadius: \'100%\',
                shape: \'arc\'
            }
        },

        tooltip: {
            enabled: false
        },

        // the value axis
        yAxis: {
            stops: [
                [0.4, \'#DF5353\'], // red
                [0.7, \'#DDDF0D\'], // yellow
                [1.0, \'#55BF3B\'] // green
            ],
            lineWidth: 0,
            minorTickInterval: null,
            tickPixelInterval: 400,
            tickWidth: 0,
            title: {
                y: -70
            },
            labels: {
                y: 16
            }
        },

        plotOptions: {
            solidgauge: {
                dataLabels: {
                    y: 5,
                    borderWidth: 0,
                    useHTML: true
                }
            }
        }
    };

    // The speed gauge
    $(\'#container_avg\').highcharts(Highcharts.merge(gaugeOptions, {
        yAxis: {
            min: 0,
            max: 5,
            title: {
                text: null
            }
        },

        credits: {
            enabled: false
        },

        series: [{
            name: \'AVG Battle Score\',
            data: [<?php print strip_tags(views_embed_view("battles_stats_army_battle_stats" , "panel_pane_14")); ?>],
            dataLabels: {
                format: \'<div style="text-align:center"><span style="font-size:25px;color:\' +
                    ((Highcharts.theme && Highcharts.theme.contrastTextColor) || \'black\') + \'">{y}</span>\'
            },
        }]
    }));
});
</script>
<div id="container_avg" style="width: 100%; height: 200px; margin: 0 auto"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c26ec886-f199-418c-bf40-7ee707a9d7a9';
  $display->content['new-c26ec886-f199-418c-bf40-7ee707a9d7a9'] = $pane;
  $display->panels['contentmain'][0] = 'new-c26ec886-f199-418c-bf40-7ee707a9d7a9';
  $pane = new stdClass();
  $pane->pid = 'new-228c6d5b-acb2-477f-aa9b-2399f2c0660e';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_stats_army_battle_stats-panel_pane_10';
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
  $pane->uuid = '228c6d5b-acb2-477f-aa9b-2399f2c0660e';
  $display->content['new-228c6d5b-acb2-477f-aa9b-2399f2c0660e'] = $pane;
  $display->panels['contentmain'][1] = 'new-228c6d5b-acb2-477f-aa9b-2399f2c0660e';
  $pane = new stdClass();
  $pane->pid = 'new-be5faeb3-1620-4710-8671-9d7c375fcb76';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Commander Survival',
    'title' => 'Commander Survival Impact',
    'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("battles_stats_army_battle_stats" , "panel_pane_6")); ?> 
        ]
    });
});
</script>

<div id="container" style="min-width: 310px; height: 400px; max-width: 800px; margin: 0 auto"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'be5faeb3-1620-4710-8671-9d7c375fcb76';
  $display->content['new-be5faeb3-1620-4710-8671-9d7c375fcb76'] = $pane;
  $display->panels['contentmain'][2] = 'new-be5faeb3-1620-4710-8671-9d7c375fcb76';
  $pane = new stdClass();
  $pane->pid = 'new-51cdf235-eb4c-4a1f-84f7-dd8191b019a6';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Ally Impact',
    'title' => 'Ally Impact',
    'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_allies\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("battles_stats_army_battle_stats" , "panel_pane_15")); ?> 
        ]
    });
});
</script>
<div id="container_allies" style="width:100%; height: 400px; margin: 0 auto"></div>
',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '51cdf235-eb4c-4a1f-84f7-dd8191b019a6';
  $display->content['new-51cdf235-eb4c-4a1f-84f7-dd8191b019a6'] = $pane;
  $display->panels['contentmain'][3] = 'new-51cdf235-eb4c-4a1f-84f7-dd8191b019a6';
  $pane = new stdClass();
  $pane->pid = 'new-c2e51e39-5cce-4208-850d-f0505a554ec3';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Army Stats Top Row',
    'title' => '',
    'body' => '<div class="row">
<div class="padding-md">
    <div class="row">
        <div class="col-sm-6 col-md-3">
           <a href="/taxonomy/term/%term:tid/battles">
            <div class="panel-stat3 bg-danger">
                <h2 class="m-top-none" id="userCount"><?php print views_embed_view("battles_stats_army_battle_stats" , "panel_pane_1"); ?></h2>
                <h5>Battles</h5>
                <div class="stat-icon">
                    <i class="fa fa-fire fa-3x"></i>
                </div>
            </div>
           </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
            <a href="/taxonomy/term/%term:tid/stats/players">
            <div class="panel-stat3 bg-info">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_army_battle_stats" , "panel_pane_2"); ?></h2>
                <h5>Players</h5>
                <div class="stat-icon">
                    <i class="fa fa-user fa-3x"></i>
                </div>
            </div>
            </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
<a href="/taxonomy/term/%term:tid/stats/battlefield">
            <div class="panel-stat3 bg-warning">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_army_battle_stats" , "panel_pane_3"); ?></h2>
                <h5>Battlefields</h5>
                <div class="stat-icon">
                    <i class="fa fa-map-marker fa-3x"></i>
                </div>
            </div>
</a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
<a href="/taxonomy/term/%term:tid/stats/opponent-faction">
            <div class="panel-stat3 bg-success">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_army_battle_stats" , "panel_pane_4"); ?></h2>
                <h5>Factions</h5>
                <div class="stat-icon">
                    <i class="fa fa-bookmark fa-3x"></i>
                </div>
            </div>
</a>
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
  $pane->uuid = 'c2e51e39-5cce-4208-850d-f0505a554ec3';
  $display->content['new-c2e51e39-5cce-4208-850d-f0505a554ec3'] = $pane;
  $display->panels['header'][0] = 'new-c2e51e39-5cce-4208-850d-f0505a554ec3';
  $pane = new stdClass();
  $pane->pid = 'new-f042bdb9-16a7-41a8-b34a-8d8430cb4420';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Battles over Time',
    'title' => 'Battles over Time',
    'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_bot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'# Battles\'
            }
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Battles\',
            data: [
                <?php print strip_tags(views_embed_view("battles_stats_army_battle_stats" , "panel_pane_11")); ?>
            ]
        }]
    });
});
</script>

<div id="container_bot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f042bdb9-16a7-41a8-b34a-8d8430cb4420';
  $display->content['new-f042bdb9-16a7-41a8-b34a-8d8430cb4420'] = $pane;
  $display->panels['sidebar'][0] = 'new-f042bdb9-16a7-41a8-b34a-8d8430cb4420';
  $pane = new stdClass();
  $pane->pid = 'new-037cfc3d-e842-47e2-a367-73baf0a6f719';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_stats_army_battle_stats-panel_pane_7';
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
  $pane->uuid = '037cfc3d-e842-47e2-a367-73baf0a6f719';
  $display->content['new-037cfc3d-e842-47e2-a367-73baf0a6f719'] = $pane;
  $display->panels['sidebar'][1] = 'new-037cfc3d-e842-47e2-a367-73baf0a6f719';
  $pane = new stdClass();
  $pane->pid = 'new-838b8e75-a6cb-4610-850c-d84197e2694c';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Opponent\'s Army Impact',
    'title' => 'Opponent\'s Army Impact',
    'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_oa\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("battles_stats_army_battle_stats" , "panel_pane_12")); ?> 
        ]
    });
});
</script>

<div id="container_oa" style="min-width: 310px; height: 400px; max-width: 800px; margin: 0 auto"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '838b8e75-a6cb-4610-850c-d84197e2694c';
  $display->content['new-838b8e75-a6cb-4610-850c-d84197e2694c'] = $pane;
  $display->panels['sidebar'][2] = 'new-838b8e75-a6cb-4610-850c-d84197e2694c';
  $pane = new stdClass();
  $pane->pid = 'new-d4e6cc23-9feb-43ca-a20d-d68667c22ab8';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_stats_army_battle_stats-panel_pane_13';
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
  $pane->uuid = 'd4e6cc23-9feb-43ca-a20d-d68667c22ab8';
  $display->content['new-d4e6cc23-9feb-43ca-a20d-d68667c22ab8'] = $pane;
  $display->panels['sidebar'][3] = 'new-d4e6cc23-9feb-43ca-a20d-d68667c22ab8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_army_stats_page__panel_context_b53b5f29-6bed-4d50-a188-fd44a6217717';
  $handler->task = 'page';
  $handler->subtask = 'army_stats_page';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Game Systems',
    'no_blocks' => 1,
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
        1 => array(
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
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%term:name

',
    'panels_breadcrumbs_paths' => '%term:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name Battle Stat Summary';
  $display->uuid = '1a4479bc-c9c0-4efd-bc1f-9f41cf7dacfb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_army_stats_page__panel_context_b53b5f29-6bed-4d50-a188-fd44a6217717';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-209656b3-917d-46ac-8076-1c2bd8bb25c1';
  $pane->panel = 'contentmain';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Commander Survival',
    'title' => 'Commander Survival Impact',
    'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("battles_stats_game_battle_stats" , "panel_pane_6")); ?> 
        ]
    });
});
</script>

<div id="container" style="min-width: 310px; height: 400px; max-width: 800px; margin: 0 auto"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '209656b3-917d-46ac-8076-1c2bd8bb25c1';
  $display->content['new-209656b3-917d-46ac-8076-1c2bd8bb25c1'] = $pane;
  $display->panels['contentmain'][0] = 'new-209656b3-917d-46ac-8076-1c2bd8bb25c1';
  $pane = new stdClass();
  $pane->pid = 'new-e6d0db27-38e1-4191-aba7-7448815959ee';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Game System Stats Top Row',
    'title' => '',
    'body' => '<div class="row">
<div class="padding-md">
    <div class="row">
        <div class="col-sm-6 col-md-3">
           <a href="/taxonomy/term/%term:tid/battles">
            <div class="panel-stat3 bg-danger">
                <h2 class="m-top-none" id="userCount"><?php print views_embed_view("battles_stats_game_battle_stats" , "panel_pane_1"); ?></h2>
                <h5>Battles</h5>
                <div class="stat-icon">
                    <i class="fa fa-fire fa-3x"></i>
                </div>
            </div>
           </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
            <a href="/taxonomy/term/%term:tid/stats/players">
            <div class="panel-stat3 bg-info">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_game_battle_stats" , "panel_pane_2"); ?></h2>
                <h5>Players</h5>
                <div class="stat-icon">
                    <i class="fa fa-user fa-3x"></i>
                </div>
            </div>
            </a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
<a href="/taxonomy/term/%term:tid/stats/battlefield">
            <div class="panel-stat3 bg-warning">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_game_battle_stats" , "panel_pane_3"); ?></h2>
                <h5>Battlefields</h5>
                <div class="stat-icon">
                    <i class="fa fa-map-marker fa-3x"></i>
                </div>
            </div>
</a>
        </div><!-- /.col -->
        <div class="col-sm-6 col-md-3">
<a href="/taxonomy/term/%term:tid/stats/opponent-faction">
            <div class="panel-stat3 bg-success">
                <h2 class="m-top-none"><?php print views_embed_view("battles_stats_game_battle_stats" , "panel_pane_4"); ?></h2>
                <h5>Factions</h5>
                <div class="stat-icon">
                    <i class="fa fa-bookmark fa-3x"></i>
                </div>
            </div>
</a>
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
  $pane->uuid = 'e6d0db27-38e1-4191-aba7-7448815959ee';
  $display->content['new-e6d0db27-38e1-4191-aba7-7448815959ee'] = $pane;
  $display->panels['header'][0] = 'new-e6d0db27-38e1-4191-aba7-7448815959ee';
  $pane = new stdClass();
  $pane->pid = 'new-6f462649-90c0-41d6-8893-f74f1f8b9883';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Battles over Time',
    'title' => 'Battles over Time',
    'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_bot\').highcharts({
        chart: {
            zoomType: \'x\'
        },
        title: {
            text: null
        },
        subtitle: {
            text: document.ontouchstart === undefined ?
                    \'Click and drag in the plot area to zoom in\' : \'Pinch the chart to zoom in\'
        },
        credits: {
            enabled: false
        },
        xAxis: {
            type: \'datetime\'
        },
        yAxis: {
            title: {
                text: \'# Battles\'
            }
        },
        legend: {
            enabled: false
        },
        plotOptions: {
            area: {
                fillColor: {
                    linearGradient: {
                        x1: 0,
                        y1: 0,
                        x2: 0,
                        y2: 1
                    },
                    stops: [
                        [0, Highcharts.getOptions().colors[0]],
                        [1, Highcharts.Color(Highcharts.getOptions().colors[0]).setOpacity(0).get(\'rgba\')]
                    ]
                },
                marker: {
                    radius: 2
                },
                lineWidth: 1,
                states: {
                    hover: {
                        lineWidth: 1
                    }
                },
                threshold: null
            }
        },

        series: [{
            type: \'area\',
            name: \'Battles\',
            data: [
                <?php print strip_tags(views_embed_view("battles_stats_game_battle_stats" , "panel_pane_11")); ?>
            ]
        }]
    });
});
</script>

<div id="container_bot" style="min-width: 310px; height: 400px; margin: 0 auto"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6f462649-90c0-41d6-8893-f74f1f8b9883';
  $display->content['new-6f462649-90c0-41d6-8893-f74f1f8b9883'] = $pane;
  $display->panels['sidebar'][0] = 'new-6f462649-90c0-41d6-8893-f74f1f8b9883';
  $pane = new stdClass();
  $pane->pid = 'new-4407d561-9070-4c23-85af-4cd333ce24ea';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'battles_stats_game_battle_stats-panel_pane_7';
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
  $pane->uuid = '4407d561-9070-4c23-85af-4cd333ce24ea';
  $display->content['new-4407d561-9070-4c23-85af-4cd333ce24ea'] = $pane;
  $display->panels['sidebar'][1] = 'new-4407d561-9070-4c23-85af-4cd333ce24ea';
  $pane = new stdClass();
  $pane->pid = 'new-0e67f520-3048-403f-822d-d2fe249ab7ea';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Faction Impact',
    'title' => 'Faction Results',
    'body' => '<script>
jQuery(document).ready(function($) {
    $(\'#container_oa\').highcharts({
        chart: {
            type: \'scatter\',
            zoomType: \'xy\'
        },
        title: {
            text: null
        },
        credits: {
            enabled: false
        },
        xAxis: {
            title: {
                enabled: true,
                text: \'Defeat %\'
            },
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            max: 100,
            min: 0
        },
        yAxis: {
            max: 100,
            min: 0,
            startOnTick: true,
            endOnTick: true,
            showLastLabel: true,
            
            title: {
                text: \'Victory %\'
            }
        },
        legend: {
            layout: \'horizontal\',
            align: \'center\',
            verticalAlign: \'bottom\',

            floating: false,
            backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || \'#FFFFFF\',
            borderWidth: 1
        },
        plotOptions: {
            scatter: {
                marker: {
                    radius: 5,
                    states: {
                        hover: {
                            enabled: true,
                            lineColor: \'rgb(100,100,100)\'
                        }
                    }
                },
                states: {
                    hover: {
                        marker: {
                            enabled: false
                        }
                    }
                },
                tooltip: {
                    headerFormat: \'<b>{series.name}</b><br>\',
                    pointFormat: \'{point.y} % Victory<br>{point.x} % Defeat\'
                }
            }
        },
        series: [
            <?php print strip_tags(views_embed_view("battles_stats_game_battle_stats" , "panel_pane_12")); ?> 
        ]
    });
});
</script>

<div id="container_oa" style="min-width: 310px; height: 400px; margin: 0 auto"></div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0e67f520-3048-403f-822d-d2fe249ab7ea';
  $display->content['new-0e67f520-3048-403f-822d-d2fe249ab7ea'] = $pane;
  $display->panels['sidebar'][2] = 'new-0e67f520-3048-403f-822d-d2fe249ab7ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_army_stats_page__panel_context_6232efd9-b4bc-48f4-9190-b200c8590ac8';
  $handler->task = 'page';
  $handler->subtask = 'army_stats_page';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Coming Soon',
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
  $display->uuid = '4d98a5ab-d32e-4e88-bf0d-250ad63d45a2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_army_stats_page__panel_context_6232efd9-b4bc-48f4-9190-b200c8590ac8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-69edc410-9116-448a-b554-507bab84a554';
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
  $pane->uuid = '69edc410-9116-448a-b554-507bab84a554';
  $display->content['new-69edc410-9116-448a-b554-507bab84a554'] = $pane;
  $display->panels['contentmain'][0] = 'new-69edc410-9116-448a-b554-507bab84a554';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-69edc410-9116-448a-b554-507bab84a554';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['army_stats_page'] = $page;

  return $pages;

}
