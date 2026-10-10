#include "Libro.h"

Libro::Libro(std::string t, std::string a, std::string i, bool d) {
    titulo = t;
    autor = a;
    isbn = i;
    disponible = d;
}

std::string Libro::getTitulo() const {
    return titulo;
}

std::string Libro::getAutor() const {
    return autor;
}

std::string Libro::getIsbn() const {
    return isbn;
}

bool Libro::isDisponible() const {
    return disponible;
}

void Libro::setDisponible(bool d) {
    disponible = d;
}
