package test;

import modelo.ArregloBidimensional;
import java.util.Arrays;

public class ArregloBidimensionalTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*double[][] arrayA = {{1,2,3},{4,5,6},{8,9,10}};
		double[][] arrayB = {{5,2,8},{6,1,5},{3,2,7}};
		double [][] matrizResultado = new double [3][3];
		ArregloBidimensional objeto1 = new ArregloBidimensional(arrayA);
		ArregloBidimensional objeto2 = new ArregloBidimensional(arrayB);
		System.out.println("MatrizA: ");
		objeto1.mostrarMatriz();
		System.out.println("MatrizB: ");
		objeto2.mostrarMatriz();
		matrizResultado = objeto1.sumar(arrayB);
		System.out.println("Suma: ");
		matrizResultado.mostrarMatriz();*/
		double[][] arrayA = {{1,2,3},{4,5,6},{8,9,10}};
		double[][] arrayB = {{5,2,8},{6,1,5},{3,2,7}};
		double [][] arrayResultado;
		
		ArregloBidimensional matrizUno = new ArregloBidimensional(arrayA);
		ArregloBidimensional matrizDos = new ArregloBidimensional(arrayB);
		//ArregloBidimensional matrizResultado = new ArregloBidimensional(arrayResultado);

		System.out.println("MatrizA: " + matrizUno.toString());
		System.out.println("MatrizB: " + matrizDos.toString());
		
		arrayResultado = matrizUno.sumar(arrayB);
		
		System.out.println("Suma: ");
		for(double[] v : arrayResultado) { //imprimi matriz desde vector que apunta a la matriz
			System.out.println(Arrays.toString(v));
		}
		
		arrayResultado = matrizUno.restar(arrayB);
		
		System.out.println("Resta: ");
		for(double[] v : arrayResultado) { //imprimi matriz desde vector que apunta a la matriz
			System.out.println(Arrays.toString(v));
		}
		
		arrayResultado = matrizUno.transpuesta();
		
		System.out.println("Matriz Transpuesta: ");
		for(double[] v : arrayResultado) { //imprimi matriz desde vector que apunta a la matriz
			System.out.println(Arrays.toString(v));
		}
		
		arrayResultado = matrizUno.multiplicar(2);
		
		System.out.println("Multiplicacion por un numero: ");
		for(double[] v : arrayResultado) { //imprimi matriz desde vector que apunta a la matriz
			System.out.println(Arrays.toString(v));
		}
		
		arrayResultado = matrizUno.multiplicar(arrayB);
		
		System.out.println("Multiplicacion entre matrices: ");
		for(double[] v : arrayResultado) { //imprimi matriz desde vector que apunta a la matriz
			System.out.println(Arrays.toString(v));
		}
		
		/*public boolean agregarEstudiante
       if(!estudiantes.isEmpity()){
    	   id = estudiantes.get(Estudiantes.size(i - 1));
       }
		return
		------
		public universdida(){
			this.estudiantes = new ArrayList<Estudiante>();
		}
		------
		main
		univ u1 = new uni();
		u1.agregarEstudiante(parametros);
		system.out.println(dni..getEstudiante());
		---------
		univ u1 = new uni();
		try{
		u1.agregarEstudiante(parametros); // si hay un parametro invalido se corta el try
		u1.agregarEstudiante(parametros);
		}catch (excepcion s){
			s.printStackTrace(); o tambien puede ser system.out.printl(s.getMessage());
		}
		system.out.println(dni..getEstudiante());
		*/
	}
}