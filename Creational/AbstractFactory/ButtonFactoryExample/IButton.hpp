#pragma once

class IButton
{
public:
    virtual ~IButton() = default;

    virtual void click() = 0;    
};