<?php
/**
 * @file
 * views_view.lastest_stories_by_topic.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'lastest_stories_by_topic';
$view->description = '20 most recent stories grouped by topic';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Lastest Stories by Topic';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'latestSortedByTerm';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_topic',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<h1>Latest Stories by Topic</h1>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<span class="icon-caret-right"></span> [title]';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Topic */
$handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
$handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
$handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
$handler->display->display_options['fields']['field_topic']['label'] = '';
$handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'custom';
$handler->display->display_options['fields']['created']['custom_date_format'] = 'D, M d, Y';
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
  'article' => 'article',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Topic (field_topic) */
$handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
$handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
$handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
$handler->display->display_options['filters']['field_topic_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
$handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['block_description'] = 'Lastest Stories by Topic';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'taxonomy',
);
