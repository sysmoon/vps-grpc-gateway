#!/bin/bash

### in case use relative import path
# SensorData
rm -f schema/SensorData/*.go
protoc -I./ \
	-I./schema \
    schema/vgeodb_common.proto \
    schema/SensorData/*.proto \
    --go_out=. --go_opt paths=source_relative


# VPResult
rm -f schema/VPResult/*.go    
protoc -I./ \
    schema/VPResult/vpresult.proto \
    schema/VPResult/prdb_meta.proto \
    --go_out . --go_opt paths=source_relative \
    --go-grpc_out . --go-grpc_opt paths=source_relative
