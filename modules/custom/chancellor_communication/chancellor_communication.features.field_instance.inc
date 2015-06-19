<?php
/**
 * @file
 * chancellor_communication.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function chancellor_communication_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-communication-body'
  $field_instances['node-communication-body'] = array(
    'bundle' => 'communication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-communication-field_communication_date'
  $field_instances['node-communication-field_communication_date'] = array(
    'bundle' => 'communication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_communication_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-communication-field_communication_link'
  $field_instances['node-communication-field_communication_link'] = array(
    'bundle' => 'communication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_communication_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => '[node:title]',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-communication-field_communication_photo'
  $field_instances['node-communication-field_communication_photo'] = array(
    'bundle' => 'communication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_communication_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 1,
        'insert_class' => '',
        'insert_default' => 'image_medium',
        'insert_styles' => array(
          'auto' => 0,
          'colorbox__ememo_large' => 0,
          'colorbox__ememo_small' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__grid-3' => 0,
          'colorbox__grid-4' => 0,
          'colorbox__grid-6' => 0,
          'colorbox__grid-9' => 0,
          'colorbox__grid-12' => 0,
          'colorbox__large' => 0,
          'colorbox__large_square_thumbnail' => 0,
          'colorbox__large_wide_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__slider' => 0,
          'colorbox__slider-large' => 0,
          'colorbox__small' => 0,
          'colorbox__square' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_ememo_large' => 0,
          'image_ememo_small' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_grid-3' => 0,
          'image_grid-4' => 0,
          'image_grid-6' => 0,
          'image_grid-9' => 0,
          'image_grid-12' => 0,
          'image_large' => 'image_large',
          'image_large_square_thumbnail' => 'image_large_square_thumbnail',
          'image_large_wide_thumbnail' => 'image_large_wide_thumbnail',
          'image_medium' => 'image_medium',
          'image_slider' => 0,
          'image_slider-large' => 0,
          'image_small' => 'image_small',
          'image_square' => 'image_square',
          'image_square_thumbnail' => 'image_square_thumbnail',
          'image_thumbnail' => 'image_thumbnail',
          'link' => 0,
        ),
        'insert_width' => '',
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_filter_insert' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'large_wide_thumbnail' => 0,
          'slider' => 0,
          'slider-large' => 0,
          'square' => 0,
        ),
        'manualcrop_styles_list' => array(
          'large_wide_thumbnail' => 0,
          'slider' => 0,
          'slider-large' => 0,
          'square' => 0,
        ),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-communication-field_communication_type'
  $field_instances['node-communication-field_communication_type'] = array(
    'bundle' => 'communication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_communication_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Date');
  t('Link');
  t('Photo');
  t('Type');

  return $field_instances;
}
