#include "sdl_window.hpp"
#include "sdl_core.hpp"
#include "sdl_exception.hpp"
#include "sdl_forward.hpp"

using namespace sdl ;

Window::Window(int size, int x_position, int y_position, const std::string &fenetre_name) {
    window_ = SDL_CreateWindow(fenetre_name.c_str(), x_position , y_position, size, size, SDL_WINDOW_SHOWN);
    renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED);
    if (renderer_ == NULL) {
        throw error(SDL_GetError());
    }
    else if (window_ == NULL){
        throw error(SDL_GetError());
    }
}
    
void Window::show(){
    SDL_ShowWindow(window_);
}

void Window::hide() {
    SDL_HideWindow(window_);
}


void Window::move(int x_new_position, int y_new_position,const std::string &fenetre_name) {
    Window(size_,x_new_position, y_new_position,fenetre_name) ;
    present() ;
}
        
void Window::resize(int new_size,const std::string &fenetre_name) {
    Window(new_size, position_.x, position_.y ,fenetre_name) ;
    present() ;
}
        
void Window::present(){
    SDL_RenderPresent(renderer_);
}

void Window::color_window(int r, int g, int b, int a){
    SDL_SetRenderDrawColor(renderer_, r, g, b, a);
}

void Window::render_clear(){
    SDL_RenderClear(renderer_) ;
};