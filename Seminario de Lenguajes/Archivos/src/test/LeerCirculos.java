package test;

import java.io.*;

import modelo.Circulo;
import modelo.Punto;

public class LeerCirculos {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		File archivo = null;
		FileReader fr = null;
		BufferedReader br = null;
		
		try {
			archivo = new File ("circulos.txt");
			fr = new FileReader (archivo);
			br = new BufferedReader(fr);
			String linea;
			while((linea = br.readLine()) != null) {
				try {
					String [] coordenas = linea.split(",");
					double radio = Double.parseDouble(coordenas[0]);
					if(radio <= 0) {
						throw new Exception("Radio Negativo o cero.");
					}
					double x = Double.parseDouble(coordenas[1]);
					double y = Double.parseDouble(coordenas[2]);
					Punto punto = new Punto(x, y);
					Circulo circulo = new Circulo(punto, radio);
					System.out.println(circulo.toString());
				} catch (NumberFormatException e) {
					System.err.println("Uno de los datos leídos no es un double.");
				} catch (Exception e) {
					System.out.println("ERROR: " + e.getMessage());
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