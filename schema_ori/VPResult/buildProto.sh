#!/bin/bash

${PROTOC} -I./ -I../ -I../SensorData/ \
    vpresult.proto prdb_meta.proto \
    --go_out ${DSTDIR_GO} --go_opt paths=source_relative \
    --go-grpc_out ${DSTDIR_GO} --go-grpc_opt paths=source_relative