#include <UxAS_thr_Impl_uxas_UxAS_thread_api.h>
#include <UxAS_thr_Impl_uxas_UxAS_thread.h>

static bool apis_initialized = false;
static struct attestation_gate_SysContext_UxAS_thr_Impl_Initialization_Api initialization_api;
static struct attestation_gate_SysContext_UxAS_thr_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread.c", "", "initialize_apis", 0);

  // Option_4A195E = Option[attestation_gate.SysContext.UxAS_thr_Impl_Initialization_Api]
  Option_4A195E_get_(SF (attestation_gate_SysContext_UxAS_thr_Impl_Initialization_Api) &initialization_api, attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_Bridge_c_initialization_api(SF_LAST));
  // Option_CA4785 = Option[attestation_gate.SysContext.UxAS_thr_Impl_Operational_Api]
  Option_CA4785_get_(SF (attestation_gate_SysContext_UxAS_thr_Impl_Operational_Api) &operational_api, attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_AutomationRequest__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "api_get_AutomationRequest__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  attestation_gate_SysContext_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_(
    SF
    (Option_30119F) &t_0,
    &operational_api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

bool api_get_OperatingRegion__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "api_get_OperatingRegion__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  attestation_gate_SysContext_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_(
    SF
    (Option_30119F) &t_0,
    &operational_api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

bool api_get_LineSearchTask__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "api_get_LineSearchTask__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  attestation_gate_SysContext_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_(
    SF
    (Option_30119F) &t_0,
    &operational_api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

void api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  attestation_gate_SysContext_UxAS_thr_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "api_logDebug__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  attestation_gate_SysContext_UxAS_thr_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "api_logError__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  attestation_gate_SysContext_UxAS_thr_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_initialise(
  STACK_FRAME
  attestation_gate_SysContext_UxAS_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_initialise", 0);

  attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_initialise_(SF_LAST);
}

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_finalise(
  STACK_FRAME
  attestation_gate_SysContext_UxAS_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_finalise", 0);

  attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_finalise_(SF_LAST);
}

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_timeTriggered(
  STACK_FRAME
  attestation_gate_SysContext_UxAS_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread_api.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_timeTriggered", 0);

  attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_timeTriggered_(SF_LAST);
}
