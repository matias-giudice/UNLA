package test;

import modelo.Numero;

public class test3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Numero numero1 = new Numero(19);
		mostrarNumerosPrimos(numero1);
		//int contador = 0;
		//numero1.imprimirNumerosPrimos(19);
		/*for(int i=0; i<=numero1.getN(); i++) {
			if (numero1.esPrimo()) {
				contador++;
				System.out.print(String.valueOf(numero1) + ",");
			}
		}
		System.out.printf("\nTotal: %d", contador);*/
	}
	public static void mostrarNumerosPrimos(Numero n) {
		// Declaring the variables
        int x, y, flg;
 
        // Printing display message
        System.out.println(
            "All the Prime numbers within 1 and " + n
            + " are:");
 
        // Using for loop for traversing all
        // the numbers from 1 to N
        for (x = 1; x <= n.getN(); x++) {
        	// Omit 0 and 1 as they are
            // neither prime nor composite
            if (x == 1 || x == 0)
                continue;
 
            // Using flag variable to check
            // if x is prime or not
            flg = 1;
 
            for (y = 2; y <= x / 2; ++y) {
                if (x % y == 0) {
                    flg = 0;
                    break;
                }
            }
 
            // If flag is 1 then x is prime but
            // if flag is 0 then x is not prime
            if (flg == 1)
                System.out.print(x + " ");
        }
	}
}
