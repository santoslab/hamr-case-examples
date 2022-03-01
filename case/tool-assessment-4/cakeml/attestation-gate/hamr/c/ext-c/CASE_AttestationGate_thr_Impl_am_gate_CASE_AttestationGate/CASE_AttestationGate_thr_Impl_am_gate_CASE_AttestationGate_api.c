#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.h>

static bool apis_initialized = false;
static struct attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api initialization_api;
static struct attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c", "", "initialize_apis", 0);

  // Option_508DB4 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Initialization_Api]
  Option_508DB4_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api) &initialization_api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));
  // Option_162513 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Operational_Api]
  Option_162513_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api) &operational_api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_trusted_ids__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_trusted_ids__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_(
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

bool api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_(
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

void api_put_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_put_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_put_AutomationRequest_out_(
    SF
    &initialization_api,
    &t_0);
}

bool api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_(
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

void api_put_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_put_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_put_OperatingRegion_out_(
    SF
    &initialization_api,
    &t_0);
}

bool api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_(
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

void api_put_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_put_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_put_LineSearchTask_out_(
    SF
    &initialization_api,
    &t_0);
}

void api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_logDebug__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_logError__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise(
  STACK_FRAME
  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise", 0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise_(SF_LAST);
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise(
  STACK_FRAME
  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise", 0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise_(SF_LAST);
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered(
  STACK_FRAME
  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered", 0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered_(SF_LAST);
}
