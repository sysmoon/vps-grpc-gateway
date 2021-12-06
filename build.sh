#!/bin/bash

# SensorData
rm -f schema/SensorData/*.go
protoc -I./ \
    schema/vgeodb_common.proto \
    schema/SensorData/*.proto \
    --go_out=. --go_opt paths=source_relative


# VPResult
rm -f schema/VPResult/*.go    
rm -f schema/*.go    

protoc -I./ \
    schema/VPResult/vpresult.proto \
    schema/VPResult/prdb_meta.proto \
    --go_out . --go_opt paths=source_relative \
    --go-grpc_out . --go-grpc_opt paths=source_relative

# protoc -I./ -I../ \
#     vp_msg.proto \
#     vp_state.proto vp_tracking.proto vp_camera.proto vp_sensors.proto \
#     ../vgeodb_common.proto \
#     --go_out=. --go_opt paths=source_relative