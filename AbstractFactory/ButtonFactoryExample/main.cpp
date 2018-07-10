#include <memory>

#include "WinFactory.hpp"
#include "OSXFactory.hpp"
#include "IButton.hpp"

enum class OperatingSystem { Windows, OSX };

constexpr OperatingSystem OPERATING_SYSTEM = OperatingSystem::Windows;

int main()
{
    std::unique_ptr<IGUIFactory> guiFactory;

    switch(OPERATING_SYSTEM)
    {
        case OperatingSystem::Windows:
            guiFactory = std::make_unique<WinFactory>();
            break;
        case OperatingSystem::OSX:
            guiFactory = std::make_unique<OSXFactory>();
            break;
        default:
            throw "Unknown system";
    }

    auto button = guiFactory->createButton();
    button->click();

    return 0;
}