/*Haga un algoritmo que tome como entrada 2 números distintos e imprima
el segundo número mayor*/

#include <iostream>
using namespace std;

int main(){

    int number_1, number_2, number_3;

    cout << "Digite un numero: " << endl; cin >> number_1;
    cout << "Digite otro numero: " << endl; cin >> number_2;
    cout << "Digite un ultimo numero: " << endl; cin >> number_3;

    if(number_1 > number_2 && number_1 < number_3){

        cout << "El segundo numero mayor es: " << number_1 << endl;
    }
    else if(number_2 > number_1 && number_2 < number_3){

        cout << "El segundo numero mayor es: " << number_2 << endl;
    }
    else if(number_3 > number_1 && number_3 < number_2){

        cout << "El segundo numero mayor es " << number_3 << endl;
    }
    else{

        cout << "Los tres numeros introducidos son iguales" << endl;
    }
    return 0;
}