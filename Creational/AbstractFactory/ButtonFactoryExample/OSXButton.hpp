#pragma once

#include <iostream>
#include "IButton.hpp"

class OSXButton : public IButton
{
public:
    ~OSXButton() override = default;

    void click() override { std::cout << "Button clicked OS X style" << std::endl; };
};