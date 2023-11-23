//Palindromo Recursivo. Debe retornar 1 si es verdadero o 0 si es falso

#include<iostream>
#include<string>
using namespace std;

bool palindromoRecur(string input, int start, int end){

    if(start >= end){
    
    return 1;
    }
    else{
        if(input[start] != input[end]){

            return 0;
        }
    }

    palindromoRecur(input, (start + 1), (end - 1));
}

int main(){

    cout << palindromoRecur("ala",0,2);

    return 0;
}