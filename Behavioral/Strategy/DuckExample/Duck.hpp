#pragma once

#include <memory>

#include "IFlyingBehaviour.hpp"

class Duck
{
public:
    Duck(std::unique_ptr<IFlyingBehaviour> flyingBehaviour) :
        _flyingBehaviour{std::move(flyingBehaviour)}
    {
    }

    virtual ~Duck() = default;

    void fly()
    {
        _flyingBehaviour->fly();
    }
private:
    std::unique_ptr<IFlyingBehaviour> _flyingBehaviour;
};