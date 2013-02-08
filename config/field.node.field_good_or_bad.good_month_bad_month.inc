<?php
/**
 * @file
 * field.node.field_good_or_bad.good_month_bad_month.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Good' => 'Good',
        'Bad' => 'Bad',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_good_or_bad' => array(
              'value' => 'field_good_or_bad_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_good_or_bad' => array(
              'value' => 'field_good_or_bad_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_name' => 'field_good_or_bad',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Good or Bad',
    'widget' => array(
      'weight' => '42',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '1',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      0 => array(
        'value' => 'Good',
      ),
    ),
    'field_name' => 'field_good_or_bad',
    'entity_type' => 'node',
    'bundle' => 'good_month_bad_month',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.good_month_bad_month' => 'content_type.good_month_bad_month',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
