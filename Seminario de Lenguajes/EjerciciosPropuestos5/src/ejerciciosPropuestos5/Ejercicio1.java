package ejerciciosPropuestos5;

import java.io.IOException;
import java.util.Scanner;

public class Ejercicio1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		final int INTENTOS_TOTALES = 7; // Constante con el limite de fallos
        int intentos = 0;
        int aciertos = 0;
        char respuestaLetra;
		Scanner teclado = new Scanner(System.in);
		String palabra;
		System.out.println("Ingrese palabra [Jugador A]:");
		palabra = teclado.nextLine();
		char[] separadaPorLetra = separarPalabra(palabra);
	    char[] copia = separarPalabra(palabra);
		char[] tusRespuestas = new char[palabra.length()];
		for(int i = 0; i < palabra.length(); i++){
			tusRespuestas[i] = '_';
        }
		System.out.println("Adivina la palabra! [Jugador B]");
		 
        // Mientras que no nos pasemos con los intentos y no la acertemos...
        while(intentos < INTENTOS_TOTALES && aciertos != tusRespuestas.length){
            imprimePalabraSecreta(tusRespuestas);
            // Preguntamos letra por teclado
            System.out.println("\nIntroduce una letra: ");
            respuestaLetra = teclado.next().toLowerCase().charAt(0);
            // Recorremos el array y comprobamos si se ha producido un acierto
            for(int i = 0; i < separadaPorLetra.length; i++){
                if(separadaPorLetra[i]==respuestaLetra){
                    tusRespuestas[i] = separadaPorLetra[i];
                    separadaPorLetra[i] = ' ';
                    aciertos++;
                }
            }
            intentos++;
        }
        verificarAciertoPalabraSecreta(aciertos, tusRespuestas, copia);
	}
	private static void imprimePalabraSecreta(char[] tusRespuestas){ 
        for(int i = 0; i < tusRespuestas.length; i++){
            System.out.print(tusRespuestas[i] + " ");
        }
    }
	private static void verificarAciertoPalabraSecreta(int aciertos, char[] tusRespuestas, char[] copia){ 
		//Si hemos acertado todas imprimimos un mensaje
        if(aciertos == tusRespuestas.length){
            System.out.print("\nFelicidades!! Has acertado la palabra: ");
            imprimePalabraSecreta(tusRespuestas);
            System.out.print("\nGanador [Jugador B]");
        }
        // Si no otro
        else{
            System.out.print("\nNo lograste adivinar! La palabra era: ");
            for(int i = 0; i < copia.length; i++){
                System.out.print(copia[i] + " ");
            }
            System.out.print("\nGanador [Jugador A]");
        }
    }
	private static char[] separarPalabra(String palabra){
        char[] letras;
        letras = new char[palabra.length()];
        for(int i = 0; i < palabra.length(); i++){
            letras[i] = palabra.charAt(i);
        }
        return letras;
    }
}
