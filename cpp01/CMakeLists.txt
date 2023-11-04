cmake_minimum_required(VERSION 3.26)
project(cpp01)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
include_directories(ex01)
include_directories(ex03)
include_directories(ex05)
include_directories(ex06)

add_executable(cpp01
        ex00/main.cpp
        ex00/newZombie.cpp
        ex00/randomChump.cpp
        ex00/Zombie.cpp
        ex00/Zombie.hpp
        ex01/main.cpp
        ex01/Zombie.cpp
        ex01/Zombie.hpp
        ex01/zombieHorde.cpp
        ex02/main.cpp
        "ex03/ HumanA.hpp"
        "ex03/ HumanB.hpp"
        ex03/HumanA.cpp
        ex03/HumanB.cpp
        ex03/main.cpp
        ex03/Weapon.cpp
        ex03/Weapon.hpp
        ex04/main.cpp
        ex05/Harl.cpp
        ex05/Harl.hpp
        ex05/main.cpp
        ex06/Harl.cpp
        ex06/Harl.hpp
        ex06/main.cpp)
