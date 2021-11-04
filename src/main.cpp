#include <SDL.h>
#include <bits/stdc++.h>
#include "board.hpp"
#include "pieces.hpp"

int main(int argc, char* argv[]) {
    SDL_Window *window = nullptr;
    SDL_Surface *windowSurface = nullptr;
    SDL_Surface *imageSurface = nullptr;
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "Video Initialization error: " << SDL_GetError() << std::endl;
    } else {
        window = SDL_CreateWindow("Chess", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, SDL_WINDOW_SHOWN);
        if (window == NULL) {
            std::cout << "Window creation error: " << SDL_GetError() << std::endl;
        } else {

            // Window Craeted
            windowSurface = SDL_GetWindowSurface(window);
            imageSurface = SDL_LoadBMP("res/BlackBishop.bmp");

            if (imageSurface == NULL) {
                std::cout << "Image loading error: " << SDL_GetError() << std::endl;
            } else {
                SDL_BlitSurface(imageSurface, NULL, windowSurface, NULL);
                SDL_UpdateWindowSurface(window);
                SDL_Delay(2000);
            }

            
        }
    }

    SDL_DestroyWindow(window);
    SDL_FreeSurface(imageSurface);
    SDL_Quit();

    return 0;
}