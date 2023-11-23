//Escriba una funcion escribeNum(int ini, int fin) que devuelva en la salida los numeros del inicio al fin en orden ascendente.

#include <iostream>
using namespace std;

void writeNumber(int x, int y){

    if(x == y){

        cout << "Los numeros introducidos son iguales" << endl;
    }
    else{

        for(int i = x; i < y; i++){

            cout << i + x;
        }
    }
}

int main(){

    int start, end;

    cout << "Ingrese dos numeros enteros: " << endl; cin >> start >> end;

    writeNumber(start, end);

    return 0;

}