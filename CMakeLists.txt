cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(TiendaProject)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agregar los archivos fuente
add_executable(TiendaProject
        src/Tienda.cpp
        src/Tienda.h
        src/Producto.cpp
        src/Producto.h
        main.cpp
)