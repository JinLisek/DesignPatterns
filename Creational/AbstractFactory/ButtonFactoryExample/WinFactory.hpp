#pragma once

#include "IGUIFactory.hpp"
#include "WinButton.hpp"

class WinFactory : public IGUIFactory
{
public:
    ~WinFactory() override = default;

    std::unique_ptr<IButton> createButton() const override { return std::make_unique<WinButton>(); }
};