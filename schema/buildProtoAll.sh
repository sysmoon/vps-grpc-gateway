#!/bin/bash

#export LD_LIBRARY_PATH=$(git rev-parse --show-toplevel)/protobuf3_17_1/lib/linux-x64/:${LD_LIBRARY_PATH}
#echo ${LD_LIBRARY_PATH}
export PATH=$(git rev-parse --show-toplevel)/osplib/grpc1_38_0/bin/:${PATH}
echo ${PATH}

#echo "\n===== build protobuf grpc-plug-in============================================="
#bash $(git rev-parse --show-toplevel)/osplib/grpc1_38_0/bin/grpc_cpp_plugin

echo "\n===== build protobuf ============================================="
LTDB_PATH="./ltdb/"
SENSORDATA_PATH="./SensorData"
VPRESULT_PATH="./VPResult"

MODULE_SA_PATH="./SceneAnalysis"
MODULE_PE_PATH="./PoseEstimation"

TRITON_PATH="./triton"

SCRIPT_FILE="buildProto.sh"


CUR_PATH=${PWD}
TAR_PATH=${CUR_PATH}/./prototopic/
mkdir -p ${TAR_PATH}
echo ${TAR_PATH}

echo "\n=================================================="
pushd ${CUR_PATH}/${LTDB_PATH}
echo ${PWD}
bash ${SCRIPT_FILE} ${TAR_PATH}
popd

echo "\n[Sensor Data]=================================================="
pushd ${CUR_PATH}/${SENSORDATA_PATH}
echo ${PWD}
bash ${SCRIPT_FILE} ${TAR_PATH}
popd

echo "\n[VPResult]=================================================="
pushd ${CUR_PATH}/${VPRESULT_PATH}
echo ${PWD}
bash ${SCRIPT_FILE} ${TAR_PATH}
popd

echo "\n[Module SA]=================================================="
pushd ${CUR_PATH}/${MODULE_SA_PATH}
echo ${PWD}
bash ${SCRIPT_FILE} ${TAR_PATH}
popd

echo "\n[Module PE]=================================================="
pushd ${CUR_PATH}/${MODULE_PE_PATH}
echo ${PWD}
bash ${SCRIPT_FILE} ${TAR_PATH}
popd


echo "\n[Internal gRPC]=================================================="
pushd ${CUR_PATH}/InternalRPC
echo ${PWD}
bash ${SCRIPT_FILE} ${TAR_PATH}
popd

echo "\n[VPS 1.0]=================================================="
pushd ${CUR_PATH}/vps1_0/01_PRDB
echo ${PWD}
bash ${SCRIPT_FILE} ${CUR_PATH}/vps1_0/prototopic_vps1
popd

pushd ${CUR_PATH}/vps1_0/02_LocalDB
echo ${PWD}
bash ${SCRIPT_FILE} ${CUR_PATH}/vps1_0/prototopic_vps1
popd
