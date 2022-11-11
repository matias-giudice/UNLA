package modelo;

import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Audiovisual> lstAudiovisual;

	public Sistema() {
		this.lstAudiovisual = new ArrayList<Audiovisual>();
	}

	public List<Audiovisual> getLstAudiovisual() {
		return lstAudiovisual;
	}

	public void setLstAudiovisual(List<Audiovisual> lstAudiovisual) {
		this.lstAudiovisual = lstAudiovisual;
	}

	@Override
	public String toString() {
		return "Sistema [lstAudiovisual=" + lstAudiovisual + "]";
	}
	
	public boolean agregarAudiovisual (String codAudiovisual, String audiovisual, int anio, boolean estreno, String genero, int duracion) throws Exception {
		return lstAudiovisual.add(new Pelicula(codAudiovisual, audiovisual, anio, estreno, genero, duracion));
	}

	public boolean agregarAudiovisual (String codAudiovisual, String audiovisual, int anio, boolean estreno, String genero, boolean capitulosUnitarios, List<Capitulo> lstCapitulos) throws Exception {
		return lstAudiovisual.add(new Serie(codAudiovisual, audiovisual, anio, estreno, genero, capitulosUnitarios, lstCapitulos));
	}
	
	public Audiovisual traerAudiovisual(String codAudiovisual) {
		Audiovisual buscado = null;
		int i = 0;
		while(i < lstAudiovisual.size() && buscado == null) {
			Audiovisual comparado = lstAudiovisual.get(i);
			if(comparado.getCodAudiovisual().equalsIgnoreCase(codAudiovisual)) {
				buscado = comparado;
			}
			i++;
		}
		return buscado;
	}
}
