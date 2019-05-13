#pragma once
#include "PetrolEngine.hpp"
#include "Car.h"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void refuel();
    void setEngine(Engine* e);
    void feed();
    void changeGear(int gear);

private:
    PetrolEngine* engine_;
};

