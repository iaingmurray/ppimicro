<?php
/**
 * @file
 * views_view.sponsored_content_email_newsletter.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'sponsored_content_email_newsletter';
$view->description = 'Sponsored Content in the main content column';
$view->tag = 'sponsors';
$view->base_table = 'node';
$view->human_name = 'Sponsored Content - Email Newsletter';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Thumbnail */
$handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_thumbnail']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['element_class'] = 'photo';
$handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_thumbnail']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'sponsored_content_thumbnail',
  'image_link' => 'content',
);
/* Field: Content: Sponsor */
$handler->display->display_options['fields']['field_sponsor']['id'] = 'field_sponsor';
$handler->display->display_options['fields']['field_sponsor']['table'] = 'field_data_field_sponsor';
$handler->display->display_options['fields']['field_sponsor']['field'] = 'field_sponsor';
$handler->display->display_options['fields']['field_sponsor']['label'] = '';
$handler->display->display_options['fields']['field_sponsor']['element_type'] = 'h5';
$handler->display->display_options['fields']['field_sponsor']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_sponsor']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_sponsor']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'p';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'sponsored_content' => 'sponsored_content',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['block_description'] = 'Sponsored Content - Email Newsletter';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
  3 => 'taxonomy',
);
