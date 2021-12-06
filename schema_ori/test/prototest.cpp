/**
*
*	@breif			prototest.cpp
*	@details	    prototest test main
*	@org	        SK Telecom | T3K | 5GX Location Labs.
*	@author			Jeihun Lee(jeihun.lee@sk.com)
*	@date			2021.05.27
*	@version		v0.1
*	@remarks		proto validation
*
**/

#include <iostream>
#include <fstream>
#include <random>
#include <filesystem>
#include <ctime>


#include <google/protobuf/util/json_util.h>

#include "TypeDef.h"

#include "placevector.pb.h"
#include "localfeature.pb.h"

#define FILE_NAME "placevector.proto"

::std::string WriteProtoFile(const ::std::string &strFilename);
void ReadProtoFile(const ::std::string &strFilename);

int main() {
    std::cout << "Hello, KT!\n";

    GOOGLE_PROTOBUF_VERIFY_VERSION;

    auto aFilename = ::std::string(FILE_NAME);
    ::std::filesystem::remove( aFilename );
    ::std::cout << aFilename << " is removed!" << ::std::endl;

    // Save Proto File
    auto aProtoData = WriteProtoFile( aFilename );

    // Load Proto File
    ReadProtoFile( aFilename );

    return 1;
}

void ReadProtoFile(const ::std::string &strFilename)
{
    ::std::cout << "Reading proto file.... -> " << strFilename << ::std::endl;

    ::std::fstream input(strFilename, ::std::ios::in | ::std::ios::binary);

    VgeoDB::PlaceVectorSet oPlaceVectorSet;
    oPlaceVectorSet.ParseFromIstream( &input );

    //oPlaceVectorSet.PrintDebugString();
}

::std::string WriteProtoFile(const ::std::string &strFilename)
{
    VgeoDB::PlaceVectorSet oPlaceVectorSet;

    //auto aPVSet = oPlaceVectorSet.mutable_arstplacevector();
    for(int32_t nNumofSet=3; nNumofSet > 0; --nNumofSet)
    {
        VgeoDB::PlaceVector oPlaceVector;

        constexpr uint64_t un64UniqueID = 0b11100111100110010010010011011010001000010000101;

        auto aMeta = oPlaceVector.mutable_stmeta();
        aMeta->set_un64uniqueid( un64UniqueID );
        aMeta->set_un64keyframeindex( 53391559 );
        aMeta->set_un64groupid( 1111804 );
        aMeta->set_un64timestamp( 11109876543210 );

        float64_t arf64AvgLocation[3] = { 37.38667770722209, 126.97594481080998, 81.1225 };
        aMeta->mutable_stavglocation()->set_f64x( arf64AvgLocation[0] );
        aMeta->mutable_stavglocation()->set_f64y( arf64AvgLocation[1] );
        aMeta->mutable_stavglocation()->set_f64z( arf64AvgLocation[2] );

        aMeta->mutable_storientaton()->set_fqx( 3.14159261f );
        aMeta->mutable_storientaton()->set_fqy( -1.8181818181818181f );
        aMeta->mutable_storientaton()->set_fqz( 1.414f );
        aMeta->mutable_storientaton()->set_fqw( 1.0f );

        int32_t nIdx = 6;
        constexpr float64_t f64Offset = -1.414;
        for( ; nIdx > 0; --nIdx )
        {
            arf64AvgLocation[0] += f64Offset;
            arf64AvgLocation[1] += (f64Offset * -3.14);
            arf64AvgLocation[2] *= f64Offset;

            auto aLocationSet = aMeta->add_arstlocationset();
            aLocationSet->set_f64x( arf64AvgLocation[0] );
            aLocationSet->set_f64y( arf64AvgLocation[1] );
            aLocationSet->set_f64z( arf64AvgLocation[2] );
        }
        
        aMeta->mutable_stdirectionvector()->set_fx( 177.6f );
        aMeta->mutable_stdirectionvector()->set_fy( 71.3f );
        aMeta->mutable_stdirectionvector()->set_fz( 108.2f );

        ::std::random_device rd;
        ::std::mt19937_64 gen(rd());
        ::std::uniform_int_distribution<uint64_t> dis;
        nIdx = 11;
        for( ; nIdx > 0; --nIdx )
        {
            aMeta->add_arun64uniqueidofkeypoint( dis(gen) );
            aMeta->add_arun64belong3dpointindex( dis(gen) );
        }

        auto aDesc = oPlaceVector.mutable_udescriptor()->mutable_stnetvladdescriptor();
        nIdx = 22;
        srand( static_cast<uint32_t>(time(NULL)) );

        aDesc->set_etype( VgeoDB::NetVLADDesc_t_eDescType_VLAD_4096_v1 );
        for( ; nIdx > 0; --nIdx )
        {
            aDesc->add_arfnetvladdescriptor( static_cast<float32_t>(rand()) );
        }

        auto aPlaceVector = oPlaceVectorSet.add_arstplacevector();
        aPlaceVector->CopyFrom( oPlaceVector );
    }

    ::std::cout << "Writing proto file.... -> " << strFilename << ::std::endl;

    ::std::fstream ofs( strFilename, ::std::ios::out | ::std::ios::trunc | ::std::ios::binary );
    oPlaceVectorSet.SerializeToOstream( &ofs );
    ofs.close();

    //////////////////////////////////////////////////
    // Test Json
    ::std::string strJsonString;
    google::protobuf::util::JsonPrintOptions jsonOpt;
    jsonOpt.add_whitespace = true;
    jsonOpt.always_print_primitive_fields = true;
    jsonOpt.preserve_proto_field_names = true;
    MessageToJsonString( oPlaceVectorSet, &strJsonString, jsonOpt );

    ::std::cout << "Json -> " << strJsonString << ::std::endl;

    //oPlaceVector.PrintDebugString();

    return oPlaceVectorSet.SerializeAsString();
}