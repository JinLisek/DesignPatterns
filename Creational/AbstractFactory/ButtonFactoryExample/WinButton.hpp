#pragma once

#include <iostream>

#include "IButton.hpp"

class WinButton : public IButton
{
    void click() override { std::cout << "Button clicked Windows style" << std::endl; };
};