#!/bin/bash

nohup go run vpgw/grpc-gateway/main.go > grpc-gateway.nohup.out 2>&1 &