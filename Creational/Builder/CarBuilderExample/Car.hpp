#pragma once

enum class CarType { City, Sports, Cabriolet, Truck };
enum class CarSize { Small, Medium, Big };

enum class Colour { Red, Green, Blue };

struct CarBody
{
    CarType type = CarType::City;
    CarSize size = CarSize::Small;
    
    unsigned numOfSeats = 4;
    unsigned numOfWheels = 4;
};

struct CarElectronics
{
    bool hasGPS = false;
    bool hasTripComputer = false;
};

struct CarStyle
{
    Colour colour = Colour::Red;
    bool hasSpoiler = false;
};

struct Car
{
    CarBody body {};
    CarElectronics electronics {};
    CarStyle style {};
};