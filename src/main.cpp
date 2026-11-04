#include <Arduino.h>
#include "Estrategia.h"

Estrategia estrategia;

void setup() {
  estrategia.iniciar();
}

void loop() {
  estrategia.executar();
  // digitalWrite(LED_SENSOR_LINHA_MAIS_ESQUERDO, HIGH);
  // digitalWrite(LED_SENSOR_LINHA_ESQUERDO, HIGH);
  // digitalWrite(LED_SENSOR_LINHA_DIREITO, HIGH);
  // digitalWrite(LED_SENSOR_LINHA_MAIS_DIREITO, HIGH);

  // Serial.print(robo.lerSensorLinhaMaisEsq());
  // Serial.print("; \t");
  // Serial.print( robo.lerSensorLinhaEsq());
  // Serial.print("; \t");
  // Serial.print( robo.lerSensorLinhaDir());
  // Serial.print("; \t");
  // Serial.println( robo.lerSensorLinhaMaisDir());

}

