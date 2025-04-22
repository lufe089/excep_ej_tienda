//
// Created by lenovo on 22/04/2025.
//

#ifndef TIENDA_H
#define TIENDA_H


#include "Producto.h"
#include <vector>

class Tienda
{
private:
    std::vector<Producto*> inventario;

public:
    ~Tienda();
    void agregarProducto(Producto* producto);
    void listarProductos() const;
};


#endif //TIENDA_H
