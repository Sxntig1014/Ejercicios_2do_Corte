#include "Producto.h"
#include "CarritoCompras.h"
#include "Usuario.h"
#include <iostream>

int main() {
    Producto p1("Laptop", 1200.0, 10);
    Producto p2("Mouse", 25.0, 50);

    Usuario usuario("Ana");
    CarritoCompras carrito;

    carrito.agregarProducto(p1, 1);
    carrito.agregarProducto(p2, 2);

    double total = carrito.calcularTotal();
    std::cout << "Total a pagar: $" << total << std::endl;

    usuario.agregarAlHistorial(total);
    carrito.limpiarCarrito();

    usuario.mostrarHistorial();

    return 0;
}
