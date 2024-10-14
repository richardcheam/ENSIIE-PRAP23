#ifndef SDL_FORWARD_HPP
#define SDL_FORWARD_HPP

#include </opt/homebrew/include/SDL2/SDL.h>
#include "sdl_forward.hpp"

#include <iostream>
#include <vector>

struct Position{
    int x ;
    int y ;
} ;

struct Size {
    std::vector<int> size ;
} ;

namespace sdl {

    class Window {

        private :
            SDL_Renderer* renderer_ ;
            SDL_Window* window_ ;

            int size_ ;
            Position position_ ;

        public :
            Window(int size, int x_position, int y_position, const std::string &fenetre_name) ;

            void show() ;
            void hide() ;

            SDL_Renderer* getRenderer() const {
                return renderer_ ;
            };
            SDL_Window* getWindow() const {
                return window_ ;
            }
            int get_size() const {
                return size_ ;
            } ;
            Position get_position () const {
                return position_ ;
            } ;
            void move(int x_new_position, int y_new_position, const std::string &fenetre_name) ;
            void resize(int new_size, const std::string &fenetre_name) ;
            void present() ;
            void color_window(int r, int g, int b, int a) ;
            void render_clear();
    } ;
}



#endif