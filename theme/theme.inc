<?php

/**
 * @file
 * Defines this modules Theme hooks.
 */

/**
 * Implements hook_preprocess_theme().
 */
function agile_yale_preprocess_agile_yale_article_list(array &$variables) {
  $display_count = $variables['display_count']; // set as 5. might want to change for niceness
  $module_path = drupal_get_path('module', 'emicdora'); // Probably leave this here for the css/js business. but might not need js.
  drupal_add_css("$module_path/css/emicdora.coop.css");
  drupal_add_js("$module_path/js/coop.js");
  // No Breadcrumbs on this page.
  drupal_set_breadcrumb(array()); // true.

  // Returns all source object(s), this assumes that solr has been configured to
  // only display source objects, version objects, and critical editions.
  $article_search_path = 'islandora/search/RELS_EXT_hasModel_uri_mt:sp_html_snippet';
  $options = array('query' => array('sort' => "fgs_label_ss asc"));
  $variables['browse_all_link'] = l(t('Browse All'), $article_search_path, $options);
  $variables['author_table'] = views_embed_view('list_taxo_terms', 'block_1');
  $variables['years_table'] = views_embed_view('list_taxo_terms', 'block_2');

}


/**
 * Builds themed table for topic page.
 *
 * @param string $type
 *   Author of Genre
 * @param int $display_count
 *   Number of entries to display
 * @param int $element
 *   Identifier to distinguish between multiple pagers
 *
 * @return HTML
 *   Themed table
 */
function agile_yale_build_topic_table($type, $display_count, $element) {
  $table = "Paged view here for $type";
  return $table;
}

/**
 * Builds links to download OBJ history and/or the ARCHIVE_WIKITEXT.
 */
function agile_yale_preprocess_agile_yale_download_history(array &$variables) {
  if (isset($variables['object'])) {
    $object = $variables['object'];
    // Get link to download wikitext
    if (isset($object['ARCHIVE_WIKITEXT'])) {
      $variables['history_download_link'] = l(t('Modernism Lab Wikitext (pre-2015 history)'), "islandora/object/{$object->id}/datastream/ARCHIVE_WIKITEXT/download");
    }
    // Get link to see OBJ versions
    if (isset($object['OBJ'])) {
      if (user_access('View datastream history')) {
        $variables['current_versions_link'] = l(t('Modernist Commons versions'), "islandora/object/{$object->id}/datastream/OBJ/version");
      }
      else {
        $variables['current_versions_link'] = t('You do not have permission to view historical versions.');
      }
    }
  }
}