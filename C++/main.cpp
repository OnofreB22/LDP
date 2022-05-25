#include <string>
#include <iostream>
#include <algorithm>
#include <list>
#include <stdlib.h>
#include "persona.h"
#include "bici.h"

using namespace std;

void viewList(list<Bici> bicicletas);
void countList(list<Bici> bicicletas);
void addBici(list<Bici>& bicis);
void removeBici(list<Bici>& bicis);
void dummieBici(list<Bici>& bicis);

int main(){
    std::list<Bici> bicicletas;
    int i = 0;
    int inp = 0;

    while(i == 0){
        cout << "1. Agregar bicicleta" << "\n" << "2. Ver lista" << "\n" << "3. Cantidad de Bicis" << "\n" << "4. Remover Bici"<< "\n" << "5. Agregar 100 datos dummmies a la lista"<< "\n" << "6. Teminar programa"<<"\n";
        cin >> inp;

        if(inp == 1){
            addBici(bicicletas);
        }else if(inp == 2){
            viewList(bicicletas);
        }else if(inp == 3){
            countList(bicicletas);
        }else if(inp == 4){
            removeBici(bicicletas);
        }else if(inp == 5){
            for(int b = 0; b < 100; b++){
                dummieBici(bicicletas);
            }
        }else if(inp == 6){
            i++;
        }else{
            cout << "Ingrese un input valido" << "\n";
        }
    }
    return 0;
}

void addBici(list<Bici>& bicis){
    string nombre, apellido, telefono, email, marca, color, serial;
    cout << "ingrese nombre y apellido: ";
    cin >> nombre;
    cin >> apellido;
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
    bici.setBici(nombre+" "+apellido, telefono, email, marca, color, serial);
    bicis.push_back(bici);
}

void viewList(list<Bici> bicicletas){
    int i = 1;
    for(Bici bici : bicicletas){
        cout << i << "." << "\n";
        bici.verObjeto();
        i++;
	}
}

void countList(list<Bici> bicicletas){
    std::cout << "Hay "<< bicicletas.size() << " bicicletas" <<'\n';
}

void removeBici(list<Bici>& bicis){
    std::list<Bici> newBicis;
    string nombre, apellido;

    cout << "Ingrese nombre y apellido del usuario a remover: ";
    cin >> nombre;
    cin >> apellido;
    
    nombre = nombre+" "+apellido;

    list<Bici>::iterator ptr;

    for(Bici bici : bicis){
        if (bici.getUsuario().getName() != nombre){
            newBicis.push_back(bici);
        }
    }

    bicis = newBicis;
}

void dummieBici(list<Bici>& bicis){
    string nombres [42] = {"Hugo", "Martin", "Lucas", "Mateo", "Leo", "Daniel", "Alejandro", "Pablo", "Manuel", "Alvaro", "Adrian", "David", "Mario", "Enzo", "Diego", "Marcos", "Izan", "Javier", "Marco", "Alex", "Maria", "Jose", "Luis", "Luz", "Ana", "Carlos", "Juan", "Antonio", "Antonia", "Fernando", "Alberto", "Enrique", "Andres", "Miguel", "Santiago", "Valentina", "Daniela", "Mariana", "Natalia", "Camila", "Martha", "Nicolas"};
    string apellidos [39] = {"Alvarez", "Andrade", "Benitez", "Castillo", "Castro", "Contreras", "De Leon", "Diaz", "Duarte", "Espinoza", "Fernandez", "Flores", "Garcia", "Gimenez", "Gomez", "Gonzales", "Gutierrez", "Hernandez", "Jimenez", "Lopez", "Martinez", "Mejia", "Morales", "Moreno", "Perez", "Pineda", "Ramirez", "Reyes", "Rivas", "Rivera", "Rodrigo","Rojas", "Salazar", "Sanchez", "Santos", "Silva", "Torres", "Vargas", "Zambrano"};
    string telefonos [14] = {"310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323"};
    string emails [7] = {"gmail.com", "hotmail.com", "msn.com", "yahoo.com", "eafit.edu.co", "outlook.com", "icloud.com"};
    string marcas [10] = {"Specialized", "Trek", "Cube bikes", "Cannondale", "BMC", "Ordea", "Santa Cruz", "Cervelo", "Shimano", "Benotto"};
    string colores [10] = {"amarillo", "naranja", "rojo", "violeta", "azul", "verde", "negro", "marron", "gris", "blanco"};

    string nombre = nombres[rand()%42];
    string apellido = apellidos[rand()%39];
    string telefono = telefonos[rand()%14]+std::to_string((rand()%8999999)+1000000);
    string email = nombre+apellido[1]+"@"+emails[rand()%7];
    string marca = marcas[rand()%10];
    string color = colores[rand()%10];
    string serial = std::to_string((rand()%899)+100);

    Bici bici;
    bici.setBici(nombre+" "+apellido, telefono, email, marca, color, serial);

    bicis.push_back(bici);
}