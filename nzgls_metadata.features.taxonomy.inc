<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function nzgls_metadata_taxonomy_default_vocabularies() {
  return array(
    'FONZ' => array(
      'name' => 'Functions Of New Zealand (FONZ)',
      'description' => 'A list of topics and classifications used to describe government departments and administrative tasks. Subjects include terms relating to taxation, healthcare, immigration, defense and law. (209 terms)',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_FONZ',
      'weight' => '-2',
      'nodes' => array(
        'document' => 'document',
        'page' => 'page',
        'story' => 'story',
      ),
    ),
    'NZGLS_Audience_Category' => array(
      'name' => 'NZGLS Audience Type',
      'description' => 'A list of audience types, recommended by the New Zealand Government for use in government and local body IT management. (21 terms)',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_NZGLS_Audience_Category',
      'weight' => '-3',
      'nodes' => array(
        'document' => 'document',
        'page' => 'page',
        'story' => 'story',
      ),
    ),
    'NZGLS_Type_Category' => array(
      'name' => 'NZGLS Document Type',
      'description' => 'A list of document and resource types, recommended by the New Zealand Government for use in government and local body IT management. (34 terms)',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '2',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_NZGLS_Type_Category',
      'weight' => '-4',
      'nodes' => array(
        'document' => 'document',
        'page' => 'page',
        'story' => 'story',
      ),
    ),
    'SONZ' => array(
      'name' => 'Services Of New Zealand (SONZ)',
      'description' => 'A list of topics and classifications used to describe subjects of interest to government and governemnt agencies. Subjects include terms relating to administration, national affairs, education, infrastructure, law, economics and industry. (1551 terms)',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_SONZ',
      'weight' => '-1',
      'nodes' => array(
        'document' => 'document',
        'page' => 'page',
        'story' => 'story',
      ),
    ),
  );
}
