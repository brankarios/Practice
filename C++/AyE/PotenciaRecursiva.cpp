#include <iostream>
#include <math.h>
using namespace std;

int potenciaRecur(int x, int y){

    if(y == 0){

        return 1;
    }
    
    return x * potenciaRecur(x, y - 1);
}


int main(){

    int base, exp;

    cout << "Ingrese la base y el exponente de la potencia a calcular: " << endl;

    cin >> base >> exp;

    cout << potenciaRecur(base,exp);

    return 0;
}