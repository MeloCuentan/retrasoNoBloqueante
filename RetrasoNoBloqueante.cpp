#include "RetrasoNoBloqueante.h"

RetrasoNoBloqueante::RetrasoNoBloqueante() {
  retrasoActivo = false;
}

void RetrasoNoBloqueante::iniciar(int retardo) {
  tiempoDeseado = retardo;
  retrasoActivo = true;
  tiempoInicial = millis();
}

bool RetrasoNoBloqueante::finalizado() {
  if (retrasoActivo) {
    if (millis() - tiempoInicial >= tiempoDeseado) {
      retrasoActivo = false;
      return true;
    }
  }
  return false;
}
