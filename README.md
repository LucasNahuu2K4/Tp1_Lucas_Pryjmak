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
---

***

- - - - 
# INFORME
Comenzamos definiendo los `MACROS` que serian los botones y los encedidos y apagados de los puertos y pines.
```C
#define boton1 ((PIND >> 4) & 0x01)
#define boton2 ((PIND >> 5) & 0x01)
#define boton3 ((PIND >> 6) & 0x01)
#define boton4 ((PIND >> 7) & 0x01)

#define PRENDER(PORT, PIN) (PORT |= 1 << PIN)
#define APAGAR(PORT, PIN) (PORT &= ~(1 << PIN))
```
A continuación entramos en el codigo que va a permitirnos encender y apagar los LEDs las veces que queramos.
### ENTRADAS Y SALIDAS
```C

main()
{
  DDRD &= 0x0f;
  DDRB |= 0x0f;
```
aqui estamos definiendo las entradas y salidas. (DDRD esta asignado como entrada y DDRB esta asignado como salida).

### Código Principal
```C
while (1){
    if (boton1 == 0){
      PRENDER(PORTB, PB0);
    }
    else{
      APAGAR(PORTB, PB0);
    }
    if (boton2 == 0){
      PRENDER(PORTB, PB1);
    }
    else{
      APAGAR(PORTB, PB1);
    }
    if (boton3 == 0){
      PRENDER(PORTB, PB2);
    }
    else{
      APAGAR(PORTB, PB2);
    }
    if (boton4 == 0){
      PRENDER(PORTB, PB3);
    }
    else{
      APAGAR(PORTB, PB3);
    }
  }
}
```
Utilizamos un `while` para comenzar nuestro codigo, ya que hay una condición que cumplir.
Luego usamos un `if` ya que la primera condición del while se cumplió, comienza a leer el codigo.
Los `else` basicamente se refieren a que si no esta ocurriendo el `if` se mantiene activo 
