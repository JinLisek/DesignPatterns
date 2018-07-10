#pragma once

#include "IGUIFactory.hpp"
#include "OSXButton.hpp"

class OSXFactory : public IGUIFactory
{
    std::unique_ptr<IButton> createButton() const override { return std::make_unique<OSXButton>(); }
};