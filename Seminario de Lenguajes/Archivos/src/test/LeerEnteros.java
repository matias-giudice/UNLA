package test;

import java.io.*;

public class LeerEnteros {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		File archivo = null;
		FileReader fr = null;
		BufferedReader br = null;
		int suma = 0;		
		
		try {
			archivo = new File ("enteros.txt");
			fr = new FileReader (archivo);
			br = new BufferedReader(fr);
			String linea;
			while((linea = br.readLine()) != null) {
				try {
					suma = suma + Integer.parseInt(linea);
				} catch (NumberFormatException e) {
					System.err.println("Uno de los datos leídos no es un entero.");
				}
			}
			System.out.println("Suma = " + suma);
		} catch(IOException e) {
			e.printStackTrace();
		} finally {
			System.out.println("Finally Suma = " + suma);
			try {
				if(fr != null) {
					fr.close();
				}
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
	}

}
