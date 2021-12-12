#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct estructuraJugador{
    char nombre[30];
    int goles;
    int edad;
    float habilidad;
    float valor;
};
typedef struct estructuraJugador * Jugador;

Jugador crearJugador(char n[30], int g, int e, float h);

void mostrarJugadores(Jugador j[], int t);
void escribirTXT(Jugador j, int t);

#endif // JUGADOR_H_INCLUDED
