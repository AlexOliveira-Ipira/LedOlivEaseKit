#ifndef _LedOlivEaseKit_H
#define _LedOlivEaseKit_H

#include <Arduino.h>

class atua{

  public:
  atua (int porta);
  // Turn on the Led
  void LedLigado();
  // Turn off the Led
  void LedDesligado();
  // Use to define a pause for the LED
  int LedPausa(int _tempoPausa);
  // Blinks the led in a loop
  void LedPisca(int piscadas, int _tempo = 80);

  private:
  int _tempo;
  int _tempoPausa;
  int _porta;

};

#endif