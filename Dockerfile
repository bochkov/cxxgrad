FROM alpine:latest
RUN apk add --no-cache git build-base cmake linux-headers
COPY src /src
WORKDIR /src
RUN make
