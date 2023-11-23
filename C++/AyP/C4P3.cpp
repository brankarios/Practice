/*Escriba un algoritmo utilizando un ciclo para que calcule el valor aproximado de π usando la serie de Leibniz*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){

    double numerador = 4, denominador = 1, signo = 1, pi = 0;

    for(int i = 0; i < 100000; i++){

        pi += signo * (numerador / denominador);
        denominador += 2;
        signo *= -1;
    }

    cout << pi << endl;
}

//La condicion i < x la puedo aumentar para tener mas precision en los decimales. Pero con 100000 esta bien.