/*Defina una clase Monedero que permita gestionar la cantidad de dinero
que una persona dispone en un momento dado. La clase deberá tener un
constructor que permitirá crear un monedero con una cantidad de dinero
inicial y deberá definir un método para meter dinero en el monedero, otro
para sacarlo y finalmente, otro para consultar el disponible; solo podrá
conocerse la cantidad de dinero del monedero a través de este último
método. Por supuesto, no se podrá sacar más dinero del que haya en un
momento dado en el monedero.*/

#include <iostream>
#include <string>
using namespace std;

class Monedero{
    public:
    float saldo;
    Monedero(){

    saldo = 100;
    }
    void depositar(){

        float deposito;
        cout << "Digite la cantidad de dinero que va a depositar: " << endl; cin >> deposito;
        
        saldo += deposito;
    }
    void retirar(){

        float retiro;
        cout << "Digite la cantidad de dinero que va a retirar: " << endl; cin >> retiro;

        if(retiro > saldo){

            cout << "No tiene el dinero suficiente en su cuenta para retirar la cantidad introducida" << endl;
        }
        else{

            saldo -= retiro;
        }
    }
    float consultar(){

        return saldo;
    }
};

int main(){

    Monedero mercantil;

    int opciones;

    while(opciones != 0){

        cout << "Que quiere hacer con su monedero?" << endl;
        cout << "Presione 1 para depositar dinero, 2 para retirar, 3 para consultar saldo y 0 para salir: " << endl;
        cin >> opciones;

        switch(opciones){

            case 1:
            mercantil.depositar();
            break;

            case 2:
            mercantil.retirar();
            break;

            case 3:
            cout << "El saldo de su monedero es de : " << mercantil.consultar() << endl;
            break;

            default:
            cout << "Opcion introducida es invalida" << endl;
            break;
        }
        
    }

    return 0;
}