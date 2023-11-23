/*Escriba un algoritmo que dado el peso de una persona en libras (1 libra =
0, 453592 Kg) y su estatura en centímetros, calcule su IMC e indique como
salida el peso en kilogramos, el valor de IMC de la persona y la categoría
en la cual fue clasificado.*/

#include <iostream>
using namespace std;
int main(){

    float wlbs, hcms;

    cout<<"Digite su peso en libras: " <<endl; cin>>wlbs; cout<<"Digite su altura en centimetros: " <<endl; cin>>hcms;

    //En las siguientes varaibles guardo los calculos para pasar de libras a kilos y de centimetros a metros. Y el calculo del IMC

    float wkgs = wlbs / 2.2046, hmts = hcms / 100;
    
    float imc = wkgs / (hmts * hmts);

    cout<<"Su peso en kilogramos es de: " <<wkgs<<endl;

    if(imc <= 16.9){
        cout<<"Su IMC es de: " << imc << " ,eso significa que usted esta muy por debajo del peso que deberia tener" <<endl;
    }else{
        if(imc >= 17 && imc <= 18.4){
            cout<<"Su IMC es de: " << imc << " ,eso significa que usted está por debajo del peso que debería tener" <<endl;
        }else{
            if(imc >= 18.5 && imc <= 24.9){
                cout<<"Su IMC es de: " << imc << " ,eso significa que usted tiene un peso normal en relacion a su altura" <<endl;
            }else{
                if(imc >= 25 && imc <= 29.9){
                    cout<<"Su IMC es de: " << imc << " ,eso significa que usted tiene sobrepeso" <<endl;
                }else{
                    if(imc >= 30 && imc <=34.9){
                        cout<<"Su IMC es de: " << imc << " ,eso significa que usted tiene obesidad pre-morbida" <<endl;
                    }else{
                        if(imc >= 40 && imc <= 45){
                            cout<<"Su IMC es de: " << imc << " ,eso significa que usted tiene obesidad morbida" <<endl;
                        }else{
                            if(imc > 45){
                                cout<<"Su IMC es de: " << imc << " ,eso significa que usted tiene obesidad hiper-morbida" <<endl;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}