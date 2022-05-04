#pragma once

#include <string>
#include <iostream>
#include "persona.h"

using namespace std;

class Bici{
    public:
        Bici();
        ~Bici();
        void verObjeto();
        void setBici(string usuario, string marca);
    private:
        string marca;
        Persona usuario;
};
