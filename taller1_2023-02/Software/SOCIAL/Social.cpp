#include "Social.h"

Social::Social(string nombre, string dev, string pg, int precio) : Software(nombre,dev,pg,precio) {
    lAmigos = nullptr;
}

lAmigos *Social::getLAmigos() {
    return lAmigos;
}
