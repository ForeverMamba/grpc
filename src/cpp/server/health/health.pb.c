/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.7-dev */

#include "src/cpp/server/health/health.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t grpc_health_v1_HealthCheckRequest_fields[2] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, grpc_health_v1_HealthCheckRequest, service, service, 0),
    PB_LAST_FIELD
};

const pb_field_t grpc_health_v1_HealthCheckResponse_fields[2] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, grpc_health_v1_HealthCheckResponse, status, status, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */