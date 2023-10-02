#ifndef TALLER1_2023_02_SOCIAL_H
#define TALLER1_2023_02_SOCIAL_H

#include "../Software.h"

typedef struct lAmigos {
    Usuario usuario;
    struct lAmigos* next;
} listaAmigos;

class Social : public Software {
private:
    listaAmigos* lAmigos;

public:
    Social(string nombre, string dev, string pg, int precio);
    listaAmigos* getLAmigos();
    //void agregarAmigo(Usuario usuario, listaAmigos listaAmigos);
    //void eliminarAmigo(Usuario usuario, listaAmigos listaAmigos);
};


#endif //TALLER1_2023_02_SOCIAL_H
