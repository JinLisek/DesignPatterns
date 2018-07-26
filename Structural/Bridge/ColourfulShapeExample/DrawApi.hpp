#pragma once

class DrawApi
{
public:
    virtual ~DrawApi() = default;
    virtual void drawCircle(int posX, int posY, int radius) = 0;
};