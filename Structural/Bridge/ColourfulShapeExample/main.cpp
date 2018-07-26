#include <memory>
#include "Circle.hpp"
#include "RedDrawApi.hpp"
#include "BlueDrawApi.hpp"

int main()
{
    std::unique_ptr<Shape> redCircle = std::make_unique<Circle>(0, 0, 10, std::make_unique<RedDrawApi>());
    std::unique_ptr<Shape> blueCircle = std::make_unique<Circle>(100, 100, 50, std::make_unique<BlueDrawApi>());

    redCircle->draw();
    blueCircle->draw();

    return 0;
}