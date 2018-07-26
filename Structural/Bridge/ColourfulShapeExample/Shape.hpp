#pragma once

#include <memory>
#include "DrawApi.hpp"

class Shape
{
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;

protected:
    Shape(std::unique_ptr<DrawApi> drawApi) :
        _drawApi {std::move(drawApi)}
    {
    }

    std::unique_ptr<DrawApi> _drawApi;
};