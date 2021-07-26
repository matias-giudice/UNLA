#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define pi 3.141592
int numero();
void numeroPar(int n);
void numeroMultiploCinco(int n);
void numeroMayor(int a, int b);
void ordenarMayorAmenor(int a, int b, int c);
void ordenarMenorAmayor(int a, int b, int c);
void ordenarMayorAmenorCuatroVariables(int a, int b, int c, int d);
float cargarPeso();
float cargarAltura();
float calcularIMC(float peso, float altura);
void mostrarIMC(float imc);
int cargarAnio();
void verificarAnio(int anio);
int cargarDia();
void diaSemana(int dia);
float numeroF();
float calcularPromedio(float x, float y, float z);
void mostrarPromedio(float promedio);
int cargarTempGrados();
void verificarTempGrados(int tempGrados);
float cargarNota();
void verificarNota(float nota);
void calcularOperacion();
int cargarHoras();
int cargarMinutos();
int cargarSegundos();
int calcularSegundos(int horas, int minutos, int segundos);
void mostrarSegundos(int dia);
float cargarRadio();
float calcularAreaCirculo(float radio);
float calcularLongCirculo(float radio);
void mostrarOperacionesCirculo(float area, float longi);
float cargarCatetoMenor();
float cargarCatetoMayor();
float calcularHipotenusa(float catMenor,float catMayor);
float calcularAreaCatetos(float catMenor,float catMayor);
float calcularPerimetroCatetos(float catMenor,float catMayor,float hipotenusa);
void mostrarOperacionesCatetos(float hipotenusa, float area, float perimetro);
int cargarDividendo();
int cargarDivisor();
int calcularMod(int dividendo, int divisor);
void mostrarMod(int dividendo, int divisor, int valorMod);
int dadoAleatorio();
int sumaDados(int dado1, int dado2);
void mostrarDados(int dado1, int dado2, int suma);
void verificarDadoParImpar(int dadopi);
int cantVecesDadoParImpar();
void mostrarCantDado(int cantVeces);
void multiplos(int k, int l);
void multiploDe(int i);
int monedaAleatoria();
void verificarMoneda(int moneda);
int cantVecesMoneda();
void verificarMonedaProbabilidad(int cantVecesM);
float cargarPrecio();
int cargarUnidad();
void mostrarCompra(float precio, int unidad);
void mostrarCompraUnGratis(float precio, int unidad);
int cargarBase();
int cargarPotencia();
void mostrarPotencia(int base, int potencia);
void mostrarFactorial(int num);
int cargarSucesion();
void mostrarSucesion(int valorHasta);
void adivinarNumero();
void cocienteYresto();
void esPrimoOcompuesto(int n);
void maximoComunDivisor(int a, int b);
int main(){
    srand(time(0));
    int a = numero();
    int b = numero();
    int c = numero();
    int d = numero();
    printf("\nVerifica si el numero %d es par o impar y si es multiplo o no de 5: \n",a);
    numeroPar(a);
    numeroMultiploCinco(a);
    printf("\nNumero mayor entre %d y %d: \n",a,b);
    numeroMayor(a,b);
    printf("\nNumeros ordenados de mayor a menor: (3 variables)\n");
    ordenarMayorAmenor(a,b,c);
    printf("\nNumeros ordenados de menor a mayor: (3 variables)\n");
    ordenarMenorAmayor(a,b,c);
    printf("\nNumeros ordenados de mayor a menor: (4 variables)\n");
    ordenarMayorAmenorCuatroVariables(a,b,c,d);

    float peso = cargarPeso();
    float altura = cargarAltura();
    float imc = calcularIMC(peso,altura);
    mostrarIMC(imc);

    int anio = cargarAnio();
    verificarAnio(anio);

    int dia = cargarDia();
    diaSemana(dia);

    float x = numeroF();
    float y = numeroF();
    float z = numeroF();
    float promedio = calcularPromedio(x,y,z);
    mostrarPromedio(promedio);

    int tempGrados = cargarTempGrados();
    verificarTempGrados(tempGrados);

    float nota = cargarNota();
    verificarNota(nota);

    calcularOperacion();

    int horas = cargarHoras();
    int minutos = cargarMinutos();
    int segundos = cargarSegundos();
    int diaSeg = calcularSegundos(horas,minutos,segundos);
    mostrarSegundos(diaSeg);

    float radio = cargarRadio();
    float area = calcularAreaCirculo(radio);
    float longi = calcularLongCirculo(radio);
    mostrarOperacionesCirculo(area,longi);

    float catMenor = cargarCatetoMenor();
    float catMayor = cargarCatetoMayor();
    float hipotenusa = calcularHipotenusa(catMenor,catMayor);
    float areaCat = calcularAreaCatetos(catMenor,catMayor);
    float perimetro = calcularPerimetroCatetos(catMenor,catMayor,hipotenusa);
    mostrarOperacionesCatetos(hipotenusa,areaCat,perimetro);

    int dividendo = cargarDividendo();
    int divisor = cargarDivisor();
    int valorMod = calcularMod(dividendo,divisor);
    mostrarMod(dividendo,divisor,valorMod);

    int dado1 = dadoAleatorio();
    int dado2 = dadoAleatorio();
    int suma = sumaDados(dado1,dado2);
    mostrarDados(dado1,dado2,suma);

    int dadopi = dadoAleatorio();
    verificarDadoParImpar(dadopi);

    int cantVeces = cantVecesDadoParImpar();
    mostrarCantDado(cantVeces);

    int i = numero();
    int k = numero();
    int l = numero();
    multiplos(k,l);
    multiploDe(i);

    int moneda = monedaAleatoria();
    verificarMoneda(moneda);
    int cantVecesM = cantVecesMoneda();
    verificarMonedaProbabilidad(cantVecesM);

    float precio = cargarPrecio();
    int unidad = cargarUnidad();
    mostrarCompra(precio,unidad);
    mostrarCompraUnGratis(precio,unidad);

    int base = cargarBase();
    int potencia = cargarPotencia();
    mostrarPotencia(base,potencia);

    int num = numero();
    mostrarFactorial(num);

    int valorHasta = cargarSucesion();
    mostrarSucesion(valorHasta);

    adivinarNumero();

    cocienteYresto();

    int n = numero();
    esPrimoOcompuesto(n);

    int o = numero();
    int p = numero();
    maximoComunDivisor(o,p);
    return 0;
}
int numero(){
    int num;
    printf("Ingrese un numero: \n");
    scanf("%d", &num);
    return num;
}
void numeroPar(int a){
    if((a%2==0)){
        printf("El numero %d es par.\n",a);
    }else printf("El numero %d es impar.\n",a);
}
void numeroMultiploCinco(int a){
    if((a%5==0)){
        printf("El numero %d es multiplo de 5.\n",a);
    }else printf("El numero %d no es multiplo de 5.\n",a);
}
void numeroMayor(int a, int b){
    if(a>b){
        printf("El numero mayor es: %d\n", a);
    }else printf("El numero mayor es: %d\n", b);
}
void ordenarMayorAmenor(int a, int b, int c){
    if(a>b){
        if(b>c){
            printf("%d \n",a);
            printf("%d \n",b);
            printf("%d \n",c);
        }else{
            if(a>c){
                printf("%d \n",a);
                printf("%d \n",c);
                printf("%d \n",b);
            }else{
                printf("%d \n",c);
                printf("%d \n",a);
                printf("%d \n",b);
            }
        }
    }else{
        if(a>c){
            printf("%d \n",b);
            printf("%d \n",a);
            printf("%d \n",c);
        }else{
            if(b>c){
                printf("%d \n",b);
                printf("%d \n",c);
                printf("%d \n",a);
            }else{
                printf("%d \n",c);
                printf("%d \n",b);
                printf("%d \n",a);
            }
        }
    }
}
void ordenarMenorAmayor(int a, int b, int c){
    if(a<b){
        if(b<c){
            printf("%d \n",a);
            printf("%d \n",b);
            printf("%d \n",c);
        }else{
            if(a<c){
                printf("%d \n",a);
                printf("%d \n",c);
                printf("%d \n",b);
            }else{
                printf("%d \n",c);
                printf("%d \n",a);
                printf("%d \n",b);
            }
        }
    }else{
        if(a<c){
            printf("%d \n",b);
            printf("%d \n",a);
            printf("%d \n",c);
        }else{
            if(b<c){
                printf("%d \n",b);
                printf("%d \n",c);
                printf("%d \n",a);
            }else{
                printf("%d \n",c);
                printf("%d \n",b);
                printf("%d \n",a);
            }
        }
    }
}
void ordenarMayorAmenorCuatroVariables(int a, int b, int c, int d){
    int r;
    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    if(b<c){
        r=b;
        b=c;
        c=r;
    }
    if(c<d){
        r=c;
        c=d;
        d=r;
    }
    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    if(b<c){
        r=b;
        b=c;
        c=r;
    }
    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    printf("\nEl orden de mayor a menor es %d,%d,%d,%d\n",a,b,c,d);
}
float cargarPeso(){
    float p;
    printf("Ingrese su peso: \n");
    scanf("%f", &p);
    return p;
}
float cargarAltura(){
    float a;
    printf("Ingrese su altura: \n");
    scanf("%f", &a);
    return a;
}
float calcularIMC(float peso, float altura){
    float alt = altura * altura;
    float imc = ((float)peso) / ((float)alt);
    return imc;
}
void mostrarIMC(float imc){
    if(imc<18.5){
        printf("\nResultado: %.1f \n", imc);
        printf("Peso inferior al normal. \n");
    }
    if(imc>=18.5 && imc<=24.9){
        printf("\nResultado: %.1f \n", imc);
        printf("Peso normal. \n");
    }
    if(imc>=25.0 && imc<=29.9){
        printf("\nResultado: %.1f \n", imc);
        printf("Peso superior al normal. \n");
    }
    if(imc>=30.0){
        printf("\nResultado: %.1f \n", imc);
        printf("Obesidad. \n");
    }
}
int cargarAnio(){
    int a;
    printf("Ingrese anio: \n");
    scanf("%d", &a);
    return a;
}
void verificarAnio(int anio){
    if(anio%4==0){
        if(anio%100==0){
            if(anio%400==0){
                printf("Es bisiesto el anio %d", anio);
            }else printf("No es bisiesto el anio %d", anio);
        }else printf("Es bisiesto el anio %d", anio);
    }else printf("No es bisiesto el anio %d", anio);
}
int cargarDia(){
    int d;
    printf("Ingrese un numero que represente un dia de la semana!(del 1 al 7)\n");
    scanf("%d", &d);
    return d;
}
void diaSemana(int dia){
    switch(dia){
        case 1:
            printf("1 - Lunes\n");
        break;
        case 2:
            printf("2 - Martes\n");
        break;
        case 3:
            printf("3 - Miercoles\n");
        break;
        case 4:
            printf("4 - Jueves\n");
        break;
        case 5:
            printf("5 - Viernes\n");
        break;
        case 6:
            printf("6 - Sabado\n");
        break;
        case 7:
            printf("7 - Domingo\n");
        break;
        default:
            printf("ERROR!\n");
        break;
    }
}
float numeroF(){
    float num;
    printf("Ingrese un numero: \n");
    scanf("%f", &num);
    return num;
}
float calcularPromedio(float x, float y, float z){
    float suma = x + y + z;
    float prom = ((float)suma) / 3;
    return prom;
}
void mostrarPromedio(float promedio){
    printf("Promedio: %.2f \n", promedio);
}
int cargarTempGrados(){
    int tg;
    printf("Ingrese temperatura en grados: \n");
    scanf("%d", &tg);
    return tg;
}
void verificarTempGrados(int tempGrados){
    if(tempGrados>100){
        printf("Temperatura arriba del punto de ebullicion del agua. \n");
    }else{
        printf("Temperatura abajo del punto de ebullicion del agua. \n");
    }
}
float cargarNota(){
    float n;
    printf("Ingrese nota: \n");
    scanf("%f", &n);
    return n;
}
void verificarNota(float nota){
    if(nota<5.0){
        printf("Suspenso. \n");
    }
    if(nota>5 && nota<6.5){
        printf("Aprobado. \n");
    }
    if(nota>6.5 && nota<8.5){
        printf("Notable. \n");
    }
    if(nota>8.5 && nota<10){
        printf("Sobresaliente. \n");
    }
    if(nota==10){
        printf("Matricula de honor. \n");
    }
}
void calcularOperacion(){
    char op;
    float resultado;
    int valido = 1;
    printf("Ingrese operacion: \n");
    scanf("%c", &op);
    float m = numeroF();
    float n = numeroF();
    switch (op) {
        case '+':
            resultado = m + n;
            break;
        case '-':
            resultado = m - n;
            break;
        case '*':
        case 'x':
            resultado = m * n;
            break;
        case '/':
            resultado = ((float)m) / ((float)n);
            break;
        default:
            valido = 0;
            break;
    }

    if (valido!=0){
        printf("El resultado es %.1f\n", resultado);
    }else{
        printf("Operacion invalida\n");
    }
}
int cargarHoras(){
    int hor;
    printf("\nIngresar horas: \n");
    scanf("%d", &hor);
    return hor;
}
int cargarMinutos(){
    int min;
    printf("\nIngresar minutos: \n");
    scanf("%d", &min );
    return min;
}
int cargarSegundos(){
    int seg;
    printf("\nIngresar segundos: \n");
    scanf("%d", &seg);
    return seg;
}
int calcularSegundos(int horas, int minutos, int segundos){
    int total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}
