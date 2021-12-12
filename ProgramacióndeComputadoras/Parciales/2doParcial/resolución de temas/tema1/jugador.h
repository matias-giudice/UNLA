#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
//ESTRUCTURA A UTILIZAR
struct estructuraJugador{
    char nombre[30];
    int goles;
    int edad;
    float habilidad;
    float valor;
};

typedef struct estructuraJugador * Jugador;

//CONSTRUCTOR
Jugador crearJugador(char nombreJugador[30], int golesJugador, int edadJugador, float habilidadJugador);

//DESTRUCTOR
void destruirJugador(Jugador j);

//MOSTRAR
void mostrarJugadores(Jugador j[], int tam);

//GETTERS
char *getNombre(Jugador j);
int getGoles(Jugador j);
int getEdad(Jugador j);
float getHabilidad(Jugador j);
float getValor(Jugador j);

//SETTERS
void setNombre(Jugador j, int nuevoNombre[30]);
void setGoles(Jugador j, int nuevosGoles);
void setEdad(Jugador j, int nuevaEdad);
void setHabilidad(Jugador j, int nuevaHabilidad);
void setValor(Jugador j);

//BUSCADOR
void buscarJugador(Jugador j[], int tam, Jugador b);


#endif // JUGADOR_H_INCLUDED
