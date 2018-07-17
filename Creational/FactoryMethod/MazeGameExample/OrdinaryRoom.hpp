#pragma once

#include <string>
#include "Room.hpp"

class OrdinaryRoom : public Room
{
public:
    std::string showRoom() const override { return std::string {"Ordinary Room"}; }
};