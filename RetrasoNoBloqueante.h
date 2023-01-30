#ifndef RetrasoNoBloqueante_h
#define RetrasoNoBloqueante_h

#include "Arduino.h"

class RetrasoNoBloqueante {
  
  private:
    uint32_t tiempoInicial;
    uint32_t tiempoDeseado;
    bool retrasoActivo;  
    
  public:
    RetrasoNoBloqueante();
    void iniciar(uint16_t retardo);
    bool finalizado();

};

#endif