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
    private:
        Persona usuario;
        string marca;
        string color;
        string serial;
};
