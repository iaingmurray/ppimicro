<?php
/**
 * @file
 * permission.edit_own_quote_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own quote content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.quote' => 'content_type.quote',
);

$optional = array();

$modules = array(
  0 => 'node',
);
