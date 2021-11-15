#include <stdio.h>
#include <stdlib.h>
#include "carrera.h"
#include "materia.h"
int main(){
    printf("ESTUDIANTE: MATIAS DAMIAN GIUDICE ---- DNI: 43.626.738 \n\n");
    printf("\n\nEJERCICIO 1 - Crear y agregar materias a carrera");
    ///                     CARGA  TITULAR INSCRIPTOS
    Materia m1 = crearMateria(8, "Nico Perez", 80);
    Materia m2 = crearMateria(8, "Ale Vranic", 56);
    Materia m3 = crearMateria(6, "Luis Millan", 105);
    Materia m4 = crearMateria(4, "Lau Loidi", 75);

    Carrera c1 = crearCarrera("Lic. Sistemas", 5);
    agregarMateria(c1, m1);
    agregarMateria(c1, m2);
    agregarMateria(c1, m3);
    agregarMateria(c1, m4);
    mostrarCarrera(c1);

    printf("\n\nEJERCICIO 2 - Mostrar carrera con materias ordenadas por titular");
    ordenarMateriasPorTitular(c1);
    mostrarCarrera(c1);

    printf("\n\nEJERCICIO 3 - Mostrar cantidad de alumnos");
    printf("\nLa cantidad de alumnos de la carrera es: %d", cantidadDeAlumnos(c1));


    printf("\n\nEJERCICIO 4 - Eliminar Materia");
    eliminarMateria(c1, m3);
    mostrarCarrera(c1);

    return 0;
}
