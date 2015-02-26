<?php
/**
 * @file
 * tcdrupalbase.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tcdrupalbase_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tcdrupal_sitewide';
  $context->description = 'Site wide - All Users';
  $context->tag = 'tcdrupal';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-tcdrupalblocks-2' => array(
          'module' => 'menu_block',
          'delta' => 'tcdrupalblocks-2',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'user_second',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-8',
        ),
        'menu_block-tcdrupalblocks-1' => array(
          'module' => 'menu_block',
          'delta' => 'tcdrupalblocks-1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'mailchimp_lists-tcdrupal_email_list_freeform' => array(
          'module' => 'mailchimp_lists',
          'delta' => 'tcdrupal_email_list_freeform',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'system-powered-by' => array(
          'module' => 'system',
          'delta' => 'powered-by',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site wide - All Users');
  t('tcdrupal');
  $export['tcdrupal_sitewide'] = $context;

  return $export;
}
