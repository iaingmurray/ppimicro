<?php
/**
 * @file
 * permission.create_good_month_bad_month_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create good_month_bad_month content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.good_month_bad_month' => 'content_type.good_month_bad_month',
);

$optional = array();

$modules = array(
  0 => 'node',
);