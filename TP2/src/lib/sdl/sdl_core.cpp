#include "sdl_core.hpp"
#include "sdl_window.hpp"
#include "sdl_exception.hpp"
#include "event.hpp"

using namespace sdl ;

bool Core::running = true ;
std::list<std::shared_ptr<event> > Core::l ;

// std::list<std::shared_ptr<event>> Core::l ;

void Core::init(const std::string &fenetre_name){
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
        throw error(SDL_GetError());
    }
}
    
void Core::quit() {
    SDL_Quit() ;
}

void Core::run() {
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) { // si la fenêtre est fermée
                exit_run() ;
            }
            else if(event.type == SDL_KEYDOWN){ // si touche clavier
                if (event.key.keysym.scancode == SDL_SCANCODE_Q){ // si q
                    class_q q ;
                    q.callback(event.key.keysym.sym) ;
                } ;
            }
        }
    }
    quit() ;
} ;
    
void Core::exit_run() {
    running = false;
} ;

void Core::add_event(std::shared_ptr<event> event) {
    l.push_back(event) ;
}


