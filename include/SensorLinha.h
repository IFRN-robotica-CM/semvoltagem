#include "robo_hardware2.h"

#define DIVISOR_BRANCO_PRETO_MAIS_ESQ 80
#define DIVISOR_BRANCO_PRETO_MAIS_DIR 70
#define DIVISOR_BRANCO_PRETO_DIR 65
#define DIVISOR_BRANCO_PRETO_ESQ 65

class SensorLinha
{
private:
    
    float valorSensorDir;
    float valorSensorEsq;
    float valorSensorMaisDir;
    float valorSensorMaisEsq;
    float valorSensorFrontal;

    bool pppp() {
    return (valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool bbbb() {
    return (valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool bppb() {
    return (valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool pppb() {
    return (valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool pbbb() {
    return (valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool bppp() {
    return (valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool bpbb() {
    return (valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool ppbb() {
    return (valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq < DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq < DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool bbpp() {
    return (valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool bbpb() {
    return (valorSensorDir < DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir > DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
    bool bbbp() {
    return (valorSensorDir > DIVISOR_BRANCO_PRETO_DIR && valorSensorEsq > DIVISOR_BRANCO_PRETO_ESQ && valorSensorMaisEsq > DIVISOR_BRANCO_PRETO_MAIS_ESQ && valorSensorMaisDir < DIVISOR_BRANCO_PRETO_MAIS_DIR);
    }
public:
    SensorLinha(/* args */);
    ~SensorLinha();
    inline bool branco() { return (bbbb()); }
    inline bool preto() { return (pppp()); }

    void lerSensor();
};

