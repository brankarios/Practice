/*Escriba una clase Corredor que contenga un atributo de tipo entero
denominado energia que indica el valor de la energía como un entero en
el rango [0, 100]. Al crear un corredor, se deberá indicar un valor para la energía inicial. Se debe verificar que el valor de energía no esté fuera del
rango [0, 100] a través de un procedimiento llamado verificarEnergia().
Si la cantidad pasada por parámetro no es un número entero mayor o igual
a cero, verificarEnergia() mostrará un mensaje al respecto y dejará la
energía en 0; si la energía recargada pasa del valor 100 se deberá dejar
a 100. El corredor tendrá un método recargarEnergia() a la que se le
pasará por parámetro la cantidad que será sumada al atributo energía.
La clase tendrá un método correr() que cada vez que se llame restará
10 puntos de energía del corredor. El método energiaAgotada() debe
verificar si la energía del corredor era menor que 10 al momento de llamar
a correr. Si es menor a 10, la energía quedará en 0, se mostrará un mensaje
indicando que se llegó al mínimo de energía y se mostrará cuál es la energía
del corredor. La clase también tendrá un método entrenar que permitirá al
corredor recuperar energía. Cada vez que se llama a entrenar la energía
del corredor. La clase también tendrá un método entrenar que permitirá al
corredor recuperar energía. Cada vez que se llama a entrenar la energía
del corredor aumentará 15 puntos, teniendo en cuenta que nunca puede
pasar de 100.
*/

#include <iostream>
using namespace std;


class Corredor{

    private:
    int energia;
    bool verificar;
    public:
    Corredor(int energia){

        this->energia = energia;
    }
    void verificarEnergia(){

        if(energia < 0 ){

            cout << "La energia no puede ser menor que cero gafoooo" << endl;
            energia = 0;
        }
        else if(energia > 100){

            energia = 100;
        }
    }
    void recargarEnergia(int recarga){

        energia += recarga;
    }
    void energiaAgotada(){

        if(energia < 10){

            verificar = false;
            cout << "El pana llego al minimo de energia" << endl;
            energia = 0;
            cout << energia << endl;
        }
        verificar = true;
    }
    void correr(){


        energiaAgotada();
        if(verificar == true){

          energia -= 10;

        }
    }
    void entrenar(){

        if(energia + 15 > 100){

            cout << "Nananai se pasa" << endl;
        }
        else{

            energia += 15;
        }
    }
    int getEnergia(){

        return energia;
    }

    void setEnergia(){

        cin >> energia;

    }

};

int main(){


    Corredor Usain_Bolt(0);
    
    Usain_Bolt.setEnergia();
    Usain_Bolt.verificarEnergia();
    Usain_Bolt.correr();
    Usain_Bolt.recargarEnergia(5);
    cout << Usain_Bolt.getEnergia() << endl;
    Usain_Bolt.correr();
    Usain_Bolt.entrenar();
    cout << Usain_Bolt.getEnergia() << endl;



    return 0;
}