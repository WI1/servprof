<?php // $Id: template.php,v 1.20 2009/08/26 17:08:19 jmburnz Exp $
function servprof_print_terms($node) {
     $vocabularies = taxonomy_get_vocabularies();
	 $output = '<table cellpadding="0" cellspacing="0" border="0">';
     foreach($vocabularies as $vocabulary) {
       if ($vocabularies) {
         $terms = taxonomy_node_get_terms_by_vocabulary($node, $vocabulary->vid);
         if ($terms) {
           $links = array();
		   $output .='<tr>';
           $output .= '<td class="vocabulary">' . $vocabulary->name . '</td>';
           foreach ($terms as $term) {
             $links[] = l($term->name, servprof_term_path($term), array('rel' => 'tag', 'title' => strip_tags($term->description)));
           }
           $output .= '<td class="vocabulary-terms">'. implode(', ', $links) .'</td>';
		   $output .= '</tr>';
         }
       }
     }
	 $output .= '</table>';
     return $output;
}

function servprof_breadcrumb($breadcrumb) {  
  $breadcrumb = menu_get_active_breadcrumb();
  if (!empty($breadcrumb)) {
    return '<div class="breadcrumb">'. implode('', $breadcrumb) .'</div>';
  }
}

/**
 * Replace username with display name
 * Copies large parts of theme_username
 *
 * @todo performance - no complete user_load needed
 * @param array object
 * @return string
 */
function balance_username($object) {
	$user = user_load($object->uid);
	$object->name = implode(' ', array($user->profile_firstname, $user->profile_lastname));

	// copy of theme_username from here on
	if ($object->uid && $object->name) {
		// Shorten the name when it is too long or it will break many tables.
		if (drupal_strlen($object->name) > 20) {
		  $name = drupal_substr($object->name, 0, 15) .'...';
		}
		else {
		  $name = $object->name;
		}

		if (user_access('access user profiles')) {
		  $output = l($name, 'user/'. $object->uid, array('title' => t('View user profile.')));
		}
		else {
		  $output = check_plain($name);
		}
	} else if ($object->name) {
	// Sometimes modules display content composed by people who are
	// not registered members of the site (e.g. mailing list or news
	// aggregator modules). This clause enables modules to display
	// the true author of the content.
	if ($object->homepage) {
	  $output = l($object->name, $object->homepage);
	}
	else {
	  $output = check_plain($object->name);
	}

	$output .= ' ('. t('not verified') .')';
	}
	else {
	$output = variable_get('anonymous', t('Anonymous'));
	}

	return $output;
}