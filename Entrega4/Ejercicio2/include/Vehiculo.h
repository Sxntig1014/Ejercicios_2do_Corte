#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    bool disponible;

public:
    Vehiculo(std::string mar, std::string mod, std::string pla);
    virtual ~Vehiculo();
    std::string getPlaca() const;
    bool isDisponible() const;
    void setDisponible(bool d);
    virtual void mostrarInformacion() const;
};

#endif
