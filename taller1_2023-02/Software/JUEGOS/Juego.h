#ifndef TALLER1_2023_02_JUEGO_H
#define TALLER1_2023_02_JUEGO_H

#include "../Software.h"

class Juego : public Software {
private:
    string genero;

public:
    Juego(string nombre, string dev, string pg, int precio, string genero);
    string getGenero();

};


#endif //TALLER1_2023_02_JUEGO_H
