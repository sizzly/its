<?php
/**
 * @file
 * Theme the more link.
 *
 * - $view: The view object.
 * - $more_url: the url for the more link.
 * - $link_text: the text for the more link.
 *
 * @ingroup views_templates
 */
?>

<div class="clearfix"></div>
<div class="col-md-12">
    <span class="font-15">
        <a href="<?php print $more_url ?>">
            <strong><?php print $link_text; ?> <span class="glyphicon glyphicon-circle-arrow-right"></span></strong>
        </a>
    </span>
</div>