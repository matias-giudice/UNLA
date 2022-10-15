package test;
import modelo.Funciones;

import java.time.LocalDate;
import java.time.LocalTime;

public class TestFunciones {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LocalDate fecha = LocalDate.of(1900, 7, 14);
		LocalTime tiempo = LocalTime.of(5, 30, 45, 35); //05:30:45:35
		System.out.println(Funciones.esBisiesto(fecha.getYear()));
		System.out.println(Funciones.traerFechaCorta(fecha));
		System.out.println(Funciones.traerHoraCorta(tiempo));
		System.out.println(Funciones.esDiaHabil(fecha));
		System.out.println(Funciones.traerDiaDeLaSemana(fecha));
		System.out.println(Funciones.traerMesEnLetras(fecha));
		System.out.println(Funciones.traerFechaLarga(fecha));
		System.out.println(Funciones.traerCantDiasDeUnMes(fecha.getYear(), fecha.getMonthValue()));
		System.out.println(Funciones.aproximar2Decimal(445));
		System.out.println(Funciones.esNumero('8'));
		System.out.println(Funciones.esLetra('l'));
		System.out.println(Funciones.esCadenaNros("1234h"));
		System.out.println(Funciones.esCandenaLetras("abcd"));
		System.out.println(Funciones.convertirADouble(8));
		System.out.println(Funciones.convertirAInt("45"));
		System.out.println(Funciones.convertirAString(67));
	}
	
}
