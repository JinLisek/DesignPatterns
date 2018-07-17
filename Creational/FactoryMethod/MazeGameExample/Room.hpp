#pragma once

#include <string>

class Room
{
public:
    virtual ~Room() = default;

    virtual std::string showRoom() const = 0;
};