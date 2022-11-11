package modelo;

import java.time.LocalDate;
import java.time.LocalTime;

public class Funciones {
	// ->LocalDate [fecha]
	public static int traerDia(LocalDate fecha) {
		return fecha.getDayOfWeek().getValue(); 
	}
	public static int traerMes(LocalDate fecha) {
		return fecha.getMonthValue();
	}
	public static int traerAnio(LocalDate fecha) {
		return fecha.getYear();
	}
	public static String traerDiaDeLaSemana(LocalDate fecha) {
		return fecha.getDayOfWeek().toString();
	}
	public static String traerMesEnLetras (LocalDate fecha) {
		return fecha.getMonth().toString();
	}
	public static String traerFechaCorta (LocalDate fecha) {
		return fecha.getDayOfMonth()+"/"+fecha.getMonthValue()+"/"+fecha.getYear();
	}
	public static String traerFechaLarga (LocalDate fecha) {
		String[] dias = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
		String[] meses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
		String dia = dias[fecha.getDayOfWeek().getValue()-1];
		String mes = meses[fecha.getMonthValue()-1];
		return dia +" "+ fecha.getDayOfMonth() + " de " + mes + " de " + fecha.getYear();
	}
	public static int traerCantDiasDeUnMes(int anio, int mes) {
		LocalDate fecha = LocalDate.of(anio, mes, 1);
		return fecha.lengthOfMonth();
	}
	public static boolean esDiaHabil(LocalDate fecha){
		int dia = fecha.getDayOfWeek().getValue(); 
		return (dia>=1 && dia<=5);
	}
	public static boolean esMesHabil(LocalDate fecha){
		int mes = fecha.getMonthValue();
		return (mes>=1 && mes<=5);
	}
	public static boolean esAnioHabil(LocalDate fecha){
		int anio = fecha.getYear();
		return (anio>=1990 && anio<=2022);
	}
	public static LocalDate sumarDias(LocalDate fecha) {
		return fecha.plusDays(4);
	}
	public static LocalDate restarDias(LocalDate fecha) {
		return fecha.minusDays(4);
	}
	public static LocalDate sumarMeses(LocalDate fecha) {
		return fecha.plusMonths(4);
	}
	public static LocalDate restarMeses(LocalDate fecha) {
		return fecha.minusMonths(4);
	}
	public static LocalDate sumarAnios(LocalDate fecha) {
		return fecha.plusYears(4);
	}
	public static LocalDate restarAnios(LocalDate fecha) {
		return fecha.minusYears(4);
	}
	public static boolean validarFechaAntesQueOtra(LocalDate fecha, LocalDate fechaNueva) {
		return fecha.isBefore(fechaNueva);
	}
	public static boolean validarFechaDespuesQueOtra(LocalDate fecha, LocalDate fechaNueva) {
		return fecha.isAfter(fechaNueva);
	}
	public static boolean validarSiFechaEsBisiesto(LocalDate fecha) {
		return fecha.isLeapYear();
	}
	public static boolean esBisiesto (int anio) {
		return (anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0)); 
	}
	public static int compararFecha(LocalDate fecha, LocalDate fechaNueva) {
		return fecha.compareTo(fechaNueva);
	}
	public static boolean fechaExisteEntre(LocalDate fechaAComparar, LocalDate fechaInicio, LocalDate fechaFin) {
		boolean existe = false;
		if ((fechaAComparar.isAfter(fechaInicio) || fechaAComparar.isEqual(fechaInicio))
				&& (fechaAComparar.isBefore(fechaFin) || fechaAComparar.isEqual(fechaFin))) {
			existe = true;
		}
		return existe;
	}
		
	// ->LocalTime [hora]
	public static int traerHora(LocalTime hora) {
		return hora.getHour(); 
	}
	public static int traerMinutos(LocalTime hora) {
		return hora.getMinute(); 
	}
	public static int traerSegundos(LocalTime hora) {
		return hora.getSecond(); 
	}
	public static int traerNanos(LocalTime hora) {
		return hora.getNano(); 
	}
	public static String traerHoraCorta(LocalTime hora) {
		return hora.getHour()+":"+hora.getMinute()+":"+hora.getSecond();
	}
	public static LocalTime sumarHoras(LocalTime hora) {
		return hora.plusHours(4);
	}
	public static LocalTime restarHoras(LocalTime hora) {
		return hora.minusHours(4);
	}
	public static LocalTime sumarMinutos(LocalTime hora) {
		return hora.plusMinutes(4);
	}
	public static LocalTime restarMinutos(LocalTime hora) {
		return hora.minusMinutes(4);
	}
	public static LocalTime sumarSegundos(LocalTime hora) {
		return hora.plusSeconds(4);
	}
	public static LocalTime restarSegundos(LocalTime hora) {
		return hora.minusSeconds(4);
	}
	public static LocalTime sumarNanos(LocalTime hora) {
		return hora.plusNanos(4);
	}
	public static LocalTime restarNanos(LocalTime hora) {
		return hora.minusNanos(4);
	}
	public static boolean validarHoraAntesQueOtra(LocalTime hora, LocalTime horaNueva) {
		return hora.isBefore(horaNueva);
	}
	public static boolean validarHoraDespuesQueOtra(LocalTime hora, LocalTime horaNueva) {
		return hora.isAfter(horaNueva);
	}
	public static int compararHora(LocalTime hora, LocalTime horaNueva) {
		return hora.compareTo(horaNueva);
	}
	public boolean sonHorasIguales(LocalTime horaInicio, LocalTime horaFin) {
		boolean iguales = false;
		if (horaInicio.getHour() == horaFin.getHour() && horaInicio.getMinute() == horaFin.getMinute()) {
			iguales = true;
		}
		return iguales;
	}
	//public boolean agregarDispositivo(String nombre, String codigo, Empresa empresa) throws Exception {int ultimoId = 1;if (!listaDispositivos.isEmpty()) {ultimoId = listaDispositivos.get(listaDispositivos.size() - 1).getId() + 1;}return listaDispositivos.add(new Dispositivo(ultimoId, nombre, codigo, empresa));}
	//Dispositivo traerDispositivo(String codigo) {Dispositivo buscado = null;int i = 0;while (i < listaDispositivos.size() && buscado == null) {Dispositivo comparado = listaDispositivos.get(i);if (comparado.getCodigo().equalsIgnoreCase(codigo)) {buscado = comparado;}i++;}return buscado;}
	//public Metrica traerMetrica(LocalDate fecha, LocalTime hora) {Metrica buscado = null;int i = 0;while (i < listaMetricas.size() && buscado == null) {Metrica comparado = listaMetricas.get(i);if (comparado.getFecha().isEqual(fecha) && sonHorasIguales(hora, comparado.getHora()))buscado = comparado;i++;}return buscado;}
	//public List<Metrica> traerMetricas(LocalDate desde,LocalDate hasta){List<Metrica> coincidentes = new ArrayList<Metrica>();for(int i = 0;i<listaMetricas.size();i++) {Metrica comp = listaMetricas.get(i);if(fechaExisteEntre(comp.getFecha(), desde, hasta))coincidentes.add(comp);}return coincidentes;}
	//public List<Metrica> traerMetricas(Dispositivo dispositivo, LocalDate desde, LocalDate hasta, int menorAValor){List<Metrica> coincidentes = new ArrayList<Metrica>();List<Metrica> auxList = dispositivo.traerMetricas(desde, hasta);for(int i = 0;i<auxList.size();i++) {Metrica comparado = auxList.get(i);if(comparado.getValor() < menorAValor)coincidentes.add(comparado);}return coincidentes;}
	//public boolean validarCodigo(String codigo) throws Exception {if(codigo.length() != 5) {throw new Exception("Error: codigo con cantidad incorrecta de caracteres");}char[] codAux = codigo.toCharArray();if (codAux[0] != 'A' && codAux[0] != 'B') {throw new Exception("Error: el codigo debe iniciar con A o B");}boolean cuatroNumeros = true;int i = 1;Integer suma = 0;while (i < codigo.length() && cuatroNumeros == true) {if (!Character.isDigit(codAux[i])) {cuatroNumeros = false;} else {suma += Integer.valueOf(Character.toString(codAux[i]));}i++;}if (!cuatroNumeros) {throw new Exception("Error: codigo no cumple con el formato A1111");}if (codAux[0] == 'A') {if (suma.intValue() % 2 != 0) {throw new Exception("Error: codigo invalido");}} else {if (suma.intValue() % 2 == 0) {throw new Exception("Error: codigo invalido");}}return true;}
	public static double aproximar2Decimal (double valor) {
		return Math.round(valor*100.0)/100.0;
	}
	public static boolean esNumero(char c) {
		return Character.isDigit(c);
	}
	public static boolean esLetra(char c) {
		return Character.isLetter(c);
	}
	public static boolean esCadenaNros(String cadena) {
		boolean esNum = true;
		int i=0;
		while(i < cadena.length() && esNum){ // 1234
			if(esLetra(cadena.charAt(i))){
				esNum = false;
			}
			i++;
		}
		return esNum;
	}
	public static boolean esCandenaLetras(String cadena) {
		boolean esLetra = true;
		int i=0;
		while(i < cadena.length() && esLetra) {	// abcd
			if(esNumero(cadena.charAt(i))) {
				esLetra = false;
			}
		}
		return esLetra;
	}
	public static double convertirADouble(int n) {
		return (double)n;
	}
	public static double convertirAInt(String cadena) {
		return Integer.parseInt(cadena);
	}
	public static String convertirAString(int n) {
		return String.valueOf(n);
	}

}
