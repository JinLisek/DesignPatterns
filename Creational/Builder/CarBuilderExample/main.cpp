#include <iostream>
#include <map>

#include "TruckBuilder.hpp"
#include "JeepBuilder.hpp"
#include "CarDirector.hpp"

std::map<CarType, std::string> carTypeToString {
    { CarType::City, "City" },
    { CarType::Sports, "Sports" },
    { CarType::Cabriolet, "Cabriolet" },
    { CarType::Truck, "Truck" }
};

std::map<CarSize, std::string> carSizeToString {
    {CarSize::Small, "Small"},
    {CarSize::Medium, "Medium"},
    {CarSize::Big, "Big"}
};

std::map<Colour, std::string> colourToString {
    {Colour::Red, "Red"},
    {Colour::Green, "Green"},
    {Colour::Blue, "Blue"}
};

void printCar(const std::string& name, std::unique_ptr<Car> car)
{
    std::cout << name << " specifications: " << std::endl <<
    "\ttype: " << carTypeToString[car->body.type] << std::endl <<
    "\tsize: " << carSizeToString[car->body.size] << std::endl <<
    "\tseats: " << car->body.numOfSeats << std::endl <<
    "\twheels: " << car->body.numOfWheels << std::endl <<
    "\tGPS: " << car->electronics.hasGPS << std::endl <<
    "\tTripComputer: " << car->electronics.hasTripComputer << std::endl <<
    "\tcolour: " << colourToString[car->style.colour] << std::endl <<
    "\tspoiler: " << car->style.hasSpoiler << std::endl;

}

int main()
{
    TruckBuilder truckBuilder {};
    JeepBuilder jeepBuilder {};

    CarDirector carDirector {};

    auto truck = carDirector.createCar(truckBuilder);
    auto jeep = carDirector.createCar(jeepBuilder);

    printCar("Truck", std::move(truck));
    printCar("Jeep", std::move(jeep));

    return 0;
}