cmake_minimum_required(VERSION 3.20)
project(madison_finalProject2026V2)

set(CMAKE_CXX_STANDARD 17)

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
        Characters/CharacterSpawner.cpp
        Characters/CharacterSpawner.h
        Characters/Enemy.cpp
        Characters/Enemy.h
        Characters/BadGuy.cpp
        Characters/BadGuy.h)
        Button.cpp
        Button.h)

# SFML (installed via vcpkg)
find_package(SFML CONFIG REQUIRED COMPONENTS Graphics Window System Audio)

target_link_libraries(madison_finalProject2026V2 PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
        SFML::Audio
)
