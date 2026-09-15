#include "robo_hardware2.h"

class Movimento
{
private:
    /* data */
public:
    Movimento(/* args */);
    ~Movimento();
    
    inline void frente() { robo.acionarMotores(60, 60); }
};

