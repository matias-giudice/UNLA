#ifndef ARBOLES_H_INCLUDED
#define ARBOLES_H_INCLUDED
#define TAM 100

struct estructuraArbol{
    char nombre[50];
    int edad;
    float altura;
};
typedef struct estructuraArbol Arbol;
Arbol arboles[TAM];

void agregarArbol(char str[], int edad, float altura);
void moficiarArbol(char str[]);
void eliminarArbol(char str[]);

void actualizarStruct(void);

void get_nombre(char str[], char n[]);
int get_edad(char str[]);
float get_altura(char str[]);

void verArbol(void);

#endif // ARBOLES_H_INCLUDED
