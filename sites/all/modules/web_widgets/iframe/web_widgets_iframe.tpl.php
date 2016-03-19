<?php
/**
 * @file
 * Template for the code what to embed in external sites
 */
?>
<script type="text/javascript">
widgetContext = <?php print $js_variables ?>;
</script>
<?php if (!empty($script_resize_url)): ?>
  <script id="<?php print $wid ?>-resize" src="<?php print $script_resize_url ?>"></script>
<?php endif ?>
<script id="<?php print $wid ?>" src="<?php print $script_url ?>"></script>
