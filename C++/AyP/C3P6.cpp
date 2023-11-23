/*Un número de 4 cifras es felíz si los dos primeros dígitos son mayores que
los dos últimos dígitos. Por ejemplo 5612 es felíz porque 56 es mayor que
12. Un número de 4 cifras es creciente si cada dígito es mayor al anterior.
Por ejemplo 1569 es creciente porque 9 > 6 > 5 > 1. Todo número que es
felíz y creciente se dice que es un número muy felíz. Todo número que no es
felíz ni creciente se dice que es infelíz. Haga un algoritmo que tome como
entrada un número de 4 dígitos e imprima el tipo de número encontrado,
según la clasficicación descrita.*/

#include <iostream>
using namespace std;

int main(){

    int number = 0, a = 0, b = 0, c = 0, d = 0;

    cout << "Digite un numero de 4 cifras: " << endl; cin >> number;

    a = number / 1000;
    b = (number / 100) % 10;
    c = (number / 10) % 10;
    d = number % 10;

    if(number < 1000 || number > 9999){
        
        cout << "Digite un numero valido que tenga cuatro cifras" << endl;
    }  
        //Validar si el numero es feliz
        else if((a + b) > (c + d)){

            cout << "El numero introducido es un numero feliz" << endl;
        }
        //Validar si el numero es creciente
         else if((a < b) && (b < c) && (c < d)){

            cout << "El numero introducido es un numero creciente" << endl;
        }
        else{
            cout << "El numero introducido es un numero infeliz" << endl;
        }

        return 0;
    }

    //Nota: No puede haber un numero muy feliz, pues si es creciente no puede ser feliz. Sus definiciones se contradicen.