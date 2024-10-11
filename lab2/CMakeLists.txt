cmake_minimum_required(VERSION 3.10)

project(Calculator)

set(CMAKE_C_STANDARD 99)

# Створення статичної бібліотеки
add_library(calc STATIC calc.c)

# Створення виконуваного файлу
add_executable(calculator main.c)

# Пов'язуємо бібліотеку з виконуваним файлом
target_link_libraries(calculator PRIVATE calc)
