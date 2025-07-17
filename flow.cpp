#include <cstdlib>
#include <raylib.h>
#include <iostream>
#include <cmath>
#include <sys/types.h>
#include <time.h>
#include "RealVector.hpp"
#include "config.hpp"

int main(){
  InitWindow(800, 800, "FlowFields");
  srand(time(nullptr));
  SetTargetFPS(60);

  double MULT=45.5f;
  double length = SCL*MULT;
  for (int y = 0; y<ROWS; y++) {
    for (int x = 0; x<COLS; x++) {
    slot s;
    s.start_point={(float)SCL*x+(float)SCL/2,(float)SCL*y+(float)SCL/2};
    BOARD[y][x]=s;
    }
  }
  double z = rand()%10000;
  while (!WindowShouldClose()) {
  BeginDrawing();
  ClearBackground(WHITE);
  for (int y=0; y<ROWS; y++) {
    for (int x=0; x<COLS; x++) {
      double angle= field_func((double) x*0.003+z, (double) y*0.003+z); //double angle= field_func((double) x*0.3, (double) y*0.3); for zoom

      BOARD[x][y].vec=RealVector(cos(angle)*length,sin(angle)*length);
      Vector2 end={BOARD[y][x].start_point.x+BOARD[y][x].vec.x,BOARD[y][x].start_point.y+BOARD[y][x].vec.y};
      u_char c = map_to(0, 2*PI, 0, 255, angle);
      DrawLineEx(BOARD[y][x].start_point, end, 1, (Color){0,c,c,255});
    }
  }
  z+=0.003;
  EndDrawing();
  }
  CloseWindow();
}
