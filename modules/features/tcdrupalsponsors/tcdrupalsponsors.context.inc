<?php
/**
 * @file
 * tcdrupalsponsors.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tcdrupalsponsors_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tcdrupal_sponsors';
  $context->description = 'Everything but the sponsors page.';
  $context->tag = 'tcdrupal';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~sponsors' => '~sponsors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_1',
          'region' => 'sponsors',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Everything but the sponsors page.');
  t('tcdrupal');
  $export['tcdrupal_sponsors'] = $context;

  return $export;
}
