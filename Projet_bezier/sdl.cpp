#include "sdl.hpp"

namespace sdl {

int SDL::init() {
    return SDL_Init(SDL_INIT_EVERYTHING);
}

void SDL::quit() {
    SDL_Quit();
}

void SDL::waiting() {
    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
            else if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE) {
                for (unsigned int i=0; i<wins.size(); i++) {
                    if (wins[i].get_window_id() == event.window.windowID) {
                        wins[i].destroy_window();
                        break;
                    }
                }
            }
        }
    }
}

void SDL::add_window(std::string title, Point2D pos, int w, int h) {
    wins.push_back(sdl::Window(title, pos, w, h));
}

Window & SDL::get_window(unsigned int i) {
    if (i >= wins.size()) {
        throw "invalid index";
    }
    return wins[i];
}

} // namespace SDL