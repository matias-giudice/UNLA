package ejerciciosPropuestos4;

import java.util.Arrays;
import java.util.Scanner;

public class Ejercicio1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] sueldos = new int[10];
		
		Scanner scanner = new Scanner(System.in);
		
		for(int i = 0; i< sueldos.length; i++) {
			System.out.println("Ingrese un sueldo\nIngrese -1 para salir");
			sueldos[i]= scanner.nextInt();
			if(sueldos[i] == -1) {
				i=sueldos.length;
			}
		}
		
		System.out.println(Arrays.toString(sueldos));
		ordenamientoDecreciente(sueldos);
		System.out.println(Arrays.toString(sueldos));
		System.out.println("Max : " + obtenerMax(sueldos));
		System.out.println("Min : " + obtenerMin(sueldos));
		System.out.println("Media : " + obtenerMedia(sueldos));

	}

	public static boolean ordenamientoDecreciente(int[] sueldos) {
		int aux = 0;
		for(int i = 0; i<sueldos.length; i++) {
			for(int j= 0; j < (sueldos.length-1); j++) {
				if(sueldos[j] < sueldos[j+1]) {
					aux = sueldos[j];
					sueldos[j] = sueldos[j+1];
					sueldos[j+1] = aux;
				}
			}
		}
		return true;
	}
	
	public static int obtenerMax(int[] sueldos) {
		int max = sueldos[0];
		for(int i = 0; i < sueldos.length; i++) {
			if(sueldos[i]>max) {
				max=sueldos[i];
			}
		}
		return max;
	}
	
	public static int obtenerMin(int[] sueldos) {
		int min = sueldos[0];
		for(int i = 0; i < sueldos.length; i++) {
			if(sueldos[i]<min) {
				if(sueldos[i] == 0 || sueldos[i] == -1) {
					min = sueldos[i-1];
					i=sueldos.length;
				}else {
					min = sueldos[i];
				}
			}
		}
		return min;
	}
	
	public static float obtenerMedia(int[] sueldos) {
		int suma = 0;
		
		for(int i = 0; i < sueldos.length ; i++) {
			suma = suma + sueldos[i];
		}
		return (suma/sueldos.length);
	}
}
