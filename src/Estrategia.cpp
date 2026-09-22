#include "Estrategia.h" 

Estrategia::Estrategia(/* args */)
{
}

Estrategia::~Estrategia()
{
}

void Estrategia::SeguirLinha() {
    if (sensorLinha.ext_branco() || sensorLinha.branco()) {
        movimento.frente();
    } else if (sensorLinha.Esq_preto()) {
        movimento.esquerda();
    } else if (sensorLinha.Dir_preto()) {
        movimento.direita();
    } else if (sensorLinha.ladoEsq_preto()) {
        movimento.esquerda_medio();
    } else if (sensorLinha.ladoDir_preto()) {
        movimento.direita_medio();
    } else if (sensorLinha.maisEsq_preto()) {
        movimento.esquerda_forte();
    } else if (sensorLinha.maisDir_preto()) {
        movimento.direita_forte();
    } else if (sensorLinha.maisEsq_branco()) {
        movimento.direita_forte();
    } else if (sensorLinha.maisDir_branco()) {
        movimento.esquerda_forte();
    } else if (sensorLinha.preto()) {
        // lembrar de implementar a estrategia da encruzilhada
        movimento.frente();
    }
}
void Estrategia::iniciar() {
    Serial.begin(9600);
    robo.configurar();
}

void Estrategia::executar() {
    // implementar condição para executar estrategias diferentes em determinadas condiçõess
    SeguirLinha();
}