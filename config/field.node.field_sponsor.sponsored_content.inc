<?php
/**
 * @file
 * field.node.field_sponsor.sponsored_content.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'sponsor',
          'parent' => '0',
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_sponsor' => array(
              'tid' => 'field_sponsor_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_sponsor' => array(
              'tid' => 'field_sponsor_tid',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'tid' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'tid' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'field_name' => 'field_sponsor',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'tid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Sponsor',
    'widget' => array(
      'type' => 'options_buttons',
      'weight' => '4',
      'settings' => array(),
      'module' => 'options',
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '3',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '1',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '2',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_sponsor',
    'entity_type' => 'node',
    'bundle' => 'sponsored_content',
    'deleted' => '0',
    'default_value' => NULL,
  ),
);

$dependencies = array(
  'content_type.sponsored_content' => 'content_type.sponsored_content',
  'vocabulary.sponsor' => 'vocabulary.sponsor',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
