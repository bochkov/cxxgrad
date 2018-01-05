FROM alpine:latest
RUN apk add --no-cache git build-base cmake linux-headers
RUN make
