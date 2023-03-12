#include <SDL.h>
#include <iostream>

// Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Rectangle size
const int MAX_X = 400;
const int MAX_Y = 300;

// Square dimension constants
const int SQUARE_SIZE = 100;

int main(int argc, char* argv[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create window
    SDL_Window* window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Initialize square position
    int x = SCREEN_WIDTH/2 - SQUARE_SIZE / 2;
    int y = SCREEN_HEIGHT/2 - SQUARE_SIZE / 2;

    // Main loop flag
    bool quit = false;

    // Event handler
    SDL_Event event;

    // While application is running
    while (!quit) {
        // Handle events on queue
        while (SDL_PollEvent(&event) != 0) {
            // User requests quit
            if (event.type == SDL_QUIT) {
                quit = true;
            }
            // User presses a key
            else if (event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                    case SDLK_a:
                        if (x-5 >= 0)
                            x -= 5;
                        break;
                    case SDLK_d:
                        if (x + 5 < MAX_X)
                            x += 5;
                        break;
                    case SDLK_w:
                        if (y-5 >= 0)
                            y -= 5;
                        break;
                    case SDLK_s:
                        if (y+5 < MAX_Y)
                            y += 5;
                        break;
                }
            }
        }

        // Clear screen
        // Set render color to...
        SDL_SetRenderDrawColor(renderer, 25, 105, 35, 168);
        SDL_RenderClear(renderer);

        // Render square
        SDL_Rect square = {x, y, SQUARE_SIZE, SQUARE_SIZE};
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(renderer, &square);

        // Update screen
        SDL_RenderPresent(renderer);
    }

    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}