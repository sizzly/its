
DESCRIPTION
-----------

The Vtiger CRM project provides a complex solution for 
integrating your Drupal website with Vtiger CRM 6.x. 
It consists of three separate modules that contain 
different bunches of functionality. The modules work 
as a one-side synchronization (Drupal to Vtiger), 
however developers can do anything they want with 
getter methods of the Vtiger API.

VTIGER CRM
----------

This is the base module, which provides forms for 
settings essential for connecting to Vtiger CRM, 
along with the synchronization page, and the VtigerApi 
class with methods, described in the Vtiger 
documentation. Developers can use it for making 
custom API calls to Vtiger, which are not included 
in the submodules described below (for instance, it 
is possible to download all the Leads from Vtiger 
and create similar website users or whatever else).

VTIGER CRM ENTITY
-----------------

Provides functionality that allows transferring any 
Vtiger Entity fieldable Drupal entity to any Vtiger 
CRM entity. On the settings page (available on address 
/admin/config/services/vtiger/entity-mapping), you 
can set up a field-mapping schema, according to which 
the transfer will be done. The modules provides a 
custom Rules action “Send Drupal entity to Vtiger 
CRM”, which takes as an argument any Drupal entity, 
provides the selection of the Vtiger module, and, 
when fired, sends your entity to Vtiger using the 
predefined field mapping schema. In this way, 
it is possible to easily set up a rule, which would 
save a newly created website user as a Vtiger lead, 
once the user is registered or once he or she gets 
the account activated. Developers can also use the 
vtiger_entity_send_to_vtiger() function that does 
the same thing but needs the Entity type property 
to be passed along with an entity object and the 
Vtiger entity name.

VTIGER CRM WEBFORM
------------------

This module provides Vtiger Webform a similar 
field-mapping UI, which can be seen as a Webform 
settings tab (/node/%/webform/vtiger-mapping) and 
is used to specify mappings between Webform 
components and Vtiger CRM modules. A new Vtiger 
record is created once the Webform is submitted. 
It is also possible to turn this functionality 
off for certain webforms by unchecking the 
corresponding checkbox on the settings page.

VTIGER CRM TEST PAGE
--------------------

Creates a page (/vtiger-test) with a form that 
allows performing test API queries. The result 
will be loaded and displayed on the page via 
AJAX. It may be useful for developers who want 
to see what exactly a certain query returns 
(personally, I've been using this page a lot while 
developing the rest of the project).

All the modules were tested with Vtiger CRM 6.2.0 
and Webform 7.x-4.8. If you found a bug or have 
a functionality suggestion, please open an 
issue. Also, feel free to contact me with any 
questions.
