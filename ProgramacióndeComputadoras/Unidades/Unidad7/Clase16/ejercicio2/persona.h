#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#define TAM 30
struct EstructuraPersona;

typedef struct EstructuraPersona * Persona;

Persona cargarPersona();
Persona cargarPersonaPorParametros(int d, int e, char n[TAM]);
Persona cargarPersonaPorTeclado();

int getDni(Persona p);
int getEdad(Persona p);
char *getNombre(Persona p);

void setDni(Persona p, int nuevoDni);
void setEdad(Persona p, int nuevoEdad);
void setNombre(Persona p, int nuevoNombre[TAM]);

void destruirPersona(Persona p);

void mostrarPersona(Persona p);


#endif // PERSONA_H_INCLUDED
