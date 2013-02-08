<?php
/**
 * @file
 * field.node.field_photo_gallery.month_in_photos.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => 0,
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
            'field_data_field_photo_gallery' => array(
              'fid' => 'field_photo_gallery_fid',
              'alt' => 'field_photo_gallery_alt',
              'title' => 'field_photo_gallery_title',
              'width' => 'field_photo_gallery_width',
              'height' => 'field_photo_gallery_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_photo_gallery' => array(
              'fid' => 'field_photo_gallery_fid',
              'alt' => 'field_photo_gallery_alt',
              'title' => 'field_photo_gallery_title',
              'width' => 'field_photo_gallery_width',
              'height' => 'field_photo_gallery_height',
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
    'field_name' => 'field_photo_gallery',
    'type' => 'image',
    'module' => 'image',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
    'label' => 'Photo Gallery',
    'widget' => array(
      'weight' => '42',
      'type' => 'image_image',
      'module' => 'image',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
        'preview_image_style' => 'thumbnail',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'alt_field' => 0,
      'title_field' => 1,
      'default_image' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '1',
        'settings' => array(
          'image_style' => 'gallery_thumbnail',
          'image_link' => 'file',
        ),
        'module' => 'image',
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
    'field_name' => 'field_photo_gallery',
    'entity_type' => 'node',
    'bundle' => 'month_in_photos',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.month_in_photos' => 'content_type.month_in_photos',
  'image_style.gallery_thumbnail' => 'image_style.gallery_thumbnail',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
);
