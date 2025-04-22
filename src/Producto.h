//
// Created by lenovo on 22/04/2025.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <string>

class Producto
{
private:
    std::string nombre;
    double precio;

public:
    Producto(const std::string& nombre, double precio);
    std::string getNombre() const;
    double getPrecio() const;
};


#endif //PRODUCTO_H
