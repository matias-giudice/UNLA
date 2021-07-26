#include <stdio.h> /* Declaración librerías*/
#include <stdlib.h>
#include <string.h>
int main(){
    //char abecedario[53]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i,j; //Ciclos que ayudaran a ordenar el arreglo
	char palabra[5][10]; //Arreglo que guardara las palabras
	char aux[20]; //Vector auxiliar que guardara palabras temporalmente

	//Ciclo en el que solicitamos las palabras a ingresar
	for(i=0; i<2; i++){
		printf("Ingresa una palabra: ");
		scanf("%s",&palabra[i]);
	}

	for(i=1; i<2; i++){ //Ciclo que se repetirá 5 veces para ordenar cada nombre
        for(j=0; j<2-i; j++){//Ciclo que ordenara un nombre, se va restando pues en cada vuelta queda ordenado el ultimo nombre
            if(strcmp(palabra[j],palabra[j+1])>0){ //Si el nombre actual es mayor al siguiente nombre...
                strcpy(aux,palabra[j]); //Guardamos el nombre actual en Aux
        		strcpy(palabra[j],palabra[j+1]); //Pasamos el nombre siguiente al actual
        		strcpy(palabra[j+1],aux); //Pasamos el Aux al siguiente
    	    }
        }
    }
	printf("\n \n---- NOMBRES ORDENADOS ---- \n");
	//Mostramos los nombres ordenados
	for(i=0; i<2; i++){
		printf("%s \n",palabra[i]);
	}

	return 0;
}
