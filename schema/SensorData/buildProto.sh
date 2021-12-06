#!/bin/bash

# protoc -I./ -I../ \
#     vp_msg.proto \
#     vp_state.proto vp_tracking.proto vp_camera.proto vp_sensors.proto \
#     ../vgeodb_common.proto \
#     --go_out=. --go_opt paths=source_relative


protoc -I./ -I../ \
    vp_msg.proto \
    vp_state.proto vp_tracking.proto vp_camera.proto vp_sensors.proto \
    ../vgeodb_common.proto \
    --go_out=. --go_opt paths=source_relative