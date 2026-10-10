#ifndef SISTEMAALQUILER_H
#define SISTEMAALQUILER_H

#include <vector>
#include "Vehiculo.h"

class SistemaAlquiler {
private:
    std::vector<Vehiculo*> vehiculos;

public:
    ~SistemaAlquiler();
    void registrarVehiculo(Vehiculo* v);
    void alquilarVehiculo(const std::string& placa);
    void devolverVehiculo(const std::string& placa);
    void mostrarDisponibles() const;
};

#endif
