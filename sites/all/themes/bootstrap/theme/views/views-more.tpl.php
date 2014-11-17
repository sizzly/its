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

<div class="more-link text-right">
  <a href="<?php print $more_url ?>">
    <?php print $link_text; ?> <span class="glyphicon glyphicon-circle-arrow-right"></span>
  </a>
</div>
