package main

import (
	"context"
	"log"
	"net/http"

	"github.com/grpc-ecosystem/grpc-gateway/v2/runtime"
	"google.golang.org/grpc"

	vpresultpb "github.com/sysmoon/vps-grpc-gateway/schema/VPResult"
)

const (
	portNumber           = "9000"
	gRPCServerPortNumber = "50051"
)

func main() {
	ctx := context.Background()
	mux := runtime.NewServeMux()
	options := []grpc.DialOption{
		grpc.WithInsecure(),
	}

	if err := vpresultpb.RegisterLocationServiceHandlerFromEndpoint(
		ctx,
		mux,
		"vpgw.vps.svc.cluster.local:"+gRPCServerPortNumber,
		options,
	); err != nil {
		log.Fatalf("failed to register gRPC gateway: %v", err)
	}

	log.Printf("start HTTP server on %s port", portNumber)
	if err := http.ListenAndServe(":"+portNumber, mux); err != nil {
		log.Fatalf("failed to serve: %s", err)
	}
}
