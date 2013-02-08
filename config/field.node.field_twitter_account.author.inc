<?php
/**
 * @file
 * field.node.field_twitter_account.author.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
      'attributes' => array(
        'target' => 'default',
        'class' => '',
        'rel' => '',
      ),
      'url' => 0,
      'title' => 'optional',
      'title_value' => '',
      'title_maxlength' => 128,
      'enable_tokens' => 1,
      'display' => array(
        'url_cutoff' => 80,
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
            'field_data_field_twitter_account' => array(
              'url' => 'field_twitter_account_url',
              'title' => 'field_twitter_account_title',
              'attributes' => 'field_twitter_account_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_twitter_account' => array(
              'url' => 'field_twitter_account_url',
              'title' => 'field_twitter_account_title',
              'attributes' => 'field_twitter_account_attributes',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_twitter_account',
    'type' => 'link_field',
    'module' => 'link',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'url' => array(
        'type' => 'varchar',
        'length' => 2048,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'title' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'attributes' => array(
        'type' => 'text',
        'size' => 'medium',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Twitter Account',
    'widget' => array(
      'weight' => '36',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'validate_url' => 1,
      'url' => 0,
      'title' => 'optional',
      'title_value' => '',
      'title_maxlength' => '128',
      'enable_tokens' => 1,
      'display' => array(
        'url_cutoff' => '80',
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => '',
        'class' => '',
        'configurable_title' => 0,
        'title' => '',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'link_default',
        'weight' => '3',
        'settings' => array(),
        'module' => 'link',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'link_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'link',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_twitter_account',
    'entity_type' => 'node',
    'bundle' => 'author',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.author' => 'content_type.author',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'link',
);
