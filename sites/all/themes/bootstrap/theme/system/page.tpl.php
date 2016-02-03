<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<!-- Overlay Div -->
<a href="" id="theme-setting-icon"><i class="fa fa-cog fa-lg"></i></a>
<div id="theme-setting">
    <div class="title">
        <strong class="no-margin">Skin Color</strong>
    </div>
    <div class="theme-box">
        <a class="theme-color" style="background:#323447" id="default"></a>
        <a class="theme-color" style="background:#efefef" id="skin-1"></a>
        <a class="theme-color" style="background:#a93922" id="skin-2"></a>
        <a class="theme-color" style="background:#3e6b96" id="skin-3"></a>
        <a class="theme-color" style="background:#635247" id="skin-4"></a>
        <a class="theme-color" style="background:#3a3a3a" id="skin-5"></a>
        <a class="theme-color" style="background:#495B6C" id="skin-6"></a>
    </div>
    <div class="title">
        <strong class="no-margin">Sidebar Menu</strong>
    </div>
    <div class="theme-box">
        <label class="label-checkbox">
            <input type="checkbox" checked id="fixedSidebar">
            <span class="custom-checkbox"></span>
            Fixed Sidebar
        </label>
    </div>
</div><!-- /theme-setting -->

<div id="wrapper" class="preload">

    <div id="top-nav" class="skin-6 fixed">
        <div class="brand">
            <span>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                    <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
            </span>
            <span class="text-toggle"> iToysoldiers</span>
        </div>
        <button type="button" class="navbar-toggle pull-left" id="sidebarToggle">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
        </button>
        <button type="button" class="navbar-toggle pull-left hide-menu" id="menuToggle">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
        </button>
        <?php print $nav_bar_option; ?>
    </div>

    <aside class="fixed">			
        <div class="sidebar-inner scrollable-sidebar">
            <div class="size-toggle">
                <a class="btn btn-sm" id="sizeToggle">
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </a>
                <a class="btn btn-sm pull-right logoutConfirm_open"  href="/user/logout">
                    <i class="fa fa-power-off"></i>
                </a>
            </div><!-- /size-toggle -->	
            <div class="user-block clearfix">
                <?php print $user_avatar; ?>
                <div class="detail">
                    <ul class="list-inline">
                        <li><strong><?php print $user_name; ?></strong></li>
                    </ul>
                    <ul class="list-inline">
                        <li><a href="/user">Profile</a></li>
                    </ul>
                </div>
            </div><!-- /user-block -->
            <div class="search-block">
                <div class="input-group">
                    <?php print $side_search_box; ?>
                </div><!-- /input-group -->
            </div><!-- /search-block -->
            <div class="main-menu">
                <ul>
                    <li>
                        <a href="/">
                            <span class="menu-icon">
                                <i class="fa fa-home fa-lg"></i> 
                            </span>
                            <span class="text">
                                Home
                            </span>
                            <span class="menu-hover"></span>
                        </a>
                    </li>
                    <li class="openable open">
                        <a href="/wargaming-decorations">
                            <span class="menu-icon">
                                <i class="fa fa-certificate fa-lg"></i> 
                            </span>
                            <span class="text">
                                Decorations
                            </span>
                            <span class="menu-hover"></span>
                        </a>
                        <ul class="submenu">
                            <li><a href="/wargaming-decorations"><span class="submenu-label">Decorations</span></a></li>
                            <li><a href="/wargaming-decorations/renown"><span class="submenu-label">Renown</span></a></li>
                            <li><a href="/wargaming-decorations/achievements"><span class="submenu-label">Achievements</span></a></li>
                            <li><a href="/wargaming-decorations/medals"><span class="submenu-label">Medals</span></a></li>
                            <li><a href="/wargaming-decorations/leaderboards"><span class="submenu-label">Leaderboards</span></a></li>
                        </ul>
                    </li>
                    <li class="openable open">
                        <a href="/battle-reports">
                            <span class="menu-icon">
                                <i class="fa fa-fire fa-lg"></i> 
                            </span>
                            <span class="text">
                                Battles
                            </span>
                            <span class="menu-hover"></span>
                        </a>
                        <ul class="submenu">
                            <li><a href="/battle-reports"><span class="submenu-label">Battles</span></a></li>
                            <li><a href="/battle-reports/stats"><span class="submenu-label">Stats</span></a></li>
                            <li><a href="/battle-reports/battle-meta"><span class="submenu-label">Meta</span></a></li>
                        </ul>
                    </li>
                    <li class="openable open">
                        <a href="/order-of-battle">
                            <span class="menu-icon">
                                <i class="fa fa-arrows-alt fa-lg"></i> 
                            </span>
                            <span class="text">
                                Order of Battle
                            </span>
                            <span class="menu-hover"></span>
                        </a>
                        <ul class="submenu">
                            <li><a href="/order-of-battle"><span class="submenu-label">Order of Battle</span></a></li>
                            <li><a href="/order-of-battle/player-armies"><span class="submenu-label">Armies</span></a></li>
                            <li><a href="/order-of-battle/players"><span class="submenu-label">Players</span></a></li>
                            <li><a href="/order-of-battle/listcrit"><span class="submenu-label">List Crit</span></a></li>
                            <li><a href="/order-of-battle/gaming-clubs"><span class="submenu-label">Gaming Clubs</span></a></li>
                        </ul>
                    </li>
                    <li class="openable open">
                        <a href="/theater">
                            <span class="menu-icon">
                                <i class="fa fa-map fa-lg"></i> 
                            </span>
                            <span class="text">
                                Theater
                            </span>
                            <span class="menu-hover"></span>
                        </a>
                        <ul class="submenu">
                            <li><a href="/theater"><span class="submenu-label">Theaters</span></a></li>
                            <li><a href="/theater/battlefield"><span class="submenu-label">Battlefields</span></a></li>
                            <li><a href="/theater/events"><span class="submenu-label">Events</span></a></li>
                            <li><a href="/theater/narrative-campaigns"><span class="submenu-label">Campaigns</span></a></li>
                            <li><a href="/theater/warzone"><span class="submenu-label">War Zones</span></a></li>
                        </ul>
                    </li>
                    <li class="openable open">
                        <a href="/munitions">
                            <span class="menu-icon">
                                <i class="fa fa-bomb fa-lg"></i> 
                            </span>
                            <span class="text">
                                Munitions
                            </span>
                            <span class="menu-hover"></span>
                        </a>
                        <ul class="submenu">
                            <li><a href="/munitions"><span class="submenu-label">Munitions</span></a></li>
                            <li><a href="/munitions/modeling-projects"><span class="submenu-label">Modeling Projects</span></a></li>
                            <li><a href="/munitions/gaming-stores"><span class="submenu-label">Gaming Stores</span></a></li>
                        </ul>
                    </li>
                    <li class="openable open">
                        <a href="/gazetteer">
                            <span class="menu-icon">
                                <i class="fa fa-database fa-lg"></i> 
                            </span>
                            <span class="text">
                                Gazetteer
                            </span>
                            <span class="menu-hover"></span>
                        </a>
                        <ul class="submenu">
                            <li><a href="/gazetteer"><span class="submenu-label">Gazetteer</span></a></li>
                            <li><a href="/blog"><span class="submenu-label">Blogs</span></a></li>
                            <li><a href="/galleries"><span class="submenu-label">Galleries</span></a></li>
                            <li><a href="/forum"><span class="submenu-label">Discussions</span></a></li>
                        </ul>
                    </li>
                </ul>
                

                <div class="alert alert-info">
                    <ins data-revive-zoneid="5" data-revive-id="4f7dfffe8e8e5dcd2cbcc3bb4563f765"></ins>
                    <script async src="//ads.itoysoldiers.com/www/delivery/asyncjs.php"></script> 
                </div>
            </div><!-- /main-menu -->
        </div><!-- /sidebar-inner scrollable-sidebar -->
    </aside>

    <div id="main-container">
        <div class="padding-md main-content">

                <div class="row">	
                    <div<?php print $content_column_class; ?>>
                        <section>
                            <?php if (!empty($page['highlighted'])): ?>
                                <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
                            <?php endif; ?>
                            <?php
                            if (!empty($breadcrumb)): print $breadcrumb;
                            endif;
                            ?>
                            <a id="main-content"></a>
                            <?php print render($title_prefix); ?>
                            <?php if (!empty($title)): ?>
                                <h1 class="page-header"><?php print $title; ?></h1>
                            <?php endif; ?>
                            <?php print render($title_suffix); ?>
                            <?php print $messages; ?>
                            <?php if (!empty($tabs)): ?>
                                <?php print render($tabs); ?>
                            <?php endif; ?>
                            <?php if (!empty($page['help'])): ?>
                                <?php print render($page['help']); ?>
                            <?php endif; ?>
                            <?php if (!empty($action_links)): ?>
                                <ul class="action-links"><?php print render($action_links); ?></ul>
                            <?php endif; ?>
                            <?php print render($page['content']); ?>
                            <div class="seperator"></div>
                            <div class="seperator"></div>
                        </section>
                    </div><!-- /.col -->
                    <?php if (!empty($page['sidebar_second'])): ?>
                        <div class="col-md-4">
                            <?php print render($page['sidebar_second']); ?>
                            <div class="seperator"></div>
                            <div class="seperator"></div>
                        </div><!-- /.col -->
                    <?php endif; ?>
                </div><!-- /.row -->
                <div class="row">
                    <div class="col-xs-12 clearfix">

                        <?php print render($page['footer']); ?>

                    </div>
                </div>

        </div><!-- /.padding-md -->
    </div><!-- /main-container -->
