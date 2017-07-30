<?php
/**
 * @file
 * itsTheme theme implementation to display a node.
 */
?>

<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <?php if ((!$page && !empty($title)) || !empty($title_prefix) || !empty($title_suffix) || $display_submitted): ?>
        <div class="panel panel-default">
            <div class="panel-heading">
                <h2 class="panel-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
            </div>
            <div class="panel-body">
    <?php endif; ?>
                
    <?php if ($display_submitted): ?>
        <span class="submitted">
            <?php print $user_picture; ?>
            <?php print $submitted; ?>
        </span>
    <?php endif; ?>
    <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    print render($content);
    ?>
    <?php if ((!$page && !empty($title)) || !empty($title_prefix) || !empty($title_suffix) || $display_submitted): ?>
                </div>
                <?php
        // Only display the wrapper div if there are tags or links.
        $field_tags = render($content['field_tags']);
        $links = render($content['links']);
        if ($field_tags || $links):
    ?>
            <div class="panel-footer text-right">
        <span>
            <?php print $field_tags; ?>
            <?php print $links; ?>
        </span>
    </div>
                          <?php endif; ?>
    </div>

    <?php endif; ?>
</article>
