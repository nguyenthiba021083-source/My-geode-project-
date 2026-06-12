cmake_minimum_required(VERSION 3.21)

project(AILevelEditor VERSION 1.0.0)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
    src/ui/AIPopup.cpp
)

find_package(Geode REQUIRED)

setup_geode_mod(${PROJECT_NAME})
