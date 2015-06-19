<?php
/**
 * @file
 * chancellor_in_the_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function chancellor_in_the_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'in_the_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'In the News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'In the News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_in_the_news_publication' => 'field_in_the_news_publication',
    'field_in_the_news_date' => 'field_in_the_news_date',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_in_the_news_link']['id'] = 'field_in_the_news_link';
  $handler->display->display_options['fields']['field_in_the_news_link']['table'] = 'field_data_field_in_the_news_link';
  $handler->display->display_options['fields']['field_in_the_news_link']['field'] = 'field_in_the_news_link';
  $handler->display->display_options['fields']['field_in_the_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_in_the_news_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_in_the_news_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_in_the_news_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_the_news_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_in_the_news_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_in_the_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_in_the_news_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_in_the_news_link']['field_api_classes'] = TRUE;
  /* Field: Content: Publication Name */
  $handler->display->display_options['fields']['field_in_the_news_publication']['id'] = 'field_in_the_news_publication';
  $handler->display->display_options['fields']['field_in_the_news_publication']['table'] = 'field_data_field_in_the_news_publication';
  $handler->display->display_options['fields']['field_in_the_news_publication']['field'] = 'field_in_the_news_publication';
  $handler->display->display_options['fields']['field_in_the_news_publication']['label'] = '';
  $handler->display->display_options['fields']['field_in_the_news_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_the_news_publication']['element_default_classes'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_in_the_news_date']['id'] = 'field_in_the_news_date';
  $handler->display->display_options['fields']['field_in_the_news_date']['table'] = 'field_data_field_in_the_news_date';
  $handler->display->display_options['fields']['field_in_the_news_date']['field'] = 'field_in_the_news_date';
  $handler->display->display_options['fields']['field_in_the_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_in_the_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_the_news_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_in_the_news_date']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_in_the_news_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_in_the_news_link]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'in_the_news' => 'in_the_news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['in_the_news'] = $view;

  return $export;
}
