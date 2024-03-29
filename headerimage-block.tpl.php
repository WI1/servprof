<?php
// $Id: headerimage-block.tpl.php,v 1.1 2008/04/07 07:46:01 sutharsan Exp $

/**
 * @file headerimage-block.tpl.php
 * Default theme implementation to display the header image block.
 *
 * Available variables:
 * - $node: rendered node object
 * - $unpublished: node is unpublished
 * - $content: node content
 *
 * @see template_preprocess_headerimage_block()
 */
?>

  <?php if ($unpublished): ?>
    <div class="node-unpublished">
  <?php endif; ?>

  <?php print $headerimage; ?>

  <?php if ($unpublished): ?>
    </div>
  <?php endif; ?>
