<?php
/**
 * @file
 * permission.delete_own_quote_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own quote content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.quote' => 'content_type.quote',
);

$optional = array();

$modules = array(
  0 => 'node',
);
