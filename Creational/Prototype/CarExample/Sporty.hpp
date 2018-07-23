#pragma once

#include <iostream>
#include "ICar.hpp"

class Sporty : public ICar
{
public:
    std::unique_ptr<ICar> clone() const override
    {
        return std::make_unique<Sporty>();
    }

    void drive() const override
    {
        std::cout << "Sporty drives quickly on a track." << std::endl;
    }
};