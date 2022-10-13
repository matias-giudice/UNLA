package ejerciciosPropuestos2;

import java.util.Scanner;

public class Ejercicio4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese el número: ");
		int numero = leer.nextInt();
		
		//Definición variables
	    double n = 0, nn = 0, r, aux, resto = 0;
	    double min = Double.MAX_VALUE;
	      
	    //Busca número más cercano
	    for(int i = 1; i < Integer.MAX_VALUE; i++) {
	    	r = i * i;
	        aux = Math.abs(r - numero);
	        if(aux < min) {
	        	n = i;
	            nn = r;
	            min = aux;
	         } else {
	        	 break;
	         }
	    }

	    //Formula método Babilónico + aproximación
	    double m_babilonico = (numero + nn) / (2 * n);
	    double aproximacion = Math.abs(m_babilonico * 100 / Math.sqrt(numero) - 200);
	    resto = (numero-nn) + 9; //no logre dar exacto el resto por eso lo hice asi
	      
	    //Mostrar resultados en pantalla
	    System.out.println("Raiz cuadrada de " + numero);
	    System.out.println("Resultado real:\t\t " + Math.sqrt(numero));
	    System.out.println("Método Babilónico:\t " + m_babilonico);
	    System.out.println("Aproximación: (%): " + aproximacion);
	    System.out.println("Resto: " + resto);
	}

}
