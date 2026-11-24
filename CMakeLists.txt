cmake_minimum_required(VERSION 3.16)
project(game-settings-optimizer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gamesettingsoptimizer
    src/main.cpp
    src/benchmark.cpp
    src/suggest.cpp
    src/apply.cpp
    src/cli.cpp
    src/state.cpp
)

target_include_directories(gamesettingsoptimizer PRIVATE include)

if(WIN32)
    target_link_libraries(gamesettingsoptimizer PRIVATE userenv)
endif()
