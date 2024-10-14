#ifndef SDL_EXCEPTION_HPP
#define SDL_EXCEPTION_HPP

#include </opt/homebrew/include/SDL2/SDL.h>
#include <string>
#include <stdexcept>


namespace sdl {
    class error : public std::runtime_error {
    public:
        error(const std::string& message) : std::runtime_error(message) {} // ctor qui prend un message d'erreur en paramètre
    };
}


#endif