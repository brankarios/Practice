//Escriba un algoritmo recursivo que reciba como parametros dos numeros y retorne su multiplicacion utilizando el metodo ruso

#include <iostream>
using namespace std;

int russMult(int x, int y){

    if(x == 1){                           //Caso base 1, donde unos de los operandos es 1 y se retorna el otro valor

        return y;                    
    }
    else if(y == 1){

        return x;
    }

    if(x == 0 || y == 0){                 //Caso base 2, donde si uno de los operandos es 0  entonces la multiplicacion da como resultado 0              

        return 0;                    
    }

    if (x % 2 == 0){                      //Si X es par entonces se llama a la funcion de nuevo pero con la division entre 2 de X y Y por 2, como el metodo lo exige

        return russMult(x / 2, y * 2);    //De esta forma nos aseguramos de dividir X entre 2 hasta llegar a la unidad
    }

    return y + russMult(x / 2, y * 2);    //Si X es impar, entonces se llama a la funcion de nuevo con los argumentos de la funcion anterior y se le suma a Y. De esta forma estamos sumando los resultados Y solo con los resultados impares correspondientes de X
}

int main(){

    int a, b;

    cout << "Ingrese dos numeros a multiplicar: " << endl; cin >> a >> b;

    cout << "El resultado es: " << russMult(a,b) << endl;

    return 0;
}

/*int multN(int n){

    return n * 2;
}

int divN(int n){

    return n / 2;
}

int russMult(int m, int n){

    int result = 0;

    if(m == 1){                           

        return n;                    
    }
    else if(n == 1){

        return m;
    }

    if(m == 0 || n == 0){                               

        return 0;                    
    }

    while (n > 0){

        if (n % 2 != 0){

            result += m;
        }

        m = multN(m);

        n = divN(n);
    }
    return result;
}

int main() {

    int a, b;

    cout << "Ingrese dos numeros a multiplicar: " << endl; cin >> a >> b;

    cout << russMult(a,b) << endl;

    return 0;
}*/