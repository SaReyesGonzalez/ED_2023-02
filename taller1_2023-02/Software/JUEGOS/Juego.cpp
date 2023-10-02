#include "Juego.h"

Juego::Juego(string nombre, string dev, string pg, int precio, string _genero) : Software(nombre,dev,pg,precio) {
    genero = _genero;
}

string Juego::getGenero() {
    return genero;
}
