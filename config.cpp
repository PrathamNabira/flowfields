#include "config.hpp"
#include "RealVector.hpp"
#include <cmath>
#include <algorithm>
using std::clamp;

vector<vector<slot>> BOARD(ROWS+1,vector<slot>(COLS+1));//size and initial values
double map_to(double minimum, double maximum, double new_min, double new_max, double value){
  value = clamp(value,minimum,maximum);
  return (value-minimum)*(new_max-new_min)/(maximum-minimum)+new_min;
}
double field_func(double x, double y){
  return RealVector(cos(y),sin(x)).angleOf();// comment out to add a new filed function
}

