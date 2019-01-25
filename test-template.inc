<?php 

return array(
  'renderer' => 'mustache',
  'name' => 'test_template',
  'label' => 'Test-Template with Image & Caption',
  //'content' => $template_base_path . '/test-template.mustache',
  'description' => 'Simple image with text only caption.',
  'owner_type' => 'domain',
  'owner' => '2',
  'template_type' => 'General',
  'inputs' => array(
    'image' => array(
      'label' => 'Image - Maximum size recommended: 635px x 600px',
      'type' => 'image',
    ),
	'title' => array(
      'label' => 'Title of Image',
      'type' => 'string',
      'description' => 'example: primer / photo finish',
    ),
	'percentage' => array(
      'label' => 'percentage of radiance glow',
      'type' => 'string',
      'description' => 'example: 90% / 95% ',
    ),
    'caption-1' => array(
      'label' => 'Caption Row 1',
      'type' => 'string',
      'description' => 'example: Be Legendary primer ',
    ),
    'caption_2' => array(
      'label' => 'Caption Row 2',
      'type' => 'string',
      'description' => 'example: Shot at Smashbox Studios, L.A.',
    ),
  ),
  'tags' => array(
    'device-responsive',
    'contenttype-page',
    'contenttype-elc_nodeblock',
  ),
  'attached' => array(),
);
