/*Escriba un algoritmo que lea un número N y calcule e imprima el número
de dígitos de N*/

#include <iostream>
using namespace std;
int main(){

    int number, counter = 0;

    cout << "Digite un numero cualquiera: " << endl; cin>> number;

    while(number > 0){

        counter++;
        number/=10;
    }

    cout << "El numero introducido tiene " << counter << " digitos" << endl;

    return 0;
}