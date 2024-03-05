cmake_minimum_required(VERSION 3.0)
project(MyProject)

# Устанавливаем переменную со списком исходных файлов
set(SOURCES src/main.cpp)

# Устанавливаем переменную с папкой для заголовочных файлов
set(INCLUDE_DIR inc)

# Добавляем папку с заголовочными файлами
include_directories(${INCLUDE_DIR})

# Создаем исполняемый файл
add_executable(MyExecutable ${SOURCES})
