#include <string>
#include <iostream>
#include <algorithm>
#include <list>
#include "persona.h"
#include "bici.h"

using namespace std;

void viewList(list<Bici> bicicletas);
void countList(list<Bici> bicicletas);

int main(){
    std::list<Bici> bicicletas;
    int i = 0;
    int inp = 0;
    string nombre, telefono, email, marca, color, serial;

    while(i == 0){
        cout << "1. Agregar bicicleta" << "\n" << "2. Ver lista" << "\n" << "3. Cantidad de Bicis" << "\n";
        cin >> inp;

        if(inp == 1){
            cout << "ingrese nombre: ";
            cin >> nombre;
            cout << "ingrese telefono: ";
            cin >> telefono;
            cout << "ingrese email: ";
            cin >> email;
            cout << "ingrese marca de la bici: ";
            cin >> marca;
            cout << "ingrese color: ";
            cin >> color;
            cout << "ingrese serial: ";
            cin >> serial;

            Bici bici;
            bici.setBici(nombre, telefono, email, marca, color, serial);
            bicicletas.push_back(bici);

        }else if(inp == 2){
            viewList(bicicletas);
        }else if(inp == 3){
            countList(bicicletas);
        }else{
            i++;
        }
    }

    return 0;
}

void viewList(list<Bici> bicicletas){
    for (Bici bici : bicicletas) {
        bici.verObjeto();
	}
}

void countList(list<Bici> bicicletas){
    std::cout << bicicletas.size() << '\n';
}