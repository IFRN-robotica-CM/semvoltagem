#include "SensorLinha.h"
#include "SensorLaser.h"

SensorLinha::SensorLinha(/* args */)
{
}

SensorLinha::~SensorLinha()
{
}


SensorLaser::SensorLaser(/* args */)
{
}

SensorLaser::~SensorLaser()
{
}

void SensorLinha::lerSensor() {
    valorSensorEsq = robo.lerSensorLinhaEsq(); //Le o valor do sensor esquerdo e coloca dentro da variavel valor_sensor_esq
	digitalWrite(LED_SENSOR_LINHA_DIREITO, HIGH);
    valorSensorDir = robo.lerSensorLinhaDir(); //Le o valor do sensor direito e coloca dentro da variavel valor_sensor_dir
    valorSensorMaisEsq = robo.lerSensorLinhaMaisEsq();
    digitalWrite(LED_SENSOR_LINHA_MAIS_DIREITO, HIGH);
    valorSensorMaisDir = robo.lerSensorLinhaMaisDir();
    // valorSensorFrontal = robo.lerSensorSonarFrontal();
}

void SensorLinha::  printValores(){
    Serial.print("mais esq: ");
    Serial.print(valorSensorMaisEsq);
    Serial.print("; \t");
    Serial.print("esq: ");
    Serial.print(valorSensorEsq);
    Serial.print("; \t");
    Serial.print("dir: ");
    Serial.print(valorSensorDir);
    Serial.print("; \t");
    Serial.print("mais dir: ");
    Serial.print(valorSensorMaisDir);
    Serial.println("; ");
    Serial.println(analogRead(A8));
}

void SensorLaser::lerLaser() {
    ValorSensorLaser = robo.lerSensorLaserFrontal();
    delay(100);
}

void SensorLaser::printValores(){
    Serial.println(ValorSensorLaser);
    delay(50);
}