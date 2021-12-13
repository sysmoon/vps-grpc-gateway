#!/bin/bash

# curl -XPOST -H "Content-Type: Application/json" -d @sample.json  https://vpgw.vpslab.co.kr/skvps/locdata | jq '.'

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
printf "**********\n"
printf "restapi test\n"
printf "**********\n"

curl -XPOST -H "Content-Type: Application/json" -d @${JSON_FILE_PATH}  https://${HOST}:${PORT}/skvps/locdata | jq '.'

printf "**********\n"
printf "grpcurl test\n"
printf "**********\n"
# grpcurl
grpcurl -vv  -user-agent 'gputype/t4' -d @ ${HOST}:${PORT} vpresult.LocationService/getLocationPose < ${JSON_FILE_PATH}