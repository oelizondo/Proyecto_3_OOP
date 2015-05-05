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
    int opcion, idTar, idEsp, cont = 0, contReg = 0;
    int hora, minuto;
    string tienda, empresa;
    char tipo;

    Reloj reloj_1, reloj_2;
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
    //Inicia el programa principal
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
            for(int i = 0 ; i < cont; i++){
                if(idTar == arrTar[i]->getIdTarjeta()){
                    cout << "Hora de entrada: " << endl;
                    cin >> hora >> minuto;
                }
            }
            reloj_1.setHora(hora);
            reloj_1.setMinu(minuto);
            arrReg[contReg].setRegistroHora(reloj_1);
            arrReg[contReg].setRegistroId(idTar);
            contReg++;
        }
        else if(opcion == 2){
            cout << "Id de Tarjeta: " << endl;
            cin >> idTar;
            for(int i = 0 ; i < cont; i++){
                if(idTar == arrTar[i]->getIdTarjeta()){
                    cout << "Hora de salida: " << endl;
                    cin >> hora >> minuto;
                }
            }
            reloj_2.setHora(hora);
            reloj_2.setMinu(minuto);
            if(reloj_2.check(hora, minuto) && reloj_2 >= reloj_1){
                cout << "hora de entrada: " << endl;
                reloj_1.muestra();
                cout << "hora de salida: " << endl;
                reloj_2.muestra();
                for(int i = 0 ; i < cont; i ++){
                    if(idTar == arrTar[i]->getIdTarjeta()){
                        cout << "Horas por cobrar: " << endl;
                        cout <<  arrTar[i]->calculaHorasCobrar(reloj_1, reloj_2) << endl;
                        cout << "Precio total: " << endl;
                        cout << arrTar[i]->calculaPago(reloj_1, reloj_2, 10) << endl;
                    }
                }
            }
        }
        else if(opcion == 3){
            for(int i = 0; i < contReg; i++){
                for(int m = 0; m < cont; m++){
                    if(arrReg[i].getRegistroId() == arrTar[m]->getIdTarjeta()){
                        arrTar[m]->muestraDatos();
                    }
                }
            }
        }
        else if(opcion == 4){
            for(int i = 0; i < cont; i++){
                arrTar[i]->muestraDatos();
            }
        }
        else if(opcion == 5)
            break;












    }

    return 0;
}
