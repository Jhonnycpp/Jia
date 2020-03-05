FROM ubuntu

# RUN apk update \
#     apk upgrade

# RUN apk add cmake \ 
#     make \
#     clang \
#     build-base \
#     llvm-static \
#     llvm-dev \
#     clang-static \
#     clang-dev \
#     mingw-w64-gcc

RUN dpkg --add-architecture i386 && \
    apt-get update -yqq && \ 
    apt-get install -y --no-install-recommends \
    build-essential \
    gcc-multilib \
    g++-multilib \
    clang-9 \
    cmake \
    mingw-w64

WORKDIR /