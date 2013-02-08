<?php
/**
 * @file
 * content_type.month_in_photos.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'month_in_photos',
  'name' => 'The Month in Pictures',
  'description' => 'Photo Gallery for month',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__month_in_photos' => 'variable.field_bundle_settings_node__month_in_photos',
  'variable.node_options_month_in_photos' => 'variable.node_options_month_in_photos',
  'variable.node_preview_month_in_photos' => 'variable.node_preview_month_in_photos',
  'variable.node_submitted_month_in_photos' => 'variable.node_submitted_month_in_photos',
);

$optional = array(
  'field.node.body.month_in_photos' => 'field.node.body.month_in_photos',
  'field.node.field_photo_gallery.month_in_photos' => 'field.node.field_photo_gallery.month_in_photos',
  'permission.create_month_in_photos_content' => 'permission.create_month_in_photos_content',
  'permission.edit_own_month_in_photos_content' => 'permission.edit_own_month_in_photos_content',
  'permission.edit_any_month_in_photos_content' => 'permission.edit_any_month_in_photos_content',
  'permission.delete_own_month_in_photos_content' => 'permission.delete_own_month_in_photos_content',
  'permission.delete_any_month_in_photos_content' => 'permission.delete_any_month_in_photos_content',
);

$modules = array(
  0 => 'node',
);
