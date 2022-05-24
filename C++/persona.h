#pragma once

#include <string>
#include <iostream>

using namespace std;

class Persona{
    public:
        Persona(){}
        Persona(string nombre, string telefono, string email);
        string toString();
        void setNombre(string nombre);
        void setTelefono(string telefono);
        void setEmail(string email);
    private:
        string nombre;
        string telefono;
        string email;
};
