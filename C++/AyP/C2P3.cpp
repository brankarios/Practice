//Escriba un algoritmo que transforme un número decimal a un número binario

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){

    int dec;

    cout<<"Introduzca un numero menor o igual a 15 para convertirlo a su equivalente en binario: " <<endl; cin>>dec;

    int bin1 = dec % 2;
    int bin2 = (dec / 2) % 2;
    int bin3 = (dec / 4) % 2;
    int bin4 = (dec / 8) % 2;

    if(dec > 15){
        cout<<"El numero introducido es invalido, no es menor o igual a 15" <<endl;
    }else{
        cout<<"El equivalente en binario del numero introducido es: " <<bin4<<bin3<<bin2<<bin1 <<endl;
    }
    
    system("pause");
    return 0;
}