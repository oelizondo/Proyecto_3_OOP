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
/*bool verifica(int idTar, tarjeta *arrTar[]){
    for(int i = 0; i < 40; i++)
        return(idTar == arrTar[i]->getIdTarjeta());
}*/
int main()
{
    int opcion, idTar, idEsp, cont = 0, contReg = 0;
    int hora, minuto;
    string tienda, empresa;
    char tipo;
    registro arrReg[20];
    tarjeta *arrTar[40];

    ifstream archEnt;
    archEnt.open("tarjetas.txt");
    while(!archEnt.eof()){
        archEnt >> tipo;
        if(tipo == 'C'){
            archEnt >> idTar >> idEsp;
            arrTar[cont] = new tarjetaCli(idTar, idEsp);
            cont++;
        }
        if(tipo == 'E'){
            archEnt >> idTar >> idEsp;
            getline(archEnt, tienda);
            arrTar[cont] = new tarjetaEmpleado(idTar, idEsp, tienda);
            cont++;
        }
        if(tipo == 'P'){
            archEnt >> idTar >> idEsp;
            getline(archEnt, empresa);
            arrTar[cont] = new tarjetaProv(idTar, idEsp, empresa);
            cont++;
        }

    }
    archEnt.close();

    while(opcion != 5){

        cout << "1. Entrada al estacionamiento" << endl;
        cout << "2. Salida del estacionamiento" << endl;
        cout << "3. Consulta del estacionamiento" << endl;
        cout << "4. Consulta de Tarjetas" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;
        if(opcion == 1){
            cout << "ID de la tarjeta del auto: " << endl;
            cin >> idTar;
            /*if(verifica(idTar, arrTar)){
                cout << "Hora de entrada: " << endl;
                cin >> hora >> minuto;
            }*/
            for(int i = 0 ; i < cont; i++){
                if(idTar == arrTar[i]->getIdTarjeta()){
                    cout << "Hora de entrada: " << endl;
                    cin >> hora >> minuto;
                }
            }
            Reloj reloj_1(hora, minuto);
            arrReg[contReg].setRegistroHora(reloj_1);
            arrReg[contReg].setRegistroId(idTar);
            contReg++;
        }
        else if(opcion == 2){

        }
        else if(opcion == 3){

        }
        else if(opcion == 4){

        }
        else if(opcion == 5)
            break;












    }

    return 0;
}
