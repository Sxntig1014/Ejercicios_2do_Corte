#include "Producto.h"

Producto::Producto(std::string n, double p, int s) {
    nombre = n;
    precio = p;
    stock = s;
}

std::string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}

int Producto::getStock() const {
    return stock;
}

void Producto::setStock(int s) {
    stock = s;
}
