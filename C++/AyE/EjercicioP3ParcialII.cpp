/*
 En la fábrica de caramelos Candy Crush se quiere automatizar el proceso de empaquetamiento de los caramelos. Para ello se desea programar una 
balanza electrónica que consta de 8 cubetas. El ciclo de llenado de un paquete comienza al depositar de manera aleatoria productos en cada una de las 
cubetas. La balanza entonces escoge aquellas cubetas que, al sumar el peso de su contenido, alcance el máximo peso posible para llenar el paquete. 
Luego se vacían sólamente las cubetas seleccionadas en el paquete, se avanza con el siguiente paquete y se rellenan nuevamente con contenido 
aleatorio para que comience de nuevo otro ciclo de llenado. Las cubetas no seleccionadas mantienen sus productos 
 
Construya un algoritmo que permita llenar al máximo 100 paquetes de caramelos utilizando la combinación correcta de cubetas de manera tal que se 
consiga el peso máximo 
 
Tome en consideración que todas las cubetas tienen la misma capacidad, que la cantidad de producto que cae en cada cubeta es un número entero y 
que cada paquete tendrá una capacidad menor a la suma total de todas las cubetas. 
 
 */


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int N = 8;
int w[N], c[N], ans[N], max_weight = 0, cnt = 0;

void backtrack(int i, int weight) {
    if (i == N) {
        if (weight > max_weight) {
            max_weight = weight;
            for (int j = 0; j < N; j++)
                ans[j] = c[j];
        }
        return;
    }
    c[i] = 0;
    backtrack(i + 1, weight);
    if (weight + w[i] <= 100) {
        c[i] = 1;
        backtrack(i + 1, weight + w[i]);
    }
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < N; i++) w[i] = rand() % 10 + 1;
    backtrack(0, 0);
    cout << "Peso máximo alcanzado: " << max_weight << endl;
    cout << "Cubetas seleccionadas: ";
    for (int i = 0; i < N; i++) {
        if (ans[i]) {
            cnt++;
            cout << i + 1 << " ";
        }
    }
    cout << endl << "Número de cubetas seleccionadas: " << cnt << endl;
    return 0;
}

