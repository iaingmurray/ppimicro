<?php
/**
 * @file
 * content_type.asset_download.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'asset_download',
  'name' => 'Asset Download',
  'description' => 'Link to a document or file with a description.  ',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.asset_download' => 'field.node.body.asset_download',
  'field.node.field_graphic.asset_download' => 'field.node.field_graphic.asset_download',
  'field.node.field_file.asset_download' => 'field.node.field_file.asset_download',
  'field.node.field_link.asset_download' => 'field.node.field_link.asset_download',
  'permission.create_asset_download_content' => 'permission.create_asset_download_content',
  'permission.edit_own_asset_download_content' => 'permission.edit_own_asset_download_content',
  'permission.edit_any_asset_download_content' => 'permission.edit_any_asset_download_content',
  'permission.delete_own_asset_download_content' => 'permission.delete_own_asset_download_content',
  'permission.delete_any_asset_download_content' => 'permission.delete_any_asset_download_content',
);

$modules = array(
  0 => 'node',
);
