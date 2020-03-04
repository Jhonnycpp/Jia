FROM alpine:edge

RUN apk update \
    apk upgrade

RUN apk add cmake \ 
    make \
    clang \
    build-base \
    llvm-static \
    llvm-dev \
    clang-static \
    clang-dev \
    mingw-w64-gcc

WORKDIR /