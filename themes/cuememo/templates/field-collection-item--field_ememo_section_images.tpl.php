<?php if($content['field_ememo_section_image']) :?>

<?php 
  $size = $content['field_ememo_image_size'][0]['#markup'];
  if ($content['field_ememo_image_size'][0]['#markup'] == 'ememo_large') {
    $width = 'photo-580';
    $td_width = '580';
  } else {
    $width = 'photo-280';
    $td_width='280';
  }
  if ($width == 'photo-280') {
    $align = $content['field_ememo_image_position'][0]['#markup'];
    
  } else {
    $align='';
  }
  if ($align == 'left') {
    $margin = 'margin:0 10px 10px 0;';
    $class='photo-left';
  } elseif ($align == 'right') {
    $margin = 'margin:0 0 10px 10px;';
    $class='photo-right';
  } else {
    $margin = 'margin:0 0 10px 0;';
    $class='photo-none';
  }
  $content['field_ememo_section_image'][0]['#image_style'] = $size; 
?>

<?php hide($content['field_ememo_image_position']); ?>
<?php hide($content['field_ememo_image_size']); ?>
<?php hide($content['field_ememo_image_caption']); ?>
<table cellspacing="0" cellpadding="0" border="0" align="<?php print $align; ?>" width="<?php print $td_width; ?>" class="photo-wrapper <?php print $class; ?> <?php print $width; ?>" style="clear:both;">
  <tr>
    <td width="<?php print $td_width; ?>" align="<?php print $align; ?>">
      <?php print render($content); ?>
      <?php if(!empty($content['field_ememo_image_caption'])): ?>
        <div class="photo-caption"><?php print render($content['field_ememo_image_caption']); ?></div>
      <?php endif; ?>
    </td>
  </tr>
</table>
<?php else: ?>

<?php endif; ?>

