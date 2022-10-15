package test;

import java.util.List;

import modelo.Incaa;
import modelo.Pelicula;
import modelo.Genero;


public class TestIncaa2 {

	public static void main(String[] args) throws Exception {
		Incaa inca = new Incaa();
		Genero genero1 = new Genero(1,"accion");
		Genero genero2 = new Genero(2,"fantasia");
		Genero genero3 = new Genero(3,"terror");
		
		inca.agregarPelicula("spiderman",genero1);
		inca.agregarPelicula("iron man", genero2);
		inca.agregarPelicula("doctir strange", genero1);
		inca.agregarPelicula("venom", genero3);
		mostrarPeliculas(inca.getCatalogo());
		inca.modificarPelicula(4, "venom2");
		System.out.println("LUEGO DE MODIFICAR");
		mostrarPeliculas(inca.getCatalogo());
		inca.eliminarPelicula(2);
		System.out.println(" LUEGO DE ELIMINAR");
		mostrarPeliculas(inca.getCatalogo());

		
	}
	
	public static void mostrarPeliculas( List<Pelicula> catalogo) {
		for(int i=0; i<catalogo.size(); i++) {
			System.out.println(catalogo.get(i).toString());
		}
	}
	
}

