#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

struct EstructuraFecha{
    int dia;
    int mes;
    int anio;
    char formatoFecha[40];
};
typedef struct EstructuraFecha * Fecha;
Fecha cargarFecha(); //CONSTRUCTOR
Fecha cargarFechaPorParametros(int d, int m, int a);
Fecha cargarFechaPorTeclado();
int getDia(Fecha f);
int getMes(Fecha f);
int getAnio(Fecha f);
char *getFormatoFecha(Fecha f);
void setDia(Fecha f, int nuevoDia);
void setMes(Fecha f, int nuevoMes);
void setAnio(Fecha f, int nuevoAnio);
void destruirFecha(Fecha f); //DESTRUCTOR
void mostrarFecha(Fecha f);
#endif // FECHA_H_INCLUDED
