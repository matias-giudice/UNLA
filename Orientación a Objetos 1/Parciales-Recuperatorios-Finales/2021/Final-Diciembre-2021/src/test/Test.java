package test;

import modelo.Sistema;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sistema sistema = new Sistema();
		System.out.println("1)");
		try {
			sistema.agregarAudiovisual("7389189", "TODOS TENEMOS UN MUERTO ...", 2021, true, "COMEDIA DRAMÁTICA", 103);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("2)");
		try {
			sistema.agregarAudiovisual("1732485", "Los Simuladores", 2003, false, "DRAMA SOCIAL", true, null);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("3)");
		try {
			sistema.agregarAudiovisual("4689735", "LUNA DE AVELLANEDA", 2004, false, "COMEDIA DRAMÁTICA", 139);
			sistema.agregarAudiovisual("7389182", "TODOS TENEMOS UN MUERTO ...", 2021, true, "COMEDIA DRAMÁTICA", 103);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		
		System.out.println("4)");
		System.out.println(sistema.traerAudiovisual("4689735").toString());
		
		System.out.println("5)");
		System.out.println(sistema.traerAudiovisual("4689735").calcularDuracion());

		
		System.out.println("6)");
		System.out.println(sistema.traerAudiovisual("3748916").toString());
		
		System.out.println("7)");
		System.out.println(sistema.traerAudiovisual("3748916").calcularDuracion());
	}

}
