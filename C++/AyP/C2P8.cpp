/*José y Pedro son dos ranas. José puede dar saltos de J centímetros y
Pedro puede dar saltos de P centímetros. Suponiendo que ambas ranas
comienzan a saltar en el mismo punto (y en la misma dirección), haga
un algoritmo que determine si las ranas coincidirán en el mismo punto en
algún momento antes de que José de K saltos.*/

#include <iostream>
using namespace std;
int main(){

    int saltoJ, saltoP;

    cin >> saltoJ >> saltoP;

    if(saltoJ < saltoP){

        cout << "Las ranas no coincidirán en ningun punto, excepto en el de partida" << endl;
    }else if(saltoJ > saltoP){

        cout << "Las ranas no coincidirán en ningun punto, excepeto en el de partida" << endl;
    }else if (saltoJ == saltoP){
        cout << "Las ranas coinciden en todos los puntos que salten" << endl;
    }

    return 0;
}