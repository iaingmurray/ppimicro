<?php
/**
 * @file
 * permission.delete_own_sponsored_content_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own sponsored_content content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
    2 => 'sponsor',
  ),
);

$dependencies = array(
  'content_type.sponsored_content' => 'content_type.sponsored_content',
);

$optional = array();

$modules = array(
  0 => 'node',
);
