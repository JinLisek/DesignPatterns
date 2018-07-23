#pragma once

#include <iostream>
#include "ICar.hpp"

class Jeep : public ICar
{
public:
    std::unique_ptr<ICar> clone() const override
    {
        return std::make_unique<Jeep>();
    }

    void drive() const override
    {
        std::cout << "Jeep drives through a desert." << std::endl;
    }
};
