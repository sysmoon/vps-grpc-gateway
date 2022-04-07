#!/bin/bash

JSON_FILE_PATH=$1
HOST=$2
PORT=$3

if [ $# -eq 4 ]
  then
    printf "No arguments supplied"
    printf "usage: ./restapi-test.sh <json file> <host> <port> \n"
    printf "example: ./restapi-test.sh sample.json localhost 9000 \n"
fi

##### Azure
printf "Azure\n"

# restapi
# grpcurl -vv  -user-agent 'gputype/t4' -d @ vpgw.vpslab.co.kr:443 vpresult.LocationService/getLocationPose < sample.json
curl -XPOST -H "Content-Type: Application/json" -d @${JSON_FILE_PATH}  https://${HOST}:${PORT}/skvps/locdata | jq '.'

# grpcurl
#grpcurl -vv  -user-agent 'gputype/t4' -d @ vpgw.vpslab.co.kr:443 vpresult.LocationService/getLocationPose < sample.json
grpcurl -vv  -user-agent 'gputype/t4' -d @ ${HOST}:${PORT} vpresult.LocationService/getLocationPose < ${JSON_FILE_PATH}


###### NHN

printf "NHN\n"
# grpc
grpcurl -vv -plaintext -user-agent 'gputype/sapeon' -d @ vpgw.vpslab.co.kr:50051 vpresult.LocationService/getLocationPose < sample.json
