//
// Created by angelos on 20/07/19.
//

#ifndef BOX_ME_BOX_H
#define BOX_ME_BOX_H

#include <cstddef>

class Box {
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};
    static size_t objectCount;

    const static Box refBox;

public:
    Box* set_length(double length)
    {
        if (length > 0)
        Box::length = length;
        return this;
    }

    Box* set_width(double width)
    {
        if (width > 0)
        Box::width = width;
        return this;
    }

    Box* set_height(double height)
    {
        if (height > 0)
        Box::height = height;
        return this;
    }

    double get_length() const { return length; }

    double get_width() const { return width; }

    double get_height() const { return height; }

    // Constructors
    Box();
    explicit Box(double side);
    Box(double lengthValue, double widthValue, double heightValue);

    //Copy constructor
    Box(const Box& box);

    double volume() const;
    void printVolume() const;

    static size_t getObjectCount() { return objectCount; }

    ~Box();
};

#endif //BOX_ME_BOX_H
