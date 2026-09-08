#include "Estrategia.h" 

Estrategia::Estrategia(/* args */)
{
}

Estrategia::~Estrategia()
{
}

void Estrategia::SeguirLinha() {
    sensorLinha.lerSensor();
    if (sensorLinha.branco()){
        Serial.println("ta tudo branco");
    }else if (sensorLinha.preto()) {
        Serial.println("ta tudo preto");
    } else {
        Serial.println("deu erro");
    }
}

void Estrategia::iniciar() {
    Serial.begin(9600);
    robo.configurar();
}

void Estrategia::executar() {
    SeguirLinha();
}