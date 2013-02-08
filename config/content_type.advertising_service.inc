<?php
/**
 * @file
 * content_type.advertising_service.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'advertising_service',
  'name' => 'Advertising Service',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.advertising_service' => 'field.node.body.advertising_service',
  'field.node.field_graphic.advertising_service' => 'field.node.field_graphic.advertising_service',
  'permission.create_advertising_service_content' => 'permission.create_advertising_service_content',
  'permission.edit_own_advertising_service_content' => 'permission.edit_own_advertising_service_content',
  'permission.edit_any_advertising_service_content' => 'permission.edit_any_advertising_service_content',
  'permission.delete_own_advertising_service_content' => 'permission.delete_own_advertising_service_content',
  'permission.delete_any_advertising_service_content' => 'permission.delete_any_advertising_service_content',
);

$modules = array(
  0 => 'node',
);
