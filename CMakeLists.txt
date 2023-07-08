cmake_minimum_required(VERSION 3.18.4)
project(Outor)

set(CMAKE_ROOT_DIR .)
set(CMAKE_MAIN_BINARY_NAME outor)
set(CMAKE_UNIT_TESTER_BINARY_NAME outor_unit)
set(CMAKE_LEGACY_BINARY_NAME advisor)

option(OUTOR_BUILD_MAIN "Build main target" true)
option(OUTOR_BUILD_UNIT_TESTER "Build unit tester target" false)
option(OUTOR_BUILD_LEGACY "Build legacy target" false)

#
# Build the main target.
#
function(build_main)
    add_executable(${CMAKE_MAIN_BINARY_NAME}
        ${CMAKE_ROOT_DIR}/include/interfaces/ioutor.hpp
		${CMAKE_ROOT_DIR}/include/interfaces/ioutortui.hpp
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

    target_link_libraries(${CMAKE_MAIN_BINARY_NAME} ${CURSES_LIBRARIES})
endfunction()

#
# Build the unit tester target.
#
function(build_unit_tester)
    add_compile_definitions(OUTOR_UNIT_TESTING=1)

    add_executable(${CMAKE_UNIT_TESTER_BINARY_NAME}
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

    target_link_libraries(${CMAKE_UNIT_TESTER_BINARY_NAME} ${CURSES_LIBRARIES})
endfunction()

#
# Build the legacy target.
#
function(build_legacy)
    add_executable(${CMAKE_LEGACY_BINARY_NAME}
        ${CMAKE_ROOT_DIR}/legacy/include/global.h
        ${CMAKE_ROOT_DIR}/legacy/include/outor.h

	    ${CMAKE_ROOT_DIR}/legacy/source/main.c
        ${CMAKE_ROOT_DIR}/legacy/source/outor.c
	)
endfunction()

#
# Default build type.
#
if(NOT CMAKE_CONFIGURATION_TYPES)
    if(NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE RelWithDebInfo)
    endif()
    message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
    set(CMAKE_BUILD_TYPE "${CMAKE_BUILD_TYPE}" CACHE STRING
    "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
    FORCE)
endif()

if(OUTOR_BUILD_MAIN OR OUTOR_BUILD_UNIT_TESTER)
    find_package(Curses REQUIRED)
    include_directories(${CURSES_INCLUDE_DIR})
endif()

if(OUTOR_BUILD_MAIN)
    build_main()
endif()

if(OUTOR_BUILD_UNIT_TESTER)
    build_unit_tester()
endif()

if(OUTOR_BUILD_LEGACY)
    build_legacy()
endif()
