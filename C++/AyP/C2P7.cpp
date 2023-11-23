/*Escriba un algoritmo que tome como entrada la base y la altura de un
triángulo, el radio de un círculo y determine si el triángulo tiene un área
mayor al círculo*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){

    float Btriangulo, Atriangulo, Rcirculo, areaT, areaC;

    cout << "Ingrese la base y altura del triangulo: " << endl; cin >> Btriangulo >> Atriangulo;
    cout << "Ingrese el radio del circulo: " << endl; cin >> Rcirculo;

    areaT = (Btriangulo * Atriangulo) / 2;
    areaC = 3.1415 * pow(Rcirculo, 2);

    if(areaT > areaC){

        cout << "El triangulo tiene un area mayor que la del circulo: " << areaT << " es mayor que " << areaC << endl;
    }else{
        cout << "El triangulo no tiene un area mayor que la del circulo" << endl;
    }

    return 0;
}