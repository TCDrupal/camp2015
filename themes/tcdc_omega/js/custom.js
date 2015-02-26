(function($) {
  $(function() {

	$("div.search-form").hide();

      $('.search-toggle').click(function() {
          $('div.search-form').fadeToggle('slow', function() {
          });
      });
      
  });
})(jQuery);
