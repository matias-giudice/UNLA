package modelo;

public class Numero {
	private int n;

	public Numero(int n) {
		this.n = n;
	}

	public int getN() {
		return n;
	}

	public void setN(int n) {
		this.n = n;
	}
	
	@Override
	public String toString() {
		return "Numero [numero primo=" + n + "]";
	}

	public boolean esPrimo() {
		// El 0, 1 y 4 no son primos
		if(getN() == 0 || getN() == 1 || getN() == 4) {
			return false;
		}
		for(int x=2; x<getN() / 2; x++) {
			// Si es divisible por cualquiera de estos números, no
		    // es primo
		    if(getN() % x == 0) {
		    	return false;
		    }
		}
		// Si no se pudo dividir por ninguno de los de arriba, sí es primo
		return true;
	}
	
	public boolean esPrimoMellizo() {
		Numero valorA = new Numero(n);
		Numero valorB = new Numero(n);
		
		return valorA.esPrimo() && valorB.esPrimo() && Math.abs(valorA.getN() - valorB.getN()) == 2;
	}
	
	public void imprimirNumerosPrimos(int n) {
		Numero valorN = new Numero(n);
		int contador=0;
		for(int i=0; i<getN(); i++) {
			if(valorN.esPrimo() == true) {
				valorN.toString();
			}
		}
		for(int i=0; i<=getN(); i++) {
			if (valorN.esPrimo()) {
				contador++;
				System.out.print(String.valueOf(valorN) + ",");
			}
		}
		System.out.printf("\nTotal: %d", contador);
	}
}
