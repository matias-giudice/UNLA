package ejerciciosPropuestos2;

import java.util.Scanner;

public class Ejercicio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese la hora: ");
		int hora = leer.nextInt();
		System.out.println("Ingrese los minutos: ");
		int minutos = leer.nextInt();
		System.out.println("Ingrese los segundos: ");
		int segundos = leer.nextInt();
		System.out.println("Ingresar cant. de segundos para incrementar la hora ingresada anteriormente: ");
		int cantidadSeg = leer.nextInt();
		
		if(hora > 23 || hora < 0 || minutos > 60 || minutos < 0) {
			System.out.println("Vuelva a ingresar la hora nuevamente. ");
		} else {
			int nuevaHora = hora + cantidadSeg;
		    int nuevosMinutos = minutos + cantidadSeg;
		    int nuevosSegundos = segundos + cantidadSeg;

		    while(nuevosSegundos >= 60) {
		    	nuevosSegundos = nuevosSegundos - 60;
		    	nuevosMinutos = nuevosMinutos + 1;
		    }
		    while(nuevosMinutos >= 60) {
		    	nuevosMinutos = nuevosMinutos - 60;
		    	nuevaHora = nuevaHora + 1;
		    }
			
		    System.out.println("Hora: " + hora + ":" + minutos + ":" + segundos);
		    System.out.println("Segundos incrementados: " + cantidadSeg);
		    System.out.println("Hora actual: " + nuevaHora + ":" + nuevosMinutos + ":" + nuevosSegundos);
		}
	}

}
