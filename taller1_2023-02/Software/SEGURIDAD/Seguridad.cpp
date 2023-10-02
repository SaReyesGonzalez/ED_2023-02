#include "Seguridad.h"

Seguridad::Seguridad(string nombre, string dev, string pg, int precio, string _tipo) : Software(nombre,dev,pg,precio) {
    tipo = _tipo;
}

string Seguridad::getTipo() {
    return tipo;
}
