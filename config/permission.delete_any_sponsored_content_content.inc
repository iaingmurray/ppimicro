<?php
/**
 * @file
 * permission.delete_any_sponsored_content_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any sponsored_content content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.sponsored_content' => 'content_type.sponsored_content',
);

$optional = array();

$modules = array(
  0 => 'node',
);
