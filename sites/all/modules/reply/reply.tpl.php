<?php
/**
 * @file
 * Default theme implementation for a reply.
 */
?>
<div id="reply-<?php print $id ?>" class="panel panel-default">
    <div class="panel-heading">
        <span class="text-muted">
            <span class="hidden-sm hidden-md hidden-lg">by <?php print render($author); ?> on <?php print render($created); ?></span>
            <span class="hidden-xs"><?php print render($created); ?></span>
        </span>
    </div>
    <div class="panel-body">
        <div class="media">
            <div class="pull-left hidden-xs">
                <?php print render($author); ?>
                <?php print render($reply_avatar); ?>
            </div>
            <div class="media-body">
                <?php print render($content); ?>
            </div>
        </div>
    </div>
    <div class="panel-footer text-right">
        <span class="reply-menu"><?php print render($links); ?></span>
    </div>
</div>