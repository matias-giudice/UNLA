package modelo;

public abstract class Mercancia {
	protected String codMercancia;

	public Mercancia(String codMercancia) throws Exception {
		setCodMercancia(codMercancia);
	}

	public String getCodMercancia() {
		return codMercancia;
	}

	public void setCodMercancia(String codMercancia) throws Exception {
		if(codMercancia.length() == 7) {
			this.codMercancia = codMercancia;
		} else {
			throw new Exception("El código ingresado es inválido, su longitud tiene que ser igual a 7.");
		}
		
	}

	@Override
	public String toString() {
		return "codMercancia=" + codMercancia;
	}
	
	public abstract double calcularPrecioFinal();
}
