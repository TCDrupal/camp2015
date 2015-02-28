<?php
/**
 * Copy this example file and rename it to "local.settings.inc" to allow
 * for settings that only apply in your local environment.
 */ 

# Change the $databases settings below to match your local TC Drupal 2015 
# database and credentials.
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'd7_tcdrupal2015',
  'username' => 'DBUSER',
  'password' => 'DBPASS',
  'host' => 'localhost',
  'prefix' => '',
);

# Override the configured tmp directory file.
$conf['file_temporary_path'] = '/tmp';
