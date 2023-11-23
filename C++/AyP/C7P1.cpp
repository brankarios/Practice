/*Haga un algoritmo que lea números enteros almacenados en dos archivos
que contienen números enteros ordenados y genere un tercer archivo que
contiene los mismos elementos de los dos archivos ordenados. Por ejemplo, si
el primer archivo contiene los elementos 1 40 50 100 y el segundo contiene
los elementos 5 20 40 80, el archivo resultante tendría los elementos:
1 5 20 40 40 50 80 100*/

#include <iostream>
#include <fstream>
using namespace std;

void intercambiar(int array[], int a, int b){

    int aux = array[a];

    array[a] = array[b];

    array[b] = aux;
}

void burbuja(int array[], int tamanio){

    for(int i = 0; i < tamanio; i++){
        for(int j = 0; j < tamanio; j++){
            if(array[j] > array[j + 1]){
                intercambiar(array, j, j + 1);
            }
        }
    }
}

int main(int argc, char* argv[]){

    ifstream entrada1(argv[1]), entrada2(argv[2]);

    ofstream salida(argv[3]);

    int numeros[6], i = 0;

    while(true){
        entrada1 >> numeros[i];
        i++;
        
        if(entrada1.eof()){
            break;
        }
    }
    while(true){
        entrada2 >> numeros[i];
        i++;

        if(entrada2.eof()){
            break;
        }
    }

    burbuja(numeros, 6);

    for(int i = 0; i < 6; i++){
        salida << numeros[i] << endl;
    }

    entrada1.close();
    entrada2.close();
    salida.close();
    
    return 0;
}