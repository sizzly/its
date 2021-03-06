<?php
/**
 * @file
 * Template for Panopoly Moscone.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display moscone clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['header']): ?>
    <div class="row">
      <div class="col-md-12 top panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header']; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
  <div class="row">
    <div class="col-md-8 sidebar panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['sidebar']; ?>
<div class="seperator"></div>
      </div>
    </div>
    <div class="col-md-4 content panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['contentmain']; ?>
<div class="seperator"></div>
      </div>
    </div>
  </div>
  <?php if ($content['footer']): ?>
    <div class="row">
      <div class="col-md-12 bottom panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['footer']; ?>
<div class="seperator"></div>
        </div>
      </div>
    </div>
  <?php endif; ?>
</div><!-- /.moscone -->
