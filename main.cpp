#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "reloj.h"
#include "registro.h"
#include "tarjeta.h"
#include "tarjetaempleado.h"
#include "tarjetaCli.h"
#include "tarjetaprov.h"

int main()
{
    int opcion, Id, cont = 0;
    int hora, minuto;
    registro arrReg[20];
    tarjeta *arrTar[40];

    /*ifstream archEnt;
    archEnt.open("tarjetas.txt");
    while(!archEnt.eof()){


    }
    archEnt.close();*/

    while(opcion != 5){

        cout << "1. Entrada al estacionamiento" << endl;
        cout << "2. Salida del estacionamiento" << endl;
        cout << "3. Consulta del estacionamiento" << endl;
        cout << "4. Consulta de Tarjetas" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;
        if(opcion == 1){
            cout << "ID de la tarjeta del auto: " << endl;
            cin >> Id;
            cout << "Hora de entrada: " << endl;
            cin >> hora >> minuto;
            Reloj reloj_1(hora, minuto);
            arrReg[cont].setRegistroHora(reloj_1);
            arrReg[cont].setRegistroId(Id);
            cont++;
        }
        if(opcion == 2){

        }
        if(opcion == 3){

        }
        if(opcion == 4){

        }
        if(opcion == 5){
            break;
        }












    }

    return 0;
}
