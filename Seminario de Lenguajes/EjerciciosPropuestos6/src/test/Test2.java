package test;

import modelo.Punto;

public class Test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Punto punto1 = new Punto(4.4, 8.1);
		Punto punto2 = new Punto(2.4, 6.3);
		System.out.println("Punto1: " + punto1.toString()); //toString() = muestra() => muestra punto 
		System.out.println("Punto2: " + punto2.toString());
		System.out.println("\nDesplaza x del Punto1: ");
		punto1.desplaza(7.0);
		System.out.println("\nDesplaza x e y del Punto1: ");
		punto1.desplaza(8.1, 5.8);
		System.out.println("\nDistancia Euclidea: " + punto1.distanciaEuclidea(punto2));
	}

}
