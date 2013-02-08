<?php
/**
 * @file
 * content_type.good_month_bad_month.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'good_month_bad_month',
  'name' => 'Good Month Bad Month',
  'description' => 'Highlights the good and bad months',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__good_month_bad_month' => 'variable.field_bundle_settings_node__good_month_bad_month',
  'variable.node_options_good_month_bad_month' => 'variable.node_options_good_month_bad_month',
  'variable.node_preview_good_month_bad_month' => 'variable.node_preview_good_month_bad_month',
  'variable.node_submitted_good_month_bad_month' => 'variable.node_submitted_good_month_bad_month',
);

$optional = array(
  'field.node.body.good_month_bad_month' => 'field.node.body.good_month_bad_month',
  'field.node.field_good_or_bad.good_month_bad_month' => 'field.node.field_good_or_bad.good_month_bad_month',
  'permission.create_good_month_bad_month_content' => 'permission.create_good_month_bad_month_content',
  'permission.edit_own_good_month_bad_month_content' => 'permission.edit_own_good_month_bad_month_content',
  'permission.edit_any_good_month_bad_month_content' => 'permission.edit_any_good_month_bad_month_content',
  'permission.delete_own_good_month_bad_month_content' => 'permission.delete_own_good_month_bad_month_content',
  'permission.delete_any_good_month_bad_month_content' => 'permission.delete_any_good_month_bad_month_content',
);

$modules = array(
  0 => 'node',
);
