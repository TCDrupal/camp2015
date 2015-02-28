<?php
/**
 * @file
 * tcdrupalschedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tcdrupalschedule_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tcdrupalschedule_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tcdrupalschedule_node_info() {
  $items = array(
    'schedule_item' => array(
      'name' => t('Schedule Item'),
      'base' => 'node_content',
      'description' => t('Add a non-session item to the schedule.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Session Title'),
      'help' => t('<p>This is going to be our biggest event yet, and in order to make it so we need your awesome Drupal sessions! Submit your proposal below and our elite team of camp organizers will pick sessions which benefit and excite attendees from the Drupal community, from all topics of interest and skill levels. Then organize them in to tracks as best we can.</p>

<p>Sessions will be 50 minutes long and we\'ll have projectors so plan accordingly. Though if you do finish early you can always use the time leftover to field questions from the audience.</p>'),
    ),
    'timeslot' => array(
      'name' => t('Timeslot'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
