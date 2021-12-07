package main

import (
	"context"
	fmt "fmt"
	"log"
	"net"

	sensorpb "github.com/sysmoon/vps-grpc-gateway/schema/SensorData"
	vpresultpb "github.com/sysmoon/vps-grpc-gateway/schema/VPResult"
	"google.golang.org/grpc"
)

const portNumber = "9001"

type locationServiceServer struct {
	vpresultpb.LocationServiceServer
}

func (s *locationServiceServer) GetLocationPose(ctx context.Context, req *sensorpb.VPData) (*vpresultpb.VPServiceT, error) {
	println("get request")
	// header := req.StVPHeader
	fmt.Printf("%+v\n", req)

	stVPResult := &vpresultpb.MetaT{
		U64KeyFrameIndex: 111,
		U64Timestamp:     1234,
	}

	return &vpresultpb.VPServiceT{
		StVPResult:             stVPResult,
		StVPResultTrackingMode: nil,
	}, nil
}

func main() {
	fmt.Println("vps tet")
	lis, err := net.Listen("tcp", ":"+portNumber)
	if err != nil {
		log.Fatalf("failed to listen: %v", err)
	}

	grpcServer := grpc.NewServer()
	vpresultpb.RegisterLocationServiceServer(grpcServer, &locationServiceServer{})

	log.Printf("start VPGW server on %s port", portNumber)
	if err := grpcServer.Serve(lis); err != nil {
		log.Fatalf("failed to serve: %s", err)
	}
}
