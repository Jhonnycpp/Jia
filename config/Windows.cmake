set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_C_FLAGS TRUE)

set(TARGET ${ARCH}-w64-mingw32)

if(${ARCH} STREQUAL "x86_64")
    SET(CUSTOM_BUILD_PARAMS "${CUSTOM_BUILD_PARAMS} -I/usr/x86_64-w64-mingw32/include/c++/9.2.0")
    SET(CUSTOM_BUILD_PARAMS "${CUSTOM_BUILD_PARAMS} -I/usr/x86_64-w64-mingw32/include")
endif()