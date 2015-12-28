<?php
/**
 * @file
 * wysiwyg.filtered_html.inc
 */

$api = '2.0.0';

$data = (object) array(
  'format' => 'filtered_html',
  'editor' => 'tinymce',
  'settings' => array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'link' => 1,
        'formatselect' => 1,
        'blockquote' => 1,
        'removeformat' => 1,
      ),
      'drupal' => array(
        'media' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'none',
    'css_path' => '',
    'css_classes' => '',
  ),
);

$dependencies = array(
  'text_format.filtered_html' => 'text_format.filtered_html',
);

$optional = array();

$modules = array(
  0 => 'wysiwyg',
);
