#ifndef SDL_CORE_HPP
#define SDL_CORE_HPP

#include </opt/homebrew/include/SDL2/SDL.h>
#include <string>
#include <list>
#include <memory>
#include "sdl_forward.hpp"

namespace sdl {
    class event ;
    class Core { 
        private:
            static std::list <std::shared_ptr<event> > l ;
        public :
            static bool running ;
            static void init(const std::string &fenetre_name) ;
            static void quit() ;
            static void run() ;
            static void exit_run() ;
            static void add_event(std::shared_ptr<event> event) ;
    } ;
}


#endif