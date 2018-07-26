#pragma once

#include "IGUIFactory.hpp"
#include "OSXButton.hpp"

class OSXFactory : public IGUIFactory
{
public:
    ~OSXFactory() override = default;

    std::unique_ptr<IButton> createButton() const override { return std::make_unique<OSXButton>(); }
};