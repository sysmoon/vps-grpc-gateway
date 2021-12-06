#!/bin/bash

protoc -I./ -I../ -I../SensorData/ \
    vpresult.proto prdb_meta.proto \
    --go_out . --go_opt paths=source_relative \
    --go-grpc_out . --go-grpc_opt paths=source_relative

# protoc -I./ -I../ -I../SensorData/ \
#         --grpc-gateway_out . \
#         --grpc-gateway_opt logtostderr=true \
#         --grpc-gateway_opt paths=source_relative \
#         vpresult.proto \