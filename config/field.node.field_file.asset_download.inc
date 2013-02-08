<?php
/**
 * @file
 * field.node.field_file.asset_download.inc
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
            'field_data_field_file' => array(
              'fid' => 'field_file_fid',
              'display' => 'field_file_display',
              'description' => 'field_file_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_file' => array(
              'fid' => 'field_file_fid',
              'display' => 'field_file_display',
              'description' => 'field_file_description',
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
    'field_name' => 'field_file',
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
    'label' => 'File',
    'widget' => array(
      'weight' => '2',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => 'field/assets/[site:name]/[site-date-yyyy]/[site-date-mm]',
      'file_extensions' => 'txt pdf ppt xls',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'file_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'file',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => 'Upload a file or a link.  If both is entered the file will be used by default.',
    'field_name' => 'field_file',
    'entity_type' => 'node',
    'bundle' => 'asset_download',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.asset_download' => 'content_type.asset_download',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'file',
);
