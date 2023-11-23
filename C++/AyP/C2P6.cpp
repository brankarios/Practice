/*Supongamos un reloj analógico (de agujas). Dada lo hora exacta (horas y
minutos), escriba un algoritmo que calcule el ángulo entre ambas agujas.
Por ejemplo, a las 3:00 el ángulo será 90 grados. A las 3:15 el ángulo será
7,5 grados*/

#include <iostream>
using namespace std;
int main(){

    float hora, minuto, anghor, angmin, angulof;

    cout <<"Ingrese la hora (hora, minutos): " << endl; cin >> hora >> minuto;

    anghor = (hora * 30) + (minuto * 0.5);  //Cada hora que pasa son 30 grados, y por cada minuto la hora avanza 0.5
    angmin = (minuto *6); //Cada minuto que pasa son 6 grados

    if(anghor == angmin){

        cout <<"Entre ambas agujas hay 0 grados" << endl;
    }else{
        if(anghor > angmin){
            cout <<"Entre ambas agujas hay: " << anghor - angmin << " grados" << endl;
        }else{
            cout <<"Entre ambas agujas hay: " << angmin - anghor << " grados" << endl;
        }
    }

    return 0;
}