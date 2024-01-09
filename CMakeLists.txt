# ███████╗ ██████╗ ██████╗ ██╗ █████╗  ██████╗
# ╚══███╔╝██╔═══██╗██╔══██╗██║██╔══██╗██╔════╝
#   ███╔╝ ██║   ██║██║  ██║██║███████║██║
#  ███╔╝  ██║   ██║██║  ██║██║██╔══██║██║
# ███████╗╚██████╔╝██████╔╝██║██║  ██║╚██████╗
# ╚══════╝ ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═╝ ╚═════╝

# File:         CMake configuration file.
# Author:       Clay Whitelytning

# ==============================================================
# Specify the minimum required version of CMake.
# ==============================================================
#
cmake_minimum_required(VERSION 3.25)

# ==============================================================
# Automatically detecting the project version from git
# ==============================================================
execute_process(
        COMMAND git describe --tags --abbrev=0
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE GIT_VERSION_OUTPUT
        OUTPUT_STRIP_TRAILING_WHITESPACE
)

# Обработка вывода GitVersion для получения номера версии
string(REGEX REPLACE "^v([0-9]+\\.[0-9]+\\.[0-9]+).*" "\\1" PROJECT_VERSION ${GIT_VERSION_OUTPUT})

# Using the resulting version in the project
add_definitions(-DPROJECT_VERSION="${PROJECT_VERSION}")

# ==============================================================
# Project configuration
# ==============================================================
#
project(zodiac
        VERSION ${PROJECT_VERSION}
        DESCRIPTION "Zodiac Virtual Machine"
        LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(PROJECT_AUTHOR "Clay Whitelytning")

# ==============================================================
# Adding files to a project
# ==============================================================
#
add_executable(${PROJECT_NAME}
        src/include/zodiac/runtime/logger/logger_level.c
        src/include/zodiac/runtime/logger/logger.c
        src/include/zodiac/instruction/instruction_reader.c
        src/zodiac.c)

target_include_directories(${PROJECT_NAME} PRIVATE src/include)

# ==============================================================
# Collection of documentation.
# ==============================================================
#
find_package(Doxygen)
if(DOXYGEN_FOUND)
    # Path to Doxygen configuration file
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/doxyfile)

    # Replace variables in the Doxygen configuration file
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

    # Create a build target to generate documentation
    add_custom_target(docs ALL
            COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
            COMMENT "Generating documentation with Doxygen"
            VERBATIM
    )
else()
    message(WARNING "Doxygen not found, documentation will not be generated.")
endif()