<?php
/**
 * @file
 * core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_all-clubs:theater/gaming-clubs/list.
  $menu_links['main-menu_all-clubs:theater/gaming-clubs/list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'theater/gaming-clubs/list',
    'router_path' => 'theater/gaming-clubs/list',
    'link_title' => 'All Clubs',
    'options' => array(
      'attributes' => array(
        'title' => 'List of all Gaming Clubs on iToysoldiers',
      ),
      'identifier' => 'main-menu_all-clubs:theater/gaming-clubs/list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_gaming-clubs:theater/gaming-clubs',
  );
  // Exported menu link: main-menu_army-lists:gaming/listcrit.
  $menu_links['main-menu_army-lists:gaming/listcrit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gaming/listcrit',
    'router_path' => 'gaming/listcrit',
    'link_title' => 'Army Lists',
    'options' => array(
      'identifier' => 'main-menu_army-lists:gaming/listcrit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_gaming:gaming',
  );
  // Exported menu link: main-menu_army-profiles:narrative/player-armies.
  $menu_links['main-menu_army-profiles:narrative/player-armies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'narrative/player-armies',
    'router_path' => 'narrative/player-armies',
    'link_title' => 'Army Profiles',
    'options' => array(
      'identifier' => 'main-menu_army-profiles:narrative/player-armies',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_narrative:narrative',
  );
  // Exported menu link: main-menu_battle-reports:gaming/battle-reports.
  $menu_links['main-menu_battle-reports:gaming/battle-reports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gaming/battle-reports',
    'router_path' => 'gaming/battle-reports',
    'link_title' => 'Battle Reports',
    'options' => array(
      'identifier' => 'main-menu_battle-reports:gaming/battle-reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_gaming:gaming',
  );
  // Exported menu link: main-menu_battlefields:theater/battlefield.
  $menu_links['main-menu_battlefields:theater/battlefield'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'theater/battlefield',
    'router_path' => 'theater/battlefield',
    'link_title' => 'Battlefields',
    'options' => array(
      'identifier' => 'main-menu_battlefields:theater/battlefield',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_theater:theater',
  );
  // Exported menu link: main-menu_campaigns:narrative/campaigns.
  $menu_links['main-menu_campaigns:narrative/campaigns'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'narrative/campaigns',
    'router_path' => 'narrative/campaigns',
    'link_title' => 'Campaigns',
    'options' => array(
      'identifier' => 'main-menu_campaigns:narrative/campaigns',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_narrative:narrative',
  );
  // Exported menu link: main-menu_community:community.
  $menu_links['main-menu_community:community'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community',
    'router_path' => 'community',
    'link_title' => 'Community',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_community:community',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:theater/events.
  $menu_links['main-menu_events:theater/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'theater/events',
    'router_path' => 'theater/events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:theater/events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_theater:theater',
  );
  // Exported menu link: main-menu_galleries:community/galleries.
  $menu_links['main-menu_galleries:community/galleries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/galleries',
    'router_path' => 'community/galleries',
    'link_title' => 'Galleries',
    'options' => array(
      'identifier' => 'main-menu_galleries:community/galleries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_community:community',
  );
  // Exported menu link: main-menu_gaming-clubs:theater/gaming-clubs.
  $menu_links['main-menu_gaming-clubs:theater/gaming-clubs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'theater/gaming-clubs',
    'router_path' => 'theater/gaming-clubs',
    'link_title' => 'Gaming Clubs',
    'options' => array(
      'identifier' => 'main-menu_gaming-clubs:theater/gaming-clubs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_theater:theater',
  );
  // Exported menu link: main-menu_gaming:gaming.
  $menu_links['main-menu_gaming:gaming'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gaming',
    'router_path' => 'gaming',
    'link_title' => 'Gaming',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_gaming:gaming',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_leaderboards:community/leaderboards.
  $menu_links['main-menu_leaderboards:community/leaderboards'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/leaderboards',
    'router_path' => 'community/leaderboards',
    'link_title' => 'Leaderboards',
    'options' => array(
      'identifier' => 'main-menu_leaderboards:community/leaderboards',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_community:community',
  );
  // Exported menu link: main-menu_modelling:modelling.
  $menu_links['main-menu_modelling:modelling'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'modelling',
    'router_path' => 'modelling',
    'link_title' => 'Modelling',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_modelling:modelling',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -20,
    'customized' => 1,
  );
  // Exported menu link: main-menu_narrative:narrative.
  $menu_links['main-menu_narrative:narrative'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'narrative',
    'router_path' => 'narrative',
    'link_title' => 'Narrative',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_narrative:narrative',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: main-menu_projects:modelling/projects.
  $menu_links['main-menu_projects:modelling/projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'modelling/projects',
    'router_path' => 'modelling/projects',
    'link_title' => 'Projects',
    'options' => array(
      'identifier' => 'main-menu_projects:modelling/projects',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_modelling:modelling',
  );
  // Exported menu link: main-menu_theater:theater.
  $menu_links['main-menu_theater:theater'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'theater',
    'router_path' => 'theater',
    'link_title' => 'Theater',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_theater:theater',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_timeline:gaming/listcrit/timeline.
  $menu_links['main-menu_timeline:gaming/listcrit/timeline'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gaming/listcrit/timeline',
    'router_path' => 'gaming/listcrit/timeline',
    'link_title' => 'Timeline',
    'options' => array(
      'identifier' => 'main-menu_timeline:gaming/listcrit/timeline',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_army-lists:gaming/listcrit',
  );
  // Exported menu link: main-menu_unacknowledged:gaming/battle-reports/unacknowledged-battles.
  $menu_links['main-menu_unacknowledged:gaming/battle-reports/unacknowledged-battles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gaming/battle-reports/unacknowledged-battles',
    'router_path' => 'gaming/battle-reports/unacknowledged-battles',
    'link_title' => 'Unacknowledged',
    'options' => array(
      'identifier' => 'main-menu_unacknowledged:gaming/battle-reports/unacknowledged-battles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_battle-reports:gaming/battle-reports',
  );
  // Exported menu link: navigation_blogs:user/%/community/blogs.
  $menu_links['navigation_blogs:user/%/community/blogs'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'user/%/community/blogs',
    'router_path' => 'user/%/community/blogs',
    'link_title' => 'Blogs',
    'options' => array(
      'identifier' => 'navigation_blogs:user/%/community/blogs',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_community:user/%/community',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('All Clubs');
  t('Army Lists');
  t('Army Profiles');
  t('Battle Reports');
  t('Battlefields');
  t('Blogs');
  t('Campaigns');
  t('Community');
  t('Events');
  t('Galleries');
  t('Gaming');
  t('Gaming Clubs');
  t('Leaderboards');
  t('Modelling');
  t('Narrative');
  t('Projects');
  t('Theater');
  t('Timeline');
  t('Unacknowledged');

  return $menu_links;
}
