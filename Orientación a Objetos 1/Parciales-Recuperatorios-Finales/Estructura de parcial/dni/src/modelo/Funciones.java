package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.time.Period;
import java.util.ArrayList;
import java.util.List;

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
		//public double temperaturaCorregidaPorAltura () {return (temperatura + (estacion.getAltura() * 6.5) / 1000);}
		//public double distanciaConEstacion (Estacion estacion) {double x = Math.pow(estacion.getLongitud() - longitud, 2);double y = Math.pow(estacion.getLatitud() - latitud, 2);return Math.sqrt(x + y);}
		//public boolean equals (Estacion est) {Ya que no hay dos estaciones con el mismo nombre puedo hacer solo esta comparaciónreturn est.getNombre().equals(nombre);}
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
		//public boolean agregarEmpleado (String nombre, String apellido, long dni, LocalDate fechaNacimiento, long legajo, float sueldoMensual) throws Exception {int i = 0;int idEmpleado = 1;while (i < listaPersonas.size()) {if (listaPersonas.size() > 0) {idEmpleado = listaPersonas.get(listaPersonas.size() - 1).getIdPersona() + 1;if (listaPersonas.get(i).getApellido() == apellido) {throw new Exception("Ya existe esa empleado.");}}i++;}return listaPersonas.add(new Empleado(idEmpleado, nombre, apellido, dni, fechaNacimiento, legajo, sueldoMensual));}
		//public Empleado traerEmpleado(long legajo) {int i = 0;Empleado encontrado = null;while (i < listaPersonas.size() && encontrado == null) {if (listaPersonas.get(i) instanceof Empleado) {Empleado empleado = (Empleado) listaPersonas.get(i);if (empleado.getLegajo() == legajo) {encontrado = empleado;}}i++;}return encontrado;}
		//public List<Servicio> traerServiciosPorPrecioFinal(double mayorIgualA) {List<Servicio> servicios = new ArrayList<Servicio>();for (int i=0; i<lstServicios.size(); i++) {if (lstServicios.get(i).isCheckOut() && lstServicios.get(i).calcularPrecioFinal() > mayorIgualA) {servicios.add(lstServicios.get(i));}}return servicios;}
		//public List<Campamento> traerCampamentosPorDias(int mayorIgualA) {List<Campamento> campamentos = new ArrayList<Campamento>();for (int i = 0; i < lstServicios.size(); i++) {if (lstServicios.get(i) instanceof Campamento) {Campamento auxiliar = (Campamento) lstServicios.get(i);if (auxiliar.cantidadDias() >= mayorIgualA) {campamentos.add(auxiliar);}}}return campamentos;}
		//this.lstPersonas = new ArrayList<Persona>();
		//public boolean esValidoDigitoControl(String codIngreso) {int suma=0, dVerificador=0;int numero = Integer.parseInt(codIngreso);int ultimoNumero = numero % 10;for(int i=0; i<codIngreso.length()-1; i++) {String num = String.valueOf(Integer.toString(numero).charAt(i));suma += Integer.parseInt(num);}dVerificador = suma % 10;return dVerificador == ultimoNumero;}
		//LocalDate.of(2022, 10, 2)LocalDate date = LocalDate.now();
		//LocalTime.of(5, 30, 45, 35);LocalTime time = LocalTime.now();
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
		//@Overridepublic String toString() {return "Campamento ["+ super.toString() + ", fechaEgreso=" + fechaEgreso + ", cantCarpas=" + cantCarpas + ", precioCarpa=" + precioCarpa+ "]";}
		//public int cantidadDias() {int cantDias = 0;if (fechaEgreso == null || !isCheckOut()) {cantDias = Period.between(fechaIngreso, LocalDate.of(2022, 10, 18)).getDays();cantDias += LocalDate.of(2022, 10, 18).getMonth().maxLength();} else {cantDias = Period.between(fechaIngreso, fechaEgreso).getDays();}return cantDias;}
		//abstract public double calcularPrecioFinal();/*clase padre*/
		/*abstract*///public double calcularPrecioFinal() {//m.abstractoreturn cantCarpas*precioCarpa*cantidadDias();}
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
		//public boolean agregarMedicion (Estacion estacion, LocalDate fecha, LocalTime hora, double temperatura, double humedad, double vientoVel, String vientoDir, double precipitacion) {return lstMediciones.add(new Medicion(estacion, fecha, hora, temperatura, humedad, vientoVel, vientoDir, precipitacion));}
		//public Medicion traerMedicion (Estacion estacion, LocalDate fecha, LocalTime hora) {Medicion med = null;boolean encontrado = false;int i = 0;while (i < lstMediciones.size() && !encontrado) {"wMed" hace referencia a "whileMedicion"una variable solo para este bucleasí no se hace tan larga la línea del ifMedicion wMed = lstMediciones.get(i);LocalDate fFecha = wMed.getFecha();LocalTime fHora = wMed.getHora();if (wMed.getEstacion().equals(estacion) && fFecha.equals(fecha) && fHora.equals(hora)) {encontrado = true;med = wMed;}i++;}return med;}
		//public List<Medicion> traerMediciones (Estacion estacion) {List<Medicion> meds = new ArrayList<Medicion>();for (int i = 0; i < lstMediciones.size(); i++) {Medicion wMed = lstMediciones.get(i);if (wMed.getEstacion().equals(estacion)) {meds.add(wMed);}}return meds;}
		//public float promedioTemperatura (Estacion estacion, LocalDate fecha, LocalTime horaDesde, LocalTime horaHasta) {float suma = 0;int cantidad = 0;for (int i = 0; i < lstMediciones.size(); i++) {igual que el while, pero para el for"fMed" -> "forMed"Medicion fMed = lstMediciones.get(i);LocalDate fFecha = fMed.getFecha();LocalTime fHora = fMed.getHora();if (fMed.getEstacion().equals(estacion) && fFecha.equals(fecha) && horaEstaEntre(fHora, horaDesde, horaHasta)) {suma += fMed.getTemperatura();cantidad++;}}return suma / cantidad;}
		//private boolean horaEstaEntre (LocalTime hora, LocalTime desde, LocalTime hasta) {boolean estaEntre = false;if (hora.equals(desde) || hora.equals(hasta) || (hora.isAfter(desde) && hora.isBefore(hasta)))estaEntre = true;return estaEntre;}
		//private int calcularId () {int id = 1;for (int i = 0; i < lstEstaciones.size(); i++) {int idActual = lstEstaciones.get(i).getId() + 1;if (idActual > id)id = idActual;}return id;}
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
	
	//public double calcularPrecioFinal(LocalDate dia){double descuento = 0;if(super.isEnPromocion() == true) {if(dia.getDayOfWeek().getValue() >= 1 && dia.getDayOfWeek().getValue() <= 5){descuento = (super.getPorcentajeDescuento() / 100) * precioPorNoche;}else{descuento = precioPorNoche;}}return descuento;}
	//public double calcularPrecioFinal(){double total = 0;if(isEsDescuentoEn2daUnidad() == true){total = (getPorcentajeDescuento() / 2) * getPrecioProducto();}else{total = getPrecioProducto();}return total;} 
	//public double calcularPrecioFinal() {return cantCarpas*precioCarpa*cantidadDias();}
		
	//public double calcularTotalGeneral() {double sumaPedidosElectronicos = 0;double sumaPedidosPapelMensual = 0;double totalGeneral = 0;for(int i=0; i<pedidos.size(); i++) {if (pedidos.get(i) instanceof PedidoElectronico) {PedidoElectronico pedido = (PedidoElectronico) pedidos.get(i);sumaPedidosElectronicos += pedido.calcularPrecioFinal();}if (pedidos.get(i) instanceof PedidoPapelMensual) {PedidoPapelMensual pedido = (PedidoPapelMensual) pedidos.get(i);sumaPedidosElectronicos += pedido.calcularPrecioFinal();}}totalGeneral = sumaPedidosElectronicos + sumaPedidosPapelMensual;return totalGeneral;}
		
	//public double calcularHorasTrabajadas() {double diferencia = 0;if(getHoraDesde().isBefore(getHoraHasta())) {diferencia = ((getHoraHasta().getHour() - getHoraDesde().getHour()) * 60 + getHoraHasta().getMinute() - getHoraDesde().getMinute()) / 60;}return diferencia;}
	
	public Metrica traerMetrica(LocalDate fecha, LocalTime hora) {
		Metrica buscado = null;
		int i = 0;
		while (i < listaMetricas.size() && buscado == null) {
			Metrica comparado = listaMetricas.get(i);
			if (comparado.getFecha().isEqual(fecha) && sonHorasIguales(hora, comparado.getHora()))
				buscado = comparado;

			i++;
		}

		return buscado;
	}
	public boolean sonHorasIguales(LocalTime horaInicio, LocalTime horaFin) {
		boolean iguales = false;
		if (horaInicio.getHour() == horaFin.getHour() && horaInicio.getMinute() == horaFin.getMinute()) {
			iguales = true;
		}
		return iguales;
	}
	public List<Metrica> traerMetricas(LocalDate desde,LocalDate hasta){
		List<Metrica> coincidentes = new ArrayList<Metrica>();
		for(int i = 0;i<listaMetricas.size();i++) {
			Metrica comp = listaMetricas.get(i);
			if(fechaExisteEntre(comp.getFecha(), desde, hasta))
				coincidentes.add(comp);
		}
		return coincidentes;
	}
	
	public static boolean fechaExisteEntre(LocalDate fechaAComparar, LocalDate fechaInicio, LocalDate fechaFin) {
		boolean existe = false;
		if ((fechaAComparar.isAfter(fechaInicio) || fechaAComparar.isEqual(fechaInicio))
				&& (fechaAComparar.isBefore(fechaFin) || fechaAComparar.isEqual(fechaFin))) {
			existe = true;
		}
		return existe;
	}
	
	
	//public double calcularJornal() {double jornal = 0;if(isHabil() == true) {jornal = getCantHorasDiarias() * responsable.getValorHora();} else {jornal = getCantHorasDiarias() * responsable.getValorHora() * 1.5;}return jornal;}
	//public int calcularCantDiasTrabajados (int mes, int anio) {int dias = 0;LocalDate fecha = LocalDate.of(anio, mes, 1);if(isHabil() == true) {dias = fecha.lengthOfMonth();} else {dias = fecha.lengthOfMonth();}return dias;}
	//public double calcularHonorarios(int mes, int anio) {return calcularCantDiasTrabajados(mes, anio) * calcularJornal();}
		
	//public int calcularDuracion() {int sumatoria = 0;for(int i=0; i<lstCapitulos.size(); i++) {sumatoria += lstCapitulos.get(i).getDuracion();}return sumatoria;}
		
	public Asistencia traerAsistencia (LocalDate fecha, String legajo) {
		Asistencia encontrada = null;
		int i = 0;
		while (i < asistencias.size() && encontrada == null) {
			Asistencia asistencia = asistencias.get(i);
			if (asistencia.getFecha() == fecha && asistencia.getLegajo() == legajo) {
				encontrada = asistencia;
			}
			i++;
		}
		return encontrada;
	}
	//retorna una lista con las Asistencias según parámetro
	public List<Asistencia> traerAsistencia(boolean esPresencial) {
		List<Asistencia> asistenciasEncontradas = new ArrayList<Asistencia>();
		for (int i = 0; i < asistencias.size(); i++) {
			if (asistencias.get(i) instanceof Teletrabajo) {
				Teletrabajo asistencia = (Teletrabajo) asistencias.get(i);
				if (esPresencial == true) {
					asistenciasEncontradas.add(asistencia);
				}
			}
		}
		return asistenciasEncontradas;
	}

	//solo numeros: public boolean esValidoDigitoControl(String codAudiovisual) {int suma=0, dVerificador=0;int numero = Integer.parseInt(codAudiovisual);int ultimoNumero = numero % 10;for(int i=0; i<codAudiovisual.length()-1; i++) {String num = String.valueOf(Integer.toString(numero).charAt(i));suma += Integer.parseInt(num);}dVerificador = suma % 10;return dVerificador == ultimoNumero;}
	//numeros y letras: public boolean validarCodigo(String codigo) throws Exception {if(codigo.length() != 5) {throw new Exception("Error: codigo con cantidad incorrecta de caracteres");}char[] codAux = codigo.toCharArray();if (codAux[0] != 'A' && codAux[0] != 'B') {throw new Exception("Error: el codigo debe iniciar con A o B");}boolean cuatroNumeros = true;int i = 1;Integer suma = 0;while (i < codigo.length() && cuatroNumeros == true) {if (!Character.isDigit(codAux[i])) {cuatroNumeros = false;} else {suma += Integer.valueOf(Character.toString(codAux[i]));}i++;}if (!cuatroNumeros) {throw new Exception("Error: codigo no cumple con el formato A1111");}if (codAux[0] == 'A') {if (suma.intValue() % 2 != 0) {throw new Exception("Error: codigo invalido");}} else {if (suma.intValue() % 2 == 0) {throw new Exception("Error: codigo invalido");}}return true;}
	//ultimo digito: public boolean esValidoDigitoControl(String codIngreso) {int suma=0, dVerificador=0;int numero = Integer.parseInt(codIngreso);int ultimoNumero = numero % 10;for(int i=0; i<codIngreso.length()-1; i++) {String num = String.valueOf(Integer.toString(numero).charAt(i));suma += Integer.parseInt(num);}dVerificador = suma % 10;return dVerificador == ultimoNumero;}
	//por letra: public boolean esValidoCodCliente (String codCliente) {boolean esLargoCliente = codCliente.length() == 10;boolean primeroEsS = codCliente.charAt(0) == 'S';boolean primeroEsN = codCliente.charAt(0) == 'N';boolean elRestoSonNumeros = true;boolean ultimoEsPar = Integer.parseInt(String.valueOf(codCliente.charAt(9))) % 2 == 0;char[] elResto = codCliente.substring(1).toCharArray();int i = 0;while (i < elResto.length && elRestoSonNumeros) {if (Character.isLetter(elResto[i]))elRestoSonNumeros = false;i++;}return esLargoCliente && ((primeroEsS && ultimoEsPar) || (primeroEsN && !ultimoEsPar)) && elRestoSonNumeros;}
	
	public boolean agregarGastronomia(String codServicio, double porcentajeDescuento, boolean enPromocion, String
			gastronomia, double precio, int diaSemDesc) throws Exception {
				int i = 0;
				int idServicio = 1;
				while (i < lstServicio.size()) {
					if (lstServicio.size() > 0) {
						idServicio = lstServicio.get(lstServicio.size() - 1).getIdServicio() + 1;
						if (lstServicio.get(i).getCodServicio() == codServicio) {
							throw new Exception("Ya existe ese servicio.");
						}
					}
					i++;
				} 
				
				return lstServicio.add(new Gastronomia(idServicio, codServicio, porcentajeDescuento, enPromocion, gastronomia, precio, diaSemDesc));
			} 
	
	//public float promedioTemperatura (Estacion estacion, LocalDate fecha, LocalTime horaDesde, LocalTime horaHasta) {float suma = 0;int cantidad = 0;for(int i=0; i <lstMediciones.size(); i++) {Medicion comparada = lstMediciones.get(i);if (comparada.getEstacion().equals(estacion) && comparada.getFecha().equals(fecha) && horaEstaEntre(comparada.getHora(), horaDesde, horaHasta)) {suma += comparada.getTemperatura();cantidad++;}}return suma / cantidad;}
	//public double temperaturaCorregidaPorAltura () {return (lstMediciones.getTemperatura() + (estacion.getAltura() * 6.5) / 1000);}
		
	private boolean horaEstaEntre (LocalTime hora, LocalTime desde, LocalTime hasta) {
		boolean estaEntre = false;
			if (hora.equals(desde) || hora.equals(hasta) || (hora.isAfter(desde) && hora.isBefore(hasta))) {
				estaEntre = true;
			}
			return estaEntre;
		}	

		//public double distanciaConEstacion (Estacion estacion) {double x = Math.pow(estacion.getLongitud() - longitud, 2);double y = Math.pow(estacion.getLatitud() - latitud, 2);return Math.sqrt(x + y);}
		
		public int cantidadDias() {
			int cantDias = 0;
			if (fechaEgreso == null || !isCheckOut()) {
				cantDias = Period.between(fechaIngreso, LocalDate.of(2022, 10, 18)).getDays();
				cantDias += LocalDate.of(2022, 10, 18).getMonth().maxLength();
			} else {
				cantDias = Period.between(fechaIngreso, fechaEgreso).getDays();
			}
			return cantDias;
		}
		
		public LocalDate calcularFechaProximoVencimiento () {
			LocalDate fechaFacturacion = LocalDate.of(2022, 10, diaFacturacion);
			LocalDate fechaHoy = LocalDate.of(2022, 10, 20);
			LocalDate returnFecha;
			
			if(fechaFacturacion.isAfter(fechaHoy)) {
				returnFecha = fechaFacturacion;
			} else {
				returnFecha = fechaFacturacion.plusMonths(1);
			}
			
			return returnFecha;
		}
		
		public LocalDate calcularFechaProximoVencimiento () {
			return getFechaUltimaRecarga().plusDays(getDiasDuracion());
		}
		
		public int calcularEdad () {
			return Period.between(fechaNacimiento, LocalDate.of(2022, 10, 20)).getYears();
		}
}
