#include "Ofimatica.h"

Ofimatica::Ofimatica(string nombre, string dev, string pg, int precio, int _cantArch) : Software(nombre,dev,pg,precio) {
    cantArch = _cantArch;
}

int Ofimatica::getCantArch() {
    return cantArch;
}
