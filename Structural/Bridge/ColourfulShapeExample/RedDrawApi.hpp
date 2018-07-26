#pragma once

#include <iostream>
#include "DrawApi.hpp"

class RedDrawApi : public DrawApi
{
public:
    ~RedDrawApi() override = default;

    void drawCircle(int posX, int posY, int radius) override
    {
        std::cout << "Drawing Red Circle: [" << posX << ", " << posY << "] of radius = " << radius << std::endl;
    }
};