<?php
/**
 * @file
 * content_type.hall_of_fame_winner.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'hall_of_fame_winner',
  'name' => 'Hall of Fame Winner',
  'description' => 'A winner of the Paperboard Packaging Hall of Fame',
  'has_title' => '1',
  'title_label' => 'Winner\'s Name',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.field_year.hall_of_fame_winner' => 'field.node.field_year.hall_of_fame_winner',
  'field.node.field_city.hall_of_fame_winner' => 'field.node.field_city.hall_of_fame_winner',
  'field.node.field_company.hall_of_fame_winner' => 'field.node.field_company.hall_of_fame_winner',
  'field.node.field_article_link.hall_of_fame_winner' => 'field.node.field_article_link.hall_of_fame_winner',
  'field.node.field_video.hall_of_fame_winner' => 'field.node.field_video.hall_of_fame_winner',
  'permission.create_hall_of_fame_winner_content' => 'permission.create_hall_of_fame_winner_content',
  'permission.edit_own_hall_of_fame_winner_content' => 'permission.edit_own_hall_of_fame_winner_content',
  'permission.edit_any_hall_of_fame_winner_content' => 'permission.edit_any_hall_of_fame_winner_content',
  'permission.delete_own_hall_of_fame_winner_content' => 'permission.delete_own_hall_of_fame_winner_content',
  'permission.delete_any_hall_of_fame_winner_content' => 'permission.delete_any_hall_of_fame_winner_content',
);

$modules = array(
  0 => 'node',
);
