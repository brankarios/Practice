//Escriba un código que calcule la distncia euclidiana entre dos puntos: sqrt(Px1 -Px2)^2 + (Py1-Py2)^2

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
    float px1, px2, py1, py2 = 0;

    cout<<"Introduzca las coordenadas del punto euclidiano que desea calcular(px1,px2,py1,py2)"<<endl;
    cin>>px1>>px2>>py1>>py2;

    cout<<"EL resultado del punto euclidiano es:"<<endl;
    cout<<sqrt(pow(px1-px2,2)+pow(py1-py2,2))<<endl;



    system("pause");
    return 0;
}