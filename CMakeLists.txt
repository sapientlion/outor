cmake_minimum_required(VERSION 3.18.4)
project(outor)

set(CMAKE_ROOT_DIR .)
set(CMAKE_BINARY_NAME outor)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

if(NOT CMAKE_CONFIGURATION_TYPES)
  if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE RelWithDebInfo)
  endif()
  message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
  set(CMAKE_BUILD_TYPE "${CMAKE_BUILD_TYPE}" CACHE STRING
    "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
    FORCE)
endif()

add_executable(${CMAKE_BINARY_NAME}
${CMAKE_ROOT_DIR}/include/interfaces/ioutor.hpp
${CMAKE_ROOT_DIR}/include/interfaces/itui.hpp
${CMAKE_ROOT_DIR}/include/converter.hpp
${CMAKE_ROOT_DIR}/include/global.hpp
${CMAKE_ROOT_DIR}/include/outor.hpp
${CMAKE_ROOT_DIR}/include/outortest.hpp
${CMAKE_ROOT_DIR}/include/outortui.hpp
${CMAKE_ROOT_DIR}/include/tempcon.hpp
${CMAKE_ROOT_DIR}/include/tester.hpp
${CMAKE_ROOT_DIR}/include/tui.hpp

${CMAKE_ROOT_DIR}/source/converter.cpp
${CMAKE_ROOT_DIR}/source/outor.cpp
${CMAKE_ROOT_DIR}/source/outortest.cpp
${CMAKE_ROOT_DIR}/source/outortui.cpp
${CMAKE_ROOT_DIR}/source/tempcon.cpp
${CMAKE_ROOT_DIR}/source/tui.cpp
${CMAKE_ROOT_DIR}/main.cpp
)

target_link_libraries(${CMAKE_BINARY_NAME} ${CURSES_LIBRARIES})
