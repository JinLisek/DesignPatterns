#pragma once

class CarBuilder;

class CarDirector
{
public:
    std::unique_ptr<Car> createCar(CarBuilder& carBuilder)
    {
        carBuilder.buildCar();

        carBuilder.buildBody();
        carBuilder.buildElectronics();
        carBuilder.buildStyle();

        return carBuilder.getCar();
    }
};