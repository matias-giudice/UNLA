package ejerciciosPropuestos5;

public class Ejercicio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String sentencia = "if (a==3) /* igual a tres */ a++; /* incrementa a */ "; 
        System.out.println("La cadena antes de eliminar el car�cter: " + sentencia); 
        sentencia = sentencia.replace(" /* igual a tres */ ", " "); 
        sentencia = sentencia.replace(" /* incrementa a */ ", " ");
        System.out.println("La cadena despu�s de eliminar el car�cter: " + sentencia);
    }
}
