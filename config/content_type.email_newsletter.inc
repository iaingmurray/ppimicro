<?php
/**
 * @file
 * content_type.email_newsletter.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'email_newsletter',
  'name' => 'Email Newsletter',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.email_newsletter' => 'field.node.body.email_newsletter',
  'field.node.field_issue.email_newsletter' => 'field.node.field_issue.email_newsletter',
  'permission.create_email_newsletter_content' => 'permission.create_email_newsletter_content',
  'permission.edit_own_email_newsletter_content' => 'permission.edit_own_email_newsletter_content',
  'permission.edit_any_email_newsletter_content' => 'permission.edit_any_email_newsletter_content',
  'permission.delete_own_email_newsletter_content' => 'permission.delete_own_email_newsletter_content',
  'permission.delete_any_email_newsletter_content' => 'permission.delete_any_email_newsletter_content',
);

$modules = array(
  0 => 'node',
);
