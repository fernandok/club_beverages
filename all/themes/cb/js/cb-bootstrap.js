/**
 * @file
 * cb-bootstrap.js
 *
 */
(function($, Drupal){
  /**
   * Bootstrap Nice menu hover.
   */
  Drupal.behaviors.menuhover = {
    attach: function (context, settings) {
      $('ul.navbar-nav .dropdown').hover(
	function(){
          $(this).toggleClass('open');
        }, function(){
           $(this).toggleClass('open');
      });
    }
  };

})(jQuery, Drupal);
