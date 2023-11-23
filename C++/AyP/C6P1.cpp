/*Haga una función que tome como entrada un arreglo y retorne el máximo
valor del mismo*/

#include <iostream>
using namespace std;

int main(){

    int arrayElements, maxNumber = 0;

    cout << "Digite numero de elementos del arreglo: " << endl; cin >> arrayElements;

    int array[arrayElements];

    for(int i = 0; i < arrayElements; i++){

        cout << "Digite los elementos del arrreglo: " << endl; cin >> array[i];

        if(array[i] > maxNumber){

            maxNumber = array[i];
        }
    }

    for(int i = 0; i < arrayElements; i++){

        cout << "| " << array[i] << " |";
    }

    cout << "\nEl numero mayor del arreglo es: " << maxNumber << endl;

    return 0;
}