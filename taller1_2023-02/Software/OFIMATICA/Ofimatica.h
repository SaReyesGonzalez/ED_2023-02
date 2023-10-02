#ifndef TALLER1_2023_02_OFIMATICA_H
#define TALLER1_2023_02_OFIMATICA_H

#include "../Software.h"

class Ofimatica : public Software {
private:
    int cantArch;

public:
    Ofimatica(string nombre, string dev, string pg, int precio, int cantArch);
    int getCantArch();
};


#endif //TALLER1_2023_02_OFIMATICA_H
