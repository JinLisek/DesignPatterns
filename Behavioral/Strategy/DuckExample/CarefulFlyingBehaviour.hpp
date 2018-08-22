#pragma once

#include <iostream>

#include "IFlyingBehaviour.hpp"

class CarefulFlyingBehaviour : public IFlyingBehaviour
{
public:
    ~CarefulFlyingBehaviour() override = default;

    virtual void fly() const override
    {
        std::cout << "Flies slowly and carefully" << std::endl;
    }
};