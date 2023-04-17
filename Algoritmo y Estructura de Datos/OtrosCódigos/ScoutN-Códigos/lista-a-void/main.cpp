#include <iostream>
#include <time.h>
#include "lista-void.h"

using namespace std;

float numAleatorio();
void mostarLista(Lista lista);

int main()
{
    srand(time(0));
    cout << "------ Lista a void ---------" << endl;

    Lista listaEnteros = crearLista(sizeof(float));



    float x = 5.2;
    insertarInicio(listaEnteros, &x, sizeof(float));
    x = 34.6;
    insertarInicio(listaEnteros, &x, sizeof(float));
    x = 75.2;
    insertarInicio(listaEnteros, &x, sizeof(float));
    x = 66.2;
    insertarInicio(listaEnteros, &x, sizeof(float));

    x = 91.2;
    insertar(listaEnteros, 3, &x, sizeof(float));



    x = 45.1;
    insertarFinal(listaEnteros, &x, sizeof(float));
    x = 145.1;
    insertarFinal(listaEnteros, &x, sizeof(float));
    obtenerDatoEnParametro(listaEnteros, 4, &x, sizeof(float));
    //removerInicio(listaEnteros, &x, sizeof(float));


    mostarLista(listaEnteros);
    cout << endl << "Dato obtenido -> " << x << endl;

    cout << endl;
    return 0;
}

float numAleatorio(){
    return rand()%40 / 10;
}

void mostarLista(Lista lista){

    printf("[ ");
    for (int i=0; i<obtenerTamanio(lista); i++) {

        float info;
        obtenerDatoEnParametro(lista, i, &info, sizeof(float));
        printf("%.1f ", info);
    }
    printf("]");
}
