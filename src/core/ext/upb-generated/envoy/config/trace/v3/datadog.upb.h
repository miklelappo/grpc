/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v3/datadog.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_TRACE_V3_DATADOG_PROTO_UPB_H_
#define ENVOY_CONFIG_TRACE_V3_DATADOG_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_trace_v3_DatadogConfig;
typedef struct envoy_config_trace_v3_DatadogConfig envoy_config_trace_v3_DatadogConfig;
extern const upb_msglayout envoy_config_trace_v3_DatadogConfig_msginit;


/* envoy.config.trace.v3.DatadogConfig */

UPB_INLINE envoy_config_trace_v3_DatadogConfig *envoy_config_trace_v3_DatadogConfig_new(upb_arena *arena) {
  return (envoy_config_trace_v3_DatadogConfig *)_upb_msg_new(&envoy_config_trace_v3_DatadogConfig_msginit, arena);
}
UPB_INLINE envoy_config_trace_v3_DatadogConfig *envoy_config_trace_v3_DatadogConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_trace_v3_DatadogConfig *ret = envoy_config_trace_v3_DatadogConfig_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_trace_v3_DatadogConfig_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_trace_v3_DatadogConfig *envoy_config_trace_v3_DatadogConfig_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_trace_v3_DatadogConfig *ret = envoy_config_trace_v3_DatadogConfig_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_trace_v3_DatadogConfig_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_trace_v3_DatadogConfig_serialize(const envoy_config_trace_v3_DatadogConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_trace_v3_DatadogConfig_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_config_trace_v3_DatadogConfig_collector_cluster(const envoy_config_trace_v3_DatadogConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview envoy_config_trace_v3_DatadogConfig_service_name(const envoy_config_trace_v3_DatadogConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview); }

UPB_INLINE void envoy_config_trace_v3_DatadogConfig_set_collector_cluster(envoy_config_trace_v3_DatadogConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_config_trace_v3_DatadogConfig_set_service_name(envoy_config_trace_v3_DatadogConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview) = value;
}

extern const upb_msglayout_file envoy_config_trace_v3_datadog_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_TRACE_V3_DATADOG_PROTO_UPB_H_ */