//
// Created by angelos on 20/07/19.
//

#include "Cube.h"
#include <iostream>

Cube::Cube(double aSide) : side {aSide}
{
    std::cout << "Cube constructor called." << std::endl;
}

double Cube::volume()
{
    return side * side * side;
}

bool Cube::hasLargerVolumeThan(Cube aCube)
{
    return volume() > aCube.volume();
}