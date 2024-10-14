#include </opt/homebrew/include/SDL2/SDL.h>

int main(int argc, char **argv)
{
    // initialisation de SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
    // SDL n’est pas initialisé, on sort
    return -1;
    }
    SDL_Window *win =
    SDL_CreateWindow("triangle",
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    640, 480,
    SDL_WINDOW_OPENGL);
    // on crée l’objet qui affichera un triangle
    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, 0);
    // la couleur noire pour le fond de la fenêtre
    SDL_SetRenderDrawColor(ren, 0, 0, 0,
    SDL_ALPHA_OPAQUE);
    // on efface la fenêtre
    SDL_RenderClear(ren);
    // couleur des arêtes : blanc
    SDL_SetRenderDrawColor(ren, 255, 255, 255,
    SDL_ALPHA_OPAQUE);
    // le triangle
    SDL_RenderDrawLine(ren, 10, 470, 320, 10);
    SDL_RenderDrawLine(ren, 630, 470, 320, 10);
    SDL_RenderDrawLine(ren, 10, 470, 630, 470);
    //on affiche la scène
    SDL_RenderPresent(ren);
    // on attend 10 secondes

    int running = 1;
    while (running)
    {
        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            switch(e.type)
            {
                case SDL_KEYDOWN:
                running = 0;
                break;
            }
        }
    }
    // on libère les ressources
    SDL_Quit();
    return 0;
    (void)argc;
    (void)argv;
}