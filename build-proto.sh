#!/bin/bash

# grpc-server (/w SensorData)
rm -f schema/SensorData/*.go
protoc -I./ \
	-I./schema \
    schema/vgeodb_common.proto \
    schema/SensorData/*.proto \
    --go_out=. --go_opt paths=source_relative


# grpc-server (/w VPResult)
rm -f schema/VPResult/*.go    
protoc -I./ \
    schema/VPResult/vpresult.proto \
    schema/VPResult/prdb_meta.proto \
    --go_out . --go_opt paths=source_relative \
    --go-grpc_out . --go-grpc_opt paths=source_relative

# grpc-gateway
protoc -I . \
	    --grpc-gateway_out . \
	    --grpc-gateway_opt logtostderr=true \
	    --grpc-gateway_opt paths=source_relative \
        schema/VPResult/vpresult_grpc_gw.proto

# swagger
# protoc -I . --openapiv2_out ./gen/openapiv2 \
#     --openapiv2_opt logtostderr=true \
#     schema/VPResult/vpresult.proto


