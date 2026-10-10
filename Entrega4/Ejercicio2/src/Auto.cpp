#include "Auto.h"
#include <iostream>

Auto::Auto(std::string mar, std::string mod, std::string pla, int capacidad) : Vehiculo(mar, mod, pla) {
    capacidadPasajeros = capacidad;
}

void Auto::mostrarInformacion() const {
    std::cout << "Auto - Marca: " << marca << ", Modelo: " << modelo << ", Placa: " << placa << ", Pasajeros: " << capacidadPasajeros << std::endl;
}
