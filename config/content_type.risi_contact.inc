<?php
/**
 * @file
 * content_type.risi_contact.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'risi_contact',
  'name' => 'RISI Contact',
  'description' => 'Contact person and information for the PPI/RISI contacts',
  'has_title' => '1',
  'title_label' => 'Person',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.field_job_title.risi_contact' => 'field.node.field_job_title.risi_contact',
  'field.node.field_sales_region.risi_contact' => 'field.node.field_sales_region.risi_contact',
  'field.node.field_phone_number.risi_contact' => 'field.node.field_phone_number.risi_contact',
  'field.node.field_email.risi_contact' => 'field.node.field_email.risi_contact',
  'permission.create_risi_contact_content' => 'permission.create_risi_contact_content',
  'permission.edit_own_risi_contact_content' => 'permission.edit_own_risi_contact_content',
  'permission.edit_any_risi_contact_content' => 'permission.edit_any_risi_contact_content',
  'permission.delete_own_risi_contact_content' => 'permission.delete_own_risi_contact_content',
  'permission.delete_any_risi_contact_content' => 'permission.delete_any_risi_contact_content',
);

$modules = array(
  0 => 'node',
);
