#!/bin/bash

# curl -XPOST -H "Content-Type: Application/json" -d @sample.json  http://localhost:9000/skvps/locdata | jq '.'

JSON_FILE_PATH=$1
HOST=$2
PORT=$3

if [ $# -eq 4 ]
  then
    printf "No arguments supplied"
    printf "usage: ./restapi-test.sh <json file> <host> <port> \n"
    printf "example: ./restapi-test.sh sample.json localhost 9000 \n"
fi

# json
curl -XPOST -H "Content-Type: Application/json" -d @${JSON_FILE_PATH}  http://${HOST}:${PORT}/skvps/locdata | jq '.'