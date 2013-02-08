<?php
/**
 * @file
 * vocabulary.volume_issue.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '11',
  'name' => 'Volume Issue',
  'machine_name' => 'volume_issue',
  'description' => 'For storing issue dates related to nodes',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
