#pragma once

#include <string>
#include <iostream>
#include "persona.h"

using namespace std;

class Bici{
    public:
        Bici();
        Bici(Persona usuario, string marca, string color, string serial);
        void verObjeto();
        void setBici(string usuario, string telefono, string email, string marca, string color, string serial);
        Persona getUsuario();
        bool operator == (const Bici& b) const { return usuario == b.usuario && marca == b.marca && color == b.color && b.serial == b.serial; }
        bool operator != (const Bici& b) const { return !operator==(b);}
    private:
        Persona usuario;
        string marca;
        string color;
        string serial;
};
