<?php
/**
 * @file
 * Default view.
 */

/**
 * Provide default view required for IIT display.
 *
 * @return view
 *   Default view
 */
function agile_yale_views_default_views() {
  $view = new view();
  $view->name = 'taxonomy_islandora_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'taxonomy-islandora-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: fgs_label_s */
  $handler->display->display_options['fields']['fgs_label_s']['id'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_s']['field'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['label'] = 'Title';
  $handler->display->display_options['fields']['fgs_label_s']['link_to_object'] = 1;
  /* Field: Islandora Solr: mods_name_personal_author_authority_marcrelator_namePart_ms */
  $handler->display->display_options['fields']['mods_name_personal_author_authority_marcrelator_namePart_ms']['id'] = 'mods_name_personal_author_authority_marcrelator_namePart_ms';
  $handler->display->display_options['fields']['mods_name_personal_author_authority_marcrelator_namePart_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_name_personal_author_authority_marcrelator_namePart_ms']['field'] = 'mods_name_personal_author_authority_marcrelator_namePart_ms';
  $handler->display->display_options['fields']['mods_name_personal_author_authority_marcrelator_namePart_ms']['label'] = 'Contributor';
  $handler->display->display_options['fields']['mods_name_personal_author_authority_marcrelator_namePart_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_subject_topic_ms */
  $handler->display->display_options['fields']['mods_subject_topic_ms']['id'] = 'mods_subject_topic_ms';
  $handler->display->display_options['fields']['mods_subject_topic_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_subject_topic_ms']['field'] = 'mods_subject_topic_ms';
  $handler->display->display_options['fields']['mods_subject_topic_ms']['label'] = 'Theme';
  $handler->display->display_options['fields']['mods_subject_topic_ms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mods_subject_topic_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_subject_temporal_ms */
  $handler->display->display_options['fields']['mods_subject_temporal_ms']['id'] = 'mods_subject_temporal_ms';
  $handler->display->display_options['fields']['mods_subject_temporal_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_subject_temporal_ms']['field'] = 'mods_subject_temporal_ms';
  $handler->display->display_options['fields']['mods_subject_temporal_ms']['label'] = 'Year';
  $handler->display->display_options['fields']['mods_subject_temporal_ms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mods_subject_temporal_ms']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: mods_subject_topic_ms */
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['id'] = 'mods_subject_topic_ms';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['field'] = 'mods_subject_topic_ms';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['default_action'] = 'default';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['title'] = '%1';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['mods_subject_topic_ms']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['value'] = 'info:fedora/islandora:sp_html_snippet';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'AGILE-taxonomy-article-view';


  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.
  // At the end, return array of default views.
  return $views;
}
