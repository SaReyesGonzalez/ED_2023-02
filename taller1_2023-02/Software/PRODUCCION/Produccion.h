#ifndef TALLER1_2023_02_PRODUCCION_H
#define TALLER1_2023_02_PRODUCCION_H

#include "../Software.h"

class Produccion : public Software {
private:
    string tipo;

public:
    Produccion(string nombre, string dev, string pg, int precio, string tipo);
    string getTipo();
};


#endif //TALLER1_2023_02_PRODUCCION_H
