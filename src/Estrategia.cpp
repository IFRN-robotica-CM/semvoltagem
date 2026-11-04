#include "Estrategia.h" 

Estrategia::Estrategia(/* args */)
{
}

Estrategia::~Estrategia()
{
}

void Estrategia::SeguirLinha() {
    sensorLinha.lerSensor();
    if (sensorLinha.ext_branco() || sensorLinha.branco()) {
        movimento.frente();
    } else if (sensorLinha.Esq_preto()) {
        movimento.esquerda();
    } else if (sensorLinha.Dir_preto()) {
        movimento.direita();
    } else if (sensorLinha.ladoEsq_preto()) {
        movimento.esquerda_medio();
        robo.sinalizacao.ligarLedAmarelo();
    } else if (sensorLinha.ladoDir_preto()) {
        movimento.direita_medio();
        robo.sinalizacao.ligarLedAmarelo();
    } else if (sensorLinha.maisEsq_preto()) {
        movimento.esquerda_forte();
        robo.sinalizacao.ligarLedAzul();
    } else if (sensorLinha.maisDir_preto()) {
        movimento.direita_forte();
        robo.sinalizacao.ligarLedAzul();
    } else if (sensorLinha.maisEsq_branco()) {
        movimento.parar();
        delay(100);
        movimento.frente();
        delay(50);
        
        movimento.direita_forte();
    } else if (sensorLinha.maisDir_branco()) {
        movimento.parar();
        delay(100);
        movimento.frente();
        delay(50);

        movimento.esquerda_forte();
    } else if (sensorLinha.preto()) {
        // lembrar de implementar a estrategia da encruzilhada
        movimento.frente();
        delay(100);
    }
}

void Estrategia:: AtravessarObstaculo(){
    movimento.parar();
    delay(200);
    movimento.esquerda();
    delay(1000);

    bool alinhado = false;

    while (!alinhado) {
        sensorLinha.lerSensor();

        if (sensorLinha.preto() ) {
            movimento.parar();
            alinhado = true;
        } 
        else if (sensorLinha.Esq_preto() || sensorLinha.ladoEsq_preto() || sensorLinha.maisEsq_preto() || sensorLinha.maisDir_branco()) {
            movimento.direita_forte();
        } 
        else if (sensorLinha.Dir_preto() || sensorLinha.ladoDir_preto() || sensorLinha.maisDir_preto() || sensorLinha.maisEsq_branco()) {
            movimento.esquerda_forte();
        } 
        else {
            movimento.re();
        }
        
    }

    movimento.parar();
    delay(200);

    while (true)
    {
        movimento.direita_forte();
        delay(500);
        movimento.frente();
        delay(700);
    };
    
}

void Estrategia::iniciar() {
    Serial.begin(9600);
    robo.configurar(true, false);
}

void Estrategia::executar() {
    // implementar condição para executar estrategias diferentes em determinadas condições

    sensorLaser.lerLaser();
    if (sensorLaser.valorLaser() > 80.00 ) {
        SeguirLinha();
    } else if (sensorLaser.valorLaser() > 0.00) {
        AtravessarObstaculo();
    }
}