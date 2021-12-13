#!/bin/bash

rm -f bin/vps-grpc-*

# vps-grpc-gateway
go build -o bin/vps-grpc-gateway vpgw/grpc-gateway/main.go

# vps-grpc-server
go build -o bin/vps-grpc-server vpgw/grpc-server/main.go