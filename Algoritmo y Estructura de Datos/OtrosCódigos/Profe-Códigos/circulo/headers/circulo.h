#ifndef _CIRCULO_H_
#define _CIRCULO_H_

typedef struct {
        float radio;
} Circulo;

float calcularSuperficie(Circulo circulo);

float calcularPerimetro(Circulo circulo);

float calcularDiametro(Circulo circulo);

float calcularLongitudArco(Circulo circulo, float angulo);

#endif /*_CIRCULO_H_*/
