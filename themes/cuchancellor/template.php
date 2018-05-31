<?php

function cuchancellor_preprocess_html(&$vars) {
  $vars['classes_array'][]='banner-black';
  $layout = theme_get_setting('layout_style', 'cuthemed') ? theme_get_setting('layout_style', 'cuthemed') : 'layout-wide';
  $vars['classes_array'][]=$layout;
}
