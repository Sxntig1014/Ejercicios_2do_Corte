#include "Bicicleta.h"
#include <iostream>

Bicicleta::Bicicleta(std::string mar, std::string mod, std::string pla, std::string t) : Vehiculo(mar, mod, pla) {
    tipo = t;
}

void Bicicleta::mostrarInformacion() const {
    std::cout << "Bicicleta - Marca: " << marca << ", Modelo: " << modelo << ", Placa: " << placa << ", Tipo: " << tipo << std::endl;
}
