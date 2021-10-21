#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

struct EstructuraFecha{
    int dia;
    int mes;
    int anio;
};
typedef struct EstructuraFecha * Fecha;
Fecha cargarFecha();
Fecha cargarFechaPorParametros(int d, int m, int a);
Fecha cargarFechaPorTeclado();
void mostrarFecha(Fecha f);
int getDia(Fecha f);
int getMes(Fecha f);
int getAnio(Fecha f);
void setDia(Fecha f, int nuevoDia);
void setMes(Fecha f, int nuevoMes);
void setAino(Fecha f, int nuevoAnio);
#endif // FECHA_H_INCLUDED
