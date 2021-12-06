package main

import (
	vpresultpb "github.com/sysmoon/vps-grpc-gateway/schema/VPResult"
)

const portNumber = "9000"

type locationServiceServer struct {
	vpresultpb.LocationServiceServer
}

// func (s *locationServiceServer) GetLocationPose(ctx context.Context, req *vpresultpb.vpdata.VPData) (*vpresultpb.VPService_t, error) {
// 	return nil
// }

func main() {
	// lis, err := net.Listen("tcp", ":"+portNumber)
	// if err != nil {
	// 	log.Fatalf("failed to listen: %v", err)
	// }

	// grpcServer := grpc.NewServer()
	// vpresultpb.RegisterUserServer(grpcServer, &userServer{})

	// log.Printf("start gRPC server on %s port", portNumber)
	// if err := grpcServer.Serve(lis); err != nil {
	// 	log.Fatalf("failed to serve: %s", err)
	// }
}
