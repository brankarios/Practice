/*Dadas las ecuaciones de dos rectas no paralelas y = m1x+b1 y y = m2x+b2, 
escribir un algoritmo que calcule su punto de intersección.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int m1 = 0, m2 = 0;
    int b1 = 0, b2 = 0;
    float x1, bx, x, y;

    cout << "Introduzca la pendiente de la recta A : " << endl; cin >> m1;
    cout << "Introduzca el coeficiente del punto de corte en Y de la recta A : " << endl; cin >> b1;

    cout << "Introduzca la pendiente de la recta B : " << endl; cin >> m2;
    cout << "Introduzca el coeficiente del punto de corte en Y de la recta B : " << endl; cin >> b2;

    if (m1 == m2){
        cout << "Por favor, introduzca dos rectas cuyas pendientes no sean iguales, es decir, que no sean paralelas" << endl;
    }
    else{         //Para calcular La coordenada en X
    x1 = m1 - m2;
    bx = b2 - b1;
    x = bx / x1;
    
    y = (m1 * x) + b1;          //Para calcular la coordenada en Y

    cout << "Las ecuaciones de las rectas introducidas son: " << endl;
    cout << m1 << "x +" << (b1) << endl;
    cout << m2 << "x +" << (b2) << endl;
    cout << "El punto de interseccion entre ambas rectas es: " << endl;
    cout << x << "," << y << endl;
    }

    return 0;

}