# TP1

## Uso de puertos de entrada y salida. 

Utilizando un Arduino Nano (`atmega328p`), `4 LEDs` y `4 Pulsadores` se pide:

1. Mediante el uso de un `pulsador` controle el estado de un `LED` de manera que si el pulsador elegido esta presionado entonces el LED elegido debe de estar encendido. De manera extensiva si el pulsador elegido NO esta presionado entonces el LED elegido debe de estar apagado. 

2.  Hacer extensivo el funcionamiento a los cuatro pulsadores, de manera que se controlen a los cuatro LEDs mediante los cuatro PULSADORES. 

> Nota: Todos los pulsadores `deben` tener habilitada la resistencia de `pull-up`

> Asi mismo los LEDs deben conectarse con su resistencia limitadora de corriente 2 asegurando no superar la corriente máxima que puede entregar el pin. Almenos de 330 Ohms


## ¡USAR LOS PINES INDICADOS NO CAMBIARLOS!

``` C
PD4 -> BOTON 1 
PD5 -> BOTON 2 
PD6 -> BOTON 3 
PD7 -> BOTON 4


PB0 -> LED 1 
PB1 -> LED 2 
PB2 -> LED 3 
PB3 -> LED 4
```

