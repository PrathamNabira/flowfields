#include <raylib.h>
#include <vector>

#include "RealVector.hpp"
using std::vector;

// SCREEN VARIABLES 
#define WIDTH 800
#define HEIGHT 800
#define SCL 10
#define ROWS (HEIGHT/SCL)
#define COLS (WIDTH/SCL)

//BOARD
struct slot{
  RealVector vec;
  Vector2 start_point;
};

extern vector<vector<slot>> BOARD;
double map_to(double minimum, double maximum, double new_min, double new_max, double value);
double field_func(double x, double y);
