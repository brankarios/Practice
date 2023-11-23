#include <iostream>
using namespace std;

int answer[100][100]; //Matriz en donde la columna contiene los cables introducidos

int indexAns = 0;     //Indice donde se encuentra la respuesta (answer)

void ansUpdate(int solution[], int cableSize[], int inputCable){  //Si el backtracking encuentra una solucion, esta accion se actualiza con la mejor respuesta encontrada

    int defaultSize = 0;

    for(int i = 0; i < inputCable; i++){

        if(solution[i] == 1){

            defaultSize = defaultSize + cableSize[i];
        }
     }

    if(defaultSize == 100){

        for(int i = 0; i < inputCable; i++){

            answer[indexAns][i] = solution[i];
        }
        indexAns++;
    }
}

bool checkWelding(int solution[], int cableOnList, int cableSize[]){  //Funcion que verifica si la soldadura (suma) de los cables dados es 100 o menor

    int welding = 0;

    for(int i = 0; i <= cableOnList; i++){

        if(solution[i] == 1){
            welding = welding + cableSize[i];
        }
    }
    if(welding > 100){

        return false;
    }
    else{
        return true;
    }
}

void backtrackingSolutions(int solution[], int cableOnList, int cableSize[], int inputCable){

    int aux = 0;

    if(cableOnList > (inputCable - 1)){

        return;
    }

    do{
        solution[cableOnList] = aux;
        if(checkWelding(solution, cableOnList, cableSize)){

            if(cableOnList == (inputCable - 1)){
                
                ansUpdate(solution, cableSize, inputCable);
            }
            else{
                backtrackingSolutions(solution, (cableOnList + 1), cableSize, inputCable);
            }
        }
        aux++;
    }
    while(solution[cableOnList] != 1);

    solution[cableOnList] = -1;
}

int main(){

    int inputCable;

    cout << "Ingrese la cantidad de cables que hay:" << endl; cin >> inputCable;

    int cableSize[inputCable] = {50,50,50,50};

    int selection[inputCable];

    backtrackingSolutions(selection, 0, cableSize, inputCable);

    int bestWelding = -1;

    if(indexAns > 0){

        for(int i = 0; i < indexAns; i++){
            
            int counter = 0;

            for(int j = 0; j < inputCable; j++){

                if(answer[i][j] == 1){

                    counter++;
                }
            }

            if((bestWelding == -1) || (counter < bestWelding)){

                bestWelding = counter;
            }
        }

        cout << "Mejores opciones conseguidas: " << bestWelding << endl;

        for(int i = 0; i < indexAns; i++){

            int counter = 0;

            for(int j = 0; j < inputCable; j++){
                
                if(answer[i][j] == 1){

                    counter++;
                }
            }

            if(counter == bestWelding){

                cout << "Opcion " << i + 1 << ": Suma de los cables que midan 100 metros: " << endl;
                
                for(int k = 0; k < inputCable; k++){

                    if(answer[i][k] == 1){

                        cout << "El cable " << k + 1 << ": " << cableSize[k] << endl;
                    }
                }
            }
        }
    }

    else{

        cout << "Ninguno de los pedazos de cables dados soldados miden 100 metros" << endl;
    }

    return 0;
}



