/*Dados dos valores V1, V2 que forman un intervalo cerrado, y un valor X,
haga un algoritmo para determinar si X está dentro o fuera del intervalo*/

#include <iostream>
using namespace std;

int main(){

    int left_interval, right_interval, x_value;

    cout << "Digite el valor que esta a la izquierda del intervalo: " << endl; cin >> left_interval;
    cout << "Digite el valor que esta a la derecha del intervalo: " << endl; cin >> right_interval;
    cout << "Ahora, digite el numero el cual desea saber si esta dentro del intervalo o no: " << endl; cin >> x_value;

    if(left_interval > right_interval){

        cout << "Por favor, introduzca los valores del intervalo en orden: primero el del extremo izquierdo y luego el del extremo derecho" << endl;
    }
    else{

        if((x_value >= left_interval) && (x_value <= right_interval)){

            cout << "El numero " << x_value << " esta dentro del intervalo" << endl;
        }
        else{

            cout << "El numero " << x_value << " no esta dentro del intervalo" << endl;
        }
    }
    return 0;
}