#include "headers/circulo.h"

float calcularSuperficie(Circulo circulo){
      return 3.14159*circulo.radio*circulo.radio;
}

float calcularPerimetro(Circulo circulo){
      return 2*3.14159*circulo.radio;
}

float calcularDiametro(Circulo circulo){
      return circulo.radio*2;
}      

float calcularLongitudArco(Circulo circulo, float angulo){
      return calcularPerimetro(circulo)*(angulo/360);
}
