#include <string>
#include <iostream>
#include "bici.h"
#include "persona.h"

using namespace std;

Bici::Bici(){
    this->usuario = Persona("Anonimo", "Numeron't", "Emailn't");
    this->marca = "Sin marca";
    this->color = "Sin color";
    this->serial = "Sin serial";
}

void Bici::verObjeto(){
    cout << "Bici:" << "\n" << this->usuario.toString() <<"Marca: "<< this->marca << " Color: " << this->color << " Serial: " << this->serial << "\n" <<endl;
}

void Bici::setBici(Persona usuario, string marca, string color, string serial){
    this->usuario = usuario;
    this->marca = marca;
    this->color =  color;
    this->serial = serial;
}
