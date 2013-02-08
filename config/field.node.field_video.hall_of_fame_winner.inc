<?php
/**
 * @file
 * field.node.field_video.hall_of_fame_winner.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 0,
      'uri_scheme' => 'public',
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
            'field_data_field_video' => array(
              'fid' => 'field_video_fid',
              'display' => 'field_video_display',
              'description' => 'field_video_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_video' => array(
              'fid' => 'field_video_fid',
              'display' => 'field_video_display',
              'description' => 'field_video_description',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'fid' => array(
        'table' => 'file_managed',
        'columns' => array(
          'fid' => 'fid',
        ),
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'field_name' => 'field_video',
    'type' => 'file',
    'module' => 'file',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'fid' => array(
        'description' => 'The {file_managed}.fid being referenced in this field.',
        'type' => 'int',
        'not null' => FALSE,
        'unsigned' => TRUE,
      ),
      'display' => array(
        'description' => 'Flag to control whether this file should be displayed when viewing content.',
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 1,
      ),
      'description' => array(
        'description' => 'A description of the file.',
        'type' => 'text',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Video',
    'widget' => array(
      'weight' => '8',
      'type' => 'enfield_widget',
      'module' => 'emfield',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'file_rendered',
        'weight' => '4',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'module' => 'file_entity',
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
    'default_value' => NULL,
    'field_name' => 'field_video',
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
  1 => 'file',
  2 => 'emfield',
);
