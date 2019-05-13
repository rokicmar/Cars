#pragma once

class Engine;

class Accelerate {
public:
    Accelerate(int accelerate)
    {
        if (accelerate < 0)
            accelarate_ = 0;
        else
            accelarate_ = accelerate;
    };
    virtual ~Accelerate() {};

    unsigned int getSpeed() const
    {
        return accelarate_;
    }

private:
    unsigned int accelarate_;
};


class Car {
public:
    virtual ~Car() {}
    void turnLeft();
    void turnRight();
    void brake();
    unsigned int accelerate(const Accelerate& speed);

    virtual void changeGear(int gear) = 0;
    virtual void feed() = 0;
    virtual void setEngine(Engine* e) = 0;

};
