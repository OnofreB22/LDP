#pragma once

#include <string>
#include <iostream>
#include "persona.h"

using namespace std;

class Bici{
    public:
        Bici();
        void verObjeto();
        void setBici(Persona usuario, string marca, string color, string serial);
    private:
        Persona usuario;
        string marca;
        string color;
        string serial;
};
