<?php
/**
 * @file
 * views_view.author_information.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'author_information';
$view->description = 'Overview information for an author';
$view->tag = 'default';
$view->base_table = 'profile';
$view->human_name = 'Author Information';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
/* Field: Profile: Bio */
$handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
$handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['label'] = '';
$handler->display->display_options['fields']['field_bio']['element_type'] = 'p';
$handler->display->display_options['fields']['field_bio']['element_class'] = 'authorBio';
$handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
/* Field: Field: LinkedIn Account */
$handler->display->display_options['fields']['field_linkedin_account']['id'] = 'field_linkedin_account';
$handler->display->display_options['fields']['field_linkedin_account']['table'] = 'field_data_field_linkedin_account';
$handler->display->display_options['fields']['field_linkedin_account']['field'] = 'field_linkedin_account';
$handler->display->display_options['fields']['field_linkedin_account']['click_sort_column'] = 'url';
/* Field: Field: Twitter Account */
$handler->display->display_options['fields']['field_twitter_account']['id'] = 'field_twitter_account';
$handler->display->display_options['fields']['field_twitter_account']['table'] = 'field_data_field_twitter_account';
$handler->display->display_options['fields']['field_twitter_account']['field'] = 'field_twitter_account';
$handler->display->display_options['fields']['field_twitter_account']['click_sort_column'] = 'url';
/* Contextual filter: Profile: Profile ID */
$handler->display->display_options['arguments']['pid']['id'] = 'pid';
$handler->display->display_options['arguments']['pid']['table'] = 'profile';
$handler->display->display_options['arguments']['pid']['field'] = 'pid';
$handler->display->display_options['arguments']['pid']['default_action'] = 'default';
$handler->display->display_options['arguments']['pid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['block_description'] = 'Author Information';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'profile2',
  2 => 'text',
  3 => 'link',
);
