//
// Created by angelos on 20/07/19.
//

#include "Box.h"
#include <iostream>

size_t Box::objectCount {};

const Box Box::refBox {10.0, 10.0, 10.0};

// constructors
Box::Box(double side) : Box {side, side, side}
{
    std::cout << "Box constructor 2 called." << std::endl;
}

Box::Box(double lengthValue, double widthValue, double heightValue) :
length {lengthValue}, width {widthValue}, height {heightValue}
{
    ++objectCount;
    std::cout << "Box constructor 1 called." << std::endl;
}

Box::Box() {
    ++objectCount;
    std::cout << "Box default constructor called." << std::endl;
}

// copy constructor
Box::Box(const Box& aBox) : length{aBox.length}, width{aBox.width}, height{aBox.height} {
    ++objectCount;
    std::cout << "Box copy constructor called." << std::endl;
}

// destructor
Box::~Box() {
    std::cout << "Box destructor called." << std::endl;
    --objectCount;
}

double Box::volume() const {
    return length * width * height;
}

void Box::printVolume() const {
    std::cout << "The volume of this box is " << volume() << std::endl;
}