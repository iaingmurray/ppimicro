<?php
/**
 * @file
 * permission.delete_own_featured_link_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own featured_link content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.featured_link' => 'content_type.featured_link',
);

$optional = array();

$modules = array(
  0 => 'node',
);
