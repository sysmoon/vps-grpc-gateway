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
	export LD_LIBRARY_PATH=${PROTOC_LIB}:${LD_LIBRARY_PATH}
	# echo ${LD_LIBRARY_PATH}
fi

GENROOT_DIR="./src/"
DSTDIR_CPP="${GENROOT_DIR}cpp"
DSTDIR_JAVA="${GENROOT_DIR}java"
DSTDIR_PYTHON="${GENROOT_DIR}python"
DSTDIR_JS="${GENROOT_DIR}js"

rm -rf ${GENROOT_DIR}
mkdir -p ${DSTDIR_CPP}
mkdir -p ${DSTDIR_JAVA}
mkdir -p ${DSTDIR_PYTHON}
mkdir -p ${DSTDIR_JS}

${PROTOC} -I./ -I../ -I../ltdb -I../SensorData \
	PoseEstimation.proto \
	--cpp_out=${DSTDIR_CPP} \
	--java_out=${DSTDIR_JAVA} \
	--python_out=${DSTDIR_PYTHON} \
	--js_out=import_style=commonjs,binary:${DSTDIR_JS}

cp -avr ${DSTDIR_CPP}/ $1
cp -avr ${DSTDIR_PYTHON}/ $1

rm -rf ${DSTDIR_CPP}
