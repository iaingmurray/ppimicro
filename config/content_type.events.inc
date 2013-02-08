<?php
/**
 * @file
 * content_type.events.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'events',
  'name' => 'Event',
  'description' => 'Industry events and conferences',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.events' => 'field.node.body.events',
  'field.node.field_location.events' => 'field.node.field_location.events',
  'field.node.field_website.events' => 'field.node.field_website.events',
  'field.node.field_date.events' => 'field.node.field_date.events',
  'field.node.field_event_type.events' => 'field.node.field_event_type.events',
  'field.node.field_region.events' => 'field.node.field_region.events',
  'field.node.field_topic.events' => 'field.node.field_topic.events',
  'field.node.field_register.events' => 'field.node.field_register.events',
  'field.node.field_event_logo.events' => 'field.node.field_event_logo.events',
  'permission.create_events_content' => 'permission.create_events_content',
  'permission.edit_own_events_content' => 'permission.edit_own_events_content',
  'permission.edit_any_events_content' => 'permission.edit_any_events_content',
  'permission.delete_own_events_content' => 'permission.delete_own_events_content',
  'permission.delete_any_events_content' => 'permission.delete_any_events_content',
);

$modules = array(
  0 => 'node',
);
