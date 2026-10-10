#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include <vector>
#include "ItemCarrito.h"

class CarritoCompras {
private:
    std::vector<ItemCarrito> items;

public:
    void agregarProducto(Producto producto, int cantidad);
    void eliminarProducto(const std::string& nombreProducto);
    double calcularTotal() const;
    void limpiarCarrito();
    std::vector<ItemCarrito> getItems() const;
};

#endif
