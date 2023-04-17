#include <iostream>
#include "headers/circulo.h"

using namespace std;

// ESTA ES UNA POSIBLE FORMA DE ESTRUCTURAR CUALQUIER APLICACION
// NO USAR VARIABLES GLOBALES!!!
int main(int argc, char *argv[]) {
    // declaro e inicializo las variables.
    int opcion = 0;
    bool seguir = true;
    float grados = 0;
    
    Circulo circulo;
    
    cout << "Ingrese el radio del circulo" << endl;
    cin >> circulo.radio;
    
    // Itero hasta que no quiera seguir.
    while (seguir == true) {
          cout << "\n=========================================\n ingrese la opción deseada" << endl;
          cout << "0.- Salir" << endl;
          cout << "1.- Informar el radio del círculo" << endl;
          cout << "2.- Informar el perímetro del círculo" << endl;
          cout << "3.- Informar el diámetro del círculo" << endl;
          cout << "4.- Informar el área del círculo" << endl;
          cout << "5.- Informar longitud de un arco" << endl;
          cin >> opcion;
                    
          switch (opcion) {
                 case 0:
                      cout << "Gracias por utilizar nuestro sistema" << endl;
                      seguir = false;
                 break;
                 case 1:
                      cout << "El radio es: " << circulo.radio << endl;
                 break;
                 case 2:
                      cout << "El perimetro es: " << calcularPerimetro(circulo) << endl;
                 break;
                 case 3:
                      cout << "El diámetro es: " << calcularDiametro(circulo) << endl;
                 break;
                 case 4:
                      cout << "El área es: " << calcularSuperficie(circulo) << endl;
                 break;
                 case 5:
                      cout << "Ingrese los grados del arco" << endl;
                      cin >> grados;
                      cout << "La longitud del arco es: " << calcularLongitudArco(circulo, grados) << endl;
                 break;
                 default:
                      cout << "Opción incorrecta, vuelva a intentar" << endl;
                 break;
          }
    }
    
    return 0;
}
