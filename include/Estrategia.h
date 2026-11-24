#include "SensorLinha.h"
#include "Movimento.h"
#include "SensorLaser.h"
#include "Sonar.h"

class Estrategia
{
private:
    SensorLinha sensorLinha;
    Movimento movimento;
    SensorLaser sensorLaser;
    Sonar sonar;
    
public:
    Estrategia(/* args */);
    ~Estrategia();
    void SeguirLinha();
    void iniciar();
    void executar();
    void AtravessarObstaculo();
};


