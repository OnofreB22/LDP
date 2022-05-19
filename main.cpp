#include <string>
#include <iostream>
#include "persona.h"
#include "bici.h"

using namespace std;

int main(){
    Persona *objPersona = new Persona("Onofre Benjumea", "3137601600", "oabenjumev@gmail.com");
    Bici *objBici = new Bici();
    objBici->verObjeto();

    objBici->setBici(*objPersona, "Shimano", "verde", "001");
    objBici->verObjeto();

    return 0;
}
