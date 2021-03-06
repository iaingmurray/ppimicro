<?php
/**
 * @file
 * permission.edit_any_ppi_social_media_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any ppi_social_media content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.ppi_social_media' => 'content_type.ppi_social_media',
);

$optional = array();

$modules = array(
  0 => 'node',
);
