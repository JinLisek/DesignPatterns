#include "JeepBuilder.hpp"

void JeepBuilder::buildBody()
{
    _currentCar->body.type = CarType::Sports;
    _currentCar->body.size = CarSize::Medium;

    _currentCar->body.numOfSeats = 4;
    _currentCar->body.numOfWheels = 4;
}

void JeepBuilder::buildElectronics()
{
    _currentCar->electronics.hasGPS = true;
    _currentCar->electronics.hasTripComputer = true;
}

void JeepBuilder::buildStyle()
{
    _currentCar->style.colour = Colour::Green;
    _currentCar->style.hasSpoiler = false;
}