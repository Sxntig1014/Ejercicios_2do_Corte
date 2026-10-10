#include "SistemaAlquiler.h"
#include "Auto.h"
#include "Bicicleta.h"

int main() {
    SistemaAlquiler sistema;

    sistema.registrarVehiculo(new Auto("Toyota", "Corolla", "ABC-123", 5));
    sistema.registrarVehiculo(new Bicicleta("Trek", "Marlin", "BIC-001", "montaña"));

    sistema.mostrarDisponibles();
    
    sistema.alquilarVehiculo("ABC-123");
    sistema.mostrarDisponibles();

    sistema.devolverVehiculo("ABC-123");
    
    return 0;
}
