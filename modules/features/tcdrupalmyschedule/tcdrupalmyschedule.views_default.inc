<?php
/**
 * @file
 * tcdrupalmyschedule.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tcdrupalmyschedule_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_schedule_table';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Schedule Table';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_timeslot_ref',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_session_track' => 'field_session_track',
    'field_session_track_1' => 'field_session_track_1',
    'title' => 'title',
    'field_session_speakers' => 'title',
    'field_timeslot_ref' => 'field_timeslot_ref',
    'field_session_room_ref' => 'field_session_room_ref',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_track' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_track_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'field_session_speakers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_timeslot_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_room_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_timeslot_ref_target_id']['id'] = 'field_timeslot_ref_target_id';
  $handler->display->display_options['relationships']['field_timeslot_ref_target_id']['table'] = 'field_data_field_timeslot_ref';
  $handler->display->display_options['relationships']['field_timeslot_ref_target_id']['field'] = 'field_timeslot_ref_target_id';
  $handler->display->display_options['relationships']['field_timeslot_ref_target_id']['label'] = 'Timeslot';
  /* Relationship: Content: Room (field_session_room_ref) */
  $handler->display->display_options['relationships']['field_session_room_ref_tid']['id'] = 'field_session_room_ref_tid';
  $handler->display->display_options['relationships']['field_session_room_ref_tid']['table'] = 'field_data_field_session_room_ref';
  $handler->display->display_options['relationships']['field_session_room_ref_tid']['field'] = 'field_session_room_ref_tid';
  $handler->display->display_options['relationships']['field_session_room_ref_tid']['label'] = 'Room';
  /* Relationship: Flags: my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'my_schedule';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Track */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['label'] = '';
  $handler->display->display_options['fields']['field_session_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_track']['element_label_colon'] = FALSE;
  /* Field: Track (Key) */
  $handler->display->display_options['fields']['field_session_track_1']['id'] = 'field_session_track_1';
  $handler->display->display_options['fields']['field_session_track_1']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track_1']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track_1']['ui_name'] = 'Track (Key)';
  $handler->display->display_options['fields']['field_session_track_1']['label'] = '';
  $handler->display->display_options['fields']['field_session_track_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_track_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_track_1']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a> <span class="track track-[field_session_track_1]">[field_session_track]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Speakers */
  $handler->display->display_options['fields']['field_session_speakers']['id'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['table'] = 'field_data_field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['field'] = 'field_session_speakers';
  $handler->display->display_options['fields']['field_session_speakers']['label'] = 'Speaker(s)';
  $handler->display->display_options['fields']['field_session_speakers']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_speakers']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_speakers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_session_speakers']['delta_offset'] = '0';
  /* Field: Content: Timeslot */
  $handler->display->display_options['fields']['field_timeslot_ref']['id'] = 'field_timeslot_ref';
  $handler->display->display_options['fields']['field_timeslot_ref']['table'] = 'field_data_field_timeslot_ref';
  $handler->display->display_options['fields']['field_timeslot_ref']['field'] = 'field_timeslot_ref';
  $handler->display->display_options['fields']['field_timeslot_ref']['label'] = '';
  $handler->display->display_options['fields']['field_timeslot_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_timeslot_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timeslot_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_timeslot_ref']['delta_offset'] = '0';
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_session_room_ref']['id'] = 'field_session_room_ref';
  $handler->display->display_options['fields']['field_session_room_ref']['table'] = 'field_data_field_session_room_ref';
  $handler->display->display_options['fields']['field_session_room_ref']['field'] = 'field_session_room_ref';
  $handler->display->display_options['fields']['field_session_room_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_session_room_ref']['delta_offset'] = '0';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'My schedule';
  $handler->display->display_options['fields']['ops']['link_type'] = 'normal';
  /* Sort criterion: Content: Timeslot -  start date (field_timeslot) */
  $handler->display->display_options['sorts']['field_timeslot_value']['id'] = 'field_timeslot_value';
  $handler->display->display_options['sorts']['field_timeslot_value']['table'] = 'field_data_field_timeslot';
  $handler->display->display_options['sorts']['field_timeslot_value']['field'] = 'field_timeslot_value';
  $handler->display->display_options['sorts']['field_timeslot_value']['relationship'] = 'field_timeslot_ref_target_id';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_session_room_ref_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'schedule_item' => 'schedule_item',
    'session' => 'session',
  );
  /* Filter criterion: Content: Accepted (field_session_accepted) */
  $handler->display->display_options['filters']['field_session_accepted_value']['id'] = 'field_session_accepted_value';
  $handler->display->display_options['filters']['field_session_accepted_value']['table'] = 'field_data_field_session_accepted';
  $handler->display->display_options['filters']['field_session_accepted_value']['field'] = 'field_session_accepted_value';
  $handler->display->display_options['filters']['field_session_accepted_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schedule/me';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Schedule';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Schedule';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $export['my_schedule_table'] = $view;

  return $export;
}
