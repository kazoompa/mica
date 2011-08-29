<?php
/**
 * @file
 * mica_datasets.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function mica_datasets_field_default_fields() {
  $fields = array();

  // Exported field: 'node-dataset-body'
  $fields['node-dataset-body'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => 'TEXT',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'variable_infos' => array(
          'variable' => 1,
          'variable_body' => '',
          'variable_value_type' => 'TEXT',
        ),
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'dataset',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-dataset-field_dataschema'
  $fields['node-dataset-field_dataschema'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dataschema',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'title' => 'optional',
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'dataset',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dataschema',
      'label' => 'Dataschema',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => 'nofollow',
          'target' => '_blank',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'none',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-dataset-field_dataset_studies'
  $fields['node-dataset-field_dataset_studies'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dataset_studies',
      'foreign keys' => array(),
      'indexes' => array(
        'view_id' => array(
          0 => 'view_id',
        ),
      ),
      'module' => 'viewreference',
      'settings' => array(
        'append_id' => 0,
        'arguments' => array(
          'delimiter' => '/',
          'dsv_arguments' => 1,
          'php_arguments' => 0,
          'rows' => '1',
        ),
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'referenceable_views' => array(
          'archive:block' => 0,
          'archive:page' => 0,
          'backlinks:block' => 0,
          'backlinks:page' => 0,
          'calendar:block_1' => 0,
          'calendar:calendar_1' => 0,
          'calendar:calendar_block_1' => 0,
          'calendar:calendar_period_1' => 0,
          'calendar:calendar_period_2' => 0,
          'calendar:calendar_period_3' => 0,
          'calendar:calendar_period_4' => 0,
          'calendar:calendar_period_5' => 0,
          'comments_recent:block' => 0,
          'comments_recent:page' => 0,
          'community:page' => 0,
          'csv_contact_export:views_data_export_1' => 0,
          'csv_field_description_export:views_data_export_1' => 0,
          'csv_institution_export:views_data_export_1' => 0,
          'csv_study_documents_export:views_data_export_1' => 0,
          'csv_study_export:views_data_export_1' => 0,
          'csv_study_information_export:views_data_export_1' => 0,
          'dataschema_term:page' => 0,
          'dataset_participant_variables:page' => 0,
          'dataset_studies:page' => 'dataset_studies:page',
          'datasets:feed' => 0,
          'datasets:page' => 0,
          'date_browser:date_nav_1' => 0,
          'date_browser:page' => 0,
          'events:feed' => 0,
          'events:page' => 0,
          'events_calendar:block_1' => 0,
          'events_calendar:calendar_1' => 0,
          'events_calendar:calendar_block_1' => 0,
          'events_calendar:calendar_period_1' => 0,
          'events_calendar:calendar_period_2' => 0,
          'events_calendar:calendar_period_3' => 0,
          'events_calendar:calendar_period_4' => 0,
          'events_calendar:calendar_period_5' => 0,
          'feeds_log:page_1' => 0,
          'feeds_log:page_2' => 0,
          'feeds_log:page_3' => 0,
          'fields_description_search:page' => 0,
          'frontpage:feed' => 0,
          'frontpage:page' => 0,
          'glossary:attachment' => 0,
          'glossary:page' => 0,
          'publications:page' => 0,
          'studies:page' => 0,
          'studies_search:page' => 0,
          'taxonomy_term:feed' => 0,
          'taxonomy_term:feed_1' => 0,
          'taxonomy_term:page' => 0,
          'tracker:page' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'viewreference',
    ),
    'field_instance' => array(
      'bundle' => 'dataset',
      'default_value' => array(
        0 => array(
          'arguments' => '',
          'view_id' => 'dataset_studies:page',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_full',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dataset_studies',
      'label' => 'Studies',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-dataset-field_dataset_variables'
  $fields['node-dataset-field_dataset_variables'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dataset_variables',
      'foreign keys' => array(),
      'indexes' => array(
        'view_id' => array(
          0 => 'view_id',
        ),
      ),
      'module' => 'viewreference',
      'settings' => array(
        'append_id' => 0,
        'arguments' => array(
          'delimiter' => '/',
          'dsv_arguments' => 1,
          'php_arguments' => 0,
          'rows' => '1',
        ),
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'referenceable_views' => array(
          'archive:block' => 0,
          'archive:page' => 0,
          'backlinks:block' => 0,
          'backlinks:page' => 0,
          'calendar:block_1' => 0,
          'calendar:calendar_1' => 0,
          'calendar:calendar_block_1' => 0,
          'calendar:calendar_period_1' => 0,
          'calendar:calendar_period_2' => 0,
          'calendar:calendar_period_3' => 0,
          'calendar:calendar_period_4' => 0,
          'calendar:calendar_period_5' => 0,
          'comments_recent:block' => 0,
          'comments_recent:page' => 0,
          'community:page' => 0,
          'csv_contact_export:views_data_export_1' => 0,
          'csv_field_description_export:views_data_export_1' => 0,
          'csv_institution_export:views_data_export_1' => 0,
          'csv_study_documents_export:views_data_export_1' => 0,
          'csv_study_export:views_data_export_1' => 0,
          'csv_study_information_export:views_data_export_1' => 0,
          'dataschema_term:page' => 0,
          'dataset_participant_variables:page' => 'dataset_participant_variables:page',
          'dataset_studies:page' => 0,
          'datasets:feed' => 0,
          'datasets:page' => 0,
          'date_browser:date_nav_1' => 0,
          'date_browser:page' => 0,
          'events:feed' => 0,
          'events:page' => 0,
          'events_calendar:block_1' => 0,
          'events_calendar:calendar_1' => 0,
          'events_calendar:calendar_block_1' => 0,
          'events_calendar:calendar_period_1' => 0,
          'events_calendar:calendar_period_2' => 0,
          'events_calendar:calendar_period_3' => 0,
          'events_calendar:calendar_period_4' => 0,
          'events_calendar:calendar_period_5' => 0,
          'feeds_log:page_1' => 0,
          'feeds_log:page_2' => 0,
          'feeds_log:page_3' => 0,
          'fields_description_search:page' => 0,
          'frontpage:feed' => 0,
          'frontpage:page' => 0,
          'glossary:attachment' => 0,
          'glossary:page' => 0,
          'publications:page' => 0,
          'studies:page' => 0,
          'studies_search:page' => 0,
          'taxonomy_term:feed' => 0,
          'taxonomy_term:feed_1' => 0,
          'taxonomy_term:page' => 0,
          'tracker:page' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'viewreference',
    ),
    'field_instance' => array(
      'bundle' => 'dataset',
      'default_value' => array(
        0 => array(
          'arguments' => '',
          'view_id' => 'dataset_participant_variables:page',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dataset_variables',
      'label' => 'Participant Variables',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-participant_variable-body'
  $fields['node-participant_variable-body'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => 'TEXT',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'variable_infos' => array(
          'variable' => 1,
          'variable_body' => '',
          'variable_value_type' => 'TEXT',
        ),
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'participant_variable',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-participant_variable-field_categories'
  $fields['node-participant_variable-field_categories'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_categories',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => 'TEXT',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'participant_variable',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_categories',
      'label' => 'Categories',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-participant_variable-field_dataset'
  $fields['node-participant_variable-field_dataset'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dataset',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'referenceable_types' => array(
          'article' => 0,
          'blog' => 0,
          'contact' => 0,
          'dataset' => 'dataset',
          'event' => 0,
          'field_description' => 0,
          'forum' => 0,
          'institution' => 0,
          'page' => 0,
          'panel' => 0,
          'participant_variable' => 0,
          'publication' => 0,
          'study' => 0,
          'study_documents' => 0,
          'study_information' => 0,
        ),
        'view' => array(
          'args' => array(
            0 => '',
          ),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'participant_variable',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_dataset',
      'label' => 'Dataset',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-participant_variable-field_label'
  $fields['node-participant_variable-field_label'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_label',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => 'TEXT',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'participant_variable',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_label',
      'label' => 'Label',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-participant_variable-field_repeatable'
  $fields['node-participant_variable-field_repeatable'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_repeatable',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'participant_variable',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => 'Can this variable have multiple values?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_repeatable',
      'label' => 'Repeatable',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-participant_variable-field_value_type'
  $fields['node-participant_variable-field_value_type'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_value_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'BOOLEAN' => 'Boolean',
          'DATE' => 'Date',
          'DECIMAL' => 'Decimal',
          'INTEGER' => 'Integer',
          'TEXT' => 'Text',
        ),
        'allowed_values_function' => '',
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'participant_variable',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_value_type',
      'label' => 'Value Type',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-study-mica_dataset'
  $fields['node-study-mica_dataset'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'mica_dataset',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'referenceable_types' => array(
          'dataset' => 'dataset',
        ),
        'view' => array(
          'args' => array(
            0 => '',
          ),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'study',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'mica_dataset',
      'label' => 'Datasets',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-study-mica_opal'
  $fields['node-study-mica_opal'] = array(
    'field_config' => array(
      'active' => '1',
      'locked' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'mica_opal',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'field_description_infos' => array(
          'field_description' => 0,
          'field_description_body' => '',
          'field_description_value_type' => '',
        ),
        'field_permissions' => array(
          'create' => 0,
          'edit' => 0,
          'edit own' => 0,
          'view' => 0,
          'view own' => 0,
        ),
        'title' => 'optional',
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'study',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'default',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'mica_opal',
      'label' => 'Opal',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'none',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '9',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Can this variable have multiple values?');
  t('Categories');
  t('Dataschema');
  t('Dataset');
  t('Datasets');
  t('Description');
  t('Label');
  t('Opal');
  t('Participant Variables');
  t('Repeatable');
  t('Studies');
  t('Value Type');

  return $fields;
}