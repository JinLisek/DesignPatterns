#pragma once

#include "CarBuilder.hpp"

class JeepBuilder : public CarBuilder
{
public:
    void buildBody() override;
    void buildElectronics() override;
    void buildStyle() override;
};