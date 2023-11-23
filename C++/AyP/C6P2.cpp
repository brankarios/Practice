/*Haga una acción que tome como entrada un arreglo de enteros y retorne
(usando parámetros por referencia) el número de elementos pares e impares
del arreglo.*/

#include <iostream>
using namespace std;

void evenAndOdd(int array[]);

int arrayElements;


int main(){

    cout << "Digite el numero de elementos del arreglo: " << endl; cin >> arrayElements;

    int array[arrayElements];

    evenAndOdd(array);

    return 0;
}

void evenAndOdd(int array[]){

    int even = 0, odd = 0;

    for(int i = 0; i < arrayElements; i++){

        cout << "Rellene el arreglo: " << endl; cin >> array[i];
    }

    for(int i = 0; i < arrayElements; i++){

        if(array[i]%2 == 0){

            even++;
        }
        else{

            odd++;
        }
    }
    cout << "El numero de elementos pares del arreglo es: "<< even << endl;
    cout << "El numero de elementos impares del arreglo es: " << odd << endl;
}