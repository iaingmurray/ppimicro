<?php
/**
 * @file
 * content_type.article.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'article',
  'name' => 'Article',
  'description' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.article' => 'field.node.body.article',
  'field.node.field_tags.article' => 'field.node.field_tags.article',
  'field.node.field_image.article' => 'field.node.field_image.article',
  'field.node.field_source.article' => 'field.node.field_source.article',
  'field.node.field_region.article' => 'field.node.field_region.article',
  'field.node.field_topic.article' => 'field.node.field_topic.article',
  'field.node.field_author.article' => 'field.node.field_author.article',
  'field.node.field_company.article' => 'field.node.field_company.article',
  'field.node.field_grade.article' => 'field.node.field_grade.article',
  'field.node.field_featured.article' => 'field.node.field_featured.article',
  'field.node.field_issue.article' => 'field.node.field_issue.article',
  'field.node.field_social_headline.article' => 'field.node.field_social_headline.article',
  'field.node.field_photos.article' => 'field.node.field_photos.article',
  'permission.create_article_content' => 'permission.create_article_content',
  'permission.edit_own_article_content' => 'permission.edit_own_article_content',
  'permission.edit_any_article_content' => 'permission.edit_any_article_content',
  'permission.delete_own_article_content' => 'permission.delete_own_article_content',
  'permission.delete_any_article_content' => 'permission.delete_any_article_content',
);

$modules = array(
  0 => 'node',
);
