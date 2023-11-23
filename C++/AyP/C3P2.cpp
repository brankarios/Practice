#include <iostream>
using namespace std;
int main(){

    int a, b;

    cout<<"Nicolle, introduce dos numeros distintos: " <<endl; cin>>a>>b;
    
    if(a == b){
        cout<<"Te dije que escribieras dos numeros distintos sapo"<<endl;
    }else{
        if(a < b){
            cout<<"El numero mayor es el " <<a<<endl;
        }else{
            cout<<"El numero mayor es el " <<b<<endl;
        }
    }
    return 0;
}