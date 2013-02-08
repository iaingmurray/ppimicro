<?php
/**
 * @file
 * permission.delete_any_author_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any author content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.author' => 'content_type.author',
);

$optional = array();

$modules = array(
  0 => 'node',
);
