package modelo;

public class Punto {
	private double x;
	private double y;
	
	public Punto(double x, double y) {
		this.x = x;
		this.y = y;
	}

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

	@Override
	public String toString() {
		return "Punto [x=" + x + ", y=" + y + "]";
	}
	
	public void desplaza(double dx) {
		double desplazaX = 0;
		desplazaX = getX() + dx;
		System.out.println("Punto [x=" + desplazaX + ", y=" + getY() + "]");
	}
	public void desplaza(double dx, double dy) {
		double desplazaX = 0, desplazaY = 0;
		desplazaX = getX() + dx;
		desplazaY = getY() + dy;
		System.out.println("Punto [x=" + desplazaX + ", y=" + desplazaY + "]");
	}
	public double distanciaEuclidea(Punto otro) {
		double distancia = 0;
		distancia = Math.sqrt(Math.pow(otro.getX() - getX(), 2) +  Math.pow(otro.getY() - getY(), 2));
		return distancia;
	}
}
