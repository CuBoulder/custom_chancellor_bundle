<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 /**
 * Implements hook_preprocess_html().
 */
function chancellor_preprocess_html(&$vars) {

  // SET BANNER COLOR (banner-white, banner-light, banner-dark, banner-black)
  $banner_color = theme_get_setting('banner_color', 'chancellor') ? theme_get_setting('banner_color', 'chancellor') : 'black';
  $banner_color = 'black';
  $vars['attributes_array']['class'][]='banner-' . $banner_color;
  $font_set = theme_get_setting('fonts');
  if ($font_set) {
    drupal_add_css(drupal_get_path('theme','cu_omega') .'/fonts/' . $font_set . '.css', array('group' => CSS_THEME, 'every_page' => TRUE));
    $vars['attributes_array']['class'][]=$font_set;
  }
  $layout = theme_get_setting('layout_style', 'chancellor') ? theme_get_setting('layout_style', 'chancellor') : 'layout-wide';
  $vars['attributes_array']['class'][]=$layout;  
}