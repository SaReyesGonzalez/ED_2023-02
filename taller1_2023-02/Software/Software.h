#ifndef TALLER1_2023_02_SOFTWARE_H
#define TALLER1_2023_02_SOFTWARE_H

#include <iostream>
#include <string>
#include "../Usuario.h"

using namespace std;

typedef struct listaUsuarios {
    Usuario usuario;
    struct listaUsuarios* next;
} listaUsuarios;

class Software {

protected:
    string nombre;
    string dev;
    string pg;
    listaUsuarios* lUsuarios;
    int precio;

public:
    Software(string nombre, string dev, string pg, int precio);
    string getNombre();
    string getDev();
    string getPg();
    listaUsuarios getLUsuarios();
    int getPrecio();

    //virtual void agregarSoftware() = 0;
    //virtual void eliminarSoftware() = 0;
};


#endif //TALLER1_2023_02_SOFTWARE_H
