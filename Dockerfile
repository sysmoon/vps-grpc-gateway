FROM golang:1.17.3-stretch AS Builder
LABEL AUTHOR Danel Moon (sysmoon@gmail.com)

RUN mkdir -p /app
WORKDIR /app 
COPY go.mod .
COPY go.sum .
RUN go mod tidy
COPY . .
RUN CGO_ENABLED=0 GOOS=linux GOARCH=amd64 go build -o bin/vps-grpc-gateway vpgw/grpc-gateway/main.go

EXPOSE 9000

ENTRYPOINT [ "/app/bin/vps-grpc-gateway" ]