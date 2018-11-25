INSERT INTO permissions (module_bit, code, description) VALUES
   ( 1, 'circulate_remaining_permissions', 'Remaining circulation permissions'),
   ( 1, 'override_renewals', 'Override blocked renewals'),
   ( 1, 'overdues_report', 'Execute overdue items report'),
   ( 1, 'force_checkout', 'Force checkout if a limitation exists'),
   ( 1, 'manage_restrictions', 'Manage restrictions for accounts'),
   ( 3, 'parameters_remaining_permissions', 'Remaining system parameters permissions'),
   ( 3, 'manage_circ_rules', 'Manage circulation rules'),
   ( 4, 'edit_borrowers', 'Add, modify and view patron information'),
   ( 4, 'view_borrower_infos_from_any_libraries', 'View patron infos from any libraries'),
   ( 6, 'place_holds', 'Place holds for patrons'),
   ( 6, 'modify_holds_priority', 'Modify holds priority'),
   ( 9, 'edit_catalogue', 'Edit catalog (Modify bibliographic/holdings data)'),
   ( 9, 'fast_cataloging', 'Fast cataloging'),
   ( 9, 'edit_items', 'Edit items'),
   ( 9, 'edit_items_restricted', 'Limit item modification to subfields defined in the SubfieldsToAllowForRestrictedEditing preference (please note that edit_item is still required)'),
   ( 9, 'delete_all_items', 'Delete all items at once'),
   (10, 'writeoff', 'Write off fines and fees'),
   (10, 'remaining_permissions', 'Remaining permissions for managing fines and fees'),
   (11, 'vendors_manage', 'Manage vendors'),
   (11, 'contracts_manage', 'Manage contracts'),
   (11, 'period_manage', 'Manage periods'),
   (11, 'budget_manage', 'Manage budgets'),
   (11, 'budget_modify', 'Modify budget (can''t create lines, but can modify existing ones)'),
   (11, 'planning_manage', 'Manage budget plannings'),
   (11, 'order_manage', 'Manage orders & basket'),
   (11, 'order_manage_all', 'Manage all orders and baskets, regardless of restrictions on them'),
   (11, 'group_manage', 'Manage orders & basketgroups'),
   (11, 'order_receive', 'Manage orders & basket'),
   (11, 'budget_add_del', 'Add and delete budgets (but can''t modify budgets)'),
   (11, 'budget_manage_all', 'Manage all budgets'),
   (11, 'edi_manage', 'Manage EDIFACT transmissions'),
   (13, 'edit_news', 'Write news for the OPAC and staff interfaces'),
   (13, 'label_creator', 'Create printable labels and barcodes from catalog and patron data'),
   (13, 'edit_calendar', 'Define days when the library is closed'),
   (13, 'moderate_comments', 'Moderate patron comments'),
   (13, 'edit_notices', 'Define notices'),
   (13, 'edit_notice_status_triggers', 'Set notice/status triggers for overdue items'),
   (13, 'edit_quotes', 'Edit quotes for quote-of-the-day feature'),
   (13, 'view_system_logs', 'Browse the system logs'),
   (13, 'inventory', 'Perform inventory (stocktaking) of your catalog'),
   (13, 'stage_marc_import', 'Stage MARC records into the reservoir'),
   (13, 'manage_staged_marc', 'Manage staged MARC records, including completing and reversing imports'),
   (13, 'export_catalog', 'Export bibliographic and holdings data'),
   (13, 'import_patrons', 'Import patron data'),
   (13, 'edit_patrons', 'Perform batch modification of patrons'),
   (13, 'delete_anonymize_patrons', 'Delete old borrowers and anonymize circulation history (deletes borrower reading history)'),
   (13, 'batch_upload_patron_images', 'Upload patron images in a batch or one at a time'),
   (13, 'schedule_tasks', 'Schedule tasks to run'),
   (13, 'items_batchmod', 'Perform batch modification of items'),
   (13, 'items_batchmod_restricted', 'Limit batch item modification to subfields defined in the SubfieldsToAllowForRestrictedBatchmod preference (please note that items_batchmod is still required)'),
   (13, 'items_batchdel', 'Perform batch deletion of items'),
   (13, 'manage_csv_profiles', 'Manage CSV export profiles'),
   (13, 'moderate_tags', 'Moderate patron tags'),
   (13, 'rotating_collections', 'Manage rotating collections'),
   (13, 'upload_local_cover_images', 'Upload local cover images'),
   (13, 'manage_patron_lists', 'Add, edit and delete patron lists and their contents'),
   (13, 'records_batchmod', 'Perform batch modification of records (biblios or authorities)'),
   (13, 'marc_modification_templates', 'Manage marc modification templates'),
   (13, 'records_batchdel', 'Perform batch deletion of records (bibliographic or authority)'),
   (13, 'access_files', 'Access to the files stored on the server'),
   (13, 'upload_general_files', 'Upload any file'),
   (13, 'upload_manage', 'Manage uploaded files'),
   (15, 'check_expiration', 'Check the expiration of a serial'),
   (15, 'claim_serials', 'Claim missing serials'),
   (15, 'create_subscription', 'Create a new subscription'),
   (15, 'delete_subscription', 'Delete an existing subscription'),
   (15, 'edit_subscription', 'Edit an existing subscription'),
   (15, 'receive_serials', 'Serials receiving'),
   (15, 'renew_subscription', 'Renew a subscription'),
   (15, 'routing', 'Routing'),
   (15, 'superserials', 'Manage subscriptions from any branch (only applies when IndependentBranches is used)'),
   (16, 'execute_reports', 'Execute SQL reports'),
   (16, 'create_reports', 'Create SQL reports'),
   (16, 'delete_reports', 'Delete SQL reports'),
   (18, 'manage_courses', 'Add, edit and delete courses'),
   (18, 'add_reserves', 'Add course reserves'),
   (18, 'delete_reserves', 'Remove course reserves'),
   (19, 'manage', 'Manage plugins ( install / uninstall )'),
   (19, 'tool', 'Use tool plugins'),
   (19, 'report', 'Use report plugins'),
   (19, 'configure', 'Configure plugins'),
   (20, 'delete_public_lists', 'Delete public lists'),
   (21, 'edit_templates', 'Create and update club templates'),
   (21, 'edit_clubs', 'Create and update clubs'),
   (21, 'enroll', 'Enroll patrons in clubs'),
   (23, 'self_checkin_module', 'Log into the self check-in module'),
   (23, 'self_checkout_module', 'Perform self checkout at the OPAC. It should be used for the patron matching the AutoSelfCheckID')
;
