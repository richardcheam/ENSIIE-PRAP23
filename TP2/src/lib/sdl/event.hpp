#ifndef EVENT_HPP
#define EVENT_HPP

#include "sdl_core.hpp"


namespace sdl {

    class event {
        public:
            virtual void callback (int keysym) const = 0 ;
            virtual ~event() {} ;
    } ;

    class class_q: public event {
            public :
                void callback(int keysym) const {
                    Core::exit_run() ;
                }
    } ;
}




#endif