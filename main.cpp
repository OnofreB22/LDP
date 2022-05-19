#include <string>
#include <iostream>
#include <algorithm>
#include <list>
#include "persona.h"
#include "bici.h"

using namespace std;

void addList(list<Bici> bicicletas, Bici bici);
void viewList(list<Bici> bicicletas);
void countList(list<Bici> bicicletas);

int main(){
    std::list<Bici> bicicletas;

    Persona *objPersona = new Persona("Onofre Benjumea", "3137601600", "oabenjumev@gmail.com");
    Bici *objBici = new Bici();
    objBici->verObjeto();

    objBici->setBici(*objPersona, "Shimano", "verde", "001");
    objBici->verObjeto();

    return 0;
}

void addList(list<Bici> bicicletas, Bici bici){
    bicicletas.push_back(bici);
}

void viewList(list<Bici> bicicletas){
    for (Bici bici : bicicletas) {
        bici.verObjeto();
	}
}

void countList(list<Bici> bicicletas){
    std::cout << bicicletas.size() << '\n';
}