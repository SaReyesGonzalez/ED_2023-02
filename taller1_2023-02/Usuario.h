#ifndef TALLER1_2023_02_USUARIO_H
#define TALLER1_2023_02_USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario {
private:
    string nombre;
    string password;
    int edad;
    string email;
    bool log;

public:
    Usuario(string nombre, string password, int edad, string email, bool);
    string getNombre();
    string getPassword();
    int getEdad();
    string getEmail();
    bool getLog();
};


#endif //TALLER1_2023_02_USUARIO_H
