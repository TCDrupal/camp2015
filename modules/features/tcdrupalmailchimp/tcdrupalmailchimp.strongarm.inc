<?php
/**
 * @file
 * tcdrupalmailchimp.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tcdrupalmailchimp_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_api_key';
  $strongarm->value = '34de17a827a7a6bdd59ffe4321ab3817-us4';
  $export['mailchimp_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_batch_limit';
  $strongarm->value = '100';
  $export['mailchimp_batch_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_use_secure';
  $strongarm->value = 1;
  $export['mailchimp_use_secure'] = $strongarm;

  return $export;
}
