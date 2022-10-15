package test;

import java.time.LocalDate;
import java.time.LocalTime;

import modelo.Funciones;

public class TestLocalDateyLocalTime {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//LocalDate date = LocalDate.now(); //-> dia de hoy
		LocalDate fecha = LocalDate.of(2048, 4, 19);
		System.out.println(Funciones.esDiaHabil(fecha));
		System.out.println(Funciones.esMesHabil(fecha));
		System.out.println(Funciones.esAnioHabil(fecha));
		
		//LocalTime time = LocalTime.now(); //-> hora de hoy
		LocalTime tiempo = LocalTime.of(7, 30, 45, 35); //05:30:45:35
		LocalTime tiempo2 = LocalTime.of(8, 30, 45, 35); //05:30:45:35
		System.out.println(tiempo.getHour()); //5
		System.out.println(tiempo.getMinute()); //30
		System.out.println(tiempo.getSecond()); //45
		System.out.println(tiempo.getNano()); //35
		
		System.out.println(Funciones.sumarHora(tiempo));
		System.out.println(Funciones.restarHora(tiempo));
		System.out.println(Funciones.compararHora(tiempo, tiempo2));
	}

}
