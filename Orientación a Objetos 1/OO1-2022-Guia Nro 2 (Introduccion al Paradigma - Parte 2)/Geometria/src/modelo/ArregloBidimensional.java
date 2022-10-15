package modelo;

import java.util.Arrays;

public class ArregloBidimensional {
	private double[][] matrizA = new double[3][3];

	public ArregloBidimensional(double[][] matrizA) {
		this.matrizA = matrizA;
	}

	public double[][] getMatrizA() {
		return matrizA;
	}

	public void setMatrizA(double[][] matrizA) {
		this.matrizA = matrizA;
	}
	
	@Override
	public String toString() {
		String texto="\n";
	    for(int filas=0; filas<matrizA.length; filas++){
	    	for(int columnas=0; columnas<matrizA.length; columnas++){
	    		texto+="\t ["+(double)matrizA[filas][columnas]+"]";
	        }
	        texto+="\n";
	    }
	    return "[" + texto + "]";
	}
	
	public static String toString(double[] a) {
        if (a == null)
            return "null";
        int iMax = a.length - 1;
        if (iMax == -1)
            return "[]";

        StringBuilder b = new StringBuilder();
        b.append('[');
        for (int i = 0; ; i++) {
            b.append(a[i]);
            if (i == iMax)
                return b.append(']').toString();
            b.append(", ");
        }
    }
	
	public double[][] sumar(double[][] matrizB){
		double[][] matrizSuma = new double[matrizA.length][matrizA[0].length];
		if ((matrizA.length != matrizB.length) || (matrizB[0].length != matrizA[0].length)) {
			return null;
		}
		for(int filas=0; filas<matrizA.length; filas++){
			for(int columnas=0; columnas<matrizA.length; columnas++){
				matrizSuma[filas][columnas] = matrizA[filas][columnas] + matrizB[filas][columnas];
		    }
		}
		return matrizSuma;
	}
	
	public double[][] restar(double[][] matrizB){
		double[][] matrizResta = new double[matrizA.length][matrizA[0].length];
		if ((matrizA.length != matrizB.length) || (matrizB[0].length != matrizA[0].length)) {
			return null;
		}
		for(int filas=0; filas<matrizA.length; filas++){
			for(int columnas=0; columnas<matrizA.length; columnas++){
				matrizResta[filas][columnas] = matrizA[filas][columnas] - matrizB[filas][columnas];
		    }
		}
		return matrizResta;
	}
	
	public double[][] transpuesta() {
		double[][] matrizTranspuesta = new double[matrizA.length][matrizA[0].length];
		for(int filas=0; filas<matrizA.length; filas++){
			for(int columnas=0; columnas<matrizA.length; columnas++){
				matrizTranspuesta[columnas][filas] = matrizA[filas][columnas];
		    }
		}
		return matrizTranspuesta;
	}
	public double[][] multiplicar(double numero) {
		double[][] matrizMultiplicacion = new double[matrizA.length][matrizA[0].length];
		for(int filas=0; filas<matrizA.length; filas++){
			for(int columnas=0; columnas<matrizA.length; columnas++){
				matrizMultiplicacion[filas][columnas] = matrizA[filas][columnas] * numero;
		    }
		}
		return matrizMultiplicacion;
	}
	
	public double[][] multiplicar(double[][] matrizB) {
		double[][] matrizMultiplicacion = new double[matrizA.length][matrizA[0].length];
		if ((matrizA.length != matrizB.length) || (matrizB[0].length != matrizA[0].length)) {
			return null;
		}
		for(int filas=0; filas<matrizA.length; filas++){
			for(int columnas=0; columnas<matrizA.length; columnas++){
				matrizMultiplicacion[filas][columnas] = matrizA[filas][columnas] * matrizB[filas][columnas];
		    }
		}
		return matrizMultiplicacion;
	}

}
