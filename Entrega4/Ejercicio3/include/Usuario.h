#ifndef USUARIO_H
#define USUARIO_H

#include <vector>
#include <string>
#include "CarritoCompras.h"

class Usuario {
private:
    std::string nombre;
    std::vector<double> historialCompras;

public:
    Usuario(std::string n);
    std::string getNombre() const;
    void agregarAlHistorial(double monto);
    void mostrarHistorial() const;
};

#endif
