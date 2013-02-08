<?php
/**
 * @file
 * permission.delete_any_asset_download_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any asset_download content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.asset_download' => 'content_type.asset_download',
);

$optional = array();

$modules = array(
  0 => 'node',
);
