<?php
/**
 * @file
 * Default theme implementation for a reply.
 */
?>
<li id="reply-<?php print $id ?>" class="media replyblock">
    <div class="media-left">
    <?php print render($reply_avatar); ?>
</div>
<div class="media-body mediabuffer">
    <div class="media-heading">
        <?php print render($author); ?>
        <small class="text-muted">
            <?php print render($created); ?> / <?php print render($links); ?> 
        </small>
    </div>
    <p><?php print render($content); ?></p>
</div>
</li>
