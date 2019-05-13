#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include "PetrolCar.hpp"
#include "ElectricCar.hpp"

class HybridCar : public PetrolCar, public ElectricCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();

    void feed();
    void setEngine(Engine*);
    void changeGear(int gear);

private:
    PetrolEngine* engine_;
};

