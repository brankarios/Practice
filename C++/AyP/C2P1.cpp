//Cree un programa que pase de un numero binario de 4 bits a su equivalente decimal

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
/*int main(){

    /*Creo las variables donde guardaré los números que el usuario introducirá. Los guardo en char porque luego
    utilizaré sus equivalentes en ASCII para expresarlos como 1's y 0's respectivamente

    char a,b,c,d;

    //Le pido al usuario su numero binario de 4 bits y guardo esos valores en las variables creadas anteriormente
   
    cout<<"Introduzca un numero binario, maximo de 4 bits: " <<endl; cin>>a>>b>>c>>d;

    /*Creo unas variables int donde expresaré el numero en ASCII de las variables char que guardé en la linea de
    código anterior. Restaré las variables char menos 48 porque el numero 48 en ASCII es 0. Así que si el usuario
    me expresa un 1 cuyo valor en ASCII es 49, lo restaré con 48 y será igual a 1. Si el usuario me expresa un 0
    cuyo valor en ASCII es 48, lo restaré con 48 y me retornará 0 que es el valor que quiero. Al usar (int) char
    lo que estoy diciendo es que me exprese el valor númerico del caracter que tengo guardado

    int numbera = (int) a - 48;
    int numberb = (int) b - 48;
    int numberc = (int) c - 48;
    int numberd = (int) d - 48;

    /*Muestro en pantalla una potencia con base numberX y su respectivo exponente (empezando de 3 hasta 0 de
    izquierda a derecha). Para verificar que la base sea 0, multiplico el 2 de la base por numberX

    cout<<"El equivalente decimal de su numero binario introducido es: " <<endl;
    cout<<pow(2 * numbera, 3) + pow(2 * numberb, 2) + pow(2 * numberc, 1) + pow(2 * numberd, 0) <<endl;

    system("pause");
    return 0;
}*/

/*Otre forma de hacer el codigo es asi:

 int binario;

    cout << "Introduzca un numero binario de 4 bits: " << endl; cin >> binario;
   
    if(binario < 0 or binario > 1111){

        cout << "El numero introducido es invalido" << endl;
    }else{
        int b1 = binario / 1000;
        int b2 = (binario / 100) % 10;
        int b3 = (binario / 10) % 10;
        int b4 = binario % 10;

        if(b1 != 1){
            
            b1 = 0;
        }else{
            b1 = pow(2,3);
        }if(b2 != 1){

            b2 = 0;
        }else{
            b2 = pow(2,2);
        }if(b3 != 1){
            
            b3 = 0;
        }else{

            b3 = 2;
        }if(b4 != 1){

            b4 = 0;
        }else{

            b4 = 1;
        }

        int binariof = b1 + b2 + b3 + b4;

        cout <<"El numero binario " << binario << " en numero decimal es: " << binariof << endl; 
    }

    return 0;
}*/
int main(){

    int binary = 0, addition = 0, count = 0;

    do{

        binary = binary * 10 + count;

        cin >> count;
    }
    while(count != -1);

    for(int i = 0; binary > 0; i++){

        addition = addition + (binary % 10) * pow(2,i);
        binary = binary / 10;
    }

    cout << addition << endl;

    return 0;
}