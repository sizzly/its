/**
 * @file
 * Provides JavaScript for Paragraphs.
 */

(function ($) {

  /**
   * Allows submit buttons in entity forms to trigger uploads by undoing
   * work done by Drupal.behaviors.fileButtons.
   */
  Drupal.behaviors.paragraphs = {
    attach: function (context) {
      if (Drupal.file) {
        $('input.paragraphs-add-more-submit', context).unbind('mousedown', Drupal.file.disableFields);
      }
    },
    detach: function (context) {
      if (Drupal.file) {
        $('input.form-submit', context).bind('mousedown', Drupal.file.disableFields);
      }
    }
  };

  /**
   * Enable Expand/Collapse feature for paragraph bundles.
   * Show the name & type of each bundle and hide contents inside those.
   */
  Drupal.behaviors.paragraphsCollapse = {
    attach: function (context, settings) {
      var collapsefuncs = {
        expand : function(elements) {
          elements.slideUp();
        },
        collapse : function(elements) {
          elements.slideDown();
        }
      };

      var showhideParagraphs = function(element, action) {
        // Fetch all paragraph bundles.
        var paragraph_bundles = $(element).closest('table').find('td.paragraph-bundle-content');
        var paragraph_elements;
        // Except the first div, show/hide others.
        paragraph_bundles.each(function () {
          if ($(this).find('div.ajax-new-content').length) {
            paragraph_elements = $(this).find('div.ajax-new-content div:not(:first)');
          }
          else {
            paragraph_elements = $(this).find('div:not(:first)');
          }
          // Invoke collapse action.
          collapsefuncs[action](paragraph_elements);
        });
      };

      $('span.paragraphs-collapsible a', context).once("paragraphs", function() {
        $(this, context).click(function(event) {
          // Prevent the default click event.
          event.preventDefault();
          if ($(this).hasClass('collapse')) {
            showhideParagraphs(this, 'collapse');
            $(this).removeClass('collapse').addClass('expand');
            $(this).text(Drupal.t('Collapse All'));
          }
          else {
            showhideParagraphs(this, 'expand');
            $(this).removeClass('expand').addClass('collapse');
            $(this).text(Drupal.t('Expand All'));
          }
        });
      });
    }
  };

})(jQuery);
