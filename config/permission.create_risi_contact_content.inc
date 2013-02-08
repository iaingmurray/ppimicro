<?php
/**
 * @file
 * permission.create_risi_contact_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create risi_contact content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.risi_contact' => 'content_type.risi_contact',
);

$optional = array();

$modules = array(
  0 => 'node',
);
