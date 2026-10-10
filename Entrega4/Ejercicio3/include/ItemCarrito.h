#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include "Producto.h"

class ItemCarrito {
private:
    Producto producto;
    int cantidad;

public:
    ItemCarrito(Producto p, int c);
    Producto getProducto() const;
    int getCantidad() const;
    void setCantidad(int c);
};

#endif
