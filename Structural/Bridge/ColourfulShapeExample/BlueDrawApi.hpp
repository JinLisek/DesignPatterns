#pragma once

#include <iostream>
#include "DrawApi.hpp"

class BlueDrawApi : public DrawApi
{
public:
    ~BlueDrawApi() override = default;

    void drawCircle(int posX, int posY, int radius) override
    {
        std::cout << "Drawing Blue Circle: [" << posX << ", " << posY << "] of radius = " << radius << std::endl;
    }
};