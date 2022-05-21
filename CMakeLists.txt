cmake_minimum_required(VERSION 3.17)
project(Projekt)

set(CMAKE_CXX_STANDARD 20)
set(SFML_DIR SFML/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML 2.5 COMPONENTS audio graphics window system REQUIRED)

add_executable(Projekt main.cpp ConnectFour.cpp AI.cpp Display.cpp)

target_link_libraries(Projekt sfml-network sfml-graphics sfml-audio sfml-window sfml-system)
