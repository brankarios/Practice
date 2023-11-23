//Dadas dos fechas Día/Hora/Minuto, calcular cuantos Días/Horas/Minutos han pasado de una fecha a otra

#include <iostream>
#include <math.h>
using namespace std;

int main (){

    //Declaro variables de tipo int para las fechas, siendo las tres primeras variables para la fecha uno y las otras tres para la fecha dos
    int dia1, hora1, minuto1, dia2, hora2, minuto2;

    //Le pido al usuario que introduzca la fecha 1 de forma separada y los guardo en las variables que creé anteriormente
    cout<<"Introduzca el dia de la fecha inicial: "<< endl; cin>>dia1;
    cout<<"Introduzca la hora de la fecha inicial: "<< endl; cin>>hora1;
    cout<<"Introduzca el minuto de la fecha incial: "<< endl; cin>>minuto1;

    //Le pido al usuario que introduzca la fecha 2 de forma separada y los guardo en las variables que creé anteriormente
    cout<<"Introduzca el dia de la fecha final: "<< endl; cin>>dia2;
    cout<<"Introduzca la hora de la fecha final: "<< endl; cin>>hora2;
    cout<<"Introduzca el minuti de la fecha final: "<< endl; cin>>minuto2;

    //1. Resto el Dia2 menos el Dia1 para saber cuantos dias han pasado entre los dos y los guardo en una variable
    int diatotal = dia2 - dia1;

    //2. Repito el primer paso pero ahora con las horas
    int horatotal = hora2 - hora1;

    // Repito el primer paso pero ahora con los minutos
    int minutotal = minuto2 - minuto1;

    //Imprimo el resultado final al usuario
    cout<<"Han pasado " << diatotal << " dia(s), " << horatotal << " hora(s) y " << minutotal << " minuto(s) desde la fecha inicial hasta la fecha final introducida" <<endl;
    


}