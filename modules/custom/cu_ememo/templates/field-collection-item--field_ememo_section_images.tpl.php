<?php if(!empty($content['field_ememo_section_image'])) :?>

<?php 
  $size = $content['field_ememo_image_size'][0]['#markup'];
  if ($content['field_ememo_image_size'][0]['#markup'] == 'ememo_large') {
    $width = '580';
  } else {
    $width = '280';
  }
  if ($width == '280') {
    $align = $content['field_ememo_image_position'][0]['#markup'];
    
  } else {
    $align='';
  }
  if ($align == 'left') {
    $margin = 'margin:0 10px 10px 0;';
  } elseif ($align == 'right') {
    $margin = 'margin:0 0 10px 10px;';
  } else {
    $margin = 'margin:0 0 10px 0;';
  }
  $content['field_ememo_section_image'][0]['#image_style'] = $size; 
?>

<?php hide($content['field_ememo_image_position']); ?>
<?php hide($content['field_ememo_image_size']); ?>

<div class="ememo-photo" style=" clear:both; float:<?php print $align; ?>; width:<?php print $width; ?>px; <?php print $margin; ?>">

      <?php print render($content); ?>

</div>
<?php else: ?>

<?php endif; ?>

