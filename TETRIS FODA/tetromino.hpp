#pragma once
#include <SDL2/SDL.h>

class Tetromino
{
public:
  enum Type { I = 0, J, L, O, S, T, Z };
  Tetromino(Type);
  void draw(SDL_Renderer *);
  void move(int dx, int dy);
  void rotate();
  bool isBlock(int x, int y) const;
  int x() const;
  int y() const;
private:
  Type type_;
  int x_;
  int y_;
  int angle_; // 0 - 0 graus, 1 - 90 graus , 2 - 180 graus, 3 - 270 graus
};