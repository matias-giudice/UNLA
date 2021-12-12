#INCLUDE <P16F628A.inc>

	ORG 0

delay	EQU		0x20

;	En base a un circuito compuesto por un PIC16F628A con un pulsador en el
;	terminal RB0 y un led en los terminales RB1 y RB2 desarrollar los programas
;	que permitan:
;	[a] Prender ambos leds cuando se presione el botón.
;	[b] Prender los leds cuando se presione y botón y apagarlos cuando se
;	presione de nuevo.
;	[c] Realizar la siguiente secuencia a medida que se presiona el botón: prender
;	RB1, prender RB2, apagar RB1, apagar RB2.
;	[d] Idem punto [c] con interrupción por RB0.

INICIO
	BSF		STATUS,RP0	;Banco 1
	MOVLW	0x00		;
	MOVWF	TRISB		;
	BSF		TRISB,0		;
	BCF		OPTION_REG,7;

	BCF		STATUS,RP0	;Banco 0
	MOVLW	0x00		;
	MOVWF	PORTB		;

WT_ON1
	BTFSC	PORTB,0		;
	GOTO 	WT_ON1		;
	CALL	T20ms		;
	BSF		PORTB,1		;
	BSF		PORTB,2		;

	GOTO 	$			;

T20ms
	MOVLW	.20			;
	MOVWF	delay		;
	RETURN				;

	END					;