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

${PROTOC} -I./02_0_LFSPPDB/ -I./02_a_LFSPPDB_LocalFeature/ -I./02_b_LFSPPDB_KeyFrameIndex/ \
		-I../01_PRDB/01_0_PRDB/ \
		lfsppdb.proto \
		lfsppdb_query_localfeature.proto  lfsppdb_return_localfeature.proto \
		lfsppdb_query_keyframeindex.proto  lfsppdb_return_keyframeindex.proto \
		--cpp_out=${DSTDIR_CPP} \
		--python_out=${DSTDIR_PYTHON} 

cp -avr ${DSTDIR_CPP}/ $1

rm -rf ${DSTDIR_CPP}
