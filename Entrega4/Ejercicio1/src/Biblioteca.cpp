#include "Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Biblioteca::eliminarLibro(const std::string& isbn) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->getIsbn() == isbn) {
            libros.erase(it);
            break;
        }
    }
}

void Biblioteca::buscarLibro(const std::string& criterio) const {
    for (const auto& libro : libros) {
        if (libro.getTitulo() == criterio || libro.getAutor() == criterio) {
            std::cout << "Encontrado: " << libro.getTitulo() << " - " << libro.getAutor() << std::endl;
        }
    }
}

void Biblioteca::mostrarDisponibles() const {
    for (const auto& libro : libros) {
        if (libro.isDisponible()) {
            std::cout << "Disponible: " << libro.getTitulo() << " - " << libro.getAutor() << std::endl;
        }
    }
}
