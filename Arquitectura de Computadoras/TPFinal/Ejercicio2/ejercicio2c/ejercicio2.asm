#INCLUDE <P16F628A.inc>

	ORG 0

delay	EQU		0x20
CONT1	EQU		0X21
CONT2	EQU		0x22

;	En base a un circuito compuesto por un PIC16F628A con un pulsador en el
;	terminal RB0 y un led en los terminales RB1 y RB2 desarrollar los programas
;	que permitan:
;	[b] Prender los leds cuando se presione y botón y apagarlos cuando se
;	presione de nuevo.
;	[c] Realizar la siguiente secuencia a medida que se presiona el botón: prender
;	RB1, prender RB2, apagar RB1, apagar RB2.
;	[d] Idem punto [c] con interrupción por RB0.

INICIO
	BSF		STATUS,RP0	;Banco 1
	MOVLW	B'00000001'	;
	MOVWF	TRISB		;
	BCF		OPTION_REG,7;

	BCF		STATUS,RP0	;Banco 0
	MOVLW	B'00000000'	;
	MOVWF	PORTB		;

WT_ON1
	BTFSC	PORTB,0		;
	GOTO 	WT_ON1		;
	CALL	delay_ms	;
	BTFSC	PORTB,0		;
	GOTO 	WT_ON1		;
	CALL	delay_ms	;
	BSF		PORTB,1		;
	BSF		PORTB,2		;

WT_OFF1
	BTFSC	PORTB,0		;
	GOTO 	WT_OFF1		;
	CALL	delay_ms	;
	BTFSC	PORTB,0		;
	GOTO 	WT_OFF1		;
	CALL	delay_ms	;
	BCF		PORTB,1		;
	BCF		PORTB,2		;

	GOTO 	WT_ON1		;

delay_ms
	movlw	.100
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