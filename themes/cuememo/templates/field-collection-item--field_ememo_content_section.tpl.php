<?php hide($content['field_ememo_section_divider']); ?>
<?php print render($content['field_ememo_section_title']); ?>

<?php print render($content['field_ememo_section_images']); ?>

<?php print render($content); ?>
<?php if($content['field_ememo_section_divider'][0]['#markup'] == 'TRUE') { print '<br clear="all" /><div class="divider"></div>'; } ?>