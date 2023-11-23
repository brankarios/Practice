#include <iostream>
using namespace std;

int factorial(int x){

    if(x == 1 || x == 0){
        return 1;
    }
    return x * factorial(x - 1);
}

int main(){

    int n = 0;

    cout << "Introduzca el numero al que le quiere calcular su factorial: " << endl; cin >> n;
    
    cout << factorial(n) << endl;

    return 0;
}