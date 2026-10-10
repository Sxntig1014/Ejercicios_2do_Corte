#include "Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(std::string mar, std::string mod, std::string pla) {
    marca = mar;
    modelo = mod;
    placa = pla;
    disponible = true;
}

Vehiculo::~Vehiculo() {}

std::string Vehiculo::getPlaca() const {
    return placa;
}

bool Vehiculo::isDisponible() const {
    return disponible;
}

void Vehiculo::setDisponible(bool d) {
    disponible = d;
}

void Vehiculo::mostrarInformacion() const {
    std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Placa: " << placa << std::endl;
}
