;------------------------------------------------------------
; Proyecto: Ejercicio 1 - PUNTO E
; Autor: Matías Damian Giudice
; PIC: 16F628A
; Velocidad de reloj: Int 4 Mhz
; Descripción: Se encenderán los leds de RB0 hasta el de RB3 y se apagarán todos los leds desde el RB3 al RB0, ambos con la misma demora, 
;              realizando todo el ciclo indefinidamente.
;------------------------------------------------------------
#INCLUDE <P16F628A.INC>						;Incluimos el PIC
	ORG 0									;Aca comienza el programa, se ejecuta
;---DEFINIMOS COSTANTES--------------------------------------
CONT3 EQU 0x20								;Posicion de memoria
CONT2 EQU 0x21								;Posicion de memoria
CONT1 EQU 0x22								;Posicion de memoria
;------------------------------------------------------------
	BSF STATUS,RP0							;Moverse al banco 1
	MOVLW B'00000000'						;Configura el puerto B como salida
	MOVWF TRISB

	BCF STATUS,RP0 							;Vuelve al banco 0
;---INICIO DEL PROGRAMA--------------------------------------
inicio										;Inicio del programa
	MOVLW B'00000000'						;Pongo los puertos en 0, lo movemos a w
	MOVWF PORTB								;Lo que se guardo en w lo pasamos a PORTB
	BSF PORTB,0								;Por cada PORTB una salida individualmente la vamos prendiendo
	CALL demora_500ms						;Con una demora de 500ms y luego en ese orden la vamos apagando
	BSF PORTB,1
	CALL demora_500ms
	BSF PORTB,2
	CALL demora_500ms
	BSF PORTB,3
	CALL demora_500ms
	BCF PORTB,3
	CALL demora_500ms
	BCF PORTB,2
	CALL demora_500ms
	BCF PORTB,1
	CALL demora_500ms
	BCF PORTB,0
	CALL demora_500ms
	GOTO inicio								;Cuando termina toda la secuencia vuelve arriba, de esta forma quedaria un ciclo infinito
;------------------------------------------------------------
demora_500ms
	movlw	.2								;Movemos a w el 2 en decimal
	movwf	CONT3							;Lo pasamos al contador (CONT3)

bucle_1	CALL	demora_250ms				;Al entrar al bucle_1, llamamos a demora_250ms porque necesitamos un retardo de 250 y 1 microsegundo
	decfsz	CONT3,f							;Luego decrementamos 2 veces al contador (CONT3) con un 1 por cada ciclo, si llega a 0 se saltea el
											;goto y va al return
	goto	bucle_1							;Mientras no llegue a 0, se vuelve a repetir el bucle_1
	return									;Cuando llega a 0, devulve el return

demora_250ms
	movlw	.250							;Movemos a w el 250 en decimal
	movwf	CONT2							;Lo pasamos al contador (CONT2) 

bucle_2	CALL	demora_1ms					;Al entrar al bucle_2, llamamos a demora_1ms porque necesitamos un retardo de 1 milisegundo
	decfsz	CONT2,f							;Le vamos decrementando al contador (CONT2) un 1 por cada ciclo, si llega a 0 se saltea el goto y va
											;al return
	goto	bucle_2							;Mientras no llegue a 0, se vuelve a repetir el bucle_2	
	return									;Cuando llega a 0, devulve el return
;------------------------------------------------------------
;Consegimos 4 microsegundos
;Si esos 4 microsegundos lo multiplicamos por 250 nos da 1000 microsegundos que es 1 milisegundo
;------------------------------------------------------------
demora_1ms
	movlw	.250							;Movemos a w el 250 en decimal
	movwf	CONT1							;Lo pasamos al contador (CONT1) 

bucle_3	nop									;NOP es como si fuera una linea vacia(salta a la otra linea)
	decfsz	CONT1,f							;Le vamos decrementando al contador (CONT1) un 1 por cada ciclo, si llega a 0 se saltea el goto y va
											;al return
	goto	bucle_3							;Mientras no llegue a 0, se vuelve a repetir el bucle_3
	return									;Cuando llega a 0, devulve el return
	
	END										;Fin del programa