#include "robo_hardware2.h"

class SensorLaser
{
private:
    float ValorSensorLaser;
public:
    SensorLaser(/* args */);
    ~SensorLaser();
    float valorLaser(){
        return ValorSensorLaser;
    }

    void lerLaser();
    void printValores();
};