</div><!-- /wrapper -->
<?php drupal_add_js("sites/all/libraries/lazyads/lazyad-loader.js"); ?>
<?php drupal_add_js("sites/all/themes/bootstrap/js/jquery.slimscroll.min.js", array('type' => 'file', 'scope' => 'footer', 'weight' => 5)); ?>
<?php drupal_add_js("sites/all/themes/bootstrap/js/jquery.cookie.min.js", array('type' => 'file', 'scope' => 'footer', 'weight' => 5)); ?>
<?php drupal_add_js("sites/all/themes/bootstrap/js/modernizr.min.js", array('type' => 'file', 'scope' => 'footer', 'weight' => 5)); ?>
<?php drupal_add_js("sites/all/themes/bootstrap/js/pace.min.js", array('type' => 'file', 'scope' => 'footer', 'weight' => 5)); ?>
<?php drupal_add_js("sites/all/themes/bootstrap/js/jquery.popupoverlay.min.js", array('type' => 'file', 'scope' => 'footer', 'weight' => 5)); ?>
<?php drupal_add_js("sites/all/themes/bootstrap/js/endless/endless_form.js", array('type' => 'file', 'scope' => 'footer', 'weight' => 5)); ?>
<?php drupal_add_js("sites/all/themes/bootstrap/js/endless/endless.js", array('type' => 'file', 'scope' => 'footer', 'weight' => 5)); ?>

