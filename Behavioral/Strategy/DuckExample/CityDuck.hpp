#pragma once

#include <memory>

#include "Duck.hpp"
#include "CarefulFlyingBehaviour.hpp"

class CityDuck : public Duck
{
public:
    CityDuck() :
        Duck{std::make_unique<CarefulFlyingBehaviour>()}
    {
    }

    ~CityDuck() override = default;
};