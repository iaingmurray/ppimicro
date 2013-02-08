<?php
/**
 * @file
 * content_type.ppi_spotlight.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'ppi_spotlight',
  'name' => 'PPI Spotlight',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.ppi_spotlight' => 'field.node.body.ppi_spotlight',
  'field.node.field_link.ppi_spotlight' => 'field.node.field_link.ppi_spotlight',
  'permission.create_ppi_spotlight_content' => 'permission.create_ppi_spotlight_content',
  'permission.edit_own_ppi_spotlight_content' => 'permission.edit_own_ppi_spotlight_content',
  'permission.edit_any_ppi_spotlight_content' => 'permission.edit_any_ppi_spotlight_content',
  'permission.delete_own_ppi_spotlight_content' => 'permission.delete_own_ppi_spotlight_content',
  'permission.delete_any_ppi_spotlight_content' => 'permission.delete_any_ppi_spotlight_content',
);

$modules = array(
  0 => 'node',
);
