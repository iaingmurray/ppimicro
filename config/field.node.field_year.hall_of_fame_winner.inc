<?php
/**
 * @file
 * field.node.field_year.hall_of_fame_winner.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'year' => 'year',
        'month' => 0,
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
      'tz_handling' => 'none',
      'timezone_db' => '',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'profile2_private' => FALSE,
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_year' => array(
              'value' => 'field_year_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_year' => array(
              'value' => 'field_year_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_year',
    'type' => 'datetime',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'datetime',
        'mysql_type' => 'datetime',
        'pgsql_type' => 'timestamp without time zone',
        'sqlite_type' => 'varchar',
        'sqlsrv_type' => 'smalldatetime',
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Year',
    'widget' => array(
      'weight' => '0',
      'type' => 'date_text',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'year_range' => '-3:+3',
        'increment' => 15,
        'label_position' => 'above',
        'text_parts' => array(),
        'display_all_day' => 0,
      ),
    ),
    'settings' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'year_only',
          'fromto' => 'both',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
        ),
        'module' => 'date',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_year',
    'entity_type' => 'node',
    'bundle' => 'hall_of_fame_winner',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.hall_of_fame_winner' => 'content_type.hall_of_fame_winner',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'date',
);
