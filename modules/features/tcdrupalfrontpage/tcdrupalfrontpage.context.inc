<?php
/**
 * @file
 * tcdrupalfrontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tcdrupalfrontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tcdrupal_frontpage';
  $context->description = 'Frontpage only.';
  $context->tag = 'tcdrupal';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_featured-block' => array(
          'module' => 'views',
          'delta' => 'front_featured-block',
          'region' => 'content',
          'weight' => '-28',
        ),
        'views-who_is_coming-block' => array(
          'module' => 'views',
          'delta' => 'who_is_coming-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'tcdrupalblocks-camp_info' => array(
          'module' => 'tcdrupalblocks',
          'delta' => 'camp_info',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage only.');
  t('tcdrupal');
  $export['tcdrupal_frontpage'] = $context;

  return $export;
}
