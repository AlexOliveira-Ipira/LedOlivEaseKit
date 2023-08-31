#include <LedOlivEaseKit.h>

// Object initialization.
  atua led = 13;

void setup() {
 // Blink the LED 5 times with pauses of 500 milliseconds between each blink.
  led.LedPisca(5, 500); 
}

void loop() {
// Creating the LED every 1000 milliseconds.
  led.LedLigado();
  led.LedPausa(1000);
  led.LedDesligado();
  led.LedPausa(1000);
}