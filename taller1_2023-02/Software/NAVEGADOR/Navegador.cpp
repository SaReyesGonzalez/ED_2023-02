#include "Navegador.h"

Navegador::Navegador(string nombre, string dev, string pg, int precio) : Software(nombre,dev,pg,precio) {
    historial = nullptr;
}

historial* Navegador::getHistorial() {
    return historial;
}
