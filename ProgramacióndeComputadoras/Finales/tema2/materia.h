#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED
#define TAM 30

//ESTRUCTURA A UTILIZAR
struct estructuraMateria;
typedef struct estructuraMateria * Materia;

//CONSTRUCTOR
Materia crearMateria(int cargaMateria, char titularMateria[TAM], int cantMateria);

//DESTRUCTOR
void destruirMateria(Materia m);

//MOSTRAR
void mostrarMateria(Materia m);

//GETTERS
int getCarga(Materia m);
char *getTitular(Materia m);
int getCant(Materia m);

//SETTERS
void setCarga(Materia m, int nuevaCarga);
void setTitular(Materia m, char nuevoTitular[TAM]);
void setCant(Materia m, int nuevaCant);

#endif // MATERIA_H_INCLUDED
