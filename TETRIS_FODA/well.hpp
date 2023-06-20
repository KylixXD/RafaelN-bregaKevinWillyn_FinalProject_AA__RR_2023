#pragma once
#include "tetromino.hpp"
#include <SDL2/SDL.h>
#include <iostream>

class Well
{
public:
  Well();
  void draw(SDL_Renderer *);
  enum { Width = 10, Height = 20 };
  bool isCollision(const Tetromino &t) const;
  void unite(const Tetromino &);
private:
  bool data[Width][Height];
  int contscore = 0;
};