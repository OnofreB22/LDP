#include <string>
#include <iostream>
#include "bici.h"
#include "persona.h"

using namespace std;

Bici::Bici(){
    this->usuario = Persona("Anonimo");
    this->marca = "sin marca";
}

void Bici::verObjeto(){
    cout << "Bici: usuario: " << this->usuario.toString()
                <<" marca:"<< this->marca << endl;
}

void Bici::setBici(string usuario, string marca){
    this->usuario.setNombre(usuario);
    this->marca = marca;
}
