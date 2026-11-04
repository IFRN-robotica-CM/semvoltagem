#include "SensorLinha.h"
#include "Movimento.h"
#include "SensorLaser.h"

class Estrategia
{
private:
    SensorLinha sensorLinha;
    Movimento movimento;
    SensorLaser sensorLaser;
    
public:
    Estrategia(/* args */);
    ~Estrategia();
    void SeguirLinha();
    void iniciar();
    void executar();
    void AtravessarObstaculo();
};


