<?php

function cuememo_preprocess_html(&$vars) {
  $data = array(
    '#tag' => 'meta',
    '#attributes' => array(
       'http-equiv' => 'Content-Type',
       'content' => 'text/html; charset=utf-8',
    ),
  );
  drupal_add_html_head($data, 'utf');
}


