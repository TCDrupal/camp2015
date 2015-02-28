<?php
/**
 * @file
 * tcdrupalmailchimp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tcdrupalmailchimp_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function tcdrupalmailchimp_default_mailchimp_list() {
  $items = array();
  $items['tcdrupal_email_list'] = entity_import('mailchimp_list', '{
    "name" : "tcdrupal_email_list",
    "mc_list_id" : "9147010486",
    "label" : "TCDrupal Email List",
    "description" : "",
    "list_type" : "optional",
    "settings" : {
      "roles" : { "2" : "2" },
      "mergefields" : {
        "EMAIL" : "mail",
        "FNAME" : "field_first_name",
        "LNAME" : "field-last-name"
      },
      "doublein" : 0,
      "show_register_form" : 1,
      "default_register_form_optin" : 1,
      "show_account_form" : 1,
      "include_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0
    },
    "created" : "1366509381",
    "updated" : "1366509381",
    "rdf_mapping" : []
  }');
  $items['tcdrupal_email_list_freeform'] = entity_import('mailchimp_list', '{
    "name" : "tcdrupal_email_list_freeform",
    "mc_list_id" : "9147010486",
    "label" : "TCDrupal Emails",
    "description" : "We will use this list to share information about future DrupalCamp events.",
    "list_type" : "freeform",
    "settings" : {
      "roles" : { "1" : "1", "2" : "2" },
      "mergefields" : {
        "EMAIL" : "mail",
        "FNAME" : "field-first-name",
        "LNAME" : "field_last_name"
      },
      "doublein" : 1,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 0,
      "include_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0
    },
    "created" : "1366579129",
    "updated" : "1374426486",
    "rdf_mapping" : []
  }');
  return $items;
}
