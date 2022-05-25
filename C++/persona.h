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
        string getName();
        bool operator == (const Persona& p) const { return nombre == p.nombre && telefono == p.telefono && email == p.email; }
        bool operator != (const Persona& p) const { return !operator==(p); }
    private:
        string nombre;
        string telefono;
        string email;
};
