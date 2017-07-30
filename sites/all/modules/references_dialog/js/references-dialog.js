(function ($) {
  'use strict';

  var $window = $(window);

  Drupal.behaviors.referencesDialog = {
    attach: function (context, settings) {
      // Add appropriate classes on all fields that should have it. This is
      // necessary since we don't actually know what markup we are dealing with.
      if (typeof settings.ReferencesDialog !== 'undefined') {
        $.each(settings.ReferencesDialog.fields, function (key, widget_settings) {
          $('.' + key + ' a.references-dialog-activate', context).click(function (e) {
            e.preventDefault();

            // Store the item that was clicked on so focus can return to it afterwards.
            Drupal.ReferencesDialog.link_clicked = $(this);

            Drupal.ReferencesDialog.open($(this).attr('href'), $(this).html());
            Drupal.ReferencesDialog.entityIdReceived = function (entity_type, entity_id, label) {
              if (typeof widget_settings.format !== 'undefined') {
                var value = widget_settings.format
                  .replace('$label', label)
                  .replace('$entity_id', entity_id)
                  .replace('$entity_type', entity_type);
              }
              // If we have a callback path, let's invoke that.
              if (typeof widget_settings.callback_path !== 'undefined') {
                var entity_info = {
                  label: label,
                  entity_id: entity_id,
                  entity_type: entity_type
                };
                Drupal.ReferencesDialog.invokeCallback(widget_settings.callback_path, entity_info, widget_settings.callback_settings);
              }
              // If we have a target, use that.
              else if (typeof widget_settings.target !== 'undefined') {
                var target = $('#' + widget_settings.target);
                target.val(value);
                target.change();
              }
              // If we have none of the above, we just insert the value in the item
              // that invoked this.
              else {
                var key_el = $('#' + key);
                key_el.val(value);
                key_el.change();
              }
            }
            return false;
          });
        });
      }
    }
  };

  /**
   * Our dialog object. Can be used to open a dialog to anywhere.
   */
  Drupal.ReferencesDialog = {
    dialog_open: false,
    link_clicked: null,
    open_dialog: null
  }

  Drupal.ReferencesDialog.invokeCallback = function (callback, entity_info, settings) {
    if (typeof settings == 'object') {
      entity_info.settings = settings;
    }
    $.post(callback, entity_info);
  }

  /**
   * If this property is set to be a function, it
   * will be called when an entity is recieved from an overlay.
   */
  Drupal.ReferencesDialog.entityIdReceived = null;

  /**
   * Open a dialog window.
   * @param string href the link to point to.
   */
  Drupal.ReferencesDialog.open = function (href, title) {
    if (!this.dialog_open) {
      // Add render references dialog, so that we know that we should be in a
      // dialog.
      href += (href.indexOf('?') > -1 ? '&' : '?') + 'render=references-dialog';
      // Get the current window size and do 75% of the width and 75% of the height.
      // @todo Add settings for this so that users can configure this by themselves.
      var window_width = $window.width() / 100*75;
      var window_height = $window.height() / 100*75;

      // Create a bootstrap modal if Bootstrap functionality exists, otherwise use default.
      if (typeof($.fn.modal) !== 'undefined') {
        var $modal = $('<div class="modal references-dialog-modal" role="dialog" aria-labelledby="modal-title" tabindex="-1"><div class="modal-dialog" role="document"><div class="modal-content"><div class="modal-header"><button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button><h4 id="modal-title" class="modal-title">' + title + '</h4></div><div class="modal-body"><iframe class="references-dialog-iframe" src="' + href + '"></iframe></div></div></div></div>');


        // Append the modal to the page, hidden.
        $('body').append($modal);

        // Dynamically adjust height of the modal body so the iFrame isn't hidden.
        $modal.find('.modal-body').css({
          height: $( window ).height() * 0.8,
          width: '100%'
        });

        // CSS that styles the iFrame a bit better than default.
        $modal.find('iframe').css({
          border: 'none',
          height: '100%',
          width: '100%'
        });

        // Accessibility: Focus back on the link that was used to trigger the modal.
        $modal.on('hidden.bs.modal', function (e) {
          if (Drupal.ReferencesDialog.link_clicked !== null) {
            Drupal.ReferencesDialog.link_clicked.focus();
          }
        });

        // Open dynamic modal using Twitter Bootstrap.
        $modal.modal();
      }
      else {
        this.open_dialog = $('<iframe class="references-dialog-iframe" src="' + href + '"></iframe>').dialog({
          width: window_width,
          height: window_height,
          modal: true,
          resizable: false,
          position: ['center', 50],
          title: title,
          close: function (event, ui) {
            $('body').removeClass('references-dialog-no-scroll');
            if (Drupal.ReferencesDialog.dialog_open) {
              Drupal.ReferencesDialog.dialog_open = false;
              Drupal.ReferencesDialog.close();
            }
          }
        }).width(window_width-10).height(window_height);

        $window.bind('resize scroll', function () {
          // Move the dialog the main window moves.
          if (typeof Drupal.ReferencesDialog == 'object' && Drupal.ReferencesDialog.open_dialog != null) {
            Drupal.ReferencesDialog.open_dialog.
              dialog('option', 'position', ['center', 10]);
            Drupal.ReferencesDialog.setDimensions();
          }
        });
        this.dialog_open = true;
        $('body').addClass('references-dialog-no-scroll');
      }
    }
  }

  /**
   * Set dimensions of the dialog depending on the current window size
   * and scroll position.
   */
  Drupal.ReferencesDialog.setDimensions = function () {
    if (typeof Drupal.ReferencesDialog == 'object') {
      var window_width = $window.width() / 100*75;
      var window_height = $window.height() / 100*75;
      this.open_dialog.
        dialog('option', 'width', window_width).
        dialog('option', 'height', window_height).
        width(window_width-10).height(window_height);
    }
  }

  /**
   * Close the dialog and provide an entity id and a title
   * that we can use in various ways.
   */
  Drupal.ReferencesDialog.close = function (entity_type, entity_id, title) {

    // Check for bootstrap modal if Bootstrap functionality exists, otherwise use default.
    if (typeof($.fn.modal) !== 'undefined') {
      this.dialog_open = false;
      if (typeof this.entityIdReceived == 'function') {
        this.entityIdReceived(entity_type, entity_id, title);
        $('.references-dialog-modal').modal('hide');
      }
    }
    else {
      if (this.dialog_open) {
        this.dialog_open = false;
        this.open_dialog.dialog('close');
        // Call our entityIdReceived function if we have one.
        // this is used as an event.
        if (typeof this.entityIdReceived == 'function') {
          this.entityIdReceived(entity_type, entity_id, title);
        }
      }
      this.open_dialog.dialog('destroy');
      this.open_dialog = null;
    }
  }

}(jQuery));
