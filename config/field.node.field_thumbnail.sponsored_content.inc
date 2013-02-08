<?php
/**
 * @file
 * field.node.field_thumbnail.sponsored_content.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_thumbnail' => array(
              'fid' => 'field_thumbnail_fid',
              'alt' => 'field_thumbnail_alt',
              'title' => 'field_thumbnail_title',
              'width' => 'field_thumbnail_width',
              'height' => 'field_thumbnail_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_thumbnail' => array(
              'fid' => 'field_thumbnail_fid',
              'alt' => 'field_thumbnail_alt',
              'title' => 'field_thumbnail_title',
              'width' => 'field_thumbnail_width',
              'height' => 'field_thumbnail_height',
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
    'field_name' => 'field_thumbnail',
    'type' => 'image',
    'module' => 'image',
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
      'alt' => array(
        'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
        'type' => 'varchar',
        'length' => 512,
        'not null' => FALSE,
      ),
      'title' => array(
        'description' => 'Image title text, for the image\'s \'title\' attribute.',
        'type' => 'varchar',
        'length' => 1024,
        'not null' => FALSE,
      ),
      'width' => array(
        'description' => 'The width of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
      'height' => array(
        'description' => 'The height of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Thumbnail',
    'widget' => array(
      'type' => 'image_image',
      'weight' => '6',
      'settings' => array(
        'progress_indicator' => 'throbber',
        'preview_image_style' => 'thumbnail',
      ),
      'module' => 'image',
    ),
    'settings' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_directory' => '',
      'max_filesize' => '',
      'alt_field' => 0,
      'title_field' => 0,
      'max_resolution' => '',
      'min_resolution' => '',
      'default_image' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'image',
        'weight' => '4',
        'settings' => array(
          'image_style' => '',
          'image_link' => '',
        ),
        'module' => 'image',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '3',
        'settings' => array(),
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'image',
        'weight' => '0',
        'settings' => array(
          'image_style' => '',
          'image_link' => '',
        ),
        'module' => 'image',
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_thumbnail',
    'entity_type' => 'node',
    'bundle' => 'sponsored_content',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.sponsored_content' => 'content_type.sponsored_content',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
);
