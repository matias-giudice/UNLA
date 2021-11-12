;------------------------------------------------------------
; Proyecto: Ejercicio 1 - PUNTO A
; Autor: Matías Damian Giudice
; Fecha: 09/11/2021
; PIC: 16F628A
; Velocidad de reloj: Int 4 Mhz
; Descripcion: Encender todos los leds.
;------------------------------------------------------------
#INCLUDE <P16F628A.inc>
;Encender y apagar todos los leds cada un segundo.
	ORG 0

CONT3 EQU 0x20
CONT2 EQU 0x21
CONT1 EQU 0x22

;Pines en banco 1 setearlos a salida
	BSF STATUS,RP0
	MOVLW B'00000000'
	MOVWF TRISB

	BCF STATUS,RP0 ;Volvemos al banco 0
encendido
	MOVLW B'00001111'
	MOVWF PORTB

	CALL delay_1s

delay_1s
	movlw	.4
	movwf	CONT3

loop_1	
	decfsz	CONT3,f
	goto	loop_1
	return	
	

END