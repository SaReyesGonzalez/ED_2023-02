#include "Produccion.h"

Produccion::Produccion(string nombre, string dev, string pg, int precio, string _tipo) : Software(nombre,dev,pg,precio) {
    tipo = _tipo;
}

string Produccion::getTipo() {
    return tipo;
}
