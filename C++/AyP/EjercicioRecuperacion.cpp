#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Persona{
    
    private:

    string nombre;
    int cedula;
    int edad;

    public:
    Persona(){};

    //Setters

    void setNombre(string n){

        nombre = n;
    }

    void setCedula(int c){

        cedula = c;
    }

    void setEdad(int e){

        edad = e;
    }

    //Getters

    string getNombre(){

        return nombre;
    }

    int getCedula(){

        return cedula;
    }

    int getEdad(){

        return edad;
    }

};


bool esPrimo(int p){


    for(int i = 2; i < p; i++){        

        if(p % i == 0){
            
            return false;
        }
    }
    return true;
}
int main(){

    string out = "out.txt";
    ofstream salida(out.c_str());

    int indice = 0;

    string nombreAux;
    int cedulaAux = 0;
    int edadAux = 0;

    string archivos[10000];
    Persona datos[2000];
    Persona primo[2000];

    archivos[0] = "p1.txt";
    archivos[1] = "p2.txt";
    archivos[2] = "p3.txt";
    archivos[3] = "p4.txt";
    archivos[4] = "p5.txt";
    archivos[5] = "p6.txt";
    archivos[6] = "p7.txt";
    archivos[7] = "p8.txt";
    archivos[8] = "p9.txt";
    archivos[9] = "p10.txt";
    archivos[10] = "p11.txt";
    archivos[11] = "p12.txt";
    archivos[12] = "p13.txt";
    archivos[13] = "p14.txt";
    archivos[14] = "p15.txt";

    for(int i = 0; i < 10000; i++){

        ifstream entrada(archivos[i].c_str());

        if(entrada.is_open()){

            while(!entrada.eof()){

                entrada >> nombreAux;
                entrada >> cedulaAux;
                entrada >> edadAux;

                datos[indice].setNombre(nombreAux);
                datos[indice].setCedula(cedulaAux);
                datos[indice].setEdad(edadAux);
                indice++;

            }
            entrada.close();
        }
    }

    int primoI = 0;

    for(int i = 0; i < indice; i++){

        if(esPrimo(datos[i].getEdad())){

            primo[primoI] = datos[i];
            primoI++;
        }
    }

    for(int i = 0; i < primoI; i++){
        for(int j = 0; j < primoI - i; j++){

            if(primo[j].getCedula() > primo[j + 1].getCedula()){

                Persona aux;
                aux = primo[j];
                primo[j] = primo[j + 1];
                primo[j + 1] = aux;
            }

        }
    }

    for(int i = 0; i < primoI; i++){

        salida << primo[i].getNombre() << endl;
        salida << primo[i].getCedula() << endl;
        salida << primo[i].getEdad() << endl;
    }

    salida.close();

    return 0;
}