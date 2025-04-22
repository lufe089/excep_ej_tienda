//
// Created by lenovo on 22/04/2025.
//

#include "Producto.h"
#include <stdexcept>

Producto::Producto(const std::string& nombre, double precio) : nombre(nombre), precio(precio) {
    if (nombre.empty()) {
      // Uso de excepciones - Propaga la excepcion
        throw std::invalid_argument("El nombre del producto no puede estar vacío.");
    }
    if (precio <= 0) {
        throw std::out_of_range("El precio del producto "+ nombre +  " debe ser mayor que cero.");
    }
}

std::string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}