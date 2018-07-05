#pragma once

#include "CarBuilder.hpp"

class TruckBuilder : public CarBuilder
{
public:
    void buildBody() override;
    void buildElectronics() override;
    void buildStyle() override;
};