package modelo;

public abstract class Audiovisual {
	protected String codAudiovisual; //max 7
	protected String titulo;
	protected int anio;
	protected boolean estreno;
	protected String genero;
	
	public Audiovisual(String codAudiovisual, String titulo, int anio, boolean estreno, String genero) throws Exception {
		setCodAudiovisual(codAudiovisual);
		this.titulo = titulo;
		this.anio = anio;
		this.estreno = estreno;
		this.genero = genero;
	}

	public String getCodAudiovisual() {
		return codAudiovisual;
	}

	public void setCodAudiovisual(String codAudiovisual) throws Exception {
		if(codAudiovisual.length() == 7 && esValidoDigitoControl(codAudiovisual)) {
			this.codAudiovisual = codAudiovisual;
		} else {
			throw new Exception("Código ingresado inválido, tiene que tener como longitud 7.");
		}
		
		
	}

	public boolean esValidoDigitoControl(String codAudiovisual) {
		int suma=0, dVerificador=0;
		int numero = Integer.parseInt(codAudiovisual);
		int ultimoNumero = numero % 10;
		for(int i=0; i<codAudiovisual.length()-1; i++) {
			String num = String.valueOf(Integer.toString(numero).charAt(i));
			suma += Integer.parseInt(num);
		}
		dVerificador = suma % 10;
		return dVerificador == ultimoNumero;
	}
	
	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public int getAnio() {
		return anio;
	}

	public void setAnio(int anio) {
		this.anio = anio;
	}

	public boolean isEstreno() {
		return estreno;
	}

	public void setEstreno(boolean estreno) {
		this.estreno = estreno;
	}

	public String getGenero() {
		return genero;
	}

	public void setGenero(String genero) {
		this.genero = genero;
	}

	@Override
	public String toString() {
		return "codAudiovisual=" + codAudiovisual + ", titulo=" + titulo + ", anio=" + anio + ", estreno="
				+ estreno + ", genero=" + genero;
	}
	
	public abstract int calcularDuracion();
}
