/*Escriba un algoritmo que reciba como entrada un fecha (día y mes) del
año actual e imprima por pantalla el número de días transcurridos desde
el 1ro de Enero*/

#include <iostream>
using namespace std;

int main(){

    int day, month, days_passed;

    cout << "Introduzca una fecha, primero el dia: " << endl; cin >> day;
    cout << "Introduza el mes en numero: " << endl; cin >> month;

    switch(month){

        case 1: days_passed = day - month; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 2: days_passed = 30 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 3: days_passed = 58 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 4: days_passed = 89 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 5: days_passed = 119 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 6: days_passed = 150 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 7: days_passed = 180 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 8: days_passed = 211 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 9: days_passed = 242 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 10: days_passed = 272 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 11: days_passed = 303 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        break;
        case 12: days_passed = 333 + day; cout << "Han transcurrido " << days_passed << " dias desde el 1 de enero" << endl;
        default: cout << "Introduzca una fecha valida" << endl;
    }
    return 0;
}