#include <string>
#include <iostream>
#include "persona.h"

using namespace std;

    Persona::Persona(string nombre = "Sin nombre"){
        this->nombre = nombre;
    }

    Persona::~Persona(){
        cout<<"me destruyo"<<endl;
    }

    string Persona::toString(){
        string texto = "Clase Persona:";
        texto = texto + "nombre: " + this->nombre + "\n";
        return texto;
    }

    void Persona::setNombre(string nombre){
        this->nombre = nombre;
    }
