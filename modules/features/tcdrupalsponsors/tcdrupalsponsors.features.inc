<?php
/**
 * @file
 * tcdrupalsponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tcdrupalsponsors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tcdrupalsponsors_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tcdrupalsponsors_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor.
  $styles['sponsor'] = array(
    'name' => 'sponsor',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      2 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => 'ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '200',
            'height' => '200',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tcdrupalsponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
