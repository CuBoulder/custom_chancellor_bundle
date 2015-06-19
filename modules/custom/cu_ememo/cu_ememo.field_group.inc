<?php
/**
 * @file
 * cu_ememo.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_ememo_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ememo_section_content|field_collection_item|field_ememo_content_section|form';
  $field_group->group_name = 'group_ememo_section_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_ememo_content_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'group_ememo_section_text',
      1 => 'group_ememo_section_images',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-ememo-section-content field-group-htabs',
      ),
    ),
  );
  $export['group_ememo_section_content|field_collection_item|field_ememo_content_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ememo_section_images|field_collection_item|field_ememo_content_section|form';
  $field_group->group_name = 'group_ememo_section_images';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_ememo_content_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ememo_section_content';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '7',
    'children' => array(
      0 => 'field_ememo_section_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ememo-section-images field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ememo_section_images|field_collection_item|field_ememo_content_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ememo_section_text|field_collection_item|field_ememo_content_section|form';
  $field_group->group_name = 'group_ememo_section_text';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_ememo_content_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ememo_section_content';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '5',
    'children' => array(
      0 => 'field_ememo_section_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ememo-section-text field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ememo_section_text|field_collection_item|field_ememo_content_section|form'] = $field_group;

  return $export;
}
