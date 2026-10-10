#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
private:
    int capacidadPasajeros;

public:
    Auto(std::string mar, std::string mod, std::string pla, int capacidad);
    void mostrarInformacion() const override;
};

#endif
