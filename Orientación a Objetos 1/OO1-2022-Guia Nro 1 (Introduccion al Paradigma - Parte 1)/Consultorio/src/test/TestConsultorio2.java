package test;
import consultorio.Paciente;
import consultorio.Medico;

public class TestConsultorio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Medico medico1 = new Medico("Daniel", "López", "Cirujano");
        Paciente paciente1 = new Paciente("José", "Pérez",1.80f,85);
        Paciente paciente2 = new Paciente("Jorge", "Fernández",1.60f,90);
        paciente1.setPeso(5.11f);
        paciente2.setPeso(9.67f);
        System.out.println("Visita 2: ");
        System.out.println("Medico: " + medico1.traerInfoMedico());
        System.out.println("Paciente: " + paciente1.traerNombreCompleto() + " IMC " + medico1.calcularIMC(paciente1.getPeso(), paciente1.getEstatura()));
        System.out.println("Paciente: " + paciente2.traerNombreCompleto() + " IMC " + medico1.calcularIMC(paciente2.getPeso(), paciente2.getEstatura()));
        /*System.out.println(paciente1.traerNombreCompleto());
        System.out.println(paciente2.traerNombreCompleto());*/
	}

}
