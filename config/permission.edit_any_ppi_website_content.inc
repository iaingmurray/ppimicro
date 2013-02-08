<?php
/**
 * @file
 * permission.edit_any_ppi_website_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any ppi_website content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.ppi_website' => 'content_type.ppi_website',
);

$optional = array();

$modules = array(
  0 => 'node',
);
