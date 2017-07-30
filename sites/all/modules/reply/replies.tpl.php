<?php
/**
 * @file
 * Default theme implementation for replies.
 */
?>
<div>
    <div class="panel panel-default">
        <div class="panel-heading">
            <?php if (!empty($header)) : ?>
                <div class="replies-header">
                    <h3 class="panel-title">Add Comment</h3>
                </div>
            <?php endif; ?>
        </div>

        <div class="panel-body">
            <div>
                <?php if ($reply_form): ?>
                    <?php print render($reply_form) ?>
                <?php endif; ?>

                <?php if ($links): ?>
                    <?php print render($links) ?>
                <?php endif; ?>
            </div>
        </div>
    </div>

    <?php if ($replies = render($replies)): ?>
        <h2 class="pane-title">Comments</h2>
        <?php print $replies; ?>
    <?php endif; ?>

</div>
