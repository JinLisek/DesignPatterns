#include "TruckBuilder.hpp"

void TruckBuilder::buildBody()
{
    _currentCar->body.type = CarType::Truck;
    _currentCar->body.size = CarSize::Big;

    _currentCar->body.numOfSeats = 2;
    _currentCar->body.numOfWheels = 8;
}

void TruckBuilder::buildElectronics()
{
    _currentCar->electronics.hasGPS = true;
    _currentCar->electronics.hasTripComputer = false;
}

void TruckBuilder::buildStyle()
{
    _currentCar->style.colour = Colour::Red;
    _currentCar->style.hasSpoiler = false;
}