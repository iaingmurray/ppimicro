<?php
/**
 * @file
 * permission.delete_any_month_in_photos_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any month_in_photos content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.month_in_photos' => 'content_type.month_in_photos',
);

$optional = array();

$modules = array(
  0 => 'node',
);
