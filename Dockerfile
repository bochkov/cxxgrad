FROM alpine:latest
RUN apk add --no-cache git build-base cmake linux-headers
COPY src /cxxgrad/src
COPY CMakeLists.txt /cxxgrad/CMakeLists.txt
COPY Makefile /cxxgrad/Makefile
WORKDIR /cxxgrad
RUN make
