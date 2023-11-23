//Haga un algoritmo que multiplique dos números enteros aplicando el método de la multiplicación egipcia

#include <iostream>
using namespace std;

int egyptMult(int x, int y){
    if(x == 1){

        return y;
    }
    if(x == 0 || y == 0){

        return 0;
    }
    if((x % 2) == 0){

        return egyptMult(x / 2, y * 2);
    }
    return y + egyptMult(x / 2, y * 2);
}

int main(){

    int a,b;

    cout<<"Ingrese dos numeros enteros: ";

    cin>> a >> b;

    cout<<"La multiplicacion egipcia de " << a <<" y " << b <<" es: " << egyptMult(a, b) << endl; 

    return 0;
}