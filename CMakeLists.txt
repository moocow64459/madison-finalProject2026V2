cmake_minimum_required(VERSION 4.1)
project(madison_finalProject2026V2)

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
        Characters/CharacterSpawner.cpp
        Characters/CharacterSpawner.h
        Characters/Enemy.cpp
        Characters/Enemy.h
        Characters/BadGuy.cpp
        Characters/BadGuy.h)
