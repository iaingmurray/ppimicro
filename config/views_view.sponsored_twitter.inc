<?php
/**
 * @file
 * views_view.sponsored_twitter.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'sponsored_twitter';
$view->description = 'Twitter feed using the Twitter module for right column of the user and sponsored content pages. ';
$view->tag = 'default';
$view->base_table = 'twitter';
$view->human_name = 'User Twitter Feed';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'sponsoredTwitter sponsorTwitterFeed';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<h4>%1\'s Twitter </h4>

<p class="followSponsorTwitter"><a href="http://www.twitter.com/[screen_name]" class="button" target="_blank">Follow @[screen_name]</a></p>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['header']['area']['tokenize'] = TRUE;
/* Field: Twitter: Message text */
$handler->display->display_options['fields']['text']['id'] = 'text';
$handler->display->display_options['fields']['text']['table'] = 'twitter';
$handler->display->display_options['fields']['text']['field'] = 'text';
$handler->display->display_options['fields']['text']['label'] = '';
$handler->display->display_options['fields']['text']['element_type'] = 'p';
$handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['text']['link_urls'] = 1;
$handler->display->display_options['fields']['text']['link_usernames'] = 1;
$handler->display->display_options['fields']['text']['link_hashtags'] = 0;
/* Field: Twitter: Created time */
$handler->display->display_options['fields']['created_time']['id'] = 'created_time';
$handler->display->display_options['fields']['created_time']['table'] = 'twitter';
$handler->display->display_options['fields']['created_time']['field'] = 'created_time';
$handler->display->display_options['fields']['created_time']['label'] = '';
$handler->display->display_options['fields']['created_time']['element_type'] = 'h5';
$handler->display->display_options['fields']['created_time']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created_time']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['created_time']['date_format'] = 'short';
/* Field: Twitter: Login name */
$handler->display->display_options['fields']['screen_name']['id'] = 'screen_name';
$handler->display->display_options['fields']['screen_name']['table'] = 'twitter';
$handler->display->display_options['fields']['screen_name']['field'] = 'screen_name';
$handler->display->display_options['fields']['screen_name']['label'] = '';
$handler->display->display_options['fields']['screen_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['screen_name']['element_label_colon'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['block_description'] = 'User Twitter Feed';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'twitter',
);
