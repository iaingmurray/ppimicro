<?php
/**
 * @file
 * permission.edit_own_ppi_spotlight_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own ppi_spotlight content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.ppi_spotlight' => 'content_type.ppi_spotlight',
);

$optional = array();

$modules = array(
  0 => 'node',
);
