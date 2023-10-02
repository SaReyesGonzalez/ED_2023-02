#ifndef TALLER1_2023_02_SEGURIDAD_H
#define TALLER1_2023_02_SEGURIDAD_H


#include "../Software.h"

class Seguridad : public Software {
private:
    string tipo;

public:
    Seguridad(string nombre, string dev, string pg, int precio, string tipo);
    string getTipo();

};


#endif //TALLER1_2023_02_SEGURIDAD_H
