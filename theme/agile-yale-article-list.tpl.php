<?php
/**
 * @file
 * islandora-basic-collection.tpl.php
 * based on emicdora-coop.
 */
?>
<div class="emicdora-coop wiki-articles">

  <p><?php print t('Intro Text for Articles'); ?></p>
  <?php print $browse_all_link; ?>
  <div class="emicdora_author">
    <h1>Browse by Topic</h1>

    <?php print $variables['author_table']; ?>
    <div class="coop_browse_more">
      <?php //print $variables['more_authors']; ?>
    </div>
  </div>
  <div class="emicdora_genre">
    <h1>Browse by Year</h1>
    <?php print $variables['years_table']; ?>
    <div class="coop_browse_more">
      <?php //print $variables['more_years']; ?>
    </div>
  </div>
  <div class="clearfix"></div>
</div>