#pragma once

#include <memory>

#include "Car.hpp"

class CarBuilder
{
public:
    virtual ~CarBuilder() = default;

    virtual void buildCar() { _currentCar = std::make_unique<Car>(); }

    virtual void buildBody() = 0;
    virtual void buildElectronics() = 0;
    virtual void buildStyle() = 0;

    virtual std::unique_ptr<Car> getCar() { return std::move(_currentCar); }

protected:
    std::unique_ptr<Car> _currentCar = nullptr;
};