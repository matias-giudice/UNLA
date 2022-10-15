package test;

import modelo.Numero;

public class test4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Numero numero1 = new Numero(19);
		mostrarNumerosPrimosMellizos(numero1); //no lo pude hacer con while
	}
	public static void mostrarNumerosPrimosMellizos(Numero n) {
		// Create a boolean array "prime[0..n]"
        // and initialize all entries it as
        // true. A value in prime[i] will
        // finally be false if i is Not a
        // prime, else true.
        boolean prime[] = new boolean[n.getN() + 1];
         
        for (int i = 0; i <= n.getN(); i++)
            prime[i] = true;
 
        for (int p = 2; p * p <= n.getN(); p++) {
             
            // If prime[p] is not changed,
            // then it is a prime
            if (prime[p] == true) {
                 
                // Update all multiples of p
                for (int i = p * 2; i <= n.getN(); i += p)
                    prime[i] = false;
            }
        }
 
        // to check for twin prime numbers
        // display th twin prime
        for (int i = 2; i <= n.getN() - 2; i++) {
 
            if (prime[i] == true &&
                prime[i + 2] == true)
             
                // Display the result
                System.out.print(" (" + i + ", " +
                                   (i + 2) + ")");
        }
	}
}
