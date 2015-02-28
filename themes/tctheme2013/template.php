<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function tctheme2013_preprocess_page(&$variables) {
  if ($variables['is_front']) {
    drupal_add_css(drupal_get_path('theme', 'tctheme2013') . '/css/navlist.css');
    drupal_add_js(drupal_get_path('theme', 'tctheme2013') . '/js/rotator.js', array('scope' => 'footer'));
  }
}

function tctheme2013_form_session_node_form_alter(&$form, &$form_state) {

}

function tctheme2013_commerce_cart_empty_block() {
  return '';
}

