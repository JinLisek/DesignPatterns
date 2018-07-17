#pragma once

#include <string>
#include "Room.hpp"

class MagicRoom : public Room
{
public:
    std::string showRoom() const override { return std::string {"Magic Room"}; }
};