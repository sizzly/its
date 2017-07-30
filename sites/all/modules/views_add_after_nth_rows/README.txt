CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * How to use

INTRODUCTION
------------

Custom field for views with optional nth row setting.

This is a Drupal 7 module that provides a custom field for views. The custom 
field behaves similar to "Global Custom Text" field but comes with an option 
to display on every X number of rows.

The main use case of this field is if you need to present a list of content 
with advertisement every X number of articles. Alternate custom content every 
X number of rows in any view. This is usually achieved using TPL files. This 
module lets you do it on the fly with no code change required.

REQUIREMENTS
------------
This module requires the following modules:
* Views(https://www.drupal.org/project/views)

INSTALLATION
------------
* Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.

HOW TO USE:

- Create a new View
- Add a new field, under Global fields 
  select "Global: Add Custom text for nth rows".
- Enter the amount of rows to alternate this field in.
- In the preview you should see that your custom field 
  appears every X number of rows.
