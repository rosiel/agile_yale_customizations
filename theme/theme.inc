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
 * Implements hook_form_FORM_ID_alter().
 */
function agile_yale_form_emicdora_workbench_form_alter(&$form, &$form_state, $form_id) {
  $form = array_slice($form, 0, 5, true) +
    array('add_article' => array(
      '#type' => 'submit',
      '#value' => t('Add Article'),
      '#access' => user_access(ISLANDORA_INGEST),
      '#attributes' => array(
        'class' => array(
          'emicdora-workbench-button',
        ),
      ),
      )
    ) +
    array_slice($form, 5, count($form) - 1, true);

}
