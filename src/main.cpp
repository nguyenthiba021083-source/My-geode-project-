cmake_minimum_required(VERSION 3.21)

project(AILevelEditor VERSION 1.0.0)

add_library(${PROJECT_NAME}
src/main.cpp
src/ui/AIPopup.cpp
)

setup_geode_mod(${PROJECT_NAME})
