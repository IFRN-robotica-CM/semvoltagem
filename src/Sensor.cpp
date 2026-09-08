#include "SensorLinha.h"

SensorLinha::SensorLinha(/* args */)
{
}

SensorLinha::~SensorLinha()
{
}

void SensorLinha::lerSensor() {
    valorSensorEsq = robo.lerSensorLinhaEsq(); //Le o valor do sensor esquerdo e coloca dentro da variavel valor_sensor_esq
	valorSensorDir = robo.lerSensorLinhaDir(); //Le o valor do sensor direito e coloca dentro da variavel valor_sensor_dir
    valorSensorMaisEsq = robo.lerSensorLinhaMaisEsq();
    valorSensorMaisDir = robo.lerSensorLinhaMaisDir();
    valorSensorFrontal = robo.lerSensorSonarFrontal();
}