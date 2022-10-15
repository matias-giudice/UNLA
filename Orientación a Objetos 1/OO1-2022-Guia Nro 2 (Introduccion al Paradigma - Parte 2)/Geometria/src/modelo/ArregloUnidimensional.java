package modelo;
import java.util.Arrays;
public class ArregloUnidimensional {

	//atributo
	private int[] arrayInt = new int[10];
	
	//constructor
	public ArregloUnidimensional(int[] arrayInt) {
		this.arrayInt = arrayInt;
	}

	//metodo getter y setter
	public int[] getArrayInt() {
		return arrayInt;
	}
	public void setArrayInt(int[] arrayInt) {
		this.arrayInt = arrayInt;
	}
	
	@Override
	public String toString() {
		return "ArregloUnidimensional [arrayInt=" + Arrays.toString(arrayInt) + "]";
	}

	public int traerElMenor() {
		int menor;
	    //int posicion;
	    menor = arrayInt[0];
	    //posicion = 0;
	    for(int f=1; f<arrayInt.length; f++) {
	        if (arrayInt[f] < menor) {
	            menor = arrayInt[f];
	            //posicion = f;
	        }
	    }
	    return menor;
	}
	public int traerElMayor() {
		int mayor;
	    //int posicion;
	    mayor = arrayInt[0];
	    //posicion = 0;
	    for(int f=1; f<arrayInt.length; f++) {
	        if (arrayInt[f] > mayor) {
	            mayor = arrayInt[f];
	            //posicion = f;
	        }
	    }
	    return mayor;
	}
	public double calcularPromedio() {
		int suma=0;
		for(int i=0; i<arrayInt.length; i++){
            suma = suma + arrayInt[i];
        }
		double promedio = (double)suma/arrayInt.length;
		return promedio;
	}
	public int[] ordenarAscendente() {
		for (int j = 0; j < arrayInt.length; j++) {
	         for (int i = 0; i < arrayInt.length - 1; i++) {
	             if (arrayInt[i] > arrayInt[i + 1]) {
	                 int aux = arrayInt[i];
	                 arrayInt[i] = arrayInt[i + 1];
	                 arrayInt[i + 1] = aux;
	             }
	         }
	     }
	     return arrayInt;
	}
	public int[] ordenarDescendente() {
		for (int j = 0; j < arrayInt.length; j++) {
	         for (int i = 0; i < arrayInt.length - 1; i++) {
	             if (arrayInt[i] < arrayInt[i + 1]) {
	                 int aux = arrayInt[i];
	                 arrayInt[i] = arrayInt[i + 1];
	                 arrayInt[i + 1] = aux;
	             }
	         }
	     }
	     return arrayInt;
	}
	public double traerFrecuencia(int numero) {
		int contador = 0;
		for(int i=0; i<arrayInt.length; i++) {
			if(arrayInt[i] == numero) {
				contador++;
			}
		}
		double resultado = (double)contador/arrayInt.length;
		return resultado;
	}
	public int traerModa() {
		/*int moda = 0;
		int vecesQueSeRepite = 0;
		int maximaVecesQueSeRepite = 0;
		for(int i=0; i<arrayInt.length; i++){
			for(int j=0; j<arrayInt.length; j++){
				if(arrayInt[i] == arrayInt[j]) {
					vecesQueSeRepite++;
				}
			}
			
			if(vecesQueSeRepite > maximaVecesQueSeRepite){
				moda = arrayInt[i];
				maximaVecesQueSeRepite = vecesQueSeRepite;
			}
		}
		return moda;*/
		int moda = 0, maxRep = 0;
		//int moda2, minRep = 0;
		for(int i=0; i<arrayInt.length; i++){
	        int f = 0;
	        for(int j=0; j<arrayInt.length; j++) {
	            if(arrayInt[i]==arrayInt[j]) {
	                f++;
	            }   
	            if(f>maxRep) {
	                moda= arrayInt[i];
	                maxRep= f;
	            }   
	        }
	        /*int h = 0; //calcular el menos repetido
	        for(int j=0; j<arrayInt.length; j++) {
	            if(arrayInt[i]==arrayInt[j]) {
	            	h++;
	            }   
	            if(h>=minRep) {
	                moda2= arrayInt[i];
	                minRep= h;
	            }   
	        }*/
	    }
		return moda;
	}
}
