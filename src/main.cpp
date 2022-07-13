#include <Arduino.h>

#define boton1 ((PIND >> 4) & 0x01)
#define boton2 ((PIND >> 5) & 0x01)
#define boton3 ((PIND >> 6) & 0x01)
#define boton4 ((PIND >> 7) & 0x01)

#define PRENDER(PORT, PIN) (PORT |= 1 << PIN)
#define APAGAR(PORT, PIN) (PORT &= ~(1 << PIN))

main()
{
  DDRD &= 0x0f;
  DDRB |= 0x0f;

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