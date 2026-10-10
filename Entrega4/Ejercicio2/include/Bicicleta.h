#ifndef BICICLETA_H
#define BICICLETA_H

#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
private:
    std::string tipo;

public:
    Bicicleta(std::string mar, std::string mod, std::string pla, std::string t);
    void mostrarInformacion() const override;
};

#endif
