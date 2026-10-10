#include "SistemaAlquiler.h"
#include <iostream>

SistemaAlquiler::~SistemaAlquiler() {
    for (auto v : vehiculos) {
        delete v;
    }
}

void SistemaAlquiler::registrarVehiculo(Vehiculo* v) {
    vehiculos.push_back(v);
}

void SistemaAlquiler::alquilarVehiculo(const std::string& placa) {
    for (auto v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (v->isDisponible()) {
                v->setDisponible(false);
                std::cout << "Vehiculo alquilado con exito." << std::endl;
            } else {
                std::cout << "El vehiculo ya esta alquilado." << std::endl;
            }
            return;
        }
    }
    std::cout << "Vehiculo no encontrado." << std::endl;
}

void SistemaAlquiler::devolverVehiculo(const std::string& placa) {
    for (auto v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (!v->isDisponible()) {
                v->setDisponible(true);
                std::cout << "Vehiculo devuelto con exito." << std::endl;
            } else {
                std::cout << "El vehiculo ya estaba disponible." << std::endl;
            }
            return;
        }
    }
    std::cout << "Vehiculo no encontrado." << std::endl;
}

void SistemaAlquiler::mostrarDisponibles() const {
    for (const auto& v : vehiculos) {
        if (v->isDisponible()) {
            v->mostrarInformacion();
        }
    }
}
