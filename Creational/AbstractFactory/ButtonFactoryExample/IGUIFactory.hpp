#pragma once

#include "IButton.hpp"

class IGUIFactory
{
public:
    virtual ~IGUIFactory() = default;

    virtual std::unique_ptr<IButton> createButton() const = 0;
};