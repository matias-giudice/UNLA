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

apagado
	MOVLW B'00000000'
	MOVWF PORTB

	CALL delay_1s

	GOTO encendido

delay_1s
	movlw	.4
	movwf	CONT3

loop_1	CALL	delay_250ms	
	decfsz	CONT3,f
	goto	loop_1
	return	
	
delay_250ms
	movlw	.250
	movwf	CONT2

loop_2	CALL	delay_1ms	
	decfsz	CONT2,f
	goto	loop_2	
	return
	
delay_1ms
	movlw	.250
	movwf	CONT1

loop_3	nop		
	decfsz	CONT1,f
	goto	loop_3
	return

	END