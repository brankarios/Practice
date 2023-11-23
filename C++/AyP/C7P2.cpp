/*Haga un algoritmo que lea todos los caracteres de un archivo llamado
letras.txt y cuente la frecuencia de cada letra del archivo*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){

    ifstream leerfrecuencia(argv[1]);
    int arreglocontar[255];
    for(int i = 0; i < 255; i++){

        arreglocontar[i] = 0;
    }
    char caracter;
    int castear;


    while(!leerfrecuencia.eof()){

        leerfrecuencia >> caracter;

        castear = (int)caracter;

        arreglocontar[castear] += 1;
    }

    for(int i = 65; i <= 122; i++){

        caracter = (char)i;

        cout << caracter << " :" << arreglocontar[i] << endl;


    }

    leerfrecuencia.close();
    return 0;
}