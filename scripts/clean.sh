#!/bin/bash
rm -rf build
rm -rf CMakeFiles
rm -f cmake_install.cmake
rm -f CMakeCache.txt

. ./scripts/colors.sh

echo -e "${COLOR_LIGHT_GREEN}-- Clear project.${COLOR_NC}"