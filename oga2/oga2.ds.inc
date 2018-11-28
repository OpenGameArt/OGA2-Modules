<?php
/**
 * @file
 * oga2.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function oga2_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_art_collection|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_art_collection';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'host' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'art_comment_type_icon' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['comment|comment_node_art_collection|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_art|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_art';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'host' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'art_comment_type_icon' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_picture_icon_48x48',
    ),
  );
  $export['comment|comment_node_art|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|art_collection|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'art_collection';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'flag_favorite' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'field_collected_art' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
  );
  $export['node|art_collection|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|art_collection|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'art_collection';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'favorites' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'default',
    ),
    'flag_favorite' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'above',
      'format' => 'author_linked',
      'ft' => array(
        'lb' => 'Collector',
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|art_collection|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|art|art_preview';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'art';
  $ds_fieldsetting->view_mode = 'art_preview';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'span',
        'class' => 'art-preview-title',
      ),
    ),
  );
  $export['node|art|art_preview'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|art|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'art';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'author_submitter' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
      'ft' => array(
        'lb' => 'Author',
      ),
    ),
    'favorites' => array(
      'weight' => '15',
      'label' => 'inline',
      'format' => 'default',
    ),
    'flag_favorite' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '3',
      'label' => 'above',
      'format' => 'author_linked',
      'ft' => array(
        'lb' => 'Submitter',
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'ds_user_picture' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['node|art|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'art_by_this_user' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'project' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
    ),
    'flag_friends' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'name' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
    'field_user_project' => array(
      'ft' => array(
        'lb' => 'Project',
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'art_by_this_user' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'project' => array(
      'weight' => '5',
      'label' => 'above',
      'format' => 'default',
    ),
    'flag_friends' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'span',
        'class' => 'username',
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function oga2_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'art_by_user';
  $ds_field->label = 'Art by User';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|art-block_7',
    'block_render' => '1',
  );
  $export['art_by_user'] = $ds_field;

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'art_comment_type_icon';
  $ds_field->label = 'Art Comment Type Icon';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'comment' => 'comment',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
if(is_array($entity->field_comment_type) && array_key_exists(\'und\', $entity->field_comment_type) > 0) {
  $term = taxonomy_term_load($entity->field_comment_type[\'und\'][0][\'tid\']);
  if($term) {
    return theme(\'image_style\', array(\'style_name\' => \'icon_64x64\', \'path\' => $term->field_comment_type_icon[\'und\'][0][\'uri\']));
  }
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['art_comment_type_icon'] = $ds_field;

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'collect';
  $ds_field->label = 'Collections';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
return _collect_node_ui($entity->nid);
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['collect'] = $ds_field;

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'collect_more_art';
  $ds_field->label = 'Collect More Art';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|art-collect_art',
    'block_render' => '1',
  );
  $export['collect_more_art'] = $ds_field;

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'collected_art';
  $ds_field->label = 'Collected Art';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|collected_art-block_1',
    'block_render' => '1',
  );
  $export['collected_art'] = $ds_field;

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'flag_favorite';
  $ds_field->label = 'Flag: Favorite';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  return flag_create_link(\'favorites\', $entity->nid);
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['flag_favorite'] = $ds_field;

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'flag_friends';
  $ds_field->label = 'Flag: Friends';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  return flag_create_link(\'friends\', $entity->uid);
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['flag_friends'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function oga2_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_art_collection|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_art_collection';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'author',
        1 => 'host',
        2 => 'post_date',
      ),
      'middle' => array(
        0 => 'ds_user_picture',
        1 => 'art_comment_type_icon',
      ),
      'right' => array(
        0 => 'comment_body',
      ),
      'footer' => array(
        0 => 'links',
      ),
    ),
    'fields' => array(
      'author' => 'left',
      'ds_user_picture' => 'middle',
      'comment_body' => 'right',
      'host' => 'left',
      'art_comment_type_icon' => 'middle',
      'post_date' => 'left',
      'links' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'left-side-left' => 'left-side-left',
      ),
      'middle' => array(
        'left-side-right' => 'left-side-right',
      ),
      'right' => array(
        'right-side' => 'right-side',
      ),
    ),
  );
  $export['comment|comment_node_art_collection|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_art|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_art';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'author',
        1 => 'host',
        2 => 'post_date',
      ),
      'middle' => array(
        0 => 'art_comment_type_icon',
        1 => 'ds_user_picture',
      ),
      'right' => array(
        0 => 'comment_body',
      ),
      'footer' => array(
        0 => 'links',
      ),
    ),
    'fields' => array(
      'author' => 'left',
      'host' => 'left',
      'post_date' => 'left',
      'art_comment_type_icon' => 'middle',
      'ds_user_picture' => 'middle',
      'comment_body' => 'right',
      'links' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'left-side-left' => 'left-side-left',
      ),
      'middle' => array(
        'left-side-right' => 'left-side-right',
      ),
      'right' => array(
        'right-side' => 'right-side',
      ),
    ),
  );
  $export['comment|comment_node_art|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art_collection|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art_collection';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'author',
        1 => 'post_date',
      ),
      'right' => array(
        0 => 'body',
        1 => 'flag_favorite',
        2 => 'field_collected_art',
      ),
      'footer' => array(
        0 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'author' => 'left',
      'post_date' => 'left',
      'body' => 'right',
      'flag_favorite' => 'right',
      'field_collected_art' => 'right',
      'comments' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'left-column' => 'left-column',
      ),
      'right' => array(
        'right-column' => 'right-column',
      ),
    ),
  );
  $export['node|art_collection|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art_collection|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art_collection';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'author',
        1 => 'post_date',
        2 => 'field_collaborators',
        3 => 'favorites',
      ),
      'right' => array(
        0 => 'body',
        1 => 'flag_favorite',
        2 => 'field_collected_art',
      ),
      'footer' => array(
        0 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'author' => 'left',
      'post_date' => 'left',
      'field_collaborators' => 'left',
      'favorites' => 'left',
      'body' => 'right',
      'flag_favorite' => 'right',
      'field_collected_art' => 'right',
      'comments' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'left-column' => 'left-column',
      ),
      'right' => array(
        'right-column' => 'right-column',
      ),
    ),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|art_collection|full'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art|art_preview';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art';
  $ds_layout->view_mode = 'art_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_art_preview',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_art_preview' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|art|art_preview'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'post_date',
        1 => 'author_submitter',
        2 => 'author',
        3 => 'ds_user_picture',
        4 => 'field_collaborators',
        5 => 'field_art_tags',
        6 => 'field_art_type',
        7 => 'field_art_licenses',
        8 => 'field_art_llicense_later',
        9 => 'field_art_author',
        10 => 'field_art_author_homepage',
      ),
      'right' => array(
        0 => 'field_art_preview',
        1 => 'body',
        2 => 'field_art_files',
        3 => 'favorites',
        4 => 'flag_favorite',
        5 => 'group_audience',
      ),
      'footer' => array(
        0 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'post_date' => 'left',
      'author_submitter' => 'left',
      'author' => 'left',
      'ds_user_picture' => 'left',
      'field_collaborators' => 'left',
      'field_art_tags' => 'left',
      'field_art_type' => 'left',
      'field_art_licenses' => 'left',
      'field_art_llicense_later' => 'left',
      'field_art_author' => 'left',
      'field_art_author_homepage' => 'left',
      'field_art_preview' => 'right',
      'body' => 'right',
      'field_art_files' => 'right',
      'favorites' => 'right',
      'flag_favorite' => 'right',
      'group_audience' => 'right',
      'comments' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'left-column' => 'left-column',
      ),
      'right' => array(
        'right-column' => 'right-column',
      ),
    ),
  );
  $export['node|art|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
        1 => 'field_real_name',
        2 => 'project',
        3 => 'field_user_project',
        4 => 'field_user_project_website',
        5 => 'field_user_project_description',
      ),
      'right' => array(
        0 => 'name',
        1 => 'field_medals',
        2 => 'flag_friends',
      ),
      'footer' => array(
        0 => 'art_by_this_user',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'field_real_name' => 'left',
      'project' => 'left',
      'field_user_project' => 'left',
      'field_user_project_website' => 'left',
      'field_user_project_description' => 'left',
      'name' => 'right',
      'field_medals' => 'right',
      'flag_friends' => 'right',
      'art_by_this_user' => 'footer',
    ),
    'classes' => array(
      'left' => array(
        'left-column' => 'left-column',
      ),
      'right' => array(
        'right-column' => 'right-column',
      ),
    ),
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'regions' => array(
      'left' => array(
        0 => 'name',
        1 => 'field_real_name',
        2 => 'ds_user_picture',
        3 => 'field_medals',
        4 => 'flag_friends',
      ),
      'right' => array(
        0 => 'project',
        1 => 'field_user_project_description',
        2 => 'art_by_this_user',
      ),
    ),
    'fields' => array(
      'name' => 'left',
      'field_real_name' => 'left',
      'ds_user_picture' => 'left',
      'field_medals' => 'left',
      'flag_friends' => 'left',
      'project' => 'right',
      'field_user_project_description' => 'right',
      'art_by_this_user' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'left-column' => 'left-column',
      ),
      'right' => array(
        'right-column' => 'right-column',
      ),
    ),
  );
  $export['user|user|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function oga2_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'art_comment_type_icon';
  $ds_view_mode->label = 'Art Comment Type Icon';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['art_comment_type_icon'] = $ds_view_mode;

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'art_preview';
  $ds_view_mode->label = 'Art Preview';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['art_preview'] = $ds_view_mode;

  return $export;
}
