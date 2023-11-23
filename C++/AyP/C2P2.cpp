/*Escriba un algoritmo que lea un número de cuatro dígitos y muestre en
  pantalla el número escrito en reverso. Por ejemplo, si el número es 4678, la
  salida debería ser 8764*/

  #include <iostream>
  #include <math.h>
  using namespace std;
  int main(){

    int x;

    //Solicito el numero de 4 digitos

    cout<<"Ingrese un numero de 4 digitos: "<<endl; cin>>x;

    //Uso el operador % para dividir entre 10 y guardar los numeros del usuario de izquierda a derecha

    int a = x % 10;
    int b = x / 10 % 10;
    int c = x / 100 % 10;
    int d = x / 1000;

    //Imprimo las varibles anteriores juntas
    
    cout<<"El reverso del numero introducido es " <<a<<b<<c<<d <<endl;

    return 0;
  }