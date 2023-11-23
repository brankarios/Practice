/*Se quiere definir una clase que permita controlar un sintonizador digital
de emisoras FM; concretamente, lo que se desea es dotar al controlador
de una interfaz que permita subir (up) o bajar (down) la frecuencia (en
saltos de 0.5 MHz) y mostrar la frecuencia sintonizada en un momento
dado (display). Supondremos que el rango de frecuencias a manejar oscila
entre los 80 Mhz y los 108 MHz y que al inicio, el controlador sintoniza a
80 MHz. Si durante una operación de subida o bajada se sobrepasa uno de
los dos límites, la frecuencia sintonizada debe pasar a ser la del extremo
contrario*/

#include <iostream>

class Radio{

    public:
    float frecuencia;
    Radio(){

        frecuencia = 80.0;
    }
    void subirMH(){

        if(frecuencia + 0.5 > 108.0){

            frecuencia = 80.0;
        }
        else{
            frecuencia += 0.5;
        }

        std::cout << "La frecuencia queda en: " << frecuencia << std::endl;
    }
    void bajarMH(){

        if(frecuencia - 0.5 < 80.0){

            frecuencia = 108;
        }
        else{
            frecuencia -= 0.5;
        }

        std::cout << "La frecuencia queda en: " << frecuencia << std::endl;       
    }

};

int main(){

    Radio radioRochela;

    int boton;

    while(boton != 0){

        std::cout << "Esta es una radio digital" << std::endl;
        std::cout << "Presione 1 para subir, 2 para bajar y 0 para apagar" << std::endl;
        std::cin >> boton;

        switch(boton){

            case 1:
            radioRochela.subirMH();
            break;

            case 2:
            radioRochela.bajarMH();
            break;

            case 0:
            std::cout << "Chao pescado" << std::endl;
            break;

            default:
            std::cout << "Opcion invalida sapooooo" << std::endl;
            break;
        }
            
    }
    return 0;
}