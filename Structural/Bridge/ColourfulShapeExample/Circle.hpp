#pragma once

#include "Shape.hpp"

class Circle : public Shape
{
public:
    ~Circle() override = default;

    Circle(int posX, int posY, int radius, std::unique_ptr<DrawApi> drawApi) :
        Shape(std::move(drawApi)),
        _posX {posX},
        _posY {posY},
        _radius {radius}
    {   
    }

    void draw() const override
    {
        _drawApi->drawCircle(_posX, _posY, _radius);
    }

private:
    int _posX = 0;
    int _posY = 0;
    int _radius = 0;
};