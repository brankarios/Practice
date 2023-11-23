/*Escriba un algoritmo que tome como entrada un número N e imprima
la secuencia de Fibonacci hasta N. La secuencia de Fibonacci comienza
con los números 0 y 1 y se calcula en cada paso sumando los últimos dos
números de la secuencia. Por ejemplo, los primeros números de la secuencia
de Fibonacci son 0, 1, 1, 2, 3, 5, 8, 13, . . .*/

#include <iostream>
using namespace std;
int main(){

    unsigned long long number, aux1 = 1, aux2 = 0;

    cout << "Introduzca el numero limite para la sucesion de Fibonacci: " << endl; cin >> number;

    if(number > 0){

        for(int i = 1; i <= number; i++){

            cout << " " << aux2;

            aux1 += aux2;
            aux2 = aux1 - aux2;
        }
    }
    else{

        cout << "Introduzca un numero mayor que 0" << endl;
    }

    return 0;
}