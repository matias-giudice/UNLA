package test;

import modelo.Circulo;
import modelo.Punto;

public class TestPunto {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//(comparación por coordenadas del punto)
		/*System.out.println("Escenario 1");
		Punto punto1 = new Punto(1.80, 5.78);
		Punto punto2 = new Punto(7.40, 9.10);
		System.out.println("Punto 1: " + punto1.toString());
		System.out.println("Punto 2: " + punto2.toString());
		System.out.println("Verificar si los puntos son iguales (true=iguales || false=diferentes): " + punto1.equals(punto2)); 
		System.out.println("Distancia entre los puntos 1 y 2: " + punto1.calcularDistancia(punto2));
		System.out.println("Escenario 2");
		Punto punto3 = new Punto(1.80, 1.80);
		Punto punto4 = new Punto(1.80, 1.80);
		System.out.println("Punto 1: " + punto3.toString());
		System.out.println("Punto 2: " + punto4.toString());
		System.out.println("Verificar si los puntos son iguales (true=iguales || false=diferentes): " + punto3.equals(punto4));
		System.out.println("Distancia entre los puntos 3 y 4: " + punto3.calcularDistancia(punto4));*/
		/*Punto punto1 = new Punto(10.00, 10.00);
		Punto punto2 = new Punto(7.40, 9.10);
		System.out.println("Punto 1: " + punto1.toString());
		punto1.mover(5.0, 10);
		System.out.println("Punto 1(movido): " + punto1.toString());*/
		/*Punto punto1 = new Punto(10,10);
		Circulo circulo1 = new Circulo(punto1, 10); // origen y radio
		Circulo circulo2 = new Circulo(punto1, 20);
		System.out.println("(true=iguales || false=diferentes): " + circulo1.equals(circulo2)); //no me lo toma
		circulo1.mover(5,0);
		System.out.println(circulo1.toString());
		System.out.println(circulo2.toString());*/
		Punto punto1 = new Punto(10,10);
		Circulo circulo1 = new Circulo(punto1, 10); // origen y radio
		Circulo circulo2 = new Circulo(punto1, 20);
		System.out.println(circulo1.calcularPerimetro());
		System.out.println(circulo1.calcularArea());
		System.out.println(circulo1.calcularDistancia(circulo2));
	}

}
