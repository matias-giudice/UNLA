package modelo;

public class Pelicula extends Audiovisual{
	private int duracion;

	public Pelicula(String codAudiovisual, String titulo, int anio, boolean estreno, String genero, int duracion) throws Exception {
		super(codAudiovisual, titulo, anio, estreno, genero);
		this.duracion = duracion;
	}

	public int getDuracion() {
		return duracion;
	}

	public void setDuracion(int duracion) {
		this.duracion = duracion;
	}

	@Override
	public String toString() {
		return "\nPelicula [" + super.toString() + ", duracion=" + duracion + "]";
	}
	
	public int calcularDuracion() {
		return getDuracion();
	}
}
