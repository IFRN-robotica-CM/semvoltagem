#include "robo_hardware2.h"

#define ValorMotorEsq 60
#define ValorMotorDir 60
#define ValorMotorEsqMedio 80
#define ValorMotorDirMedio 80
#define ValorMotorEsqForte 100
#define ValorMotorDirForte 100


class Movimento
{
private:
    /* data */
public:
    Movimento(/* args */);
    ~Movimento();
    
    inline void frente() { robo.acionarMotores(ValorMotorEsq, ValorMotorDir); }
    inline void esquerda() { robo.acionarMotores(-ValorMotorEsq, ValorMotorDir); }
    inline void esquerda_medio() { robo.acionarMotores(-ValorMotorEsqMedio, ValorMotorDirMedio); }
    inline void esquerda_forte() { robo.acionarMotores(-ValorMotorEsqForte, ValorMotorDirForte); }
    inline void direita() { robo.acionarMotores(ValorMotorEsq, -ValorMotorDir); }
    inline void direita_medio() { robo.acionarMotores(ValorMotorEsqMedio, -ValorMotorDirMedio); }
    inline void direita_forte() { robo.acionarMotores(ValorMotorEsqForte, -ValorMotorDirForte); }
    inline void parar() { robo.acionarMotores(0, 0); }
};

