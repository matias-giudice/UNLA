;------------------------------------------------------------
; Proyecto: Ejercicio 2 - PUNTO D
; Autor: Matías Damian Giudice
; PIC: 16F628A
; Velocidad de reloj: Int 4 Mhz
; Descripcion: Secuencia a medida que se presiona el botón: prender RB1, prender RB2, apagar RB1, apagar RB2. Con interrupción por RB0.
;------------------------------------------------------------
#INCLUDE <P16F628A.INC>						;Incluimos el PIC
	LIST P=PIC16F628A

	ORG 	0x00							;Aca comienza el programa, se ejecuta
		GOTO 	inicio						;Se va a mover a la etiqueta inicio
	ORG 	0x04							;Cuando sucede una interrupcion viene a esta linea
		BTFSC	INTCON,1					;Verifica si la flag de la interrupcion esta levantada por pulsacion de boton
											;(en este caso siempre va a estar levantada)
											;Al estar levantada la flag por la interrupcion por RB0 por eso el 1
		GOTO	main						;Se va a mover a la etiqueta main
		GOTO 	end_int						;Se va a mover a la etiqueta end_int

main
	BTFSC	PORTB,1		;B'00000001'		;Verificamos los bit de los leds
	GOTO	dos								;En el caso que si alguno esta encendido, pasa a la siguiente etiqueta (dos)
	BTFSC	PORTB,2
	GOTO	dos
	BSF		PORTB,1							;En el primer caso si estan apagados ambos, se enciende el primer led
	GOTO	end_int							;En el caso que se encienda el led, se va a la etiqueta end_int

dos
	BTFSS	PORTB,1		;B'00000011'		;Verifica si el led2 esta apagado y el led1 encendido
	GOTO	tres							;En el caso que esto este de otra forma, pasa a la siguiente etiqueta (tres)
	BTFSC	PORTB,2
	GOTO	tres
	BSF		PORTB,2							;Si sucede que el led2 esta apagado y el led1 encendido, se enciende el led2
	GOTO	end_int							;En el caso que se encienda el led, se va a la etiqueta end_int

tres
	BTFSS	PORTB,1		;B'00000111'		;Verifica si ambos estan encendidos
	GOTO	cuatro							;En caso que no esten los ambos encendidos, significa que hay uno apagado, entonces hay que apagar el 
											;otro, pasa a la siguiente etiqueta (cuatro)
	BTFSS	PORTB,2
	GOTO	cuatro
	BCF		PORTB,1
	GOTO	end_int							;En el caso que se encienda el led1, se va a la etiqueta end_int

cuatro
	BCF		PORTB,2
	GOTO	end_int							;En el caso que se encienda el led1, se va a la etiqueta end_int

end_int
	BCF		INTCON,1						;Baja la flag y termina aca hasta que se levante otra interrupcion
	RETFIE									;Vuelve a la linea GOTO $

inicio
	BSF		STATUS,RP0						;Nos movemos al banco 1
	BCF		OPTION_REG,7					;Si esta en 0 esta activado y 1 desactivado
	MOVLW	B'00000001'						;Seteamos el puerto RB0 en modo entrada y todos los demas en salida y lo guardamos en w
	MOVWF	TRISB							;Lo que estaba en w, ahora lo guardamos en el puerto TRISB
	BCF		OPTION_REG,7					;Si esta en 0 esta activado y 1 desactivado
	BCF		STATUS,RP0						;Volvemos al banco 0
	
	MOVLW	B'00000000'
	MOVWF	PORTB

	BSF		INTCON,7						;Activamos las interrupciones globales
	BSF		INTCON,4						;Activamos las interrupciones por RB0
											;Si sucede una interrupcion se utiliza el codigo 0x04
	GOTO 	$								;El programa se queda esperando aca (el signo hace que se quede en esta linea, en forma de bucle)

	END										;Fin del programa

;BTFSC - Clear	Si es 0 ignora
;BTFSS - Set	Si es 1 ignora