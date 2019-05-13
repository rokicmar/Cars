#include "PetrolEngine.hpp"
#include <iostream>
#include <algorithm>

PetrolEngine::PetrolEngine(int power, float capacity, int gears)
    : power_(power)
    , capacity_(capacity)
    , gears_(gears)
    , currentGear_(0)
{
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolEngine::changeGear(int gear)
{
    try {
        if (currentGear_ > 0 && gear == -1)
        {
            throw InvalidGear();
        }

        std::cout << __FUNCTION__ << "OK" << std::endl;
        currentGear_ = gear;
    }
    catch (InvalidGear &e)
    {
        std::cout << e.what() << std::endl;
    }
}
