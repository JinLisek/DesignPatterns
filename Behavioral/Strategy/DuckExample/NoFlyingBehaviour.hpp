#pragma once

#include <iostream>

#include "IFlyingBehaviour.hpp"

class NoFlyingBehaviour : public IFlyingBehaviour
{
public:
    ~NoFlyingBehaviour() override = default;

    virtual void fly() const override
    {
        std::cout << "Doesn't fly" << std::endl;
    }
};