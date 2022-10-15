package modelo;

import java.util.GregorianCalendar;
import java.util.Objects;

public class Ceta {
	private int idCeta;
	private GregorianCalendar fecha;
	private Contribuyente vendedor;
	private Contribuyente comprador;
	private double valorDeTranferencia;
	private boolean firmaComprador;
	
	public Ceta(int idCeta, GregorianCalendar fecha, Contribuyente vendedor, Contribuyente comprador,
			double valorDeTranferencia, boolean firmaComprador) {
		this.idCeta = idCeta;
		this.fecha = fecha;
		this.vendedor = vendedor;
		this.comprador = comprador;
		this.valorDeTranferencia = valorDeTranferencia;
		this.firmaComprador = firmaComprador;
	}

	public int getIdCeta() {
		return idCeta;
	}

	public void setIdCeta(int idCeta) {
		this.idCeta = idCeta;
	}

	public GregorianCalendar getFecha() {
		return fecha;
	}

	public void setFecha(GregorianCalendar fecha) {
		this.fecha = fecha;
	}

	public Contribuyente getVendedor() {
		return vendedor;
	}

	public void setVendedor(Contribuyente vendedor) {
		this.vendedor = vendedor;
	}

	public Contribuyente getComprador() {
		return comprador;
	}

	public void setComprador(Contribuyente comprador) {
		this.comprador = comprador;
	}

	public double getValorDeTranferencia() {
		return valorDeTranferencia;
	}

	public void setValorDeTranferencia(double valorDeTranferencia) {
		this.valorDeTranferencia = valorDeTranferencia;
	}

	public boolean isFirmaComprador() {
		return firmaComprador;
	}

	public void setFirmaComprador(boolean firmaComprador) {
		this.firmaComprador = firmaComprador;
	}

	@Override
	public String toString() {
		return "Ceta [idCeta=" + idCeta + ", fecha=" + fecha + ", vendedor=" + vendedor + ", comprador=" + comprador
				+ ", valorDeTranferencia=" + valorDeTranferencia + ", firmaComprador=" + firmaComprador + "]";
	}
	
	public boolean validarSexo (char sexo) throws Exception{
		if(sexo != 'm' || sexo!= 'f') {
			throw new Exception("ERROR: SEXO inválido.");
		}
		return true; 
	}
	
	public boolean validarCuil (String cuil) throws Exception {
		if(cuil == null || cuil == " ") {
			throw new Exception("ERROR: CUIL inválido.");
		}
		//Eliminamos todos los caracteres que no son números
        cuil = cuil.replaceAll("[^\\d]", "");
        //Controlamos si son 11 números los que quedaron, si no es el caso, ya devuelve falso
        if (cuil.length() != 11){
            return false;
        }
        //Convertimos la cadena que quedó en una matriz de caracteres
        String[] cuitArray = cuil.split("");
        //Inicializamos una matriz por la cual se multiplicarán cada uno de los dígitos
        Integer[] serie = {5, 4, 3, 2, 7, 6, 5, 4, 3, 2};
        //Creamos una variable auxiliar donde guardaremos los resultados del calculo del número validador
        Integer aux = 0;
        //Recorremos las matrices de forma simultanea, sumando los productos de la serie por el número en la misma posición
        for (int i=0; i<10; i++){
            aux += Integer.valueOf(cuitArray[i]) * serie[i];
        }
        //Hacemos como se especifica: 11 menos el resto de de la división de la suma de productos anterior por 11
        aux = 11 - (aux % 11);
        //Si el resultado anterior es 11 el código es 0
        if (aux == 11){
            aux = 0;
        //o si el resultado anterior es 10 el código es 9
        } else if (aux == 10){
            aux = 9;
        }
        //Devuelve verdadero si son iguales, falso si no lo son
        //(Esta forma esta dada para prevenir errores, se puede usar: return Integer.valueOf(cuitArray[11]) == aux;)
        return Objects.equals(Integer.valueOf(cuitArray[10]), aux);
	}
	
	public boolean validarDominio (String dominio) throws Exception {
		if(dominio == null || dominio == " ") {
			throw new Exception("ERROR: Dominio inválido.");
		}
		return true;
		//hacer
	}
	public boolean validarVendedorYComprador (Contribuyente vendedor, Contribuyente comprador) throws Exception {
		if(vendedor == comprador) {
			throw new Exception("ERROR: El vendedor y el comprador son los mismos.");
		}
		return true;
		//hacer
	}
	public boolean validarFecha (GregorianCalendar fecha) throws Exception {
		if(fecha.before(getFecha())) {
			throw new Exception("ERROR: la fecha no puede ser posterior al día de hoy.");
		}
		return true;
		//hacer
	}
}
