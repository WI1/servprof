<?php
// $Id: page.tpl.php,v 1.11.2.1 2009/04/30 00:13:31 goba Exp $

/**
 * @file page.tpl.php
 *
 * Theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $css: An array of CSS files for the current page.
 * - $directory: The directory the theme is located in, e.g. themes/garland or
 *   themes/garland/minelli.
 * - $is_front: TRUE if the current page is the front page. Used to toggle the mission statement.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Page metadata:
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $head_title: A modified version of the page title, for use in the TITLE tag.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $body_classes: A set of CSS classes for the BODY tag. This contains flags
 *   indicating the current layout (multiple columns, single column), the current
 *   path, whether the user is logged in, and so on.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $mission: The text of the site mission, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $search_box: HTML to display the search box, empty if search has been disabled.
 * - $primary_links (array): An array containing primary navigation links for the
 *   site, if they have been configured.
 * - $secondary_links (array): An array containing secondary navigation links for
 *   the site, if they have been configured.
 *
 * Page content (in order of occurrance in the default page.tpl.php):
 * - $left: The HTML for the left sidebar.
 *
 * - $breadcrumb: The breadcrumb trail for the current page.
 * - $title: The page title, for use in the actual HTML content.
 * - $help: Dynamic help text, mostly for admin pages.
 * - $messages: HTML for status and error messages. Should be displayed prominently.
 * - $tabs: Tabs linking to any sub-pages beneath the current page (e.g., the view
 *   and edit tabs when displaying a node).
 *
 * - $content: The main content of the current Drupal page.
 *
 * - $right: The HTML for the right sidebar.
 *
 * Footer/closing data:
 * - $feed_icons: A string of all feed icons for the current page.
 * - $footer_message: The footer message as defined in the admin settings.
 * - $footer : The footer region.
 * - $closure: Final closing markup from any modules that have altered the page.
 *   This variable should always be output last, after all other dynamic content.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html dir="<?php print $language->dir ?>" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>" xmlns="http://www.w3.org/1999/xhtml">

<head>
<?php print $head; ?>
<title><?php print $head_title; ?></title>
<?php print $styles; ?>
<?php print $scripts; ?>
</head>

<body class="<?php print $body_classes; ?>">
<div id="page">
<div id="pageInner">
	<div id="header">
		<div id="logo-title">
			<?php if (!empty($logo)): ?>
			<div id="logo">
				<a href="<?php print $front_page; ?>" rel="home" title="<?php print t('Home'); ?>">
					<img alt="<?php print t('Home'); ?>" src="<?php print $logo; ?>" />
				</a>
			</div>
			<?php endif; ?>

            <?php if (!empty($logo_box)): ?>
			<div id="logo-box">
		        <?php print $logo_box; ?>
		    </div>
			<?php endif; ?>

			<div id="navigation" class="menu <?php if (!empty($primary_links)) { print "withprimary"; } if (!empty($secondary_links)) { print " withsecondary"; } ?> ">
				<?php if (!empty($primary_links)): ?>
				<div id="primary" class="clear-block">
					<?php print theme('links', $primary_links, array('class' => 'links primary-links')); ?>
				</div>
				<?php endif; ?>
				<?php print theme('links', menu_navigation_links("menu-focusgroups")); ?>
				<?php if (!empty($header)): ?>
				<div id="header-region">
					<?php print $header; ?>
				</div>
				<?php endif; ?>
			</div><!-- /navigation -->
		</div><!-- /logo-title -->
	</div><!-- /header -->

	<div id="container" class="clear-block">
		<?php if (!empty($left)): ?>
		<div id="sidebar-left" class="column sidebar">
			<?php print $left; ?>
		</div><!-- /sidebar-left -->
		<?php endif; ?>

		<div id="main" class="column">
			<div id="main-squeeze">
				<?php if (!empty($breadcrumb)): ?>
				<div id="breadcrumb">
					<?php print $breadcrumb; ?>
				</div>
				<?php endif; ?><?php if (!empty($mission)): ?>
				<div id="mission">
					<?php print $mission; ?></div>
				<?php endif; ?>
				<div id="content">
					<?php if (!empty($title)): ?>
					<h1 id="page-title" class="title"><?php print $title; ?>
					</h1>
					<?php if (!empty ($content_top)): ?>
            <div id="content-top">
              <?php print $content_top; ?>
            </div><!-- /content-top -->
			<br class="clear"/>
            <?php endif; ?>
					<?php endif; ?><?php if (!empty($tabs)): ?>
					<div class="tabs">
						<?php print $tabs; ?></div>
					<?php endif; ?><?php if (!empty($messages)): print $messages; endif; ?>
					<?php if (!empty($help)): print $help; endif; ?>
					<div id="content-content" class="clear-block">
						<?php print $content; ?>
					</div><!-- /content-content -->
					<?php print $feed_icons; ?>
				</div><!-- /content -->
			</div><!-- /main-squeeze /main -->
		</div>

		<?php if (!empty($right)): ?>
		<div id="sidebar-right" class="column sidebar">
			<?php print $right; ?>
		</div><!-- /sidebar-right -->
		<?php endif; ?>
	</div><!-- /container -->

		<div id="footer">
			<?php print $footer_message; ?>
			<?php if (!empty($secondary_links)): ?>
			<div id="footerstep">
				<?php print theme('links', $secondary_links, array('class' => 'links secondary-links')); ?>
			</div>
			<?php endif; ?>

			<?php if (!empty($footer)): print $footer; endif; ?>
			<div id="sponsoren">
				<a href="http://www.bmbf.de/" id="sponsor1"></a>
				<a href="http://www.esf.de/" id="sponsor2"></a>
				<a href="http://www.europa.eu/" id="sponsor3"></a>
				<a href="http://www.dlr.de/pt/" id="sponsor4"></a>
				<a href="http://www.hhl.de/" id="sponsor5"></a>
				<a href="http://clicresearch.de/" id="sponsor6"></a>
				<a href="http://www.aoc-consulting.com/" id="sponsor7"></a>
				<a href="http://www.wi1.uni-erlangen.de/" id="sponsor8"></a>
			</div>
		</div><!-- /footer -->

	</div>
</div><!-- /page -->
<?php print $closure; ?>
</body>

</html>
