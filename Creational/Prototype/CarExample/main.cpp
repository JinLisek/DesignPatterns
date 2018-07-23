#include <vector>
#include <memory>

#include "ICar.hpp"
#include "CarFactory.hpp"

int main()
{
    std::vector<std::shared_ptr<ICar>> cars {};
    CarType choice = CarType::Jeep;
    CarFactory factory {};

    cars.push_back(factory.createCar(choice));

    for(const auto& car : cars)
    {
        car->drive();
    }

    return 0;
}