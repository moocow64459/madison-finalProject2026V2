cmake_minimum_required(VERSION 4.1)
project(madison_finalProject2026V2)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FetchContent_Declare(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 3.1.0)
FetchContent_MakeAvailable(SFML)

set(CMAKE_CXX_STANDARD 20)

add_executable(madison_finalProject2026V2 main.cpp
        Characters/Player.cpp
        Characters/Player.h
        Character.cpp
        Character.h
        Weapon.cpp
        Weapon.h
        Weapons/Fists.cpp
        Weapons/Fists.h
        Weapons/ShortSword.cpp
        Characters/Enemy.cpp
        Characters/Enemy.h)

target_link_libraries(madison_finalProject2026V2 sfml-graphics)