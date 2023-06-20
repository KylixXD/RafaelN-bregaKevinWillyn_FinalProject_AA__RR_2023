#ifndef LABEL_H
#define LABEL_H

#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string.h>
#include <stdio.h>

extern SDL_Color C_GREEN;

typedef struct label
{
    char *text;
    int x;
    int y;
    SDL_Rect* rect_text;
    SDL_Texture* texture_text;
} Label;

Label* createLabel(SDL_Renderer* renderer, TTF_Font* font ,char* text, int x, int y);
void setLabelText(SDL_Renderer* renderer, TTF_Font* font , Label* label, const char* text);
void renderLabel(SDL_Renderer* renderer,Label* label);


#endif