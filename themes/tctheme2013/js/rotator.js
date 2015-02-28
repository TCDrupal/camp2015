/**
 * @file
 * Javascript for rotating tabs on front-page.
 */

/**
 * This is just a super simple rotator for the tabs on the front page with NO
 * bells and/or whistles.
 */
(function($) {
  Drupal.behaviors.tctheme2013rotator = {
    attach: function(context, settings) {
      var delay = 120000;
      var tabs = $('.quicktabs-tabs li a');
      var currentIndex = 0;

      function next() {
        // Move to next tab.
        var nextIndex = currentIndex + 1;
        if (nextIndex >= tabs.length) nextIndex = 0;
        tabs.eq(nextIndex).click();
        currentIndex = nextIndex;
      }

      function doAuto() {
        next();
        setTimeout(doAuto, delay);
      }
      setTimeout(doAuto, delay);
    }
  }
})(jQuery);