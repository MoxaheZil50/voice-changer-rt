cmake_minimum_required(VERSION 3.16)
project(voice-changer-rt CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(voicechangerrt
    src/main.cpp
    src/engine.cpp
    src/io.cpp
    src/presets.cpp
)

target_include_directories(voicechangerrt PRIVATE include)

if(WIN32)
    target_link_libraries(voicechangerrt PRIVATE userenv)
endif()
