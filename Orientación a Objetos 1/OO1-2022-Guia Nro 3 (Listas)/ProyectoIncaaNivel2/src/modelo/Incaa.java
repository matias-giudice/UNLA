package modelo;

import java.util.ArrayList;

import java.util.List;


public class Incaa {
	private List<Pelicula> catalogo;
	
	public Incaa(){
		this.catalogo = new ArrayList<Pelicula>();
	}
	
	public List<Pelicula> getCatalogo() {
		return catalogo;
	}
	
	public void setCatalogo(List<Pelicula> catalogo) {
		this.catalogo = catalogo;
	}

	public boolean agregarPelicula(String pelicula, Genero genero) throws Exception {
		int proxId = 0; 
		if(traerPelicula(pelicula) != null) {
			throw new Exception("ERROR: La pelicula " + pelicula + " ya existe.");
		}	
	    if(catalogo.size() == 0) {
			proxId = 1;
		}else {
			proxId = catalogo.get(catalogo.size()-1).getIdPelicula()+1;
		}
		
		return catalogo.add(new Pelicula(proxId, pelicula, genero));
	}
	
	public Pelicula traerPelicula(int idPelicula) throws Exception {
		Pelicula pelicula = null;
		for(int i=0; i<catalogo.size(); i++) {
			if(idPelicula == catalogo.get(i).getIdPelicula()) {
				pelicula = catalogo.get(i);
				i = catalogo.size();
			}
		}
		return pelicula;
	}
	
	public Pelicula traerPelicula(String pelicula) throws Exception {
		Pelicula peli=null;
		int tam=catalogo.size();
		for(int i=0; i<catalogo.size(); i++) {
			if(pelicula==catalogo.get(i).getPelicula()) {
				peli=catalogo.get(i);
				i=tam;
			}
		}
		return peli;
	}
	public List<Pelicula> traerPelicula(Genero genero){
		List<Pelicula> mismoGenero = new ArrayList<Pelicula>();
		for(int i=0; i<catalogo.size(); i++) {
			if(catalogo.get(i).getGenero() == genero){
				mismoGenero.add(catalogo.get(i));
			}
		}
		return mismoGenero;
	}
	
	public List<Pelicula> traerPartePelicula(String partePelicula) throws Exception {
		List<Pelicula> parte = new ArrayList<Pelicula>();
		for(int i=0; i<catalogo.size(); i++) {
			if(catalogo.get(i).getPelicula().contains(partePelicula)){
				parte.add(catalogo.get(i));
			}
		}
		return parte;
	}
	
	
	public void modificarPelicula(int idPelicula, String pelicula) throws Exception {
		Pelicula modificar = traerPelicula(idPelicula);
		if(modificar == null) {
		 throw new Exception("ERROR: La pelicula que desea modificar no existe.");
		}else {
			modificar.setPelicula(pelicula);
		}
	}
	
	public boolean eliminarPelicula(int idPelicula) throws Exception {
		Pelicula eliminar = traerPelicula(idPelicula);
		if(eliminar == null) {
			throw new Exception("ERROR: la pelicula que desea eliminar no existe");
		}
		//cada vez que se elimine una pelicula, si hay peliculas siguientes en la lista el ID se restara 1
		//if(traerPelicula(idPelicula+1)!=null) {
			//for(int i=idPelicula; i<catalogo.size(); i++) {
			//catalogo.get(i).setIdPelicula(catalogo.get(i).getIdPelicula()-1);
			//}
		//}
		return catalogo.remove(eliminar);
	}
}
