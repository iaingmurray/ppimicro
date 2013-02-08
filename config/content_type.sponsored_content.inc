<?php
/**
 * @file
 * content_type.sponsored_content.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'sponsored_content',
  'name' => 'Sponsored Content',
  'description' => 'Content articles from sponsors',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.sponsored_content' => 'field.node.body.sponsored_content',
  'field.node.field_region.sponsored_content' => 'field.node.field_region.sponsored_content',
  'field.node.field_sponsor.sponsored_content' => 'field.node.field_sponsor.sponsored_content',
  'field.node.field_thumbnail.sponsored_content' => 'field.node.field_thumbnail.sponsored_content',
  'field.node.field_topics.sponsored_content' => 'field.node.field_topics.sponsored_content',
  'permission.create_sponsored_content_content' => 'permission.create_sponsored_content_content',
  'permission.edit_own_sponsored_content_content' => 'permission.edit_own_sponsored_content_content',
  'permission.edit_any_sponsored_content_content' => 'permission.edit_any_sponsored_content_content',
  'permission.delete_own_sponsored_content_content' => 'permission.delete_own_sponsored_content_content',
  'permission.delete_any_sponsored_content_content' => 'permission.delete_any_sponsored_content_content',
);

$modules = array(
  0 => 'node',
);
