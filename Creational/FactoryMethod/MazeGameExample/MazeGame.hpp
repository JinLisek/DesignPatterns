#pragma once

#include <vector>
#include "Room.hpp"

class MazeGame
{
public:
    virtual ~MazeGame() = default;

    virtual void createMaze()
    {
        rooms.emplace_back(makeRoom());
        rooms.emplace_back(makeRoom());
    }

protected:
    virtual Room makeRoom() const = 0;
    std::vector<Room> rooms {};
};