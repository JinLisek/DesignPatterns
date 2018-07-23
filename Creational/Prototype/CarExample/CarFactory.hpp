#pragma once

#include <memory>
#include <map>

#include "ICar.hpp"
#include "Jeep.hpp"
#include "Truck.hpp"
#include "Sporty.hpp"

class CarFactory
{
public:
    std::shared_ptr<ICar> createCar(CarType carType)
    {
        return _prototypes[carType]->clone();
    }
private:
    std::map<CarType, std::shared_ptr<ICar>> _prototypes
    { 
        { CarType::Jeep, std::make_unique<Jeep>()}, 
        { CarType::Truck, std::make_unique<Truck>()}, 
        { CarType::Sporty, std::make_unique<Sporty>()}
    };
};