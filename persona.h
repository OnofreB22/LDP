#pragma once

#include <string>
#include <iostream>

using namespace std;

class Persona{
    public:
        Persona(){}
        Persona(string nombre);
        ~Persona();
        string toString();
        void setNombre(string nombre);
    private:
        string nombre;
};
