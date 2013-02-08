<?php
/**
 * @file
 * content_type.quote.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'quote',
  'name' => 'Quote',
  'description' => 'Quote of the Month',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__quote' => 'variable.field_bundle_settings_node__quote',
  'variable.node_options_quote' => 'variable.node_options_quote',
  'variable.node_preview_quote' => 'variable.node_preview_quote',
  'variable.node_submitted_quote' => 'variable.node_submitted_quote',
);

$optional = array(
  'field.node.body.quote' => 'field.node.body.quote',
  'field.node.field_quote_author.quote' => 'field.node.field_quote_author.quote',
  'field.node.field_author_title.quote' => 'field.node.field_author_title.quote',
  'permission.create_quote_content' => 'permission.create_quote_content',
  'permission.edit_own_quote_content' => 'permission.edit_own_quote_content',
  'permission.edit_any_quote_content' => 'permission.edit_any_quote_content',
  'permission.delete_own_quote_content' => 'permission.delete_own_quote_content',
  'permission.delete_any_quote_content' => 'permission.delete_any_quote_content',
);

$modules = array(
  0 => 'node',
);
