package modelo;

public class Circulo {
	//atributos
	private Punto origen;
	private double radio;
		
	//constructor
	public Circulo(Punto punto, double radio) {
		this.origen = punto;
		this.radio = radio;
	}
	
	//m�todos getter y setter
	public Punto getOrigen() {
		return origen;
	}
	public double getRadio() {
		return radio;
	}
	public void setOrigen(Punto origen) {
		this.origen = origen;
	}
	public void setRadio(double radio) {
		this.radio = radio;
	}
	
	//re-definici�n de m�todos de la clase Object
	// sobrecarga
	public boolean equals(Circulo circulo){
		return ((origen == circulo.getOrigen())&&(radio == circulo.getRadio()));
	}
	public double calcularPerimetro() {
		final double PI;
		PI = 3.14;
		return ((2 * PI) * getRadio());
	}
	public double calcularArea(){
		final double PI;
		PI = 3.14;
		return (PI * Math.pow(getRadio(), 2));
	}	
	public double calcularDistancia(Circulo circulo){
		return origen.calcularDistancia(getOrigen());
	}
	public void mover(double desplazamientoX, double desplazamientoY){
		// hacemos una copia del origen para no modificar el atributo de
		// la clase
		Punto nuevoOrigen = new Punto(origen.getX(),origen.getY());
		// asignamos el nuevo origen de este c�rculo
		origen = nuevoOrigen;
		// ahora s�, movemos el c�rculo
		origen.mover(desplazamientoX,desplazamientoY);
	}

	
	// re-definici�n
	@Override
	public String toString(){
		return "("+origen+","+radio+")";
	}	
}
