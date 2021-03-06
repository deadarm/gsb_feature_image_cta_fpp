<?php
/**
 * @file
 * gsb_feature_image_cta_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_image_cta_fpp_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|fieldable_panels_pane|image_cta|default';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'image_cta';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper|fieldable_panels_pane|image_cta|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|fieldable_panels_pane|image_cta|full';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'image_cta';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper|fieldable_panels_pane|image_cta|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Wrapper');

  return $field_groups;
}
