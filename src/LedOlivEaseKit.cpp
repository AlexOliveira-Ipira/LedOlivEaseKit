#include <LedOlivEaseKit.h>

atua::atua(int porta){
  _porta = porta;
  pinMode(_porta, OUTPUT);
}

void atua::LedLigado() 
  {
    digitalWrite(_porta, HIGH);    
  }

void atua::LedDesligado() 
  {
    digitalWrite(_porta, LOW);    
  }

int atua::LedPausa(int _tempoPausa){
  delay(_tempoPausa);
}

void atua::LedPisca(int piscadas , int _tempo){

  for (int x = 0; x < piscadas;  x++){
    digitalWrite(_porta, HIGH);
    delay(_tempo);
    digitalWrite(_porta, LOW);
    delay(_tempo);    
  }
}

