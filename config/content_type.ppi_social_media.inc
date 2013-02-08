<?php
/**
 * @file
 * content_type.ppi_social_media.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'ppi_social_media',
  'name' => 'PPI Social Media',
  'description' => 'Links to Social Media Sites',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.field_link.ppi_social_media' => 'field.node.field_link.ppi_social_media',
  'field.node.field_css_class.ppi_social_media' => 'field.node.field_css_class.ppi_social_media',
  'permission.create_ppi_social_media_content' => 'permission.create_ppi_social_media_content',
  'permission.edit_own_ppi_social_media_content' => 'permission.edit_own_ppi_social_media_content',
  'permission.edit_any_ppi_social_media_content' => 'permission.edit_any_ppi_social_media_content',
  'permission.delete_own_ppi_social_media_content' => 'permission.delete_own_ppi_social_media_content',
  'permission.delete_any_ppi_social_media_content' => 'permission.delete_any_ppi_social_media_content',
);

$modules = array(
  0 => 'node',
);
