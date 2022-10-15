package consultorio;

import java.util.Arrays;

public class Medico {
	//atributos
    private String nombre;
    private String apellido;
    private String especialidad;
    private Paciente[] pacientesFrecuentes;
    
    //constructor
    public Medico(String nombre, String apellido, String especialidad) {
		super();
		this.nombre = nombre;
		this.apellido = apellido;
		this.especialidad = especialidad;
	}

	//los metodos setter y getter
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getApellido() {
        return apellido;
    }
    public void setApellido(String apellido) {
        this.apellido = apellido;
    }
    public String getEspecialidad() {
        return especialidad;
    }
    public void setEspecialidad(String especialidad) {
        this.especialidad = especialidad;
    }
    public Paciente[] getPacientesFrecuentes() {
		return pacientesFrecuentes;
	}
	public void setPacientesFrecuentes(Paciente[] pacientesFrecuentes) {
		this.pacientesFrecuentes = pacientesFrecuentes;
	}
    public float calcularIMC(float peso, float estatura){
        float resultado;
        resultado = (peso/(estatura*estatura));
        return resultado;
    }
    public String traerInfoMedico(){
        String resultado;
        resultado= nombre+" "+apellido+" "+especialidad;
        return resultado;
    }
	public float calcularIMC(Paciente paciente) {
    	float resultado;
        resultado = (paciente.getPeso()/(paciente.getEstatura()*paciente.getEstatura()));
        return resultado;
    }
    public double traerPromedioPeso() {
    	float suma=0;
    	for(int i=0; i<pacientesFrecuentes.length; i++) {
    		suma = suma + pacientesFrecuentes[i].getPeso();
    	}
    	double promedio = (double) suma / pacientesFrecuentes.length;
    	return promedio;
    }
    public Paciente traerPacienteMayorEstatura() { //es float en vez de Paciente[] (supongo)
    	Paciente mayorPaciente = new Paciente("","",0,0);
    	float mayor;
	    //int posicion;
	    mayor = pacientesFrecuentes[0].getEstatura();
	    //posicion = 0;
	    for(int f=1; f<pacientesFrecuentes.length; f++) {
	        if (pacientesFrecuentes[f].getEstatura() > mayor) {
	            mayorPaciente = pacientesFrecuentes[f];
	            //posicion = f;
	        }
	    }
	    return mayorPaciente;
    }
    public Paciente traerMenorIMC() {
    	Paciente menorIMC = new Paciente("","",0,0);
    	float menor;
	    //int posicion;
	    menor = calcularIMC(menorIMC);
	    //posicion = 0;
	    for(int f=1; f<pacientesFrecuentes.length; f++) {
	    	float aux = calcularIMC(pacientesFrecuentes[f]);
	        if (aux < menor) {
	        	menorIMC = pacientesFrecuentes[f];
	            //posicion = f;
	        }
	    }
	    return menorIMC;
	    /*int[] pesosMenosDeX = null;
		
		//Primero contamos cuántos pesos hay menores que el indicado
		int contador = 0;
		for (int i = 0; i < pacientesFrecuentes.length; i++) {
			if (pacientesFrecuentes[i].getPeso() < menorIMC.getPeso()) {
				contador++;
		}
		//Ahora que los hemos contado, ya sabemos cuánto ha de medir el array
		if (contador > 0) {
			pesosMenosDeX = new int[contador];
			int indiceArray = 0; //El array de pesos menores necesita su propio indice
			for (int f = 0; f < pacientesFrecuentes.length; f++) {
				if (pacientesFrecuentes[f].getPeso() < menorIMC.getPeso()) {
					pesosMenosDeX[indiceArray] = pacientesFrecuentes[f];
						indiceArray++;
				}
			}
		}
		
		return pesosMenosDeX;*/
    }
}
