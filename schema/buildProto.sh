#!/bin/bash

protoc -I. \
    vgeodb_common.proto \
    --go_out=. --go_opt paths=source_relative