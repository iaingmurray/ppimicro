<?php
/**
 * @file
 * permission.delete_any_events_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any events content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.events' => 'content_type.events',
);

$optional = array();

$modules = array(
  0 => 'node',
);
