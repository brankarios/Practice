/*Haga un algoritmo que tome como entrada un número menor a 100 y
determine si es primo (recuerde que un número N es primo si sus únicos
divisores son 1 y N)*/

#include <iostream>
using namespace std;
int main(){

    int num;

    cout<<"Ingrese un numero diferente de 1 y menor que 100 para verificar si es primo: " << endl; cin>>num;

    if(num > 100 or num == 1){
        cout<<"El numero ingresado no es menor que 100 o es 1." <<endl;
    }else{
        if(num % 2 != 0 && num % 3 != 0 && num % 4 != 0 && num % 5 != 0 && num % 6 != 0 && num % 7 != 0 && num % 8 != 0 && num % 9 != 0 or num == 2){
            cout<<"El numero " << num << " es primo" << endl;
        }else{
            cout<<"El numero " << num << " no es primo" << endl;
        }
    }

    return 0;
}