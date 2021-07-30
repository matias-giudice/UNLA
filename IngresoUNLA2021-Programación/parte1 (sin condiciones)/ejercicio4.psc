Algoritmo variables_logicas
	//Definimos variables
	Definir p, q Como Logico; 
	Definir NOTp, NOTq, pANDq, pORq Como Logico;
	//Asignamos valores a las variables
	Escribir "ingrese valor logico para p?";
	Leer p;
	Escribir "ingrese valor logico para q?";
	Leer q;
	//Operaciones
	NOTp<-!p;
	NOTq<-!q;
	pANDq<-p & q;
	pORq<-p | q;
	//Muestra el resultado
	Escribir "p = ", p;
	Escribir "q = ", q;
	Escribir "not p = ", NOTp;
	Escribir "not q = ", NOTq;
	Escribir "p AND q = ", pANDq;
	Escribir "p OR q = ", pORq;
	

FinAlgoritmo