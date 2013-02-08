<?php
/**
 * @file
 * views_view.events_upcoming_ppi_and_barder.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'events_upcoming_ppi_and_barder';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Events - Upcoming PPI and Barter';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'currentEventList';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['view_mode'] = 'full';
$handler->display->display_options['row_options']['links'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
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
  'events' => 'events',
);
/* Filter criterion: Content: Event Type (field_event_type) */
$handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
$handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
$handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
$handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
  186 => '186',
  241 => '241',
  57 => '57',
);
$handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
/* Filter criterion: Content: Date - end date (field_date:value2) */
$handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['operator'] = '>';
$handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'events';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
);
