<?php
/**
 * @file
 * permission.delete_any_email_newsletter_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any email_newsletter content',
  'roles' => array(
    0 => 'administrator',
    1 => 'content contributor',
  ),
);

$dependencies = array(
  'content_type.email_newsletter' => 'content_type.email_newsletter',
);

$optional = array();

$modules = array(
  0 => 'node',
);
