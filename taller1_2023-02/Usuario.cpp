#include "Usuario.h"

Usuario::Usuario(string _nombre, string _password, int _edad, string _email, bool _log) {
    nombre = _nombre;
    password = _password;
    edad = _edad;
    email = _email;
    log = _log;
}

string Usuario::getNombre() {
    return nombre;
}

string Usuario::getPassword() {
    return password;
}

int Usuario::getEdad() {
    return edad;
}

string Usuario::getEmail() {
    return email;
}

bool Usuario::getLog() {
    return log;
}
