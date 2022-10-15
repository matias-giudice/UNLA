package modelo;

public class Punto {
	//atributos
	private double x;
	private double y;
	
	//constructor
	public Punto(double x, double y) {
		this.x = x;
		this.y = y;
	}
	
	//m�todos getter y setter
	public double getX() {
		return x;
	}
	public void setX(double x) {
		this.x = x;
	}
	public double getY() {
		return y;
	}
	public void setY(double y) {
		this.y = y;
	}
	
	//re-definici�n de m�todos de la clase Object
	// sobrecarga
	public boolean equals(Punto punto){
		return ((x == punto.getX())&&(y == punto.getY()));
	}
	public double calcularDistancia(Punto punto){
		return Math.sqrt((Math.pow((x - punto.getX()), 2) + Math.pow((y - punto.getY()), 2)));
	}
	public void mover(double desplazamientoX, double desplazamientoY){
		x = x + desplazamientoX;
		y = y + desplazamientoY;
	}
	// re-definici�n
	@Override
	public String toString(){
		return "("+x+","+y+")";
	}
}
