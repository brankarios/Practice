/*Haga un algoritmo que determine si un número es capicúa (palíndrome).
Un número es capicúa si se lee igual al derecho y a revés*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int number = 0;
    int suma = 0;
    int aux;

    cout << "Introduzca un numero: " << endl; cin >> number;

    aux = number;

    while (number > 0)

    {

        suma = suma * 10 + (number % 10);

        number = trunc(number/10);

    }

    if (suma == aux){

        cout<< "El numero es capicua" << endl;

    }

    else{

        cout<< "El numero no es capicua" << endl;

    }   

    return 0;
}