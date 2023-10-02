#include "Software.h"

Software::Software(string _nombre, string _dev, string _pg, int _precio)
{
    nombre = _nombre;
    dev = _dev;
    pg = _pg;
    lUsuarios = nullptr;
    precio = _precio;
}

string Software::getNombre() {
    return nombre;
}

string Software::getDev() {
    return dev;
}

string Software::getPg() {
    return pg;
}

listaUsuarios Software::getLUsuarios() {
    return *lUsuarios;
}

int Software::getPrecio() {
    return precio;
}

