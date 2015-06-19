<?php hide($content['field_ememo_display_title']); ?>

<?php if(!empty($content['field_ememo_sub_title'])): ?>
  <div class="sub-title-wrapper clearfix ">
    <div class="date"><?php print format_date($created, 'custom', 'F, Y'); ?></div>
    <h2><?php print render($content['field_ememo_sub_title']); ?></h2>
  </div>
<?php else: ?>
  <div class="issue-date"><?php print format_date($created, 'custom', 'F Y'); ?></div>  
<?php endif; ?>
<?php if(!empty($content['field_ememo_top_photo'])): ?>
  <div id="ememo-top-photo">
  <?php print render($content['field_ememo_top_photo']); ?>
  <?php if(!empty($content['field_ememo_top_photo_caption'])): ?>
    <?php print render($content['field_ememo_top_photo_caption']); ?>
  <?php endif; ?>
  </div>
<?php endif; ?>
<p><?php print render($content['field_ememo_greeting']); ?></p>

<?php 
  // Hide news and text block from content if both are not empty
  if (!empty($content['field_ememo_news']) && !empty($content['field_ememo_block'])) {
    hide($content['field_ememo_news']);
    hide($content['field_ememo_block']);
  } 
?>

<?php print render($content); ?>



<?php 
  // Print news and text blocks if they are both not empty
  if (!empty($content['field_ememo_news']) && !empty($content['field_ememo_block'])): 
?>
  <div class="clearfix">
    <div class="ememo-block-column ememo-block-column-news">
      <?php print render($content['field_ememo_news']); ?>
    </div>
    <div class="ememo-block-column ememo-block-column-block">
      <?php print render($content['field_ememo_block']); ?>
    </div>
  </div>
<?php endif; ?>

<style>
.photo-left {
  float:left;
  margin:0px 10px 10px 0;
  width:200px;
}
.photo-right {
  float:right;
  margin:0px 0 10px 10px;
  width:200px;
}
.photo-left img,
.photo-right img {
  width:100%;
  height: auto;
}
.content p:last-child {
  margin-bottom: 20px;
}
small.field-name-field-ememo-image-caption {
  line-height: 120%;
}
</style>