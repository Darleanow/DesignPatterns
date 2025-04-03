cmake_minimum_required(VERSION 3.28)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
  DesignPatterns
  src/main.cpp
  src/Observer/FranceObserver.cpp
  src/Observer/UnitedStatesObserver.cpp
  src/Strategy/FranceStrategy.cpp 
  src/Strategy/UnitedStatesStrategy.cpp
  src/Subject/Subject.cpp
)

target_include_directories(DesignPatterns PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
