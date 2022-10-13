package ejerciciosPropuestos4;

import java.util.Arrays;
import java.util.Scanner;

public class Ejercicio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = new int [5];
		
		Scanner sc = new Scanner(System.in);
		
		for(int i = 0; i < array.length; i++) {
			System.out.println("Ingrese un numero: ");
			array[i]=sc.nextInt();
		}
		int[] arrayCopy = Arrays.copyOf(array, 5);
		
		System.out.println(Arrays.toString(array));
		ordenamientoCreciente(arrayCopy);
		System.out.println(Arrays.toString(arrayCopy));
		mostrarIndice(array,arrayCopy);
	}

	public static boolean ordenamientoCreciente(int[] sueldos) {
		int aux = 0;
		for(int i = 0; i<sueldos.length; i++) {
			for(int j= 0; j < (sueldos.length-1); j++) {
				if(sueldos[j] > sueldos[j+1]) {
					aux = sueldos[j];
					sueldos[j] = sueldos[j+1];
					sueldos[j+1] = aux;
				}
			}
		}
		return true;
	}
	
	public static void mostrarIndice(int[] arrayOriginal, int[] arrayOrdenado) {
		int lon = arrayOriginal.length;

		int[] index = new int[lon];
		Arrays.fill(index, 0);

		boolean[] esta = new boolean[lon];
		Arrays.fill(esta, false);

		for (int i = 0; i < arrayOrdenado.length; i++) {
			int in = 0;
			boolean stay = false;
			while (in < arrayOrdenado.length & !stay) {
				if ((arrayOriginal[in] == arrayOrdenado[i]) & !esta[in]) {
					esta[in] = true;
					index[i] = in;
					stay = true;
				} else {
					in++;
				}
			}
		}
		System.out.print("[");
		for(int i = 0; i < arrayOrdenado.length; i++) {
			System.out.print(" "+index[i]+" ");
		}
		System.out.print("]");
	}
}
