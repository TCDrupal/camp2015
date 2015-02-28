<?php
/**
 * @file
 * tcdrupalmyschedule.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tcdrupalmyschedule_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function tcdrupalmyschedule_flag_default_flags() {
  $flags = array();
  // Exported flag: "My Schedule".
  $flags['my_schedule'] = array(
    'entity_type' => 'node',
    'title' => 'My Schedule',
    'global' => '0',
    'types' => array(
      0 => 'event',
      1 => 'session',
    ),
    'errors' => array(),
    'flag_short' => 'Add to schedule',
    'flag_long' => 'Add this session to your personal schedule',
    'flag_message' => '',
    'unflag_short' => 'Remove from schedule',
    'unflag_long' => 'Remove this session from your personal schedule',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tcdrupalmyschedule',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
