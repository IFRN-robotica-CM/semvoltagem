#include <Arduino.h>
#include "Estrategia.h"

Estrategia estrategia;

void setup() {
  estrategia.iniciar();
}

void loop() {
  estrategia.executar();
}