void mostrarSegundos(int dia){
    printf("\nDesde las 0:0:0 horas han pasado %d segundos.\n", dia);
}
float cargarRadio(){
    float r;
    printf("Introduzca radio: \n");
    scanf("%f", &r);
    return r;
}
float calcularAreaCirculo(float radio){
    float a = pi * radio * radio;
    return a;
}
float calcularLongCirculo(float radio){
    float l = 2*(pi*radio);
    return l;
}
void mostrarOperacionesCirculo(float area, float longi){
    printf( "Area: %.1f\n", area);
    printf( "Longitud: %.1f\n", longi);
}
float cargarCatetoMenor(){
    float cMe;
    printf("Ingrese valor de catetoMenor: \n");
    scanf("%f",&cMe);
    return cMe;
}
float cargarCatetoMayor(){
    float cMa;
    printf("Ingrese valor de catetoMayor: \n");
    scanf("%f",&cMa);
    return cMa;
}
float calcularHipotenusa(float catMenor, float catMayor){
    float h = sqrt(catMenor*catMenor+catMayor*catMayor);
    return h;
}
float calcularAreaCatetos(float catMenor, float catMayor){
    float a = (catMenor*catMayor)/2;
    return a;
}
float calcularPerimetroCatetos(float catMenor, float catMayor, float hipotenusa){
    float p = catMenor+catMayor+hipotenusa;
    return p;
}
void mostrarOperacionesCatetos(float hipotenusa, float area, float perimetro){
    printf("Hipotenusa: %.1f\n",hipotenusa);
    printf("Area: %.1f\n",area);
    printf("Perimetro: %.1f\n",perimetro);
}
int cargarDividendo(){
    int dividendo;
    printf("Ingrese el dividendo: \n");
    scanf("%d",&dividendo);
    return dividendo;
}
int cargarDivisor(){
    int divisor;
    printf("Ingrese el divisor: \n");
    scanf("%d",&divisor);
    return divisor;
}
int calcularMod(int dividendo, int divisor){
    int vM = dividendo % divisor;
    return vM;
}
void mostrarMod(int dividendo, int divisor, int valorMod){
    printf("\n%d MOD %d = %d \n",dividendo,divisor,valorMod);
}
int dadoAleatorio(){
    int dado = 1 + rand() % 6;
    return dado;
}
int sumaDados(int dado1, int dado2){
    int s = dado1 + dado2;
    return s;
}
void mostrarDados(int dado1, int dado2, int suma){
    printf("En el 1er dado salio un: %d\n", dado1);
    printf("En el 2do dado salio un: %d\n", dado2);
    printf("La suma de ambos dados es: %d\n", suma);
}
void verificarDadoParImpar(int dadopi){
    if(dadopi % 2 == 0){
        printf("DADO: %d - PAR. \n",dadopi);
    }else{
        printf("DADO: %d - IMPAR. \n",dadopi);
    }
}
int cantVecesDadoParImpar(){
    int n;
    printf("Cuantas veces quiere tirar un dado? \n");
    scanf("%d",&n);
    return n;
}
void mostrarCantDado(int cantVeces){
    int c,par,impar,dado;
    par = 0;
    impar = 0;
    for(c=1; c<=cantVeces; c++){
        dado = dadoAleatorio();
        printf("%d = %d\n",c,dado);
        if(dado % 2 == 0){
            par = par + 1;
        }else{
            impar = impar + 1;
        }
    }
    printf("Salio %d veces una cara con numero par. \n",par);
    printf("Salio %d veces una cara con numero impar. \n",impar);
}
void multiplos(int k, int l){
    if(k%l==0){
        printf("Son multiplos. \n");
    }else{
        printf("No son multiplos. \n");
    }
}
void multiploDe(int i){
    if(i % 3 == 0 || i % 7 == 0){
        if(i % 3 == 0){
            printf("%d es multiplo de 3. \n",i);
        }
        if(i % 7 == 0){
            printf("%d es multiplo de 7. \n",i);
        }
    }else{
        printf("%d no es multiplo de ninguno. \n",i);
    }
}
int monedaAleatoria(){
    int m = rand() % 2;
    return m;
}
void verificarMoneda(int moneda){
    if(moneda==1){
        printf("Salio %d = CARA\n",moneda);
    }else{
        if(moneda==0){
            printf("Salio %d = CECA\n",moneda);
        }
    }
}
int cantVecesMoneda(){
    int n;
    printf("Cuantas veces quiere tirar una moneda? \n");
    scanf("%d",&n);
    return n;
}
void verificarMonedaProbabilidad(int cantVecesM){
    int c,moneda,cantCaras,cantCecas;
    float cara,ceca;
    cantCaras = 0;
    cantCecas = 0;
    for(c=1; c<=cantVecesM; c++){
        moneda = monedaAleatoria();
        printf("%d = %d\n",c,moneda);
        if(moneda == 1){
            cantCaras = cantCaras + 1;
        }else{
            cantCecas = cantCecas + 1;
        }
    }
    cara = (((float)cantCaras)/((float)cantVecesM)*100);
    ceca = (((float)cantCecas)/((float)cantVecesM)*100);
    printf("Hay %.0f de probabilidad que salga cara. \n",cara);
    printf("Hay %.0f de probabilidad que salga ceca. \n",ceca);
}
float cargarPrecio(){
    float p;
    printf("Precio: \n");
	scanf("%f",&p);
	return p;
}
int cargarUnidad(){
    float u;
    printf("Unidades: \n");
	scanf("%f",&u);
	return u;
}
void mostrarCompra(float precio, int unidad){
    float subTotal,descuento,total;
    if(unidad>4){
		printf("Paga con descuento. \n");
		subTotal = precio*unidad;
		descuento = subTotal*0.05;
		total = subTotal-descuento;
		printf("Total a pagar: $ %.2f \n", total);
	}else{
		printf("Paga sin descuento. \n");
		subTotal = precio*unidad;
		total = subTotal;
		printf("Total a pagar: $ %.2f \n", total);
	}
}
void mostrarCompraUnGratis(float precio, int unidad){
    float subTotal,descuento,total,unGratis;
    if(unidad>3){
		printf("Paga con descuento. \n");
		subTotal = precio*unidad;
		unGratis = unidad / 3;
		descuento = unGratis*precio;
		total = subTotal-descuento;
		printf("Total a pagar: $ %.2f \n", total);
	}else{
		printf("Paga sin descuento. \n");
		subTotal = precio*unidad;
		total = subTotal;
		printf("Total a pagar: $ %.2f \n", total);
	}
}
int cargarBase(){
    int b;
    printf("Ingrese la base: \n");
    scanf("%d",&b);
    return b;
}
int cargarPotencia(){
    int p;
    printf("Ingrese la potencia: \n");
    scanf("%d",&p);
    return p;
}
void mostrarPotencia(int base, int potencia){
    int po = 1;
    int c = 1;
    while(c<=potencia){
        po = po * base;
        c = c + 1;
    }
    printf("%d ^ %d = %d",base,potencia,po);
}
void mostrarFactorial(int num){
    int x,f;
    if(num<0){
        printf("El numero %d no se puede calcular.",num);
    }else{
        x = 1;
        f = 1;
        while(x<=num){
            f = f * x;
            x = x + 1;
        }
        printf("%d != %d",num,f);
    }
}
int cargarSucesion(){
    int vH;
    printf("ingrese hasta que posicion desea imprimir la sucesion: \n");
    scanf("%d",&vH);
    return vH;
}
void mostrarSucesion(int valorHasta){
    int a,b,c,contador;
    a = 1;
	b = 1;
	c = a + b;
    for(c=1; c<=valorHasta; c++){
        if(c <= 2){
            printf("%d\n",a);
        }else{
            c = a + b;
            printf("%d\n",c);
			a = b;
			b = c;
        }
    }
}
void adivinarNumero(){
    int numeroSecreto,maximoIntentos,numeroUsuario,intentos;
    numeroSecreto = 26;
    maximoIntentos = 30;
    printf("Adivina el numero que estoy pensando en %d intentos o menos...\n",maximoIntentos);
    printf("Que numero te parece que es? \n");
    scanf("%d",&numeroUsuario);
    intentos = 1;
    while(numeroUsuario != numeroSecreto && intentos < maximoIntentos){
        if(numeroUsuario > numeroSecreto){
            printf("%d es mayor que el numero que pense.\n",numeroUsuario);
        }else{
            printf("%d es menor que el numero que pense.\n",numeroUsuario);
        }
        printf("Proba de nuevo! Te quedan %d intentos.\n",maximoIntentos-intentos);
        scanf("%d",&numeroUsuario);
        intentos = intentos + 1;
    }
    if(intentos == maximoIntentos){
        printf("Perdiste! No adivinaste en %d intentos o menos.\n",maximoIntentos);
    }else{
        printf("Adivinaste en %d intentos!\n",intentos);
    }
    printf("El numero que pense es: %d",numeroSecreto);
}
void cocienteYresto(){
    int dividendo,divisor,resultado,cociente,resto;
    printf("Ingrese el dividendo: \n");
    scanf("%d",&dividendo);
    printf("Ingrese el divisor: \n");
    scanf("%d",&divisor);
    resultado = (dividendo - divisor);
    while(resultado <= 0){
        printf("Ingrese nuevamente el dividendo: \n");
        scanf("%d",&dividendo);
        printf("Ingrese nuevamente el divisor: \n");
        scanf("%d",&divisor);
    }
    cociente = (resultado-divisor);
    resto = (cociente-divisor);
    printf("%d - %d = %d\n",dividendo,divisor,resultado);
    printf("%d - %d = %d\n",resultado,divisor,cociente);
    printf("%d - %d = %d\n",cociente,divisor,resto);
    printf("El cociente es: %d y el resto de la division es: %d\n",cociente,resto);
}
void esPrimoOcompuesto(int n){
    int cantDivisores,i;
    if(n<=0){
        printf("El numero debe ser mayor que 0.\n");
    }else{
        cantDivisores = 0;
        i = 2;
        while(i<n){
            if(n % i == 0){
                cantDivisores = cantDivisores + 1;
            }
            i = i + 1;
        }
        if(cantDivisores==0 && n>1){
            printf("El numero %d es primo.\n",n);
        }else{
            printf("El numero %d es compuesto.\n",n);
        }
    }
}
void maximoComunDivisor(int a, int b){
    int resto = a % b;
    while(resto != 0){
        a = b;
        b = resto;
        resto = a % b;
    }
    printf("MCD es: %d\n",b);
}
