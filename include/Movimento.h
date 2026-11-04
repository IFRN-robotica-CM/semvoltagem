#include "robo_hardware2.h"

#define ValorMotorFraco 60
#define ValorMotorMedio 70
#define ValorMotorForte 80
#define ASSIMETRIA 1.2
#define Reta 100


class Movimento
{
private:
    /* data */
public:
    Movimento(/* args */);
    ~Movimento();
    
    inline void frente() { robo.acionarMotores(Reta, Reta); }
    inline void re() { robo.acionarMotores(-ValorMotorFraco, -ValorMotorFraco); }
    inline void esquerda() { robo.acionarMotores(ValorMotorFraco, -ValorMotorFraco*ASSIMETRIA); }
    inline void esquerda_medio() { robo.acionarMotores(ValorMotorMedio, -ValorMotorMedio*ASSIMETRIA); }
    inline void esquerda_forte() { robo.acionarMotores(ValorMotorForte, -ValorMotorForte*ASSIMETRIA); }
    inline void direita() { robo.acionarMotores(-ValorMotorFraco*ASSIMETRIA, ValorMotorFraco); }
    inline void direita_medio() { robo.acionarMotores(-ValorMotorMedio*ASSIMETRIA, ValorMotorMedio); }
    inline void direita_forte() { robo.acionarMotores(-ValorMotorForte*ASSIMETRIA, ValorMotorForte); }
    inline void parar() { robo.acionarMotores(0, 0); }
};

