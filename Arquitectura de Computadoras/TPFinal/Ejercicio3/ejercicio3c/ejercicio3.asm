;------------------------------------------------------------
; Proyecto: Ejercicio 3 - PUNTO C
; Autor: Matías Damian Giudice
; PIC: 16F628A
; Velocidad de reloj: Int 4 Mhz
; Descripcion: 
;------------------------------------------------------------
#INCLUDE <P16F628A.INC>						;Incluimos el PIC
	LIST P=PIC16F628A
    __CONFIG 	3F10
;---DEFINIMOS COSTANTES--------------------------------------
NUMERO	   EQU	0X20						;Posicion de memoria
CONT_TMR0  EQU	0X21						;Posicion de memoria
FLAG_RESTA EQU	0X22						;Posicion de memoria
;------------------------------------------------------------
	ORG 	0x00							;Aca comienza el programa, se ejecuta
		GOTO 	inicio						;Se va a mover a la etiqueta inicio
	ORG 	0x04							;Cuando sucede una interrupcion viene a esta linea
		BCF		INTCON,7					;Desabilita las interrupciones globales
		BTFSS	INTCON,1					;Se verifica si la flag de la pulsacion del boton esta activa, en ese caso va a la etiqueta main
		GOTO	main						;Se va a mover a la etiqueta main
		BCF		INTCON,1					;Baja la flag y termina aca hasta que se levante otra interrupcion

		BSF		STATUS,5					;Nos movemos al banco 1
		MOVLW	0x20						;Cargamos el acumulador con 0x20
		XORWF	OPTION_REG,F				;El contenido del acumulador con el registro f
		BCF		STATUS,5					;Volvemos al banco 0
		GOTO	end_int						;Se va a mover a la etiqueta end_int

inicio
	MOVLW	.61								;Cargamos a w el 61 en decimal
	MOVWF	TMR0							;Lo que tenemos en w lo pasamos a TMR0
	BSF		STATUS,5						;Nos movemos al banco 1
;------------------------------------------------------------
;Luego activamos los registros del 7 al 0
;------------------------------------------------------------
	BCF		OPTION_REG,7					;NOT_RBPU
	BCF		OPTION_REG,5					;Es el clock para el TMR0
	BCF		OPTION_REG,3					;Encargado del prescaler, al estar en 0, se le asigna a TMR0
;------------------------------------------------------------
;Se configura el TMR0 a 50 milisegundos, usando la formula, eso quiere decir que cada 50ms, el TMR0 aumenta
;------------------------------------------------------------
	BSF		OPTION_REG,2					;Controla el Rate, esta en 1, el valor es 256, este valor se usa para calcular el tiempo (con formula)
	BSF		OPTION_REG,1					;Controla el Rate, esta en 1, el valor es 256, este valor se usa para calcular el tiempo (con formula)
	BSF		OPTION_REG,0					;Controla el Rate, esta en 1, el valor es 256, este valor se usa para calcular el tiempo (con formula)
	BSF		INTCON,7						;Activamos las interrupciones globales
	BSF		INTCON,5						;Activamos las interrupciones por TMR0
	BSF		INTCON,4						;Activamos las interrupciones por RB0
	MOVLW	B'00000001'						;Seteamos el RB0 como entrada, y lo cargamos en w
	MOVWF	TRISB							;Lo que tenemos en w, lo movemos a TRISB
	BCF		STATUS,5						;Volvemos al banco 0

	CLRF	NUMERO							;El contenido del registro f se pone en ceros: 0x00, en la posicion de memoria de la variable NUMERO
	CLRF	CONT_TMR0						;El contenido del registro f se pone en ceros: 0x00, en la posicion de memoria de la variable CONT_TMR0
	CLRF	FLAG_RESTA						;El contenido del registro f se pone en ceros: 0x00, en la posicion de memoria de la variable FLAG_RESTA
	CLRW									;El contenido del registro w se pone en ceros: 0x00
	CALL	tabla_display					;Llama a tabla_display
	MOVWF	PORTB							;Al retornar, lo guardamos en el PORTB, seria que cuando lo iniciamos se marque un 0
	
	GOTO 	$								;El programa se queda esperando aca (el signo hace que se quede en esta linea, en forma de bucle)

main
	INCF 	CONT_TMR0,1						;Incrementa el contador del Timer
	MOVF	CONT_TMR0,W						;Lo que se va incrementando en la anterio linea, lo guarda en w
	XORLW	.20								;Verifica dos valores y si son iguales es 0, si son diferentes es 1
	BTFSS	STATUS,Z						;Levanta el flag
	GOTO	salir_timer						;Se va a mover a la etiqueta salir_timer
	BTFSC	FLAG_RESTA,0					;Si la verificacion resulta falsa viene aca, si esta en 0 es suma, si esta en 1 es resta, se verifica el
											;primer bit y en caso de ser suma, salta a suma o en caso de ser resta, salta a resta
	GOTO	resta							;Se va a mover a la etiqueta resta

suma
	INCF	NUMERO,1						;Incrementamos el NUMERO
	BTFSS	NUMERO,4						;Verificamos el 4to bit, si es 1 es porque llego a 16 y no se va a mostrar el mostrar_display, mientras eso 
											;no suceda va a ir a mostrar_display
	GOTO	mostrar_display					;Se va a mover a la etiqueta mostrar_display
	COMF	FLAG_RESTA,F					;Complemento a 1
	DECF	NUMERO,1						;Decrementa en 1

resta
	DECF	NUMERO,1						;Decrementa en 1
	BTFSC	STATUS,Z						;Comprueba si llega a 0, la flag z salta y se pone en 1, en caso de dar 0 salta a la siguiente linea FLAG_RESTA
	COMF	FLAG_RESTA,F					;Vuelve hacer el complemento a 1 a la FLAG_RESTA para que que ponga todo en 0

mostrar_display
	CLRF	CONT_TMR0						;Limpia el TMR0, para que vuelva a empezar a contar hasta el segundo
	MOVF	NUMERO,W						;Mueve a w lo que haya en NUMERO
	CALL	tabla_display					;Llama a tabla_display
	MOVWF	PORTB							;Al retornar, lo guardamos en el PORTB	
						
salir_timer
	BCF		INTCON,T0IF						;Bajamos la flag del TMR0
	MOVLW	.61								;Lo volvemos a cargar
	MOVWF	TMR0							;Lo pasamos a TMR0

end_int
	RETFIE									;Vuelve a la linea GOTO $
;------------------------------------------------------------
;Tabla de Valores
;------------------------------------------------------------
tabla_display
	ADDWF	PCL,1							;Suma w + PCL + 1 (saltaria a la linea del valor que da)
	RETLW 	b'01111110';0					;Retorna el literal que esta guardado en w, y asi con los demas
	RETLW 	b'00001100';1	
	RETLW 	b'10110110';2
	RETLW 	b'10011110';3
	RETLW 	b'11001100';4
	RETLW 	b'11011010';5
	RETLW 	b'11111010';6
	RETLW 	b'00001110';7
	RETLW 	b'11111110';8
	RETLW 	b'11011110';9
	RETLW 	b'11101110';A
	RETLW 	b'11111000';B
	RETLW 	b'01110010';C
	RETLW 	b'10111100';D
	RETLW 	b'11110010';E 
	RETLW 	b'11100010';F	
	
	END									   	;Fin del programa