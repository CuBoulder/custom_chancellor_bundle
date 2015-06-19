<?php
/**
 * @file
 * chancellor_communication.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function chancellor_communication_taxonomy_default_vocabularies() {
  return array(
    'communication_type' => array(
      'name' => 'Communication Type',
      'machine_name' => 'communication_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
