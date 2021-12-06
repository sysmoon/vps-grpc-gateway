#!/bin/sh

unameOut="$(uname -s)"
case "${unameOut}" in
    Linux*)     machine=Linux;;
    Darwin*)    machine=Mac;;
    CYGWIN*)    machine=Cygwin;;
    MINGW*)     machine=MinGw;;
    *)          machine="UNKNOWN:${unameOut}"
esac
echo ${machine}

#PROTOC=$(git rev-parse --show-toplevel)/osplib/protobuf3_17_1/bin/protoc
#PROTOC_LIB=$(git rev-parse --show-toplevel)/osplib/protobuf3_17_1/lib/linux-x64/
PROTOC=$(git rev-parse --show-toplevel)/osplib/grpc1_38_0/bin/protoc
PROTOC_LIB=$(git rev-parse --show-toplevel)/osplib/grpc1_38_0/lib/linux-x64/

if [ "${machine}" = "MinGw" ]
then
	PROTOC=${PROTOC}.exe
else
	export LD_LIBRARY_PATH=${PROTOC_LIB}
	# echo ${LD_LIBRARY_PATH}
fi

GENROOT_DIR="./src/"
DSTDIR_CPP="${GENROOT_DIR}cpp"
DSTDIR_PYTHON="${GENROOT_DIR}python"

rm -rf ${GENROOT_DIR}
mkdir -p ${DSTDIR_CPP}
mkdir -p ${DSTDIR_PYTHON}

${PROTOC} -I./01_0_PRDB/ -I./01_a_PlaceVector -I./01_b_KeyFrameIndex -I./01_c_Location \
	-I../02_LocalDB/02_0_LFSPPDB/ \
	prdb.proto prdb_meta.proto prdb_netvlad.proto \
	prdb_query_placevector.proto prdb_return_placevector.proto \
	prdb_query_keyframeindex.proto  prdb_return_keyframeindex.proto \
	prdb_query_location.proto  prdb_return_location.proto \
	--cpp_out=${DSTDIR_CPP} \
	--python_out=${DSTDIR_PYTHON} \

cp -avr ${DSTDIR_CPP}/ $1

rm -rf ${DSTDIR_CPP}