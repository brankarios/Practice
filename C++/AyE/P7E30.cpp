#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n;
    float probabilidadInicial = 0.95;
    stack<int> vehiculosCruzados;
    queue<int> vehiculosCaidos;

    cout << "Ingrese el numero de vehiculos blindados: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (probabilidadInicial > 0.5) {
            vehiculosCruzados.push(i);
            probabilidadInicial -= 0.04;
        } else {
            vehiculosCaidos.push(i);
        }
    }

    cout << "Vehiculos que pasaron el puente: ";
    while (!vehiculosCruzados.empty()) {
        cout << vehiculosCruzados.top() << " ";
        vehiculosCruzados.pop();
    }

    cout << endl << "Vehiculos que cayeron en el intento: ";
    while (!vehiculosCaidos.empty()) {
        cout << vehiculosCaidos.front() << " ";
        vehiculosCaidos.pop();
    }

    return 0;
}