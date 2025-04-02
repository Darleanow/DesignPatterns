cmake_minimum_required(VERSION 3.28)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
  DesignPatterns
  src/main.cpp
  src/Burger/Burger.cpp
  src/BurgerBuilder/BurgerBuilder.cpp
  src/CoreUtils/CoreUtils.cpp
  src/Menus/SmallMenu.cpp
  src/Menus/MediumMenu.cpp
  src/Menus/LargeMenu.cpp
  src/Menus/MenuFactory.cpp
)

target_include_directories(DesignPatterns PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
