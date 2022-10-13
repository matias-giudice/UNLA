package test;

import modelo.Circulo;
import modelo.Punto;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circulo c1 = new Circulo(new Punto(0, 0), 1);

		Circulo c2 = new Circulo(new Punto(1, 1), 1.5);
		
		System.out.println(c1.toString());
		System.out.println(c2.toString());
		
		System.out.println(c1.obtenerDiametro()); // 2.0
		System.out.println(c1.obtenerArea()); // 3,14...
		System.out.println(c1.obtenerPerimetro()); // 6,28...
		
		System.out.println(c1.intersectaCon(c2)); // true
	}

}
