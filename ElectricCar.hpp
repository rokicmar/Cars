#pragma once
#include "ElectricEngine.hpp"
#include "Car.h"

class ElectricCar : virtual public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();

    void charge();
    void feed();
    void setEngine(Engine* e);
    void changeGear(int gear);

private:
    ElectricEngine* engine_;
};

