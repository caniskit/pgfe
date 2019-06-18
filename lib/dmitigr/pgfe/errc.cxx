// -*- C++ -*-
// Copyright (C) Dmitry Igrishin
// For conditions of distribution and use, see files LICENSE.txt or pgfe.hpp

#include "dmitigr/pgfe/errc.hxx"

#include <dmitigr/common/debug.hpp>

namespace pgfe = dmitigr::pgfe;

const char* pgfe::detail::to_literal(const Client_errc errc)
{
  switch (errc) {
  case Client_errc::success:
    return "success";
  case Client_errc::insufficient_array_dimensionality:
    return "insufficient_array_dimensionality";
  case Client_errc::excessive_array_dimensionality:
    return "excessive_array_dimensionality";
  case Client_errc::malformed_array_literal:
    return "malformed_array_literal";
  case Client_errc::improper_value_type_of_container:
    return "improper_value_type_of_container";
  case Client_errc::timed_out:
    return "timed_out";
  }
  DMITIGR_ASSERT_ALWAYS(!true);
}

const char* pgfe::detail::to_literal(const Server_errc errc)
{
  switch (errc) {
  case Server_errc::c00_successful_completion:
    return "c00_successful_completion";
  case Server_errc::c01_warning:
    return "c01_warning";
  case Server_errc::c01_dynamic_result_sets_returned:
    return "c01_dynamic_result_sets_returned";
  case Server_errc::c01_implicit_zero_bit_padding:
    return "c01_implicit_zero_bit_padding";
  case Server_errc::c01_null_value_eliminated_in_set_function:
    return "c01_null_value_eliminated_in_set_function";
  case Server_errc::c01_privilege_not_granted:
    return "c01_privilege_not_granted";
  case Server_errc::c01_privilege_not_revoked:
    return "c01_privilege_not_revoked";
  case Server_errc::c01_string_data_right_truncation:
    return "c01_string_data_right_truncation";
  case Server_errc::c01_deprecated_feature:
    return "c01_deprecated_feature";
  case Server_errc::c02_no_data:
    return "c02_no_data";
  case Server_errc::c02_no_additional_dynamic_result_sets_returned:
    return "c02_no_additional_dynamic_result_sets_returned";
  case Server_errc::c03_sql_statement_not_yet_complete:
    return "c03_sql_statement_not_yet_complete";
  case Server_errc::c08_connection_exception:
    return "c08_connection_exception";
  case Server_errc::c08_connection_does_not_exist:
    return "c08_connection_does_not_exist";
  case Server_errc::c08_connection_failure:
    return "c08_connection_failure";
  case Server_errc::c08_sqlclient_unable_to_establish_sqlconnection:
    return "c08_sqlclient_unable_to_establish_sqlconnection";
  case Server_errc::c08_sqlserver_rejected_establishment_of_sqlconnection:
    return "c08_sqlserver_rejected_establishment_of_sqlconnection";
  case Server_errc::c08_transaction_resolution_unknown:
    return "c08_transaction_resolution_unknown";
  case Server_errc::c08_protocol_violation:
    return "c08_protocol_violation";
  case Server_errc::c09_triggered_action_exception:
    return "c09_triggered_action_exception";
  case Server_errc::c0a_feature_not_supported:
    return "c0a_feature_not_supported";
  case Server_errc::c0b_invalid_transaction_initiation:
    return "c0b_invalid_transaction_initiation";
  case Server_errc::c0f_locator_exception:
    return "c0f_locator_exception";
  case Server_errc::c0f_invalid_locator_specification:
    return "c0f_invalid_locator_specification";
  case Server_errc::c0l_invalid_grantor:
    return "c0l_invalid_grantor";
  case Server_errc::c0l_invalid_grant_operation:
    return "c0l_invalid_grant_operation";
  case Server_errc::c0p_invalid_role_specification:
    return "c0p_invalid_role_specification";
  case Server_errc::c0z_diagnostics_exception:
    return "c0z_diagnostics_exception";
  case Server_errc::c0z_stacked_diagnostics_accessed_without_active_handler:
    return "c0z_stacked_diagnostics_accessed_without_active_handler";
  case Server_errc::c20_case_not_found:
    return "c20_case_not_found";
  case Server_errc::c21_cardinality_violation:
    return "c21_cardinality_violation";
  case Server_errc::c22_data_exception:
    return "c22_data_exception";
  case Server_errc::c22_array_subscript_error:
    return "c22_array_subscript_error";
  case Server_errc::c22_character_not_in_repertoire:
    return "c22_character_not_in_repertoire";
  case Server_errc::c22_datetime_field_overflow:
    return "c22_datetime_field_overflow";
  case Server_errc::c22_division_by_zero:
    return "c22_division_by_zero";
  case Server_errc::c22_error_in_assignment:
    return "c22_error_in_assignment";
  case Server_errc::c22_escape_character_conflict:
    return "c22_escape_character_conflict";
  case Server_errc::c22_indicator_overflow:
    return "c22_indicator_overflow";
  case Server_errc::c22_interval_field_overflow:
    return "c22_interval_field_overflow";
  case Server_errc::c22_invalid_argument_for_logarithm:
    return "c22_invalid_argument_for_logarithm";
  case Server_errc::c22_invalid_argument_for_ntile_function:
    return "c22_invalid_argument_for_ntile_function";
  case Server_errc::c22_invalid_argument_for_nth_value_function:
    return "c22_invalid_argument_for_nth_value_function";
  case Server_errc::c22_invalid_argument_for_power_function:
    return "c22_invalid_argument_for_power_function";
  case Server_errc::c22_invalid_argument_for_width_bucket_function:
    return "c22_invalid_argument_for_width_bucket_function";
  case Server_errc::c22_invalid_character_value_for_cast:
    return "c22_invalid_character_value_for_cast";
  case Server_errc::c22_invalid_datetime_format:
    return "c22_invalid_datetime_format";
  case Server_errc::c22_invalid_escape_character:
    return "c22_invalid_escape_character";
  case Server_errc::c22_invalid_escape_octet:
    return "c22_invalid_escape_octet";
  case Server_errc::c22_invalid_escape_sequence:
    return "c22_invalid_escape_sequence";
  case Server_errc::c22_nonstandard_use_of_escape_character:
    return "c22_nonstandard_use_of_escape_character";
  case Server_errc::c22_invalid_indicator_parameter_value:
    return "c22_invalid_indicator_parameter_value";
  case Server_errc::c22_invalid_parameter_value:
    return "c22_invalid_parameter_value";
  case Server_errc::c22_invalid_preceding_following_size:
    return "c22_invalid_preceding_following_size";
  case Server_errc::c22_invalid_regular_expression:
    return "c22_invalid_regular_expression";
  case Server_errc::c22_invalid_row_count_in_limit_clause:
    return "c22_invalid_row_count_in_limit_clause";
  case Server_errc::c22_invalid_row_count_in_result_offset_clause:
    return "c22_invalid_row_count_in_result_offset_clause";
  case Server_errc::c22_invalid_tablesample_argument:
    return "c22_invalid_tablesample_argument";
  case Server_errc::c22_invalid_tablesample_repeat:
    return "c22_invalid_tablesample_repeat";
  case Server_errc::c22_invalid_time_zone_displacement_value:
    return "c22_invalid_time_zone_displacement_value";
  case Server_errc::c22_invalid_use_of_escape_character:
    return "c22_invalid_use_of_escape_character";
  case Server_errc::c22_most_specific_type_mismatch:
    return "c22_most_specific_type_mismatch";
  case Server_errc::c22_null_value_not_allowed:
    return "c22_null_value_not_allowed";
  case Server_errc::c22_null_value_no_indicator_parameter:
    return "c22_null_value_no_indicator_parameter";
  case Server_errc::c22_numeric_value_out_of_range:
    return "c22_numeric_value_out_of_range";
  case Server_errc::c22_sequence_generator_limit_exceeded:
    return "c22_sequence_generator_limit_exceeded";
  case Server_errc::c22_string_data_length_mismatch:
    return "c22_string_data_length_mismatch";
  case Server_errc::c22_string_data_right_truncation:
    return "c22_string_data_right_truncation";
  case Server_errc::c22_substring_error:
    return "c22_substring_error";
  case Server_errc::c22_trim_error:
    return "c22_trim_error";
  case Server_errc::c22_unterminated_c_string:
    return "c22_unterminated_c_string";
  case Server_errc::c22_zero_length_character_string:
    return "c22_zero_length_character_string";
  case Server_errc::c22_floating_point_exception:
    return "c22_floating_point_exception";
  case Server_errc::c22_invalid_text_representation:
    return "c22_invalid_text_representation";
  case Server_errc::c22_invalid_binary_representation:
    return "c22_invalid_binary_representation";
  case Server_errc::c22_bad_copy_file_format:
    return "c22_bad_copy_file_format";
  case Server_errc::c22_untranslatable_character:
    return "c22_untranslatable_character";
  case Server_errc::c22_not_an_xml_document:
    return "c22_not_an_xml_document";
  case Server_errc::c22_invalid_xml_document:
    return "c22_invalid_xml_document";
  case Server_errc::c22_invalid_xml_content:
    return "c22_invalid_xml_content";
  case Server_errc::c22_invalid_xml_comment:
    return "c22_invalid_xml_comment";
  case Server_errc::c22_invalid_xml_processing_instruction:
    return "c22_invalid_xml_processing_instruction";
  case Server_errc::c22_duplicate_json_object_key_value:
    return "c22_duplicate_json_object_key_value";
  case Server_errc::c22_invalid_json_text:
    return "c22_invalid_json_text";
  case Server_errc::c22_invalid_json_subscript:
    return "c22_invalid_json_subscript";
  case Server_errc::c22_more_than_one_json_item:
    return "c22_more_than_one_json_item";
  case Server_errc::c22_no_json_item:
    return "c22_no_json_item";
  case Server_errc::c22_non_numeric_json_item:
    return "c22_non_numeric_json_item";
  case Server_errc::c22_non_unique_keys_in_json_object:
    return "c22_non_unique_keys_in_json_object";
  case Server_errc::c22_singleton_json_item_required:
    return "c22_singleton_json_item_required";
  case Server_errc::c22_json_array_not_found:
    return "c22_json_array_not_found";
  case Server_errc::c22_json_member_not_found:
    return "c22_json_member_not_found";
  case Server_errc::c22_json_number_not_found:
    return "c22_json_number_not_found";
  case Server_errc::c22_object_not_found:
    return "c22_object_not_found";
  case Server_errc::c22_json_scalar_required:
    return "c22_json_scalar_required";
  case Server_errc::c22_too_many_json_array_elements:
    return "c22_too_many_json_array_elements";
  case Server_errc::c22_too_many_json_object_members:
    return "c22_too_many_json_object_members";
  case Server_errc::c23_integrity_constraint_violation:
    return "c23_integrity_constraint_violation";
  case Server_errc::c23_restrict_violation:
    return "c23_restrict_violation";
  case Server_errc::c23_not_null_violation:
    return "c23_not_null_violation";
  case Server_errc::c23_foreign_key_violation:
    return "c23_foreign_key_violation";
  case Server_errc::c23_unique_violation:
    return "c23_unique_violation";
  case Server_errc::c23_check_violation:
    return "c23_check_violation";
  case Server_errc::c23_exclusion_violation:
    return "c23_exclusion_violation";
  case Server_errc::c24_invalid_cursor_state:
    return "c24_invalid_cursor_state";
  case Server_errc::c25_invalid_transaction_state:
    return "c25_invalid_transaction_state";
  case Server_errc::c25_active_sql_transaction:
    return "c25_active_sql_transaction";
  case Server_errc::c25_branch_transaction_already_active:
    return "c25_branch_transaction_already_active";
  case Server_errc::c25_held_cursor_requires_same_isolation_level:
    return "c25_held_cursor_requires_same_isolation_level";
  case Server_errc::c25_inappropriate_access_mode_for_branch_transaction:
    return "c25_inappropriate_access_mode_for_branch_transaction";
  case Server_errc::c25_inappropriate_isolation_level_for_branch_transaction:
    return "c25_inappropriate_isolation_level_for_branch_transaction";
  case Server_errc::c25_no_active_sql_transaction_for_branch_transaction:
    return "c25_no_active_sql_transaction_for_branch_transaction";
  case Server_errc::c25_read_only_sql_transaction:
    return "c25_read_only_sql_transaction";
  case Server_errc::c25_schema_and_data_statement_mixing_not_supported:
    return "c25_schema_and_data_statement_mixing_not_supported";
  case Server_errc::c25_no_active_sql_transaction:
    return "c25_no_active_sql_transaction";
  case Server_errc::c25_in_failed_sql_transaction:
    return "c25_in_failed_sql_transaction";
  case Server_errc::c25_idle_in_transaction_session_timeout:
    return "c25_idle_in_transaction_session_timeout";
  case Server_errc::c26_invalid_sql_statement_name:
    return "c26_invalid_sql_statement_name";
  case Server_errc::c27_triggered_data_change_violation:
    return "c27_triggered_data_change_violation";
  case Server_errc::c28_invalid_authorization_specification:
    return "c28_invalid_authorization_specification";
  case Server_errc::c28_invalid_password:
    return "c28_invalid_password";
  case Server_errc::c2b_dependent_privilege_descriptors_still_exist:
    return "c2b_dependent_privilege_descriptors_still_exist";
  case Server_errc::c2b_dependent_objects_still_exist:
    return "c2b_dependent_objects_still_exist";
  case Server_errc::c2d_invalid_transaction_termination:
    return "c2d_invalid_transaction_termination";
  case Server_errc::c2f_sql_routine_exception:
    return "c2f_sql_routine_exception";
  case Server_errc::c2f_function_executed_no_return_statement:
    return "c2f_function_executed_no_return_statement";
  case Server_errc::c2f_modifying_sql_data_not_permitted:
    return "c2f_modifying_sql_data_not_permitted";
  case Server_errc::c2f_prohibited_sql_statement_attempted:
    return "c2f_prohibited_sql_statement_attempted";
  case Server_errc::c2f_reading_sql_data_not_permitted:
    return "c2f_reading_sql_data_not_permitted";
  case Server_errc::c34_invalid_cursor_name:
    return "c34_invalid_cursor_name";
  case Server_errc::c38_external_routine_exception:
    return "c38_external_routine_exception";
  case Server_errc::c38_containing_sql_not_permitted:
    return "c38_containing_sql_not_permitted";
  case Server_errc::c38_modifying_sql_data_not_permitted:
    return "c38_modifying_sql_data_not_permitted";
  case Server_errc::c38_prohibited_sql_statement_attempted:
    return "c38_prohibited_sql_statement_attempted";
  case Server_errc::c38_reading_sql_data_not_permitted:
    return "c38_reading_sql_data_not_permitted";
  case Server_errc::c39_external_routine_invocation_exception:
    return "c39_external_routine_invocation_exception";
  case Server_errc::c39_invalid_sqlstate_returned:
    return "c39_invalid_sqlstate_returned";
  case Server_errc::c39_null_value_not_allowed:
    return "c39_null_value_not_allowed";
  case Server_errc::c39_trigger_protocol_violated:
    return "c39_trigger_protocol_violated";
  case Server_errc::c39_srf_protocol_violated:
    return "c39_srf_protocol_violated";
  case Server_errc::c39_event_trigger_protocol_violated:
    return "c39_event_trigger_protocol_violated";
  case Server_errc::c3b_savepoint_exception:
    return "c3b_savepoint_exception";
  case Server_errc::c3b_invalid_savepoint_specification:
    return "c3b_invalid_savepoint_specification";
  case Server_errc::c3d_invalid_catalog_name:
    return "c3d_invalid_catalog_name";
  case Server_errc::c3f_invalid_schema_name:
    return "c3f_invalid_schema_name";
  case Server_errc::c40_transaction_rollback:
    return "c40_transaction_rollback";
  case Server_errc::c40_transaction_integrity_constraint_violation:
    return "c40_transaction_integrity_constraint_violation";
  case Server_errc::c40_serialization_failure:
    return "c40_serialization_failure";
  case Server_errc::c40_statement_completion_unknown:
    return "c40_statement_completion_unknown";
  case Server_errc::c40_deadlock_detected:
    return "c40_deadlock_detected";
  case Server_errc::c42_syntax_error_or_access_rule_violation:
    return "c42_syntax_error_or_access_rule_violation";
  case Server_errc::c42_syntax_error:
    return "c42_syntax_error";
  case Server_errc::c42_insufficient_privilege:
    return "c42_insufficient_privilege";
  case Server_errc::c42_cannot_coerce:
    return "c42_cannot_coerce";
  case Server_errc::c42_grouping_error:
    return "c42_grouping_error";
  case Server_errc::c42_windowing_error:
    return "c42_windowing_error";
  case Server_errc::c42_invalid_recursion:
    return "c42_invalid_recursion";
  case Server_errc::c42_invalid_foreign_key:
    return "c42_invalid_foreign_key";
  case Server_errc::c42_invalid_name:
    return "c42_invalid_name";
  case Server_errc::c42_name_too_long:
    return "c42_name_too_long";
  case Server_errc::c42_reserved_name:
    return "c42_reserved_name";
  case Server_errc::c42_datatype_mismatch:
    return "c42_datatype_mismatch";
  case Server_errc::c42_indeterminate_datatype:
    return "c42_indeterminate_datatype";
  case Server_errc::c42_collation_mismatch:
    return "c42_collation_mismatch";
  case Server_errc::c42_indeterminate_collation:
    return "c42_indeterminate_collation";
  case Server_errc::c42_wrong_object_type:
    return "c42_wrong_object_type";
  case Server_errc::c42_generated_always:
    return "c42_generated_always";
  case Server_errc::c42_undefined_column:
    return "c42_undefined_column";
  case Server_errc::c42_undefined_function:
    return "c42_undefined_function";
  case Server_errc::c42_undefined_table:
    return "c42_undefined_table";
  case Server_errc::c42_undefined_parameter:
    return "c42_undefined_parameter";
  case Server_errc::c42_undefined_object:
    return "c42_undefined_object";
  case Server_errc::c42_duplicate_column:
    return "c42_duplicate_column";
  case Server_errc::c42_duplicate_cursor:
    return "c42_duplicate_cursor";
  case Server_errc::c42_duplicate_database:
    return "c42_duplicate_database";
  case Server_errc::c42_duplicate_function:
    return "c42_duplicate_function";
  case Server_errc::c42_duplicate_prepared_statement:
    return "c42_duplicate_prepared_statement";
  case Server_errc::c42_duplicate_schema:
    return "c42_duplicate_schema";
  case Server_errc::c42_duplicate_table:
    return "c42_duplicate_table";
  case Server_errc::c42_duplicate_alias:
    return "c42_duplicate_alias";
  case Server_errc::c42_duplicate_object:
    return "c42_duplicate_object";
  case Server_errc::c42_ambiguous_column:
    return "c42_ambiguous_column";
  case Server_errc::c42_ambiguous_function:
    return "c42_ambiguous_function";
  case Server_errc::c42_ambiguous_parameter:
    return "c42_ambiguous_parameter";
  case Server_errc::c42_ambiguous_alias:
    return "c42_ambiguous_alias";
  case Server_errc::c42_invalid_column_reference:
    return "c42_invalid_column_reference";
  case Server_errc::c42_invalid_column_definition:
    return "c42_invalid_column_definition";
  case Server_errc::c42_invalid_cursor_definition:
    return "c42_invalid_cursor_definition";
  case Server_errc::c42_invalid_database_definition:
    return "c42_invalid_database_definition";
  case Server_errc::c42_invalid_function_definition:
    return "c42_invalid_function_definition";
  case Server_errc::c42_invalid_prepared_statement_definition:
    return "c42_invalid_prepared_statement_definition";
  case Server_errc::c42_invalid_schema_definition:
    return "c42_invalid_schema_definition";
  case Server_errc::c42_invalid_table_definition:
    return "c42_invalid_table_definition";
  case Server_errc::c42_invalid_object_definition:
    return "c42_invalid_object_definition";
  case Server_errc::c44_with_check_option_violation:
    return "c44_with_check_option_violation";
  case Server_errc::c53_insufficient_resources:
    return "c53_insufficient_resources";
  case Server_errc::c53_disk_full:
    return "c53_disk_full";
  case Server_errc::c53_out_of_memory:
    return "c53_out_of_memory";
  case Server_errc::c53_too_many_connections:
    return "c53_too_many_connections";
  case Server_errc::c53_configuration_limit_exceeded:
    return "c53_configuration_limit_exceeded";
  case Server_errc::c54_program_limit_exceeded:
    return "c54_program_limit_exceeded";
  case Server_errc::c54_statement_too_complex:
    return "c54_statement_too_complex";
  case Server_errc::c54_too_many_columns:
    return "c54_too_many_columns";
  case Server_errc::c54_too_many_arguments:
    return "c54_too_many_arguments";
  case Server_errc::c55_object_not_in_prerequisite_state:
    return "c55_object_not_in_prerequisite_state";
  case Server_errc::c55_object_in_use:
    return "c55_object_in_use";
  case Server_errc::c55_cant_change_runtime_param:
    return "c55_cant_change_runtime_param";
  case Server_errc::c55_lock_not_available:
    return "c55_lock_not_available";
  case Server_errc::c55_unsafe_new_enum_value_usage:
    return "c55_unsafe_new_enum_value_usage";
  case Server_errc::c57_operator_intervention:
    return "c57_operator_intervention";
  case Server_errc::c57_query_canceled:
    return "c57_query_canceled";
  case Server_errc::c57_admin_shutdown:
    return "c57_admin_shutdown";
  case Server_errc::c57_crash_shutdown:
    return "c57_crash_shutdown";
  case Server_errc::c57_cannot_connect_now:
    return "c57_cannot_connect_now";
  case Server_errc::c57_database_dropped:
    return "c57_database_dropped";
  case Server_errc::c58_system_error:
    return "c58_system_error";
  case Server_errc::c58_io_error:
    return "c58_io_error";
  case Server_errc::c58_undefined_file:
    return "c58_undefined_file";
  case Server_errc::c58_duplicate_file:
    return "c58_duplicate_file";
  case Server_errc::c72_snapshot_too_old:
    return "c72_snapshot_too_old";
  case Server_errc::cf0_config_file_error:
    return "cf0_config_file_error";
  case Server_errc::cf0_lock_file_exists:
    return "cf0_lock_file_exists";
  case Server_errc::chv_fdw_error:
    return "chv_fdw_error";
  case Server_errc::chv_fdw_column_name_not_found:
    return "chv_fdw_column_name_not_found";
  case Server_errc::chv_fdw_dynamic_parameter_value_needed:
    return "chv_fdw_dynamic_parameter_value_needed";
  case Server_errc::chv_fdw_function_sequence_error:
    return "chv_fdw_function_sequence_error";
  case Server_errc::chv_fdw_inconsistent_descriptor_information:
    return "chv_fdw_inconsistent_descriptor_information";
  case Server_errc::chv_fdw_invalid_attribute_value:
    return "chv_fdw_invalid_attribute_value";
  case Server_errc::chv_fdw_invalid_column_name:
    return "chv_fdw_invalid_column_name";
  case Server_errc::chv_fdw_invalid_column_number:
    return "chv_fdw_invalid_column_number";
  case Server_errc::chv_fdw_invalid_data_type:
    return "chv_fdw_invalid_data_type";
  case Server_errc::chv_fdw_invalid_data_type_descriptors:
    return "chv_fdw_invalid_data_type_descriptors";
  case Server_errc::chv_fdw_invalid_descriptor_field_identifier:
    return "chv_fdw_invalid_descriptor_field_identifier";
  case Server_errc::chv_fdw_invalid_handle:
    return "chv_fdw_invalid_handle";
  case Server_errc::chv_fdw_invalid_option_index:
    return "chv_fdw_invalid_option_index";
  case Server_errc::chv_fdw_invalid_option_name:
    return "chv_fdw_invalid_option_name";
  case Server_errc::chv_fdw_invalid_string_length_or_buffer_length:
    return "chv_fdw_invalid_string_length_or_buffer_length";
  case Server_errc::chv_fdw_invalid_string_format:
    return "chv_fdw_invalid_string_format";
  case Server_errc::chv_fdw_invalid_use_of_null_pointer:
    return "chv_fdw_invalid_use_of_null_pointer";
  case Server_errc::chv_fdw_too_many_handles:
    return "chv_fdw_too_many_handles";
  case Server_errc::chv_fdw_out_of_memory:
    return "chv_fdw_out_of_memory";
  case Server_errc::chv_fdw_no_schemas:
    return "chv_fdw_no_schemas";
  case Server_errc::chv_fdw_option_name_not_found:
    return "chv_fdw_option_name_not_found";
  case Server_errc::chv_fdw_reply_handle:
    return "chv_fdw_reply_handle";
  case Server_errc::chv_fdw_schema_not_found:
    return "chv_fdw_schema_not_found";
  case Server_errc::chv_fdw_table_not_found:
    return "chv_fdw_table_not_found";
  case Server_errc::chv_fdw_unable_to_create_execution:
    return "chv_fdw_unable_to_create_execution";
  case Server_errc::chv_fdw_unable_to_create_reply:
    return "chv_fdw_unable_to_create_reply";
  case Server_errc::chv_fdw_unable_to_establish_connection:
    return "chv_fdw_unable_to_establish_connection";
  case Server_errc::cp0_plpgsql_error:
    return "cp0_plpgsql_error";
  case Server_errc::cp0_raise_exception:
    return "cp0_raise_exception";
  case Server_errc::cp0_no_data_found:
    return "cp0_no_data_found";
  case Server_errc::cp0_too_many_rows:
    return "cp0_too_many_rows";
  case Server_errc::cp0_assert_failure:
    return "cp0_assert_failure";
  case Server_errc::cxx_internal_error:
    return "cxx_internal_error";
  case Server_errc::cxx_data_corrupted:
    return "cxx_data_corrupted";
  case Server_errc::cxx_index_corrupted:
    return "cxx_index_corrupted";
  }
  DMITIGR_ASSERT_ALWAYS(!true);
}
