<?php
/**
 * @file
 * content_type.ppi_website.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'ppi_website',
  'name' => 'PPI Website',
  'description' => 'Links to the other PPI Micro Sites',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.field_link.ppi_website' => 'field.node.field_link.ppi_website',
  'field.node.field_description.ppi_website' => 'field.node.field_description.ppi_website',
  'permission.create_ppi_website_content' => 'permission.create_ppi_website_content',
  'permission.edit_own_ppi_website_content' => 'permission.edit_own_ppi_website_content',
  'permission.edit_any_ppi_website_content' => 'permission.edit_any_ppi_website_content',
  'permission.delete_own_ppi_website_content' => 'permission.delete_own_ppi_website_content',
  'permission.delete_any_ppi_website_content' => 'permission.delete_any_ppi_website_content',
);

$modules = array(
  0 => 'node',
);
