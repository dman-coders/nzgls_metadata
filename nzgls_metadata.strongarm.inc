<?php

/**
 * Implementation of hook_strongarm().
 */
function nzgls_metadata_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_add_dc_schema';
  $strongarm->value = 1;

  $export['nodewords_add_dc_schema'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_admin_edit';
  $strongarm->value = array(
    'description' => 'description',
    'keywords' => 'keywords',
    'abstract' => 0,
    'canonical' => 0,
    'copyright' => 0,
    'revisit-after' => 0,
    'robots' => 0,
    'dc.contributor' => 0,
    'dc.creator' => 0,
    'dc.date' => 0,
    'dc.description' => 0,
    'dc.publisher' => 0,
    'dc.title' => 0,
    'location' => 0,
    'pics-label' => 0,
    'shorturl' => 0,
  );

  $export['nodewords_admin_edit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_edit';
  $strongarm->value = array(
    'description' => 'description',
    'dc.creator' => 'dc.creator',
    'dc.description' => 'dc.description',
    'dc.title' => 'dc.title',
    'abstract' => 0,
    'canonical' => 0,
    'copyright' => 0,
    'dc.contributor' => 0,
    'dc.date' => 0,
    'dc.publisher' => 0,
    'keywords' => 0,
    'location' => 0,
    'pics-label' => 0,
    'revisit-after' => 0,
    'robots' => 0,
  );

  $export['nodewords_edit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_head';
  $strongarm->value = array(
    'abstract' => 'abstract',
    'canonical' => 'canonical',
    'copyright' => 'copyright',
    'description' => 'description',
    'keywords' => 'keywords',
    'revisit-after' => 'revisit-after',
    'robots' => 'robots',
    'dc.contributor' => 'dc.contributor',
    'dc.creator' => 'dc.creator',
    'dc.date' => 'dc.date',
    'dc.description' => 'dc.description',
    'dc.publisher' => 'dc.publisher',
    'dc.title' => 'dc.title',
    'location' => 'location',
    'pics-label' => 'pics-label',
    'shorturl' => 0,
  );

  $export['nodewords_head'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_keyword_vids';
  $strongarm->value = array(
    3 => 3,
    2 => 0,
    1 => 0,
  );

  $export['nodewords_keyword_vids'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_ui_edit';
  $strongarm->value = array(
    'description' => 'description',
    'keywords' => 'keywords',
    'abstract' => 0,
    'canonical' => 0,
    'copyright' => 0,
    'revisit-after' => 0,
    'robots' => 0,
    'dc.contributor' => 0,
    'dc.creator' => 0,
    'dc.date' => 0,
    'dc.description' => 0,
    'dc.title' => 0,
    'location' => 0,
    'pics-label' => 0,
    'shorturl' => 0,
  );

  $export['nodewords_ui_edit'] = $strongarm;
  return $export;
}
