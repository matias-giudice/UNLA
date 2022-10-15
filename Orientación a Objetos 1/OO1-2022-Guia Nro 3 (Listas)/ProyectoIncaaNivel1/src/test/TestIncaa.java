package test;

import java.util.List;

import modelo.Incaa;
import modelo.Pelicula;

public class TestIncaa {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		Incaa inca = new Incaa();
		
		inca.agregarPelicula("spiderman");
		inca.agregarPelicula("iron man");
		inca.agregarPelicula("doctir strange");
		inca.agregarPelicula("venom");
		mostrarPeliculas(inca.getCatalogo());
		inca.modificarPelicula(4, "venom2");
		System.out.println("LUEGO DE MODIFICAR");
		mostrarPeliculas(inca.getCatalogo());
		inca.eliminarPelicula(2);
		System.out.println("LUEGO DE ELIMINAR");
		mostrarPeliculas(inca.getCatalogo());

	}
	public static void mostrarPeliculas( List<Pelicula> catalogo) {
		for(int i=0; i<catalogo.size(); i++) {
			System.out.println(catalogo.get(i).toString());
		}
	}
}