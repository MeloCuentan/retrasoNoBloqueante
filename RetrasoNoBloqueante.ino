// librería simulando a un delay con tiempo preestablecido

#include "RetrasoNoBloqueante.h"

// Creamos el objeto 
RetrasoNoBloqueante retraso; 

// Creamos unas variables para que cada intervalo de tiempo, se vuelva a iniciar
unsigned long tiempo;
int intervalo = 10000;

void setup() {
  Serial.begin(115200);   // Iniciamos el monitor serie
}

void loop() {
  if (millis() - tiempo >= intervalo) {   // Si ha pasado el tiempo de intervalo, iniciamos el retraso
        tiempo = millis();
        retraso.iniciar(2000);            // Iniciamos el retardo especificando el tiempo
        Serial.println("Temporizador Iniciado");
  }
  if (retraso.finalizado()) {
    Serial.println("Temporizador parado");
    // cualquier código que se desee ejecutar después del retardo
  }

}
