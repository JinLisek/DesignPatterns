#pragma once

#include <iostream>
#include "ICar.hpp"

class Truck : public ICar
{
public:
    std::unique_ptr<ICar> clone() const override
    {
        return std::make_unique<Truck>();
    }

    void drive() const override
    {
        std::cout << "Truck drives with big cargo." << std::endl;
    }
};