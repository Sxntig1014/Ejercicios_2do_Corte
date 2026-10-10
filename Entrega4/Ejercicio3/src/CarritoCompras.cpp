#include "CarritoCompras.h"

void CarritoCompras::agregarProducto(Producto producto, int cantidad) {
    for (auto& item : items) {
        if (item.getProducto().getNombre() == producto.getNombre()) {
            item.setCantidad(item.getCantidad() + cantidad);
            return;
        }
    }
    items.push_back(ItemCarrito(producto, cantidad));
}

void CarritoCompras::eliminarProducto(const std::string& nombreProducto) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getProducto().getNombre() == nombreProducto) {
            items.erase(it);
            break;
        }
    }
}

double CarritoCompras::calcularTotal() const {
    double total = 0.0;
    for (const auto& item : items) {
        total += item.getProducto().getPrecio() * item.getCantidad();
    }
    return total;
}

void CarritoCompras::limpiarCarrito() {
    items.clear();
}

std::vector<ItemCarrito> CarritoCompras::getItems() const {
    return items;
}
