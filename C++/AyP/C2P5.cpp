//Escriba un algoritmo que dados la distancia recorrida por un objeto y el tiempo que tomó el objeto en recorrer esa distancia, calcule su velocidad

#include <iostream>
using namespace std;
int main(){

    float d, t, v, vkm;

    cout <<"Ingrese la distancia en millas y luego el tiempo en horas que le tomo al objeto recorrer dicha distancia para calcular su velocidad: " << endl;
    cin >> d >> t;

    v = d / t;
    vkm = v * 1.609;

    cout <<"La velocidad del objeto fue de: " << v << " mp/h" << endl;
    cout <<"En kilometros, la velocidad seria de : " << vkm << " km/h" << endl;

    return 0;
}