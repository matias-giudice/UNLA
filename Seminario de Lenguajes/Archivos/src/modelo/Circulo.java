package modelo;

public class Circulo {
	private Punto centro;
	private double radio;
	
	public Circulo(Punto centro, double radio) {
		this.centro = centro;
		this.radio = radio;
	}

	public Punto getCentro() {
		return centro;
	}

	public void setCentro(Punto centro) {
		this.centro = centro;
	}

	public double getRadio() {
		return radio;
	}

	public void setRadio(double radio) {
		this.radio = radio;
	}

	@Override
	public String toString() {
		return "Circulo [centro=" + centro + ", radio=" + radio + "]";
	}
	
	public double obtenerDiametro() {
		double resultado;
		return resultado = 2 * radio;
	}
	
	public double obtenerArea() {
		double resultado;
		return resultado = Math.PI * Math.pow(radio, 2);
	}
	
	public double obtenerPerimetro() {
		double resultado;
		return resultado = 2 * Math.PI * radio;
	}
	
	public boolean intersectaCon(Circulo circulo) {
		double dx,dy,d_centros,d_cruce;
		dx = circulo.getCentro().getX() - centro.getX();
		dy = circulo.getCentro().getY() - centro.getY();
		d_centros = Math.sqrt(Math.pow(dx, 2)+Math.pow(dy, 2));
		d_cruce   = circulo.getRadio() + radio;
		if (d_cruce >= d_centros) {return true;}
		return false;
	}
}