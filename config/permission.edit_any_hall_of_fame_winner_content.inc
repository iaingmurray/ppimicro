<?php
/**
 * @file
 * permission.edit_any_hall_of_fame_winner_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any hall_of_fame_winner content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.hall_of_fame_winner' => 'content_type.hall_of_fame_winner',
);

$optional = array();

$modules = array(
  0 => 'node',
);
