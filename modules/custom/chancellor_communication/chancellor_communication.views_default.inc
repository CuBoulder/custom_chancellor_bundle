<?php
/**
 * @file
 * chancellor_communication.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function chancellor_communication_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'from_the_chancellor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'From the Chancellor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'From the Chancellor';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_communication_date' => 'field_communication_date',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ': ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_communication_date']['id'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['field'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['label'] = '';
  $handler->display->display_options['fields']['field_communication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date (field_communication_date) */
  $handler->display->display_options['sorts']['field_communication_date_value']['id'] = 'field_communication_date_value';
  $handler->display->display_options['sorts']['field_communication_date_value']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['sorts']['field_communication_date_value']['field'] = 'field_communication_date_value';
  $handler->display->display_options['sorts']['field_communication_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'communication' => 'communication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['from_the_chancellor'] = $view;

  $view = new view();
  $view->name = 'speeches_columns_letters';
  $view->description = 'Blocks of Communication types ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speeches, Columns & Letters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speeches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_communication_date' => 'field_communication_date',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_communication_date']['id'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['field'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['label'] = '';
  $handler->display->display_options['fields']['field_communication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date (field_communication_date) */
  $handler->display->display_options['sorts']['field_communication_date_value']['id'] = 'field_communication_date_value';
  $handler->display->display_options['sorts']['field_communication_date_value']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['sorts']['field_communication_date_value']['field'] = 'field_communication_date_value';
  $handler->display->display_options['sorts']['field_communication_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'communication' => 'communication',
  );
  /* Filter criterion: Content: Date (field_communication_date) */
  $handler->display->display_options['filters']['field_communication_date_value']['id'] = 'field_communication_date_value';
  $handler->display->display_options['filters']['field_communication_date_value']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['filters']['field_communication_date_value']['field'] = 'field_communication_date_value';
  $handler->display->display_options['filters']['field_communication_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_communication_date_value']['default_date'] = 'now -1 year';
  $handler->display->display_options['filters']['field_communication_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Type (field_communication_type) */
  $handler->display->display_options['filters']['field_communication_type_tid']['id'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['table'] = 'field_data_field_communication_type';
  $handler->display->display_options['filters']['field_communication_type_tid']['field'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_communication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_communication_type_tid']['vocabulary'] = 'communication_type';

  /* Display: Speeches Recent */
  $handler = $view->new_display('block', 'Speeches Recent', 'block');
  $handler->display->display_options['display_description'] = 'Recent speeches';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'communication' => 'communication',
  );
  /* Filter criterion: Content: Date (field_communication_date) */
  $handler->display->display_options['filters']['field_communication_date_value']['id'] = 'field_communication_date_value';
  $handler->display->display_options['filters']['field_communication_date_value']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['filters']['field_communication_date_value']['field'] = 'field_communication_date_value';
  $handler->display->display_options['filters']['field_communication_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_communication_date_value']['default_date'] = 'now -1 year';
  $handler->display->display_options['filters']['field_communication_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Type (field_communication_type) */
  $handler->display->display_options['filters']['field_communication_type_tid']['id'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['table'] = 'field_data_field_communication_type';
  $handler->display->display_options['filters']['field_communication_type_tid']['field'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_communication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_communication_type_tid']['vocabulary'] = 'communication_type';

  /* Display: Speeches Archive */
  $handler = $view->new_display('block', 'Speeches Archive', 'block_1');
  $handler->display->display_options['display_description'] = 'Archived speeches';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'communication' => 'communication',
  );
  /* Filter criterion: Content: Type (field_communication_type) */
  $handler->display->display_options['filters']['field_communication_type_tid']['id'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['table'] = 'field_data_field_communication_type';
  $handler->display->display_options['filters']['field_communication_type_tid']['field'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_communication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_communication_type_tid']['vocabulary'] = 'communication_type';

  /* Display: Columns Recent */
  $handler = $view->new_display('block', 'Columns Recent', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Columns';
  $handler->display->display_options['display_description'] = 'Recent columns';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_communication_link']['id'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['table'] = 'field_data_field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['field'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['label'] = '';
  $handler->display->display_options['fields']['field_communication_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_communication_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_communication_link']['type'] = 'link_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_communication_date']['id'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['field'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['label'] = '';
  $handler->display->display_options['fields']['field_communication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_communication_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'communication' => 'communication',
  );
  /* Filter criterion: Content: Date (field_communication_date) */
  $handler->display->display_options['filters']['field_communication_date_value']['id'] = 'field_communication_date_value';
  $handler->display->display_options['filters']['field_communication_date_value']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['filters']['field_communication_date_value']['field'] = 'field_communication_date_value';
  $handler->display->display_options['filters']['field_communication_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_communication_date_value']['default_date'] = 'now -1 year';
  $handler->display->display_options['filters']['field_communication_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Type (field_communication_type) */
  $handler->display->display_options['filters']['field_communication_type_tid']['id'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['table'] = 'field_data_field_communication_type';
  $handler->display->display_options['filters']['field_communication_type_tid']['field'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_communication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_communication_type_tid']['vocabulary'] = 'communication_type';

  /* Display: Columns Archivce */
  $handler = $view->new_display('block', 'Columns Archivce', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Columns';
  $handler->display->display_options['display_description'] = 'Archive of columns';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_communication_link']['id'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['table'] = 'field_data_field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['field'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['label'] = '';
  $handler->display->display_options['fields']['field_communication_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_communication_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_communication_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_communication_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_communication_link']['field_api_classes'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_communication_date']['id'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['field'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['label'] = '';
  $handler->display->display_options['fields']['field_communication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_communication_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'communication' => 'communication',
  );
  /* Filter criterion: Content: Type (field_communication_type) */
  $handler->display->display_options['filters']['field_communication_type_tid']['id'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['table'] = 'field_data_field_communication_type';
  $handler->display->display_options['filters']['field_communication_type_tid']['field'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_communication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_communication_type_tid']['vocabulary'] = 'communication_type';

  /* Display: Letters Recent */
  $handler = $view->new_display('block', 'Letters Recent', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Letters';
  $handler->display->display_options['display_description'] = 'Recent Letters';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_communication_link']['id'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['table'] = 'field_data_field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['field'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['label'] = '';
  $handler->display->display_options['fields']['field_communication_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_communication_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_communication_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_communication_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_communication_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_communication_link']['field_api_classes'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_communication_date']['id'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['field'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['label'] = '';
  $handler->display->display_options['fields']['field_communication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_communication_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_communication_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: Letters Archive */
  $handler = $view->new_display('block', 'Letters Archive', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Letters';
  $handler->display->display_options['display_description'] = 'Archive of letters';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_communication_link']['id'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['table'] = 'field_data_field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['field'] = 'field_communication_link';
  $handler->display->display_options['fields']['field_communication_link']['label'] = '';
  $handler->display->display_options['fields']['field_communication_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_communication_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_communication_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_communication_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_communication_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_communication_link']['field_api_classes'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_communication_date']['id'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['table'] = 'field_data_field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['field'] = 'field_communication_date';
  $handler->display->display_options['fields']['field_communication_date']['label'] = '';
  $handler->display->display_options['fields']['field_communication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_communication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_communication_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_communication_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'communication' => 'communication',
  );
  /* Filter criterion: Content: Type (field_communication_type) */
  $handler->display->display_options['filters']['field_communication_type_tid']['id'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['table'] = 'field_data_field_communication_type';
  $handler->display->display_options['filters']['field_communication_type_tid']['field'] = 'field_communication_type_tid';
  $handler->display->display_options['filters']['field_communication_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_communication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_communication_type_tid']['vocabulary'] = 'communication_type';
  $export['speeches_columns_letters'] = $view;

  return $export;
}
