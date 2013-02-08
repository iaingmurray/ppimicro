<?php
/**
 * @file
 * views_view.sponsors.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'sponsors';
$view->description = 'All sponsored content stories';
$view->tag = 'sponsors';
$view->base_table = 'node';
$view->human_name = 'Sponsored Content Page';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<div class="listPageHeader">
<h1>Sponsored Content</h1>
</div >';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Sponsor (field_sponsor) */
$handler->display->display_options['filters']['field_sponsor_tid']['id'] = 'field_sponsor_tid';
$handler->display->display_options['filters']['field_sponsor_tid']['table'] = 'field_data_field_sponsor';
$handler->display->display_options['filters']['field_sponsor_tid']['field'] = 'field_sponsor_tid';
$handler->display->display_options['filters']['field_sponsor_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_sponsor_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_sponsor_tid']['vocabulary'] = 'sponsor';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'sponsor';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
);
