#pragma once

#include <iostream>
#include "IButton.hpp"

class WinButton : public IButton
{
public:
    ~WinButton() override = default;
    void click() override { std::cout << "Button clicked Windows style" << std::endl; };
};