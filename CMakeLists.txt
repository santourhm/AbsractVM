cmake_minimum_required(VERSION 3.12)
project(AbstractVM VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add cmake module path and set ANTLR executable
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(ANTLR_EXECUTABLE "${CMAKE_SOURCE_DIR}/tools/antlr-4.13.2-complete.jar")
find_package(ANTLR REQUIRED)

# Set output directory for generated sources
set(ANTLR_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/generated-sources")

# Find ANTLR4 runtime library
find_library(ANTLR4_RUNTIME_LIBRARY
    NAMES antlr4-runtime
    PATHS /usr/local/lib /usr/lib
    REQUIRED
)

# Find ANTLR4 runtime include directory
find_path(ANTLR4_RUNTIME_INCLUDE_DIR
    NAMES antlr4-runtime.h
    PATHS /usr/local/include/antlr4-runtime /usr/include/antlr4-runtime
    REQUIRED
)

# Process grammar file - REPLACE "VMGrammar.g4" with your actual grammar file name and path
ANTLR_TARGET(VMGrammar 
    "${CMAKE_SOURCE_DIR}/grammar/VMGrammar.g4"  # Adjust this path to your actual .g4 file
    VISITOR 
    LISTENER
    OUTPUT_DIRECTORY "${ANTLR_OUTPUT_DIR}"
)

# Create executable
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/VMListener.cpp
    src/VM.cpp
    ${ANTLR_VMGrammar_CXX_OUTPUTS}   # Now this variable will be defined
)

# Set include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${ANTLR_OUTPUT_DIR}"
    ${ANTLR4_RUNTIME_INCLUDE_DIR}
)

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
    ${ANTLR4_RUNTIME_LIBRARY}
)

# Compiler options
target_compile_options(${PROJECT_NAME} PRIVATE  -g)

# Status message
message(STATUS "Executable will be built in ${CMAKE_BINARY_DIR}")
message(STATUS "ANTLR4 Runtime Library: ${ANTLR4_RUNTIME_LIBRARY}")
message(STATUS "ANTLR4 Runtime Include: ${ANTLR4_RUNTIME_INCLUDE_DIR}")
message(STATUS "Generated sources will be in: ${ANTLR_OUTPUT_DIR}")