Algoritmo triangulo_rectangulo
	//Definimos variables
	Definir hipotenusa, area, perimetro, catetoMenor, catetoMayor Como Real;
	//Asignamos valores a las variables
	catetoMenor<-3;
	catetoMayor<-5;
	//Operaciones
	hipotenusa<-rc(catetoMenor^2+catetoMayor^2);
	area<-(catetoMenor*catetoMayor)/2;
	perimetro<-catetoMenor+catetoMayor+hipotenusa;
	//Mensaje al usuario
	Escribir "hipotenusa: ", hipotenusa;
	Escribir "area: ", area;
	Escribir "perimetro: ", perimetro;
	
FinAlgoritmo