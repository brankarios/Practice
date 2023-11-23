//Escriba un algoritmo que dadas las longitudes de los catetos de un triángulo rectángulo calcule la longitud de su hipotenusa.

#include <iostream>
#include <math.h>
using namespace std;
int main(){

    float ca, co;
    float h1, hf;

    cout<<"Ingrese el valor del cateto adyacente y luego el valor del cateto opuesto: " << endl; cin >> ca >> co;

    h1 = pow(ca, 2) + pow(co, 2);
    hf = sqrt(h1);

    cout <<"La longitud de la hipotenusa dada los valores de los catetos " <<ca << " y " << co << " es: " << hf << endl;

    return 0;
}