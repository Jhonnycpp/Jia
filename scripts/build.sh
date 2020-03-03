#!/bin/bash
OS_PARAM="none"
ARCH_PARAM="none"
PROCESS_PARAM=$(nproc)
DOCKER_PARAM=false

. ./scripts/colors.sh

POSITIONAL=()
while [[ $# -gt 0 ]]
do
key="$1"
case $key in
    -o|--os)
    OS_PARAM="$2"
    shift # past argument
    shift # past value
    ;;
    -a|--arch)
    ARCH_PARAM="$2"
    shift # past argument
    shift # past value
    ;;
    -p|--process)
    PROCESS_PARAM="$2"
    shift # past argument
    shift # past value
    ;;
    -d|--docker)
    DOCKER_PARAM=true
    shift # past argument
    shift # past value
    ;;
    *)    # unknown option
    POSITIONAL+=("$1") # save it in an array for later
    shift # past argument
    ;;
esac
done

set -- "${POSITIONAL[@]}" # restore positional parameters

echo -e "Build to ${COLOR_LIGHT_GREEN}${OS_PARAM}${COLOR_NC} in the arch ${COLOR_LIGHT_GREEN}${ARCH_PARAM}${COLOR_NC} and running with ${COLOR_YELLOW}${PROCESS_PARAM}${COLOR_NC} process."

CMD="cmake . -DOS=${OS_PARAM} -DARCH=${ARCH_PARAM} && make -j${PROCESS_PARAM}"

scripts/clean.sh

if [[ "${DOCKER_PARAM}" == true ]]; then
    DOCKER_VERSION=$(docker --version)
    DOCKER_VERSION=$(echo $DOCKER_VERSION | tr '[:upper:]' '[:lower:]')
    echo -e "${COLOR_LIGHT_GREEN}Running ${DOCKER_VERSION}.${COLOR_NC}" 
    docker container run -v `pwd`:/src --rm jia /bin/sh -c "${CMD}"
else
    eval ${CMD}
fi