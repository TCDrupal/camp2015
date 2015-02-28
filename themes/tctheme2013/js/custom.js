(function($) {
  Drupal.behaviors.menuMover = {
    attach: function(context, settings) {
      setMenuPosition = function() {
        if ($(window).width() > 740 && !$('body').hasClass('menu-lower')) {
          // Move the menu down.
          var menu = $('.menu-block-tcdrupalblocks-2');
          menu.remove();
          $('#zone-menu .region-inner').html(menu);
          $('#zone-user .region-inner').show();
          removeHamburger();
          $('body').removeClass('menu-upper').addClass('menu-lower');
        }
        else if ($(window).width() < 740 && !$('body').hasClass('menu-upper')) {
          // Move the menu up.
          var menu = $('.menu-block-tcdrupalblocks-2');
          menu.remove();
          $('#zone-user .region-inner').prepend(menu).slideUp();
          insertHamburger();
          $('body').removeClass('menu-lower').addClass('menu-upper');
        }
      }

      insertHamburger = function() {
        $('body').append('<a href="#menu" class="box-shadow-menu">Menu</a>');
        $('a.box-shadow-menu').click(function() {
          removeHamburger();
          var h = $('#zone-user .region-inner').slideToggle();
          return false;
        });
      }

      removeHamburger = function() {
        $('a.box-shadow-menu').remove();
      }

      setMenuPosition();

      $(window).resize(function() {
        setMenuPosition();
      });
    }
  };
})(jQuery);
