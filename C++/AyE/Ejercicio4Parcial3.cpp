#include <iostream>
#include <stack>

using namespace std;

class Pila {
    stack<float> pila;
public:
    void push(float num) {
        pila.push(num);
    }
    float top() {
        return pila.top();
    }
    void pop() {
        pila.pop();
    }
    bool empty() {
        return pila.empty();
    }
};

void sumarPilas(Pila& pila1, Pila& pila2){

    if(!pila2.empty()){

        float number = pila2.top();
        pila2.pop();
        sumarPilas(pila1,pila2);
        pila2.push(pila1.top() + number);
        pila1.pop();
    }
}

int main() {
    Pila p1, p2;
    // Agregar elementos a las pilas
    // ...
    sumarPilas(p1, p2);
}
