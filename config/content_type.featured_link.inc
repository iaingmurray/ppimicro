<?php
/**
 * @file
 * content_type.featured_link.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'featured_link',
  'name' => 'Featured Link',
  'description' => 'Link to a content piece to be displayed prominently on the home page. ',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.field_photo.featured_link' => 'field.node.field_photo.featured_link',
  'field.node.field_link.featured_link' => 'field.node.field_link.featured_link',
  'permission.create_featured_link_content' => 'permission.create_featured_link_content',
  'permission.edit_own_featured_link_content' => 'permission.edit_own_featured_link_content',
  'permission.edit_any_featured_link_content' => 'permission.edit_any_featured_link_content',
  'permission.delete_own_featured_link_content' => 'permission.delete_own_featured_link_content',
  'permission.delete_any_featured_link_content' => 'permission.delete_any_featured_link_content',
);

$modules = array(
  0 => 'node',
);
