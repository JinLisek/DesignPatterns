#pragma once

#include <memory>

enum class CarType { Jeep, Truck, Sporty };

class ICar
{
public:
    virtual ~ICar() = default;

    virtual void drive() const = 0;
    virtual std::unique_ptr<ICar> clone() const = 0;
};