#include "window.h"
#include <SDL.h>

int initWindow(){
    printf("%d\n", SDL_Init(SDL_INIT_VIDEO));
    return 0;
}
