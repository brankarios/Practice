//Tabla de Multiplicar de cualquier número

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int x;

    cout<<"Este programa le mostrara la tabla de multiplicar del 1 al 10 del numero que introduzca. Ingrese el numero: " <<endl; cin>>x;

    for(int i = 0; i < 11; i++){
        cout<<x << " * " << i << " = " <<x * i <<endl;
    }

    return 0;
}