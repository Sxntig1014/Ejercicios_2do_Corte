#include "Usuario.h"
#include <iostream>

Usuario::Usuario(std::string n) {
    nombre = n;
}

std::string Usuario::getNombre() const {
    return nombre;
}

void Usuario::agregarAlHistorial(double monto) {
    historialCompras.push_back(monto);
}

void Usuario::mostrarHistorial() const {
    std::cout << "Historial de compras de " << nombre << ":" << std::endl;
    for (size_t i = 0; i < historialCompras.size(); ++i) {
        std::cout << "Compra " << (i + 1) << ": $" << historialCompras[i] << std::endl;
    }
}
