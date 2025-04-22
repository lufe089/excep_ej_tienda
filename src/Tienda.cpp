//
// Created by lenovo on 22/04/2025.
//

#include "Tienda.h"

#include <iostream>


void Tienda::agregarProducto(Producto* producto)
{
    inventario.push_back(producto);
}

void Tienda::listarProductos() const
{
    for (const auto& producto : inventario)
    {
        std::cout << "- " << producto->getNombre() << ": $" << producto->getPrecio() << std::endl;
    }
}

Tienda::~Tienda()
{
    for (auto producto : inventario)
    {
        delete producto;
    }
}
