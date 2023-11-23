//Escriba un programa que dados un numero de tres digitos, los separe y retorne la suma de los mismos

#include <iostream>
#include <math.h>
using namespace std;
int main (){
    
    //Creo tres variable de tipo float para guardar el posible número que introduzca el usuario
    int numero;

    //Le pido al usuario que introduzca un numero de tres digitos y  lo guardo en la variable que creé anteriormente
    cout<<"Introduzca un numero de 3 digitos: " << endl; cin>>numero;

    //Variables donde almacenaré los tres digitos del numero introducido
    int a,b,c;

    //Obtención del tercer digito
    c = numero % 10;

    //Obtención de los dos primeros digitos
    b = numero / 10;

    //Obtencion del primer digito
    a = b / 10;

    //Obtencion del primer digito
    b = b % 10;

    cout<<"La suma de los tres digitos del numero " <<numero << " es " << a + b + c << endl;



}