package modelo;

public class Numero {
	//atributo
	private int n;

	//constructor
	public Numero(int n) {
		this.n = n;
	}
		
	//metodos getter y setter
	public int getN() {
		return n;
	}

	public void setN(int n) {
		this.n = n;
	}
		
	public int sumar(int n1) {
		return (getN() + n1);
	}
	public int multiplicar(int n1) {
		return (getN() * n1);
	}
	public boolean esPar() {  //Revisa si un numero entero es par o no.
		return (getN() % 2 == 0); //true=par, false=no par
	}
	public boolean esPrimo() { //Revisa si un numero entero es primo o no.
		boolean esNumPrimo = (getN() % 2 == 0);
		//si no, solo revisa los impares
		for(int i=3; i*i<=getN(); i+=2) { ///esto esta mal, porque estra al if y lo corta,usar while
			if(getN() % i == 0) {
				return false; //numero compuesto
			}
		}
		//boolean numPrimo;
		return true; //numero primo
	}
	public String convertirAString() {
		return String.valueOf(getN());
	}
	public double convertirDouble() {
		return Double.parseDouble(convertirAString());
	}
	public double calcularPotencia(int exp) {
		return Math.pow(getN(), exp);
	}
	public String pasarBase2() {
		/*int resto=0;
		int numero=0;
		while (getN() != 0) {
			resto = (getN() % 2); // resto
	        numero = (numero / 2); // reducir n
	    }
	    return String.valueOf(resto);*/
		return Integer.toBinaryString(getN());
	}
	public int calcularFactorial() {
		int factorial = 1;
		//int aux = num;
		/*while (getN() == 0 || getN() < 0 && getN() != 0) {
				factorial = (factorial * getN()); 
				//aux--;
		}*/
		for(int i=1; i<=getN(); i++) {
			factorial = factorial * i;
		}
		return factorial;
		//return calcularFactorial(n);
	}
	/*public int calcularFactorial(int num) {
		
	}
	public int numeroCombinatorio(int n1) { ///cambiar esto
		return this.calcularFactorial(n1)/(calcularFactorial(getN()) * calcularFactorial(n1-getN()));
	}*/
}
