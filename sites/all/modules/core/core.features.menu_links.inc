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
  // Exported menu link: user-menu_add-content:node/add.
  $menu_links['user-menu_add-content:node/add'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
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
      'identifier' => 'user-menu_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_comments:dashboard/comments.
  $menu_links['user-menu_comments:dashboard/comments'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'dashboard/comments',
    'router_path' => 'dashboard/comments',
    'link_title' => 'Comments',
    'options' => array(
      'identifier' => 'user-menu_comments:dashboard/comments',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_dashboard:dashboard.
  $menu_links['user-menu_dashboard:dashboard'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'Dashboard',
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
      'identifier' => 'user-menu_dashboard:dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
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
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_manage-war-zones:dashboard/manage-war-zones.
  $menu_links['user-menu_manage-war-zones:dashboard/manage-war-zones'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'dashboard/manage-war-zones',
    'router_path' => 'dashboard/manage-war-zones',
    'link_title' => 'Manage War Zones',
    'options' => array(
      'identifier' => 'user-menu_manage-war-zones:dashboard/manage-war-zones',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_messages:messages.
  $menu_links['user-menu_messages:messages'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Messages',
    'options' => array(
      'identifier' => 'user-menu_messages:messages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_my-points:myuserpoints.
  $menu_links['user-menu_my-points:myuserpoints'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'myuserpoints',
    'router_path' => 'myuserpoints',
    'link_title' => 'My !points',
    'options' => array(
      'identifier' => 'user-menu_my-points:myuserpoints',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_register:user/register.
  $menu_links['user-menu_register:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
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
      'identifier' => 'user-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_replies:dashboard/replies.
  $menu_links['user-menu_replies:dashboard/replies'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'dashboard/replies',
    'router_path' => 'dashboard/replies',
    'link_title' => 'Replies',
    'options' => array(
      'identifier' => 'user-menu_replies:dashboard/replies',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_view-profile:user.
  $menu_links['user-menu_view-profile:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'View Profile',
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
      'identifier' => 'user-menu_view-profile:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_my-account:user',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content');
  t('Comments');
  t('Community');
  t('Dashboard');
  t('Gaming');
  t('Log out');
  t('Login');
  t('Manage War Zones');
  t('Messages');
  t('Modelling');
  t('My !points');
  t('Narrative');
  t('Register');
  t('Replies');
  t('Theater');
  t('View Profile');

  return $menu_links;
}
