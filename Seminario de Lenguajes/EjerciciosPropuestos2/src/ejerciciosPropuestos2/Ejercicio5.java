package ejerciciosPropuestos2;

import java.util.Scanner;

public class Ejercicio5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese el número: ");
		int filas = leer.nextInt();
		
        int[] a = new int[1];
        for(int i=1; i<=filas; i++) {
        	int[] x = new int[i];
            for(int j=0; j<i; j++) {
            	if(j == 0 || j == (i - 1)) {
                    x[j] = 1;
                } else {
                    x[j] = a[j] + a[j - 1];
                }
                System.out.print(x[j] + " ");
            }
            a = x;
            System.out.println();
        }
	}
}
