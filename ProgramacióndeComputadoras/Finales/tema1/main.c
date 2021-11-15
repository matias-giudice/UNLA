#include <stdio.h>
#include <stdlib.h>
#include "estudiante.h"
#include "materia.h"
int main(){
    printf("ESTUDIANTE: MATIAS DAMIAN GIUDICE ---- DNI: 43.626.738 \n\n");
    printf("\n\nEJERCICIO 1 - Crear y agregar materias a estudiate");
    ///                     CARGA  TITULAR INSCRIPTOS
    Materia m1 = crearMateria(4, "Jorge G", 90);
    Materia m2 = crearMateria(8, "Federico R", 56);
    Materia m3 = crearMateria(6, "Roberto G", 105);
    Materia m4 = crearMateria(4, "Edgardo D", 75);

    Estudiante e1 = crearEstudiante("Estudiante 1", 23);
    agregarMateria(e1, m1);
    agregarMateria(e1, m2);
    agregarMateria(e1, m3);
    agregarMateria(e1, m4);
    mostrarEstudiante(e1);

    printf("\n\nEJERCICIO 2 - Mostrar estudiante con materias ordenadas por titular");
    ordenarMateriasPorTitular(e1);
    mostrarEstudiante(e1);

    printf("\n\nEJERCICIO 3 - Mostrar cantidad de alumnos");
    printf("\nLa cantidad de alumnos que cursan junto al estudiante: %d", cantidadDeAlumnos(e1));


    printf("\n\nEJERCICIO 4 - Eliminar Materia");
    eliminarMateria(e1, m3);
    mostrarEstudiante(e1);

    return 0;
}
