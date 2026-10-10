#include "Biblioteca.h"
#include "Libro.h"

int main() {
    Biblioteca biblio;
    Libro l1("Cien anos de soledad", "Gabriel Garcia Marquez", "123", true);
    Libro l2("Don Quijote", "Miguel de Cervantes", "456", false);

    biblio.agregarLibro(l1);
    biblio.agregarLibro(l2);

    biblio.mostrarDisponibles();
    biblio.buscarLibro("Gabriel Garcia Marquez");

    biblio.eliminarLibro("123");
    
    return 0;
}
