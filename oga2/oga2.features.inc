<?php
/**
 * @file
 * oga2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oga2_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oga2_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function oga2_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorites".
  $flags['favorites'] = array(
    'content_type' => 'node',
    'title' => 'Favorites',
    'global' => '0',
    'types' => array(
      0 => 'art',
      1 => 'art_collection',
    ),
    'flag_short' => 'Add to Favorites',
    'flag_long' => '',
    'flag_message' => 'Added to favorites.',
    'unflag_short' => 'Remove from Favorites',
    'unflag_long' => '',
    'unflag_message' => 'Removed from favorites.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => 'others',
    'i18n' => 0,
    'module' => 'oga2',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Friends".
  $flags['friends'] = array(
    'content_type' => 'user',
    'title' => 'Friends',
    'global' => '0',
    'types' => array(),
    'flag_short' => 'Friend this user.',
    'flag_long' => '',
    'flag_message' => 'You are now friends with [user:name].',
    'unflag_short' => 'Unfriend this user.',
    'unflag_long' => '',
    'unflag_message' => 'You are no longer friends with [user:name].',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_profile' => 0,
    'access_uid' => 'others',
    'module' => 'oga2',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implements hook_image_default_styles().
 */
function oga2_image_default_styles() {
  $styles = array();

  // Exported image style: art_preview_160x120
  $styles['art_preview_160x120'] = array(
    'name' => 'art_preview_160x120',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '160',
          'height' => '120',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: icon_32x32
  $styles['icon_32x32'] = array(
    'name' => 'icon_32x32',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '32',
          'height' => '32',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: icon_48x48
  $styles['icon_48x48'] = array(
    'name' => 'icon_48x48',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '48',
          'height' => '48',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: icon_64x64
  $styles['icon_64x64'] = array(
    'name' => 'icon_64x64',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '64',
          'height' => '64',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function oga2_node_info() {
  $items = array(
    'art' => array(
      'name' => t('Art'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'art_collection' => array(
      'name' => t('Art Collection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'art_event' => array(
      'name' => t('Art Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'file' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => t('A generic file.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => t('A link to an external website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_themekey_features_rule_chain_import().
 */
function oga2_themekey_features_rule_chain_import() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'art_collection',
      'theme' => 'oga_theme_no_side_bar',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"node:type = art_collection >>> oga_theme_no_side_bar"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'forum',
      'theme' => 'oga_theme_no_side_bar',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"node:type = forum >>> oga_theme_no_side_bar"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'art',
      'theme' => 'oga_theme_no_side_bar',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"node:type = art >>> oga_theme_no_side_bar"',
    'childs' => array(),
  ),
);

return $rules;
}
