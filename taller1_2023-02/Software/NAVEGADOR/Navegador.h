#ifndef TALLER1_2023_02_NAVEGADOR_H
#define TALLER1_2023_02_NAVEGADOR_H


#include "../Software.h"

typedef struct historial{
  string nombrePagina;
  struct historial* next;
} listaHistorial;

class Navegador : public Software {
private:
    listaHistorial* historial;

public:
    Navegador(string nombre, string dev, string pg, int precio);
    listaHistorial* getHistorial();
};


#endif //TALLER1_2023_02_NAVEGADOR_H
