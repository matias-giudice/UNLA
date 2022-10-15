package test;

import modelo.Numero;

public class TestNumero {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Numero numero1 = new Numero(4);
		System.out.println("Suma: " + numero1.sumar(4));
		System.out.println("Multiplicación: " + numero1.multiplicar(4));
		System.out.println("Número Par (true=par || false=no par): " + numero1.esPar());
		System.out.println("Número Primo (true=primo || false=compuesto/no primo): " + numero1.esPrimo());
		System.out.println("Convertir a string: " + numero1.convertirAString());
		System.out.println("Convertir a double: " + numero1.convertirDouble());
		System.out.println("Potencia: " + numero1.calcularPotencia(2));
		System.out.println("Pasar a base2 (binario): " + numero1.pasarBase2());
		System.out.println("Factorial: " + numero1.calcularFactorial());
		/*System.out.println("Número combinatorio: " + numero1.numeroCombinatorio(2));*/ //Da el valor pero tengo que comentar las otras funciones para que funcione porque toma el valor de las funciones anteriores o da error (0)
	}

}
