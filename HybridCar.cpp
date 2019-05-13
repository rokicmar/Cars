#include "HybridCar.hpp"
#include <iostream>

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
    : PetrolCar(petrolEng)
    , ElectricCar(electricEng)
    , engine_(petrolEng)
{
    std::cout << __FUNCTION__ << std::endl;
}

HybridCar::~HybridCar()       { std::cout << __FUNCTION__ << std::endl; }

void HybridCar::feed() {
    refuel();
    charge();
}

void HybridCar::setEngine(Engine *) {

}

void HybridCar::changeGear(int gear)
{
    engine_->changeGear(gear);
}
