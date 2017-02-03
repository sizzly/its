<?php

/**
 * @file
 * page.vars.php
 */

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function bootstrap_preprocess_page(&$variables) {
    // Add search box
    $side_search_box = drupal_render(drupal_get_form('search_form'));
    $variables['side_search_box'] = $side_search_box;
    // Add variables for user info on side bar
    if ($variables['logged_in']) {
        $user = user_load($variables['user']->uid);
        $message_count = privatemsg_unread_count($user);
        $variables['user_name'] = '<a href="/user">'. $user->name .'</a>';
        $variables['nav_bar_option'] = '<ul class="nav-notification clearfix"><li><a href="/dashboard"><i class="fa fa-tachometer fa-lg"></i></a></li><li><a href="/node/add"><i class="fa fa-plus-square-o fa-lg"></i></a></li><li><a href="/messages"><i class="fa fa-envelope fa-lg"></i><span class="notification-label bounceIn animation-delay4">'. $message_count .'</span></a></li><li class="profile"><a href="/user"><strong>'. $user->name .'</strong></a></li></ul>';
        $variables['logout_button'] = '<a class="btn btn-sm pull-right logoutConfirm_open" href="/user/logout"><i class="fa fa-power-off"></i></a>';
        if ($user->picture) {
            $user_avatar = theme_image_style(
                    array(
                        'style_name' => 'thumbnail',
                        'path' => $user->picture->uri,
                        'attributes' => array(
                            'class' => 'avatar'
                        ),
                        'width' => NULL,
                        'height' => NULL,
                    )
            );
        } else {
            $user_avatar = '<a title="Profile" href=/user><img class="avatar" src="/sites/default/files/default_images/profile.png" /></a>';
            $variables['user_name'] = "Warmonger";
                    }
        $variables['user_block'] = '<div class="user-block clearfix"><a title="Profile" href=/user>'. $user_avatar . '<div class="detail"><ul class="list-inline"><li><strong><a href="/user">'. $user->name .'</a></strong></li></ul></div></div><!-- /user-block -->';
    } else {
        $user_avatar = '<img class="avatar" src="/sites/default/files/default_images/profile.png" />';
        $variables['user_name'] = "Warmonger";
        $variables['logout_button'] = '';
        $variables['nav_bar_option'] = '<ul class="nav-notification clearfix"><li><a href="/user"><strong>Login</strong></a></li><li><a href="/user/register"><strong>Register</strong></a></li>';
        $variables['user_block'] = '<div class="user-block clearfix">' . $user_avatar . '<div class="detail"><ul class="list-inline"><li><a href="/user/register">Register</a></ul><ul class="list-inline"><li><a href="/user">Login</a></li></ul></div></div><!-- /user-block -->';
    }
    // Add information about the number of sidebars.
    if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
        $variables['content_column_class'] = ' class="col-md-9"';
    } elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
        $variables['content_column_class'] = ' class="col-md-9"';
    } else {
        $variables['content_column_class'] = ' class="col-md-12"';
    }

    // Primary nav.
    $variables['primary_nav'] = FALSE;
    if ($variables['main_menu']) {
        // Build links.
        $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
        // Provide default theme wrapper function.
        $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
    }

    // Secondary nav.
    $variables['secondary_nav'] = FALSE;
    if ($variables['secondary_menu']) {
        // Build links.
        $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
        // Provide default theme wrapper function.
        $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
    }

    $variables['navbar_classes_array'] = array('navbar');

    if (theme_get_setting('bootstrap_navbar_position') !== '') {
        $variables['navbar_classes_array'][] = 'navbar-' . theme_get_setting('bootstrap_navbar_position');
    } else {
        $variables['navbar_classes_array'][] = 'container';
    }
    if (theme_get_setting('bootstrap_navbar_inverse')) {
        $variables['navbar_classes_array'][] = 'navbar-inverse';
    } else {
        $variables['navbar_classes_array'][] = 'navbar-default';
    }
}

/**
 * Implements hook_process_page().
 *
 * @see page.tpl.php
 */
function bootstrap_process_page(&$variables) {
    $variables['navbar_classes'] = implode(' ', $variables['navbar_classes_array']);
}
