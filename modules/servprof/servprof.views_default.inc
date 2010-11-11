<?php
/**
 * Implementation of hook_views_default_views().
 */
function servprof_views_default_views() {
  /*
   * View 'servprof_research_maps'
   */
$view = new view;
$view->name = 'research_map';
$view->description = 'Forschungslandkarte';
$view->tag = 'Balance Meta';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Standards', 'default');
$handler->override_option('fields', array(
  'field_logo_fid' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'label_type' => 'none',
    'format' => 'image_nodelink',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_logo_fid',
    'table' => 'node_data_field_logo',
    'field' => 'field_logo_fid',
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
  ),
  'title' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<strong>[title]</strong>',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Übersteuern',
    ),
  ),
  'field_projectintention_value' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'label_type' => 'none',
    'format' => 'plain',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_projectintention_value',
    'table' => 'node_data_field_projectintention',
    'field' => 'field_projectintention_value',
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'tid' => array(
    'default_action' => 'empty',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'Alle',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'taxonomy_term',
    'validate_fail' => 'empty',
    'break_phrase' => 0,
    'add_table' => 0,
    'require_value' => 0,
    'reduce_duplicates' => 0,
    'set_breadcrumb' => 0,
    'id' => 'tid',
    'table' => 'term_node',
    'field' => 'tid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '8' => 0,
      '7' => 0,
      '9' => 0,
    ),
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_image_size' => '_original',
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'poll' => 0,
      'image' => 0,
      'book' => 0,
      'download' => 0,
      'expertenrat' => 0,
      'focusgroup' => 0,
      'page' => 0,
      'project' => 0,
      'project_partner' => 0,
      'publications' => 0,
      'story' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '3' => 3,
      '4' => 4,
      '5' => 5,
      '6' => 6,
      '1' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'image_size' => array(
      '_original' => '_original',
      'thumbnail' => 'thumbnail',
      'preview' => 'preview',
    ),
    'validate_argument_is_member' => 'OG_VIEWS_DO_NOT_VALIDATE_MEMBERSHIP',
    'validate_argument_group_node_type' => array(
      'focusgroup' => 0,
      'project' => 0,
    ),
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'status' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'status',
    'table' => 'node',
    'field' => 'status',
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
  ),
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'project' => 'project',
      'project_partner' => 'project_partner',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
  ),
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'project' => 'project',
      'project_partner' => 'project_partner',
    ),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'type_op',
      'identifier' => 'typ',
      'label' => 'Typ',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 1,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
  ),
  'tid' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'tid_op',
      'identifier' => 'branche',
      'label' => 'Branche',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '3',
    'id' => 'tid',
    'table' => 'term_node',
    'field' => 'tid',
    'hierarchy' => 0,
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'tid_1' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'tid_1_op',
      'identifier' => 'forschungsmethode',
      'label' => 'Forschungsmethode',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '4',
    'id' => 'tid_1',
    'table' => 'term_node',
    'field' => 'tid',
    'hierarchy' => 0,
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'tid_2' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'tid_2_op',
      'identifier' => 'forschungsziel',
      'label' => 'Forschungsziel',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '5',
    'id' => 'tid_2',
    'table' => 'term_node',
    'field' => 'tid',
    'hierarchy' => 0,
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'tid_3' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'tid_3_op',
      'identifier' => 'zielgruppe',
      'label' => 'Zielgruppe',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '6',
    'id' => 'tid_3',
    'table' => 'term_node',
    'field' => 'tid',
    'hierarchy' => 0,
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('empty', 'Es gibt keine Standorte für Ihre Auswahl');
$handler->override_option('empty_format', '2');
$handler->override_option('style_plugin', 'gmap');
$handler->override_option('style_options', array(
  'grouping' => '',
  'macro' => '[gmap ]',
  'datasource' => 'location',
  'latfield' => 'title',
  'lonfield' => 'title',
  'markers' => 'nodetype',
  'markerfield' => 'title',
  'markertype' => 'drupal',
));
$handler = $view->new_display('page', 'with filter', 'page_1');
$handler->override_option('arguments', array());
$handler->override_option('path', 'forschungslandkarte');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler = $view->new_display('page', 'with taxonomy', 'page_2');
$handler->override_option('filters', array(
  'status' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'status',
    'table' => 'node',
    'field' => 'status',
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
  ),
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'project' => 'project',
      'project_partner' => 'project_partner',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Übersteuern',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('header', '<a href="/forschungslandkarte">Alle Projekte und Projektpartner anzeigen</a>');
$handler->override_option('header_format', '2');
$handler->override_option('header_empty', 1);
$handler->override_option('path', 'forschungslandkarte-taxonomie');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
  $views[$view->name] = $view;

  return $views;
}