/*Haga un programa que transforme un numero decimal a un numero binario*/

#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int userBinary);

int userBinary = 0, decimalConverter = 0, e = 1;

int main(){

    cout << "Ingrese un numero binario, el programa lo va a convertir en su equivalente decimal: " << endl; cin >> userBinary;

    binaryToDecimal;

    return 0;
}

int binaryToDecimal(int userBinary){

    if(userBinary = 0){

        decimalConverter = 0;
    }

    while(userBinary > 0){

        int y = userBinary % 10;
        decimalConverter = decimalConverter + (y * e);
        e *= 2;
    }

    return decimalConverter;
}