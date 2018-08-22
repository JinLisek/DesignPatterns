#pragma once

#include <iostream>

#include "IFlyingBehaviour.hpp"

class QuickFlyingBehaviour : public IFlyingBehaviour
{
public:
    ~QuickFlyingBehaviour() override = default;

    virtual void fly() const override
    {
        std::cout << "Flies very quickly" << std::endl;
    }
};