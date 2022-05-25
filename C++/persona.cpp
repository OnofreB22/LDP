#include <string>
#include <iostream>
#include "persona.h"

using namespace std;

    Persona::Persona(string nombre = "Sin nombre", string telefono = "Sin telefono", string email = "Sin email"){
        this->nombre = nombre;
        this->telefono = telefono;
        this->email = email;
    }

    string Persona::toString(){
        string texto = "Nombre: " + this->nombre + " Telefono: "+ this->telefono + " Email: " + this->email +"\n";
        return texto;
    }

    void Persona::setNombre(string nombre){
        this->nombre = nombre;
    }

    void Persona::setTelefono(string telefono){
        this->telefono = telefono;
    }

    void Persona::setEmail(string email){
        this->email = email;
    }

    string Persona::getName(){
        return this->nombre;
    }