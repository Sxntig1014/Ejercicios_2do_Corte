#include "ItemCarrito.h"

ItemCarrito::ItemCarrito(Producto p, int c) : producto(p) {
    cantidad = c;
}

Producto ItemCarrito::getProducto() const {
    return producto;
}

int ItemCarrito::getCantidad() const {
    return cantidad;
}

void ItemCarrito::setCantidad(int c) {
    cantidad = c;
}
