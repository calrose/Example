cmake_minimum_required(VERSION 3.20.1)

set(This shoppingTests)

set(Sources
    shoppingTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    curlpp
    Example
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
