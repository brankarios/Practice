#include <iostream>
using namespace std;
int main(){

    int numx = 0;

    cout<<"Ingrese un numero de 5 digitos para verificar si es capicua o no: " <<endl; cin>>numx;

    int a = numx / 10000;
    int b = (numx / 1000) %10;
    int c = (numx / 100) % 10;
    int d = (numx / 10) % 10;
    int e = (numx % 10);

    if(a == e && b == d){

        cout<<"El numero introducido es capicua" <<endl;
    }else{
        cout<<"El numero introducido no es capicua" <<endl;
    }
    return 0;
}