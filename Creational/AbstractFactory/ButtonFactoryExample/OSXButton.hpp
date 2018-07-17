#pragma once

#include <iostream>

#include "IButton.hpp"

class OSXButton : public IButton
{
    void click() override { std::cout << "Button clicked OS X style" << std::endl; };
};