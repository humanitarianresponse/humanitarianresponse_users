<?php
/**
 * @file
 * humanitarianresponse_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function humanitarianresponse_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_clusters'
  $field_instances['user-user-field_clusters'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_clusters',
    'label' => 'Clusters',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_coordination_hubs'
  $field_instances['user-user-field_coordination_hubs'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 16,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_coordination_hubs',
    'label' => 'Coordination Hub',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_emergencies'
  $field_instances['user-user-field_emergencies'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 20,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_emergencies',
    'label' => 'Emergencies',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'simple' => 'simple',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_fundings'
  $field_instances['user-user-field_fundings'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 22,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_fundings',
    'label' => 'Funding',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'user-user-field_job_title'
  $field_instances['user-user-field_job_title'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 12,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_job_title',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_last_name'
  $field_instances['user-user-field_last_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'simple' => 'simple',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_location'
  $field_instances['user-user-field_location'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'map_preset' => 'humanitarianresponse_geofield_formatter',
        ),
        'type' => 'geofield_openlayers',
        'weight' => 26,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(),
      'type' => 'geofield_geolocation',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'user-user-field_locations'
  $field_instances['user-user-field_locations'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 18,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_locations',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_organizations'
  $field_instances['user-user-field_organizations'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organizations',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_phones'
  $field_instances['user-user-field_phones'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'allow_alpha' => 0,
          'as_tel_link' => 0,
          'components' => array(
            'country' => 0,
            'extension' => 'extension',
            'numbertype' => 'numbertype',
          ),
          'country_name_position' => 'after',
          'extension_prefix' => ' ext. ',
          'full_hcard' => 1,
          'numbertype_position' => 'before',
        ),
        'type' => 'phone_international',
        'weight' => 8,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_phones',
    'label' => 'Telephone(s)',
    'required' => 0,
    'settings' => array(
      'country_options' => array(
        'all_country_codes' => 1,
        'country_codes' => array(
          'country_selection' => array(
            'AC' => 0,
            'AD' => 0,
            'AE' => 0,
            'AF' => 'AF',
            'AG' => 0,
            'AI' => 0,
            'AL' => 0,
            'AM' => 0,
            'AO' => 0,
            'AR' => 0,
            'AS' => 0,
            'AT' => 0,
            'AU' => 0,
            'AW' => 0,
            'AX' => 0,
            'AZ' => 0,
            'BA' => 0,
            'BB' => 0,
            'BD' => 0,
            'BE' => 0,
            'BF' => 0,
            'BG' => 0,
            'BH' => 0,
            'BI' => 0,
            'BJ' => 0,
            'BL' => 0,
            'BM' => 0,
            'BN' => 0,
            'BO' => 0,
            'BQ' => 0,
            'BR' => 0,
            'BS' => 0,
            'BT' => 0,
            'BW' => 0,
            'BY' => 0,
            'BZ' => 0,
            'CA' => 0,
            'CC' => 0,
            'CD' => 0,
            'CF' => 0,
            'CG' => 0,
            'CH' => 0,
            'CI' => 0,
            'CK' => 0,
            'CL' => 0,
            'CM' => 0,
            'CN' => 0,
            'CO' => 0,
            'CR' => 0,
            'CU' => 0,
            'CV' => 0,
            'CW' => 0,
            'CX' => 0,
            'CY' => 0,
            'CZ' => 0,
            'DE' => 0,
            'DJ' => 0,
            'DK' => 0,
            'DM' => 0,
            'DO' => 0,
            'DZ' => 0,
            'EC' => 0,
            'EE' => 0,
            'EG' => 0,
            'EH' => 0,
            'ER' => 0,
            'ES' => 0,
            'ET' => 0,
            'FI' => 0,
            'FJ' => 0,
            'FK' => 0,
            'FM' => 0,
            'FO' => 0,
            'FR' => 0,
            'GA' => 0,
            'GB' => 0,
            'GD' => 0,
            'GE' => 0,
            'GF' => 0,
            'GG' => 0,
            'GH' => 0,
            'GI' => 0,
            'GL' => 0,
            'GM' => 0,
            'GN' => 0,
            'GP' => 0,
            'GQ' => 0,
            'GR' => 0,
            'GT' => 0,
            'GU' => 0,
            'GW' => 0,
            'GY' => 0,
            'HK' => 0,
            'HN' => 0,
            'HR' => 0,
            'HT' => 0,
            'HU' => 0,
            'ID' => 0,
            'IE' => 0,
            'IL' => 0,
            'IM' => 0,
            'IN' => 0,
            'IO' => 0,
            'IQ' => 0,
            'IR' => 0,
            'IS' => 0,
            'IT' => 0,
            'JE' => 0,
            'JM' => 0,
            'JO' => 0,
            'JP' => 0,
            'KE' => 0,
            'KG' => 0,
            'KH' => 0,
            'KI' => 0,
            'KM' => 0,
            'KN' => 0,
            'KP' => 0,
            'KR' => 0,
            'KW' => 0,
            'KY' => 0,
            'KZ' => 0,
            'LA' => 0,
            'LB' => 0,
            'LC' => 0,
            'LI' => 0,
            'LK' => 0,
            'LR' => 0,
            'LS' => 0,
            'LT' => 0,
            'LU' => 0,
            'LV' => 0,
            'LY' => 0,
            'MA' => 0,
            'MC' => 0,
            'MD' => 0,
            'ME' => 0,
            'MF' => 0,
            'MG' => 0,
            'MH' => 0,
            'MK' => 0,
            'ML' => 0,
            'MM' => 0,
            'MN' => 0,
            'MO' => 0,
            'MP' => 0,
            'MQ' => 0,
            'MR' => 0,
            'MS' => 0,
            'MT' => 0,
            'MU' => 0,
            'MV' => 0,
            'MW' => 0,
            'MX' => 0,
            'MY' => 0,
            'MZ' => 0,
            'NA' => 0,
            'NC' => 0,
            'NE' => 0,
            'NF' => 0,
            'NG' => 0,
            'NI' => 0,
            'NL' => 0,
            'NO' => 0,
            'NP' => 0,
            'NR' => 0,
            'NU' => 0,
            'NZ' => 0,
            'OM' => 0,
            'PA' => 0,
            'PE' => 0,
            'PF' => 0,
            'PG' => 0,
            'PH' => 0,
            'PK' => 0,
            'PL' => 0,
            'PM' => 0,
            'PR' => 0,
            'PS' => 0,
            'PT' => 0,
            'PW' => 0,
            'PY' => 0,
            'QA' => 0,
            'RE' => 0,
            'RO' => 0,
            'RS' => 0,
            'RU' => 0,
            'RW' => 0,
            'SA' => 0,
            'SB' => 0,
            'SC' => 0,
            'SD' => 0,
            'SE' => 0,
            'SG' => 0,
            'SH' => 0,
            'SI' => 0,
            'SJ' => 0,
            'SK' => 0,
            'SL' => 0,
            'SM' => 0,
            'SN' => 0,
            'SO' => 0,
            'SR' => 0,
            'SS' => 0,
            'ST' => 0,
            'SV' => 0,
            'SX' => 0,
            'SY' => 0,
            'SZ' => 0,
            'TC' => 0,
            'TD' => 0,
            'TG' => 0,
            'TH' => 0,
            'TJ' => 0,
            'TK' => 0,
            'TL' => 0,
            'TM' => 0,
            'TN' => 0,
            'TO' => 0,
            'TR' => 0,
            'TT' => 0,
            'TV' => 0,
            'TW' => 0,
            'TZ' => 0,
            'UA' => 0,
            'UG' => 0,
            'US' => 0,
            'UY' => 0,
            'UZ' => 0,
            'VA' => 0,
            'VC' => 0,
            'VE' => 0,
            'VG' => 0,
            'VI' => 0,
            'VN' => 0,
            'VU' => 0,
            'WF' => 0,
            'WS' => 0,
            'YE' => 0,
            'YT' => 0,
            'ZA' => 0,
            'ZM' => 0,
            'ZW' => 0,
          ),
          'hide_single_cc' => 0,
        ),
        'default_country' => 'AF',
        'enable_country' => 1,
        'enable_default_country' => 1,
      ),
      'enable_extension' => 1,
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'phone',
      'settings' => array(
        'country_code_position' => 'before',
        'extension_size' => 7,
        'label_position' => 'none',
        'number_size' => 30,
        'numbertype_allowed_values_position' => 'before',
        'use_tel_input' => 1,
      ),
      'type' => 'phone',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_salutation'
  $field_instances['user-user-field_salutation'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_salutation',
    'label' => 'Salutation',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_themes'
  $field_instances['user-user-field_themes'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 24,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_themes',
    'label' => 'Theme(s)',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Clusters');
  t('Coordination Hub');
  t('Emergencies');
  t('First name');
  t('Funding');
  t('Job Title');
  t('Last name');
  t('Location');
  t('Organization');
  t('Salutation');
  t('Telephone(s)');
  t('Theme(s)');

  return $field_instances;
}