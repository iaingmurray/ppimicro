<?php
/**
 * @file
 * field.node.field_topic.article.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'topic',
          'parent' => '0',
        ),
      ),
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
            'field_data_field_topic' => array(
              'tid' => 'field_topic_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_topic' => array(
              'tid' => 'field_topic_tid',
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
    'field_name' => 'field_topic',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
    'label' => 'Topic',
    'widget' => array(
      'weight' => '6',
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
        'type' => 'taxonomy_term_reference_link',
        'weight' => '5',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '5',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
      'story_teaser' => array(
        'label' => 'hidden',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '13',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_topic',
    'entity_type' => 'node',
    'bundle' => 'article',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.article' => 'content_type.article',
  'vocabulary.topic' => 'vocabulary.topic',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
