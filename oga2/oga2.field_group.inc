<?php
/**
 * @file
 * oga2.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function oga2_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_information|node|art|form';
  $field_group->group_name = 'group_author_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'Author Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_art_author',
      1 => 'field_art_author_email',
      2 => 'field_art_author_homepage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Author Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author_information|node|art|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collaborators|node|art|form';
  $field_group->group_name = 'group_collaborators';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'Collaborators',
    'weight' => '7',
    'children' => array(
      0 => 'field_collaborators',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Collaborators',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Enter the user names (one per box) of the people you would like to have as collaborators.  Any collaborators listed here will have access to edit this work.  It is not necessary to list yourself as a collaborator.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_collaborators|node|art|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|art|form';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_art_licenses',
      1 => 'field_art_llicense_later',
      2 => 'field_art_type',
      3 => 'group_author_information',
      4 => 'group_collaborators',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'left-column hide-legend',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_left_column|node|art|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|comment|comment_node_art|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '2',
    'children' => array(
      0 => 'field_comment_type',
      1 => 'comment_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'right-column hide-legend',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_right_column|comment|comment_node_art|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|art|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Art Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_art_files',
      2 => 'field_art_preview',
      3 => 'field_art_tags',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Art Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'right-column hide-legend',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_right_column|node|art|form'] = $field_group;

  return $export;
}
