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
  $handler->display->display_options['style_options']['row_class'] = 'islandora-article-list islandora-solr-search-result clear-block odd';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '; ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['mods_name_personal_author_authority_marcrelator_namePart_ms']['hide_empty'] = TRUE;
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

  /* Display: Block-Topic */
  $handler = $view->new_display('block', 'Block-Topic', 'block');
  $handler->display->display_options['block_description'] = 'AGILE-taxonomy-article-view';

  /* Display: Block-year */
  $handler = $view->new_display('block', 'Block-year', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Islandora Solr: mods_subject_temporal_ms */
  $handler->display->display_options['arguments']['mods_subject_temporal_ms']['id'] = 'mods_subject_temporal_ms';
  $handler->display->display_options['arguments']['mods_subject_temporal_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['mods_subject_temporal_ms']['field'] = 'mods_subject_temporal_ms';
  $handler->display->display_options['arguments']['mods_subject_temporal_ms']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['mods_subject_temporal_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['mods_subject_temporal_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['mods_subject_temporal_ms']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'AGILE-taxonomy-article-view';


  // Add view to list of views to provide.
  $views[$view->name] = $view;

  $view = new view();
  $view->name = 'list_taxo_terms';
  $view->description = '';
  $view->tag = 'agile_yale';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Term List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'taxo-term-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Sort name (field_sort_name) */
  $handler->display->display_options['sorts']['field_sort_name_value']['id'] = 'field_sort_name_value';
  $handler->display->display_options['sorts']['field_sort_name_value']['table'] = 'field_data_field_sort_name';
  $handler->display->display_options['sorts']['field_sort_name_value']['field'] = 'field_sort_name_value';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'topic' => 'topic',
  );

  /* Display: Authors Page */
  $handler = $view->new_display('page', 'Authors Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Authors';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Sort name (field_sort_name) */
  $handler->display->display_options['sorts']['field_sort_name_value']['id'] = 'field_sort_name_value';
  $handler->display->display_options['sorts']['field_sort_name_value']['table'] = 'field_data_field_sort_name';
  $handler->display->display_options['sorts']['field_sort_name_value']['field'] = 'field_sort_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'topic' => 'topic',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'Authors';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['operator'] = '!=';
  $handler->display->display_options['filters']['name_1']['value'] = 'Wiki Management';
  $handler->display->display_options['filters']['name_1']['expose']['operator_id'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_1']['expose']['operator'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['identifier'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'authors';

  /* Display: Years Page */
  $handler = $view->new_display('page', 'Years Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Years';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'temporal' => 'temporal',
  );
  $handler->display->display_options['path'] = 'years';

  /* Display: Authors Block */
  $handler = $view->new_display('block', 'Authors Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View More';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'topic' => 'topic',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'Authors';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['operator'] = '!=';
  $handler->display->display_options['filters']['name_1']['value'] = 'Wiki Management';

  /* Display: Years Block */
  $handler = $view->new_display('block', 'Years Block', 'block_2');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Sort name (field_sort_name) */
  $handler->display->display_options['sorts']['field_sort_name_value']['id'] = 'field_sort_name_value';
  $handler->display->display_options['sorts']['field_sort_name_value']['table'] = 'field_data_field_sort_name';
  $handler->display->display_options['sorts']['field_sort_name_value']['field'] = 'field_sort_name_value';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'temporal' => 'temporal',
  );



  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.
  // At the end, return array of default views.
  return $views;
}
