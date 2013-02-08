<?php
/**
 * @file
 * views_view.regions_overivew.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'regions_overivew';
$view->description = 'Region Overview Page from global navigation';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Regions';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Regions';
$handler->display->display_options['css_class'] = 'termOverviewList';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
);
/* Relationship: Taxonomy term: Representative node */
$handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
$handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
$handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.nid';
$handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
$handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_class'] = 'regionName';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'region' => 'region',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'region';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Regions';
$handler->display->display_options['menu']['name'] = 'main-menu';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
);
