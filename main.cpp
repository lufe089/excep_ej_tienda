//
// Created by lenovo on 22/04/2025.
//

#include <iostream>
#include "src/Tienda.h"
#include "src/Producto.h"

int main()
{
    Tienda tienda;

    try
    {
        Producto* p1 = new Producto("Camiseta", 45000);
        tienda.agregarProducto(p1);

        Producto* p2 = new Producto("Pantalon", -20000); // Generará excepción
        tienda.agregarProducto(p2);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error al agregar producto: " << e.what() << std::endl;
    }

    std::cout << "Productos en la tienda:" << std::endl;
    tienda.listarProductos();

    return 0;
}
