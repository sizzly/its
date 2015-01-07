<?php
/**
 * @file
 * Template for Panopoly its.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
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
    <div class="col-md-3 col-sm-3">
      <?php print $content['sidebar']; ?>
    </div>
    <div class="col-md-9 col-sm-9">
      <div class="row">
        <div class="col-xs-12">
          <?php print $content['contentmaintop']; ?>
        </div>
        <div class="clearfix">
          <div class="col-md-6">
            <?php print $content['contentmainleft']; ?>
          </div>
          <div class="col-md-6">
            <?php print $content['contentmainright']; ?>
          </div>
        </div>
        <div class="col-xs-12">
          <?php print $content['contentmainbottom']; ?>
        </div>
      </div>
    </div>
  </div>

  <?php if ($content['footer']): ?>
    <div class="row">
      <div class="col-md-12 bottom panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['footer']; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
</div><!-- /.moscone -->
