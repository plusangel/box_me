#include <iostream>
#include <memory>
#include "Box.h"

int main() {
    const Box firstBox {80.0, 50.0, 40.0};
    double firstBoxVolume {firstBox.volume()};

    //std::cout << "The volume of the first box is " << firstBoxVolume << std::endl;
    firstBox.printVolume();

    auto secondBox = std::make_unique<Box>(5.0);

    double secondBoxVolume {secondBox->volume()};

    //std::cout << "The volume of the second box is " << secondBoxVolume << std::endl;
    secondBox->printVolume();

    Box thirdBox {firstBox};
    //std::cout << "The volume of the third box is " << thirdBox.volume() << std::endl;
    thirdBox.printVolume();

    std::cout << "\nThere are now " << Box::getObjectCount() << " Box objects.\n";
    return 0;
}
