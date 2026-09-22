#include "SensorLinha.h"
#include "Movimento.h"

class Estrategia
{
private:
    SensorLinha sensorLinha;
    Movimento movimento;
    
public:
    Estrategia(/* args */);
    ~Estrategia();
    void SeguirLinha();
    void iniciar();
    void executar();
};


