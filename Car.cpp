#include <iostream>
#include "Car.h"

void Car::turnLeft()      { std::cout << __FUNCTION__ << std::endl; }
void Car::turnRight()     { std::cout << __FUNCTION__ << std::endl; }
void Car::brake()         { std::cout << __FUNCTION__ << std::endl; }

unsigned int Car::accelerate(const Accelerate& speed)
{
    std::cout << __FUNCTION__ << " " <<speed.getSpeed() << std::endl;
    return speed.getSpeed();
}
