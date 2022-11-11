package Test;

import java.time.LocalDate;

import modelo.Sistema;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//agregarEmpleado() : boolean
		//agregarCliente() : boolean
		//traerEmpleado(long legajo) : Empleado
		//traerCliente(String cuil) : Cliente
		//estadoCredito()
			//--> limiteCredito >= 300.000 (true)
			//--> false
		//clientesAptosCredito() : Cliente
		//empleadosConSueldoAlto() : Empleado
		//calcularSueldo(anio,mes,diasAusentes)
		
		Sistema sistema = new Sistema();
		
		try {
			sistema.agregarEmpleado("roberto", "gonzalez", 1234567, LocalDate.of(2022, 3, 3), 2435, 15000f);
			sistema.agregarEmpleado("julian", "verde", 222222, LocalDate.of(2022, 3, 3), 100, 30000f);
			sistema.agregarEmpleado("marcos", "azul", 333333, LocalDate.of(2022, 3, 3), 4, 15800f);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		try {
			sistema.agregarCliente("juan", "este", 4444444, LocalDate.of(2022, 3, 3), "20345340", 60000f);
			sistema.agregarCliente("antonio", "sur", 555555, LocalDate.of(2022, 3, 3), "2576765", 1500f);
			sistema.agregarCliente("nicolas", "norte", 666666, LocalDate.of(2022, 3, 3), "2843536", 19000f);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		try {
			System.out.println(sistema.traerEmpleado(2435).toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		try {
			System.out.println(sistema.traerCliente("2843536").toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		try {
			System.out.println(sistema.traerCliente("2843536").estadoCredito());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
