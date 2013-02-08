<?php
/**
 * @file
 * content_type.author.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'author',
  'name' => 'Author',
  'description' => 'Bio and other information about the site contributor',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.author' => 'field.node.body.author',
  'field.node.field_photo.author' => 'field.node.field_photo.author',
  'field.node.field_linkedin_account.author' => 'field.node.field_linkedin_account.author',
  'field.node.field_twitter_account.author' => 'field.node.field_twitter_account.author',
  'field.node.field_article_author.author' => 'field.node.field_article_author.author',
  'permission.create_author_content' => 'permission.create_author_content',
  'permission.edit_own_author_content' => 'permission.edit_own_author_content',
  'permission.edit_any_author_content' => 'permission.edit_any_author_content',
  'permission.delete_own_author_content' => 'permission.delete_own_author_content',
  'permission.delete_any_author_content' => 'permission.delete_any_author_content',
);

$modules = array(
  0 => 'node',
);
