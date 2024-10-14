#include <string>
#include "../lib/sdl/sdl_window.hpp"
#include "../lib/sdl/sdl_core.hpp"
#include "../lib/sdl/event.hpp"
#include </opt/homebrew/include/SDL2/SDL.h>

using namespace sdl ;

int main(int argc, char *argv[]){
    try {

        int size = 500 ;
        int x_position = 200 ;
        int y_position = 200 ;
        const std::string &fenetre_name = "Win" ;

        Core::init(fenetre_name) ;

        Window win(size,x_position,y_position,fenetre_name) ;
            
        win.color_window(0,0,255,255); // r,v,b,alpha

        win.render_clear();
        win.present() ;
        win.show() ;

        Core::run() ;

    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


    return 0 ;
}