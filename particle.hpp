#pragma once
#include <raylib.h>
#include <vector>
#include "RealVector.hpp"
using std::vector;

class particle{
  public:
    RealVector pos;
    RealVector vel;
    float mns, mas;

    particle();
    particle(RealVector p, RealVector v, float min_speed, float max_speed);
    void apply_Force(RealVector force);
    void update();
    void show();
};
