package test;

import consultorio.Paciente;
import consultorio.Medico;

public class TestConsultorio {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        /*Medico medico1 = new Medico("Daniel", "López", "Cirujano");
        Paciente paciente1 = new Paciente("José", "Pérez",1.80f,85);
        Paciente paciente2 = new Paciente("Jorge", "Fernández",1.60f,90);
        System.out.println("Visita 1: ");
        System.out.println("Medico: " + medico1.traerInfoMedico());
        System.out.println("Paciente: " + paciente1.traerNombreCompleto() + " IMC " + medico1.calcularIMC(paciente1.getPeso(), paciente1.getEstatura()));
        System.out.println("Paciente: " + paciente2.traerNombreCompleto() + " IMC " + medico1.calcularIMC(paciente2.getPeso(), paciente2.getEstatura()));*/
        /*System.out.println(paciente1.traerNombreCompleto());
        System.out.println(paciente2.traerNombreCompleto());*/
		
		/*ULTIMO EJERCICIO DE LA GUIA 2*/
		Medico medico1 = new Medico("Daniel", "López", "Cirujano");
		Paciente paciente1 = new Paciente("José", "Pérez",1.80f,85);
        Paciente paciente2 = new Paciente("Jorge", "Fernández",1.60f,90);
        System.out.println("Paciente: " + paciente1.traerNombreCompleto() + " IMC " + medico1.calcularIMC(paciente1));
        System.out.println("Paciente: " + paciente2.traerNombreCompleto() + " IMC " + medico1.calcularIMC(paciente2));
	}
}
/*
Repaso
1)Como se resuelve un problema desde el paradigma de objetos?
  La programación orientada a objetos evita que creemos codigo desordenado, ilegible y dificultoso de mantener. Desde esta idea parte una serie de soluciones que ofrece este paradigma: eliminar codigo innecesario y por consiguiente facilitar el mantenimiento del mismo.
  El paradigma de objetos podemos definirlo como un sistema que se basa en objetos que se relacionan entre si. Considerandose a objetos como a todo aquello que tiene entidad (atributos) y comprtamientos(funciones)
2)Cuales son las ventajas que brinda Java?
  Es sencillo de aprender.
  Es un lenguaje orientado a objetos.
  Java es una gran API.
  Posee herramientas poderosas.
  Una gran colecciÃ³n de librerias de codigo abierto.
  Posee una gran comunidad.
  Java es gratuito.
  Multiplataforma
  Sus programas estan compilados tan perfecta y originalmente, que no tendras ningun problema con filtros de seguridad ni cosas por el estilo.
3)Que es una clase?
  Es una plantilla para la creacion de objetos.
  En el 1° Programa Java, cual es la diferencia entre la clase Paciente y TestConsultorio?
  La diferencia es que en la clase Paciente se defini los atributos y metodos que va a utilizar y su desarrollo y en TestConsultorio se carga los datos y se llaman a las funciones.
4)Que representa un atributo?
  Un atributo representa las caracteristicas que va a tener en la clase del objeto.
5)Cual es la visibilidad de los atributos?
  Para definir la visibilidad en Java, se dispone de palabras reservadas: 
   public: nos indica que es accesible desde cualquier clase [interface]. 
   private: solo es accesible desde a clase actual. 
   protected: accesible desde la clase actual, sus descendientes o el paquete del que forma parte.
6)Cual es la forma de acceder al valor de un atributo, desde otra clase?
  Siempre y cuando utilices public o protected en el atributo o metodo que quieres acceder desde afuera de la clase.
  atreves de los get y set
7)Que funcionalidad nos brinda el constructor?
  Un constructor es un tipo especefico de metodo que siempre tiene el mismo nombre que la clase, y que se utiliza cuando se desean crear objetos de dicha clase, es decir, se utiliza al crear e iniciar un objeto de una clase.
8)Para que utilizamos "this"?
  Se utiliza para representar una instancia de la clase en la que aparece y para acceder a los miembros de la clase.
9)Para que se utilizan los metodos "setter"?
  Setters: Del Ingless Set, que significa establecer, sirven para asignar un valor a un campo/atributo.
10)En el 1° Programa Java definimos un caso de uso, cual es?
    El caso de uso que se utilizo fue traerNombreCompleto(): String.
   Que parametros recibe?
    No recibe ningun parametro.
   Que resultado retorna?
    Retorna como resultaado un string, mostrando el nombre y apellido del paciente.
------
@override
para que se usa el toString()?
 El método toString() en Java, como su propio nombre indica, se utiliza para convertir a String (es decir, a una cadena de texto) cualquier objeto Java.
*/