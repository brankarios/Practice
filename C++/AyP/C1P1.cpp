//Haga un programa que calcule las raíces de un polinomio de segundo grado

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){

    //Creo las varibles donde se guardaran los 3 numeros de la ecuacion de segundo grado y el resultado o los resultados finales
    float numA, numB, numC, resultado1, resultado2 = 0;

    //Le pido al usuario que introduzca los 3 numeros de la ecuación por separado
    cout<<"Este programa lo ayudara a calcular las raices de un polinomio de segundo grado, a continuacion introduzca los tres numeros del polinomio a calcular: "<<endl;
    cout<<"Introduzca el numero A: "<<endl; cin>> numA;
    cout<<"Introduzca el numero B: "<<endl; cin>> numB;
    cout<<"Introduzca el numero C: "<<endl; cin>> numC;

    //Declaro una variable que me guarde lo que está dentro de la raíz, así verifico si queda un valor negativo
    float raiz = pow(numB,2) - 4 * numA * numC;

    //Defino los 3 casos que puede tener la solucion de la ecuacion: Si no tiene solucion, si tiene 1 o dos soluciones
    if(raiz < 0){
        cout<<"La ecuacion no tiene solucion en el conjunto de los numeros reales" <<endl;
    }
    else{
        resultado1 = (-numB + sqrt(raiz)) / (2 * numA);
    resultado2 = (-numB - sqrt(raiz)) / (2 *numA);
    
    
    if(resultado1 == resultado2){
        cout<<"La ecuacion solo tiene un resultado en los numeros reales, y es " <<resultado1 <<endl;
        }
        else{
            cout<<"El resultado para x1 es: "<< resultado1 <<endl; cout<<"El resultado para x2 es: "<< resultado2 <<endl;
        }
    } 

    system("pause");
    return 0;

}