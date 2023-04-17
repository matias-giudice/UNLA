#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "listaVoid.h"
using namespace std;

int main(){
    srand(time(0));
    cout << "------ Lista a void ---------" << endl;
    ListaVoid listaVoidEnteros = crearListaVoid(sizeof(float));

    float x = 5.2;
    insertarInicio(listaVoidEnteros, &x, sizeof(float));
    x = 34.6;
    insertarInicio(listaVoidEnteros, &x, sizeof(float));
    x = 75.2;
    insertarInicio(listaVoidEnteros, &x, sizeof(float));
    x = 66.2;
    insertarInicio(listaVoidEnteros, &x, sizeof(float));

    x = 91.2;
    insertar(listaVoidEnteros, 3, &x, sizeof(float));



    x = 45.1;
    insertarFinal(listaVoidEnteros, &x, sizeof(float));
    x = 145.1;
    insertarFinal(listaVoidEnteros, &x, sizeof(float));
    obtenerDatoEnParametro(listaVoidEnteros, 4, &x, sizeof(float));
    //removerInicio(listaEnteros, &x, sizeof(float));


    imprimirListaVoid(listaVoidEnteros);
    cout << endl << "Dato obtenido -> " << x << endl;

    cout << endl;
    cout << "\n\n" << endl;
    eliminarListaVoid(listaVoidEnteros);
    cout << endl;

    return 0;
}
