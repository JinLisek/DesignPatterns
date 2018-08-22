#include "Duck.hpp"

#include "NoFlyingBehaviour.hpp"
#include "QuickFlyingBehaviour.hpp"
#include "CityDuck.hpp"

int main()
{
    Duck rubberDuck {std::make_unique<NoFlyingBehaviour>()};
    rubberDuck.fly();

    Duck wildDuck {std::make_unique<QuickFlyingBehaviour>()};
    wildDuck.fly();

    CityDuck cityDuck {};
    cityDuck.fly();

    return 0;
}