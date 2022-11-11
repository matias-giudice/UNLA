package test;

import java.io.*;

import modelo.Punto;

public class LeerPosiciones {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		File archivo = null;
		FileReader fr = null;
		BufferedReader br = null;
		
		try {
			archivo = new File ("posiciones.txt");
			fr = new FileReader (archivo);
			br = new BufferedReader(fr);
			String linea;
			while((linea = br.readLine()) != null) {
				try {
					String [] coordenas = linea.split(",");
					double x = Double.parseDouble(coordenas[0]);
					double y = Double.parseDouble(coordenas[1]);
					Punto punto = new Punto(x, y);
					System.out.println(punto.toString());
				} catch (NumberFormatException e) {
					System.err.println("Uno de los datos leídos no es un double.");
				}
			}
		} catch(IOException e) {
			e.printStackTrace();
		} finally {
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
