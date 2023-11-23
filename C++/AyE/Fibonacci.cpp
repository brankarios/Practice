#include <iostream>
using namespace std;

void fiborecur(int x){

    switch(x){

        case 0: cout << "0" << endl;
        case 1: cout << "1" << endl;
        default: cout << (x - 1) + (x - 2) << endl;
    }
}



int main(){

    int n; 
    cin >> n;

    fiborecur(n);

    return 0;
}