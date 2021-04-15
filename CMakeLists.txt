cmake_minimum_required(VERSION 3.20.1)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()


add_subdirectory(googletest)

add_subdirectory(curlpp-0.8.1)
include_directories(curlpp-0.8.1/include)

link_directories(${CMAKE_BINARY_DIR}/curlpp-0.8.1/)
message(STATUS "")

find_library(CURLPP curlpp)


set(Headers
    shoppingList.hpp
    datafetcher.hpp
)
set(Sources
    main.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})



add_subdirectory(test)


add_executable(app ${Sources})
target_link_libraries(app PUBLIC
    curlpp
    Example
)