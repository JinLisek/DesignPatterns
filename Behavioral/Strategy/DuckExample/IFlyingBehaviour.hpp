#pragma once

class IFlyingBehaviour
{
public:
    virtual ~IFlyingBehaviour() = default;
    virtual void fly() const = 0;
};