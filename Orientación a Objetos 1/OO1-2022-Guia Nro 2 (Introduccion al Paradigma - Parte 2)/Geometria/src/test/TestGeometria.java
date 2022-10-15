package test;

import modelo.Circulo;
import modelo.Punto;

public class TestGeometria {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*Punto punto1 = new Punto(1.80, 5.78);
		Punto punto2 = new Punto(1.80, 5.78);
		System.out.println(punto1.equals(punto2)); //(comparación por coordenadas del punto)
		System.out.println(punto1.toString());*/
		/*Punto punto1 = new Punto(10,10);
		punto1.mover(5,2);
		System.out.println(punto1.toString());*/
		Punto punto1 = new Punto(10,10);
		Circulo circulo1 = new Circulo(punto1, 10); // origen y radio
		Circulo circulo2 = new Circulo(punto1, 20);
		circulo1.mover(5,0);
		System.out.println(circulo1.toString());
		System.out.println(circulo2.toString());
	}

}
