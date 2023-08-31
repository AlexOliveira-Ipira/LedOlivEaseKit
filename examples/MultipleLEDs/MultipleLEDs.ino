#include <LedOlivEaseKit.h>

// Initialization of objects for each LED
  atua led1 = 8;
  atua led2 = 9;

void setup() {
 
}

void loop() {
  // Blink LED 1 for 3 times with pauses of 300 
  // milliseconds between each blink.
    led1.LedPisca(3, 300);
  // Blink LED 2 for 6 times with pauses of 300 
  // milliseconds between each blink.
    led2.LedPisca(6, 300);
}
