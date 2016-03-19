// Test for minimal Javascript required by Drupal.
if (document.getElementsByTagName && document.createElement && document.createTextNode && document.documentElement && document.getElementById) {
  var DrupalEmbed = DrupalEmbed || [];
  DrupalEmbed[DrupalEmbed.length] = {
    src: widgetContext['url'],
    wid: widgetContext['widgetid'],
    width: widgetContext['width'],
    height: widgetContext['height'],
    scrolling: widgetContext['scrolling'],
    autoheight: widgetContext['autoheight'],
    autoheight_method: widgetContext['autoheight_method']
  };

  for (var i in DrupalEmbed) {
    if (!DrupalEmbed[i]['processed']) {
      DrupalEmbed[i]['processed'] = true;

      var separator = DrupalEmbed[i].src.indexOf('?') == -1 ? '?' : '&';

      if (undefined===window.widget_count){
        window.widget_count = 0;
      }
      else {
        widget_count++;
      }

      var script = document.getElementById(DrupalEmbed[i].wid);
      script.setAttribute('id', DrupalEmbed[i].wid);

      var iframe = document.createElement('iframe');
      iframe.setAttribute('id', 'widgets-' + widget_count);
      iframe.setAttribute('frameBorder', '0');
      if (DrupalEmbed[i].autoheight) {
        iframe.setAttribute('width', '100%');
      }
      else {
        iframe.setAttribute('height', DrupalEmbed[i].height);
        iframe.setAttribute('width', DrupalEmbed[i].width);
      }
      iframe.setAttribute('src', DrupalEmbed[i].src);
      iframe.setAttribute('scrolling', DrupalEmbed[i].scrolling);

      script.parentNode.insertBefore(iframe, script);
      if (DrupalEmbed[i].autoheight && (typeof window.iFrameResize == 'function')) {
        iFrameResize({checkOrigin:false, heightCalculationMethod: DrupalEmbed[i].autoheight_method});
      }
    }
  }
}
