//
// Created by angelos on 20/07/19.
//

#ifndef BOX_ME_CUBE_H
#define BOX_ME_CUBE_H

class Cube {
private:
    double side;

public:
    explicit Cube(double aSide);
    double volume();
    bool hasLargerVolumeThan(Cube aCube);
};

#endif //BOX_ME_CUBE_H
