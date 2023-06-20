#pragma once

#include <SDL2/SDL.h>
#include "well.hpp"
#include "tetromino.hpp"
#include <SDL2/SDL_ttf.h>
#include "label.h"
// #include "constants.hpp"

class Game {
public:
    Game();
    ~Game();
    bool tick();
    TTF_Font* font_;
    Label* label;
    
private:
    SDL_Window* window_;
    SDL_Renderer* renderer_;
    Well well_;
    Tetromino tetromino_;
    uint32_t moveTime_;
    int score_;

    void check(const Tetromino& t);

};
