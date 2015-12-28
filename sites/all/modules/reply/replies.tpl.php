<?php
/**
 * @file
 * Default theme implementation for replies.
 */
?>
<div class="replies-wrapper">
    <div class="panel panel-default">
        <div class="panel-body">
    <?php if (!empty($header)) : ?>
        <div class="replies-header">
            <h3><?php print $header ?></h3>
        </div>
    <?php endif; ?>
    <?php if ($reply_form): ?>
        <div class="replies-form">
            <?php print render($reply_form) ?>
        </div>
    <?php endif; ?>
    <?php if ($replies = render($replies)): ?>
    <h4>Replies</h4>
        <ul class="media-list comment-list">
            <?php print $replies; ?>
        </ul>
    <?php endif; ?>
    <?php if ($links): ?>
        <div class="replies-links">
            <?php print render($links) ?>
        </div>
    <?php endif; ?>
        </div>
    </div>
</div>
