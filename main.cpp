#include <string>
#include <iostream>
#include "persona.h"
#include "bici.h"

using namespace std;

int main(){
    Persona *objPersona = new Persona("Onofre Benjumea");
    Bici *objBici = new Bici();
    objBici->verObjeto();

    objBici->setBici("Onofre Benjumea", "Shimano");
    objBici->verObjeto();

    return 0;
}
