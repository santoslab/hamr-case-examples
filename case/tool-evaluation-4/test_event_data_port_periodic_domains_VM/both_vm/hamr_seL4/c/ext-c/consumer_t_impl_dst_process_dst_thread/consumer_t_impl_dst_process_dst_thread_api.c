#include <consumer_t_impl_dst_process_dst_thread_api.h>
#include <consumer_t_impl_dst_process_dst_thread.h>

static bool apis_initialized = false;
static struct both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api initialization_api;
static struct both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread.c", "", "initialize_apis", 0);

  // Option_AA4514 = Option[both_vm.test_event_data_port_periodic_domains.consumer_t_impl_Initialization_Api]
  Option_AA4514_get_(SF (both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api) &initialization_api, both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_Bridge_c_initialization_api(SF_LAST));
  // Option_814E06 = Option[both_vm.test_event_data_port_periodic_domains.consumer_t_impl_Operational_Api]
  Option_814E06_get_(SF (both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api) &operational_api, both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_read_port__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  S8 *value){
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_get_read_port__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api_get_read_port_(
    SF
    (Option_FC3847) &t_0,
    &operational_api);

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_logInfo__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_logInfo__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_logDebug__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_logError__both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise(
  STACK_FRAME
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise", 0);

  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise_(SF_LAST);
}

Unit both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise(
  STACK_FRAME
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise", 0);

  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise_(SF_LAST);
}

Unit both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered(
  STACK_FRAME
  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered", 0);

  both_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered_(SF_LAST);
}
