cmake_minimum_required(VERSION 3.21)

project(CustomTarget)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_NAME Rooster)

include(AddFmt)

add_executable(${EXECUTABLE_NAME} main.cpp ${CMAKE_SOURCE_DIR}/person/src/person.cpp)
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/person/include)
target_link_libraries(${EXECUTABLE_NAME} PRIVATE fmt::fmt)

include(ClangFormat)
set(SOURCES_FILES   person/src/person.cpp
                    main.cpp)
add_clang_format_target(format-code ${SOURCES_FILES})