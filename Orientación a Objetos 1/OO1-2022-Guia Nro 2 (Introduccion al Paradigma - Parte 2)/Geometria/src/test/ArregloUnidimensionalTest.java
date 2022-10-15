package test;

import modelo.ArregloUnidimensional;

public class ArregloUnidimensionalTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arrayInfo = {8, 2, 3, 10, 5, 5, 5, 7, 1, 2};
		ArregloUnidimensional objeto1 = new ArregloUnidimensional(arrayInfo);
		System.out.println(objeto1.toString());
		System.out.println("Menor: " + objeto1.traerElMenor());
		System.out.println("Mayor: " + objeto1.traerElMayor());
		System.out.println("Promedio: " + objeto1.calcularPromedio());
		
		int[] arrayOrdenamientoBurbujaAscendente = objeto1.ordenarAscendente(); //Llamamos al método para ordenar el array y guardarlo ordenado
		ArregloUnidimensional objeto2 = new ArregloUnidimensional(arrayOrdenamientoBurbujaAscendente);
		System.out.println("Ordenamiento Ascendente: " + objeto2.toString());
		
		int[] arrayOrdenamientoBurbujaDescendente = objeto1.ordenarDescendente(); //Llamamos al método para ordenar el array y guardarlo ordenado
		ArregloUnidimensional objeto3 = new ArregloUnidimensional(arrayOrdenamientoBurbujaDescendente);
		System.out.println("Ordenamiento Descendente: " + objeto3.toString());
		
		System.out.println("Frecuencia del numero " + 5 + " : " + objeto1.traerFrecuencia(5));
		
		System.out.println("Moda: " + objeto1.traerModa());
	}

}
